/*#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
#include <algorithm>
#include <limits.h>



using namespace std;

void solve(long long* a, int N) 
{
	int len = 1;
	long long temp=*a;
	int exlen = 0;
	for (int i = 1; i <= N; i++)
	{
		if (*(a + i - 1) == *(a + i))
			len++;
		else
		{
			if (exlen < len)
			{
				temp = *(a + i - 1);
				exlen = len;
			}
			else if(exlen == len) temp = min(temp, *(a + i - 1));
			len = 1;
		}
	}

	printf("%lld\n", temp);
}

int main()
{
	int N;
	scanf("%d", &N);
	long long* a = (long long*)calloc(N, sizeof(long long));

	// a에 카드가 들어있음
	for (int i = 0; i < N; i++) 
		scanf("%lld", a + i);
	sort(a, a + N);// 오름차순으로 정리

	solve(a, N);

	system("pause");
	return 0;
}*/
// 실수 많았음