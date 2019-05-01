#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

int ex11057() 
{
	int n, result, d[1001][10] = {0,};
	result = 0;
	scanf("%d", &n);
	for (int i = 0; i < 10; i++) d[1][i] = 1;
	for (int i = 2; i <= n; i++) 
	{
		for (int j = 0; j < 10; j++) 
		{
			for (int k = j; k < 10; k++) d[i][k] += d[i - 1][j] % 10007;
		}
	}
	for (int i = 0; i < 10; i++) result += d[n][i]%10007;
	printf("%d\n", result % 10007);
	system("pause");
	return 0;
}

/*
��������
���������ΰ����� ���� �ö󰡾���. ������ ������ ����
N���� �������� ����


Ư¡ : ó������ 0���� �����Ҽ� ���� -> �ʱⰪ���� �ذ�.
       ������ ���� �������� �˾ƾ� �� �ʿ䰡 ����.
	   ���� N-1 �� ������ ���� �Ǿ����� N�� ���信 ����
	   -> d[N][j] : N���� ������, j(0~9) ���� ��� ������?
	   j�� ������ ���(d[n-1][j]) j~9���� n�� �̿�ɼ��ִ�
		(d[n][j]~d[n][9])	  
*/