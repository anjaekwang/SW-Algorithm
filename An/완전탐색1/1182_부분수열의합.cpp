/*#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>

using namespace std;

int S[20] = { 0, };
int mask[20] = { 0, };
int n, a;

bool check() //mask�� ��� 1����?
{
	for (int i = 0; i < n; i++) 
	{
		if (!mask[i]) return false;
	}
	return true;
}
int main()
{
	scanf("%d%d", &n, &a);
	for (int i = 0; i < n; i++) scanf("%d", &S[i]);
	
	int ans = 0;
	while(!check())
	{
		mask[0] = 1;
		sort(mask, mask + n);
		do 
		{
			int temp = 0;
			for (int i = 0; i < n; i++) 
			{
				if (mask[i]) temp += S[i];
			}
			if (temp == a) ans++;
		} while (next_permutation(mask, mask + n));
	}
	printf("%d", ans);
	system("pause");
	return 0;
}*/
/*
�׳� ������ ��� ���� �ذ���.
����:
next_permutation�� ������ �������� 
���ϸ� false�� ���������� �迭�� ���� ���� ��â�� 
������ ����.
001 �� 100 ���� �Ǵ°� �ƴ϶� 001�� �ȴ�
*/