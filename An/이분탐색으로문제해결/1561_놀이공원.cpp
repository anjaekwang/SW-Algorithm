/*#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int N, M, a[10000] = { 0, };
long long m;

long long lastP(long long x)
{
	long long temp = M;
	for (int i = 0; i < M; i++)
		temp += (x  / a[i]);
	return temp;
}
int ans(long long time)
{
	long long exP = lastP(time - 1);
	long long rest = N - exP;
	int cnt = 0;
	for (int i = 0; i < M; i++)
	{
		if ((time % a[i]) == 0)
		{
			cnt++;
			if (cnt == rest) return i + 1;
		}
	}
}
void solution(long long left, long long right)
{
	if (N <= M) printf("%d", N);
	else
	{
		while (left <= right)
		{
			m = (left + right) / 2;
			long long startP = lastP(m - 1) + 1;
			long long end = lastP(m);
			if (startP <= N && N <= end) break;
			else if (N > end) left = m + 1;
			else if (N < startP) right = m - 1;
		}
		printf("%d", ans(m));
	}
}

int main()
{
	scanf("%d %d", &N, &M);
	for (int i = 0; i < M; i++) scanf("%d", a + i);
	long long max = INT_MAX * (long long)30;
	solution(0, max);
	system("pause");
}*/

/*
solution�� arg�� ���̰��� ����ð����� �ξ
0,30 ���� �Ϸ� ������
0~30�� �� ���̱ⱸ�� ���� term�̰� �������� ���̵���
����ð� ��� x  ���� 20����� 1���� ���̱ⱸ 30�� �� �ΰ��� Ÿ����
�ѽð� 20�� * 30 �� �ɸ� ->�ٽ�«

����ð��� ���� ���ǿ����� �ִ� ���̷���
���⼭ �� ������ longlong �� int���� ����!! �������ϳ�
����÷ο� �����÷ο� ���� �ؼ� ����ȯ ������Ѵ�. 
long long a = INT_MAX * 30; (�⺻ int)���� ������ �շ� ���� �����߰�
������ �� ���� ���̴� ��� x�� �ƴ϶� ������ �����÷ο��� ������ �ؾ���
INT_MAX * (long long) 30
*/



