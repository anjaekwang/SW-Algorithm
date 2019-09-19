/*#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>

using namespace std;

int N, M, a[1000000] = {0,};

bool check(int H) 
{
	long long cnt = 0;
	for (int i = 0; i < N; i++)
	{
		if (a[i] >= H) cnt += (a[i] - H);
	}
	return cnt >= M;
}

int solution(int s, int e) 
{
	int ans = 0;
	while (s <= e) 
	{
		int m = (s + e) / 2;
		if (check(m)) 
		{
			ans = m;
			s = m + 1;
		}
		else e = m - 1;
	}
	return ans;
}

int main()
{

	scanf("%d %d", &N, &M);
	int maxLen = 0;
	for (int i = 0; i < N; i++) 
	{ 
		scanf("%d", a + i);
		if (maxLen < a[i]) maxLen = a[i];
	}

	printf("%d", solution(0, maxLen));
	system("pause");
	return 0;
}*/

// 변수를 선언할때 입력의 극단의 상황에서 생각해서 형식 선언하는 습관
