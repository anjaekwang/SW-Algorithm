#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

using namespace std;

int main()
{
	int n, k;
	long long d[201][201] = { {0,} };
	scanf("%d", &n);
	scanf("%d", &k);

	d[0][0] = 1LL;
	for (int i = 1; i <= k; i++) 
	{
		for (int j = 0; j <= n; j++) 
		{
			for (int l = 0; l <= j; l++) 
			{
				d[i][j] += d[i - 1][j - l];
				d[i][j] %= 1000000000;
			}
		}
	}
	printf("%lld", d[k][n]);
	system("pause");
	
	return 0;
}

/*
합분해
0부터 N까지 정수중 k개를 더해서 N이 되는 경우의수
덧셈 순서 다른건 다른경우로
n과 k가 입력으로 들어온다.

모르겠음 -> 풀이봄 
d[k][n] = k개 로 n이되는 경우의수
마지막수가 뭐가 오는지를 보면됨 l이온다하면
d[k-1][n-l] 로부터 l을 더하면 되고 l의 범위는 0부터 n이된다.

d를 잘설정하면 되는데 모르겠다 ㅠㅠ
*/