/*#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>

using namespace std;

int main() 
{
	int N, a[10000] = {0,};
	scanf("%d", &N);
	for (int i = 0; i < N; i++) scanf("%d", a + i);
	sort(a, a + N, greater<int>());

	int ans = 0;
	int breakIdx = N;
	int minusPoint = N;
	
	for (int i = 0; i < N; i++)
	{
		if (a[i] <= 0) 
		{
			minusPoint = i; 
			break;
		}
	}

	for (int i = 0; i < N; i+=2) 
	{
		if (a[i] >= 2 && a[i+1] >=2) 
		{
			ans += (a[i] * a[i + 1]);
		}
		else
		{
			breakIdx = i;
			break;
		}
	}

	for (int i = N - 1; i >= minusPoint; i-=2) 
	{
		if (i == minusPoint) ans += a[minusPoint];
		else ans += (a[i] * a[i - 1]);
	}
	for (int i = breakIdx; i < minusPoint; i++) ans += a[i];
	printf("%d", ans);

	system("pause");
	return 0;
}*/

/*
�ܼ��� sort���Ѽ� ���ʷ� ���ؼ� ���ϸ� �Ǿ���'

���� point (Minus���� ���� ����)�� �ξ ���� Ǯ���µ�
���ǿ����� vector�� ���ε��� ��Ƽ� Ǯ������ -> �����°� �ڵ�¥�µ� ���ѵ�
*/