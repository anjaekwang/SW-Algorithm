/*#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>
#include <limits.h>

using namespace std;

int N, C, a[1000000] = { 0, };

int check(int minD) //minD -> ���� �Ѿ���ϴ� distance
{
	int cnt = 1;
	int lastIdx = 0;
	int ans = INT_MAX;
	for (int i = 1; i < N; i++) 
	{
		int d = a[i] - a[lastIdx];
		if (d >= minD) 
		{
			cnt++;
			lastIdx = i;
			ans = min(ans, d);
		}
	}
	if (cnt >= C) return ans;
	else return 0;
}

int solution(int s, int e) // �����Ÿ� �ּ� �ִ�
{
	int ans = 0;
	while (s <= e) 
	{
		int m = (s + e) / 2;
		int temp = check(m);
		if (temp)
		{
			s = m + 1;
			ans = temp;
		}
		else e = m - 1;
	}
	return ans;
}

int main()
{
	scanf("%d%d", &N, &C);
	for (int i = 0; i < N; i++) scanf("%d", a + i);
	sort(a, a + N);
	int maxDis = a[N - 1] - a[0];
	
	printf("%d", solution(1, maxDis));

	system("pause");
	return 0;
}*/
/*
Ǯ�̺�.
���� �ּ� ���̰� d�϶� ������ ������ �ּ��� c��
����� �����ֳ� �� ������.
�̷��ԵǸ� �־��� ��ǥ���� �� ��尣 �Ÿ��� ��
d���Ǵ� ��츦 �����ؾ��� (N����)

�׷������� d�� ������Ű�� �ٸ� ���Ǵ� (*�ּ� d�� �ѱ��* ��ġ)
�̷� ��� d�� Ŀ������ ����� �ִ� c �� �����پ��
�̸� �̿��Ͽ� �̺�Ž��
��, ���⼭ d ��ü�� ���� �ƴϰ� ����� ������Ѵ� 

*/