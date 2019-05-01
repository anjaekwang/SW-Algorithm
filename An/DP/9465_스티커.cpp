#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int t, n, temp1, temp2;
	
	scanf("%d", &t);
	while (t--) 
	{
		int  d[100001] = { 0, }, a[100001] = {0,};
		scanf("%d", &n);
		for (int i = 1; i <= 2 * n; i++) scanf("%d", a + i);
		d[1] = max(a[1], a[2]);

		for (int i = 2; i <= n; i++)
		{
			temp1 = d[i - 2] + a[i - 1 + n] + a[i];
			temp2 = d[i - 2] + a[i - 1] + a[i + n];
			d[i] = max(temp1, temp2);
		}
		printf("%d\n", d[n]);

	}
	return 0;
}

/*
스티커 (a못풀었다.)
2*n 개의 스티커가 주어진다
조건
1. 스티커 하나 사용하려면 그 스티커 상하좌우 사용 못함
2. 스티커에 점수를 매김
3. 점수는 0~100, 1<=n<=100,000
스티커 점수의 최대값은?

그냥 풀기에는 많은 변수들이 필요.(인접하다는것을 어떻게 표현,
첫 스타트를 모든 스티커에대해서 구하는데 그다음부터는 
가격이 높은 순서대로 뜯는다 하면 이게 과연 모든 경우의 수가 나올것인가?)
-> 불확실.

d[n][j]을 n길이에서 최대값이라 정하고, j는 마지막 뭐 뜯었냐
n-1에서 무엇을 선택했냐에 따라 마지막 col의 값을 더한다.
(d[n-1][j] + 마지막 뜯을수 있는거.)
또한 n-1의 마지막이 안뜯기고 마지막의 최대를 뜯는다면?
(d[n-2] + 마지막 젤큰거)
그거의 max를 통해 문제를 해결한다.
(d[n]에서 ㅗㅜ형태로 마지막은 항상 뜯기게 되어있다)

*/