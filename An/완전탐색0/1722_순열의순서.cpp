/*#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>

using namespace std;

int check[21] = { 0, };

long long factorial(int k) 
{
	long long ans=1;
	for (int i = 1; i <= k; i++) ans *= i;
	return ans;
}
int main()
{
	int N, problem, a[20] = {0,};

	scanf("%d", &N);
	scanf("%d", &problem);

	if (problem == 1) 
	{
		long long k;
		scanf("%lld", &k);
		for (int i = 0; i < N; i++) 
		{
			long long temp = 0;
			for (int j = 1; j <= N; j++) 
			{
				if (!check[j])
				{
					temp += factorial(N - i - 1);
					if (k - temp <= 0)
					{
						temp -= factorial(N - i - 1);
						k -= temp;
						check[j] = 1;
						a[i] = j;
						break;
					}
				}
			}
		}

		for (int i = 0; i < N; i++)printf("%d ", a[i]);
	}
	else 
	{
		long long ans = 0;
		int temp;
		for (int i = 0; i < N; i++) 
		{
			scanf("%d", &temp);
			for (int j = 1; j < temp; j++)
			{
				if (!check[j])
				{
					ans += factorial(N - i - 1);
				}
			}
			check[temp] = 1;
		}
		printf("%lld", ans+1);
	}


	system("pause");
	return 0;
}*/
/*
1차시도 시간초과
-> 팩토리아 탐색하면 시간 무조건초과
-> 한자리 한자리 앞부터 채워나가서 경우를 더하는 방식으로
*/

