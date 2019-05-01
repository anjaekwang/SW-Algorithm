#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;

int ex10844()
{
	int d[101][10] = { {0,}, };
	int n;
	long long result = 0;

	for (int i = 1; i < 10; i++) d[1][i] = 1;

	scanf("%d", &n);

	for (int i = 2; i <= n; i++) 
	{
		for (int j = 0; j < 10; j++) 
		{
			if (j == 0)
				d[i][j] = d[i - 1][j+1];
			else if (j == 9)
				d[i][j] = d[i - 1][j-1];
			else
				d[i][j] = d[i - 1][j - 1] + d[i - 1][j + 1];
			d[i][j] %= 1000000000;
		}
		
	}
	for (int i = 0; i < 10; i++) result += d[n][i] % 1000000000;
	printf("%d\n", result % 1000000000);
	return 0;
}

/*
쉬운계단수
인접수들이 1차이.
길이 N인 계단수가 있을때 몇개가 가능할지?

문제해결 :
DP인 이유
N개 길이 계단수가 있을때 
N-1 길이에서 끝날때 수의 1차이나면 됨  그러므로 dp

직관에 의해서 점화식을 세우지 말자.
변수 근거로 근거를 만들자.


*/
