//오답노트에 적기 틀림

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n, d[1001] = {}, a[1001] = {}, ud[1001] = {}, dd[1001] = {};
	int temp=0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) scanf("%d", a + i);

	for (int i = 1; i <= n; i++) 
	{
		//ud[i] = i를 끝으로하는 상승 부분 집합
		for (int j = 1; j <= i; j++) // i까지 ud 작성
		{
			for (int k = 1; k < j; k++) // i 이전 까지 ud 최댓값 
			{
				if (a[k] < a[j])
				{
					temp = max(temp, ud[k]);
				}	
			}
			ud[j] = temp + 1;
			temp = 0;
		}

		for (int j = n; j >= i; j--)  
		{
			for (int k = n; k > j; k--)
			{
				if (a[k] < a[j])
				{
					temp = max(temp, dd[k]);
				}
			}
			dd[j] = temp + 1;
			temp = 0;
		}
	
		d[i] = dd[i] + ud[i] -1;

		for(int j = 2; j <= n; j++) ud[j] = 0;
		for (int j = 1; j < n; j++) dd[j] = 0;
	}

	for (int i = 1; i <= n; i++) 
	{
		temp = max(temp, d[i]);
	}
	printf("%d", temp);
	system("pause");
}



/*
가장긴 바이토닉 부분수열 
늘어났다 줄어드는것, 증가,감소만도 가능
d[n] = a[n]을 끝으로 가지는 바이토닉 부분수열 길이
증가,감소 방향성 flag로

핵심: 
d[n]은 a[n]을 끝으로 하는 "바이토닉 부분수열"
그러므로 n+1에선 이전 d중 증가경우 감소 경우 판단하여 +1 해주면됨
보통 감소로 끝나며 증가로 끝나는경우는 

문제점
아니 이거 코드를 어떻게 작성할지? 만족하는것을 찾고
만족하는 것과 상승여부를 기록해야함.
기록된걸 보고 최대값을 찾아야함.
->  한번에 하려고 하니 복잡해지고 꼬임

답 : 증가하는 가장긴 부분수열 + 감소하는 가장긴 부분수열 -1
이거 생각 안해본게 아닌데 두개 이어 붙일때 어떻게하냐?
-> 그래서 d[n] 정의를 a[n]이 최대 이고 왼쪽은 상승, 왼쪽은 감소

for문이 3중으로 가니깐 헷갈려 죽겠다;;
3중으로 나올경우 함수로 만들어서 헷갈리지 않게 분리하자!
*/