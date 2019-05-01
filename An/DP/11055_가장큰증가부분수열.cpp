#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<algorithm>

using namespace std;

void ex11055()
{
	int n;
	int a[1001] = {}, d[1001] = {};
	int temp = 0;

	scanf("%d", &n);
	for (int i = 1; i <= n; i++) scanf("%d", a + i);
	d[1] = a[1];

	for (int i = 2; i <= n; i++)
	{
		for (int j = 1; j < i; j++)
		{
			if (a[i] <= a[j]) continue;
			else temp = max(d[j], temp);
		}
		d[i] = temp + a[i];
		temp = 0;

	}

	for (int i = 1; i <= n; i++) temp = max(temp, d[i]);
	printf("%d", temp);
}

/*
���� ū �߰� �κ� ����
A�� �־� ������, �� ������ ���� �κ� ������
���� ���� ū����?

�κ� ������ �������� ���ĸ� �ذ��ϱ�����
d[n]�� ���������� ����
d[n] = a[i]�� ���������� �ϴ� ���� �κ������� ��.
d[n] = d[j] + a[n](��) (j<i, a[j] < a[n])
*/