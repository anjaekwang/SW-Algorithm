#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<limits.h>

using namespace std;

int a[1000000] = { 0, };

int main() 
{
	int n, b, c;

	scanf("%d", &n);
	for (int i = 0; i < n; i++) scanf("%d", a + i);
	scanf("%d%d", &b, &c);
	long long cnt = 0;

	for (int i = 0; i < n; i++)
	{
		a[i] -= b;
		cnt++;

		if (a[i] <= 0) continue;
		else 
		{
			cnt += (a[i] / c);
			if (a[i] % c != 0) cnt += 1;
		}
	}

	printf("%lld", cnt);
	system("pause");
	return 0;
}

/*
-�����忡 ������ �Ѱ���1��, �ΰ��� n��
- �Ѱ��� �ѹ��� B�� 
- �ΰ��� �ѹ��� C��
- �����忣 ����� �Ѹ��� ������ �ִ�
- �����忣  �Ѱ��� �Ѹ��� ������ �ִ�?
���� : �ʿ��� ������ �ּڰ�


<���� ���̽� ã��>
���� - ������ �� �±�
1. ������ Ȯ���ϰ� ���ִ°�?
2. ��ģ���� ���°�?
3. �ڷ����� �����÷ο� ���� �ʴ°�?
*/