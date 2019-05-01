#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int ex2193() 
{
	int n;
	long long result, d[91][2] = {0,};
	result = 0;
	scanf("%d", &n);
	d[1][0] = 0;
	d[1][1] = 1;
	
	for (int i = 2; i <= n; i++) 
	{
		for (int j = 0; j < 2; j++) 
		{
			if (j == 0) 
			{
				d[i][0] += d[i - 1][0];
				d[i][1] += d[i - 1][0];
			}
			else d[i][0] += d[i - 1][1];
		}
	}
	for (int i = 0; i < 2; i++) result += d[n][i];
	printf("%lld\n", result);
	return 0;
}

/*
이친수(2진수중 특별한 경우)
1. 0으로 시작하지 않는다
2. 1이 두번연속으로 가지지 않는다.
0<=N<=90, 이친수 종류수를 구하라

특징:
1. 조건은 초기값으로 해결된다
2. 끝자리 수를 기록함으로써 조건문을 통해 해결된다.
d[n][j] -> n자리수, j끝이 뭘로 끝났냐.

d[n-1][j]에서 
0으로 끝났으면(d[n-1][0]) 0,1 두가지가 가능하고(d[n][0], d[n][1]\+= d[n-1][0])
1로 끝났으면 0만 가능하다.(d[n][0] += d[n-1][1])
*/