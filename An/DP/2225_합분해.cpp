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
�պ���
0���� N���� ������ k���� ���ؼ� N�� �Ǵ� ����Ǽ�
���� ���� �ٸ��� �ٸ�����
n�� k�� �Է����� ���´�.

�𸣰��� -> Ǯ�̺� 
d[k][n] = k�� �� n�̵Ǵ� ����Ǽ�
���������� ���� �������� ����� l�̿´��ϸ�
d[k-1][n-l] �κ��� l�� ���ϸ� �ǰ� l�� ������ 0���� n�̵ȴ�.

d�� �߼����ϸ� �Ǵµ� �𸣰ڴ� �Ф�
*/