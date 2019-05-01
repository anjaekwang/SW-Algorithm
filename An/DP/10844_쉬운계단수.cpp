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
�����ܼ�
���������� 1����.
���� N�� ��ܼ��� ������ ��� ��������?

�����ذ� :
DP�� ����
N�� ���� ��ܼ��� ������ 
N-1 ���̿��� ������ ���� 1���̳��� ��  �׷��Ƿ� dp

������ ���ؼ� ��ȭ���� ������ ����.
���� �ٰŷ� �ٰŸ� ������.


*/
