/*#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

int GCD(int a, int b)
{
	if (b == 0) return a;
	else
		return GCD(b, a%b);
}

int main()
{
	int a[100] = { 0, }, t, n;
	scanf("%d", &t);
	while (t--) 
	{
		long long result = 0;
		scanf("%d", &n);
		for (int i = 0; i < n; i++) scanf("%d", a + i);
		for (int i = 0; i < n-1; i++) 
		{
			for (int j = i + 1; j < n; j++) 
			{
				result += GCD(a[i], a[j]);
			}
		}
		printf("%lld\n", result);
	}
	system("pause");
	return 0;
}*/

/*
GCD�� ����
nC2�� �ִ� ������� g�� ������ Ǯ������
Ʈ�������� 2������ 3������.. �����������
Ʈ���� �ȸ���� Ǫ�� ����� �ȶ�����
or
�־��� a�� ������ ���� �������� ����� g�� ���?

�� : 2��
������ 3�� 4��..��������
*/