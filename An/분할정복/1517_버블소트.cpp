/*#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <math.h>
#include <algorithm>

using namespace std;

long long cnt = 0;
int a[500000] = { 0, };
int b[500000] = { 0, };
int k = 0;

void bmset(int s, int e) 
{
	for (int i = 0; i <= s - e; i++) b[i] = 0;
}
void merge(int s, int e) 
{
	int s1 = s,  end= e;
	int m = (s1 + end) / 2;
	int s2 = m + 1;
	int k = 0;
	while (s1 <= m && s2 <= end)
	{
		if (a[s1] > a[s2])
		{
			cnt += (m - s1 + 1);
			b[k++] = a[s2++];
		}
		else  b[k++] = a[s1++];
	}
	for (int i = s1; i <= m; i++) b[k++] = a[i]; 
	for (int i = s2; i <= end; i++)  b[k++] = a[i]; 

	for (int i = s; i <= end; i++) a[i] = b[i - s];
	bmset(s, e);
}

void mergeSort(int s, int e) 
{
	if (s == e) return;
	else 
	{
		int m = (s + e) / 2;
		mergeSort(s, m);
		mergeSort(m + 1, e);
		merge(s, e);
	}
	
}

int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) scanf("%d", a + i);
	mergeSort(0, n - 1);
	printf("%lld", cnt);
	system("pause");
	return 0;
}*/
/*
�ι��� : ���ʿ� �ִ� ���� ��ū�� ���� ����
���ҵ� �迭 �����ʿ� ���� �� ������ ������ �迭 ����ŭ cnt�� �����ش�
Ǫ�¹�� ������ �¾����� 
����� temp�迭(���հ���) �Ⱦ��� �׳� �ű⼭ sort�ϴµ� 
��� �߸��� �Ǽ��� Ʋ��
-> ������� �ٽ�ǰ
*/