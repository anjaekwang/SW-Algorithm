/*#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>
#include <limits.h>

using namespace std;

long long a[10000];
int k, n;

//len�� ���̷� n�� �����Ѱ�?
bool binary(long long len, int n) 
{
	long long cnt = 0;
	for (int i = 0; i < k; i++) 
	{
		cnt += a[i] / len;
	}
	if (cnt >= n) return true;
	else return false;
}

// ���̿� ���ؼ� �̺�Ž�����Ѵ�. s:�ּұ���, e�� �ִ����
long long solution(long long s, long long e, int n) // 1���� maxLen 
{
	long long ans = 0;
	while (s <= e)
	{
		long long mlen = (s + e) / 2;
		if (binary(mlen, n)) 
		{
			if (ans < mlen) ans = mlen;
			s = mlen+1;
		}
		else e = mlen - 1;
	}
	return ans;
}
int main()
{
	scanf("%d %d", &k, &n);
	for (int i = 0; i < k; i++)scanf("%lld", a + i);
	sort(a, a + k);
	long long maxLen = a[k - 1];
	printf("%lld", solution(1, maxLen, n));
	system("pause");
	return 0;
}*/

// �����÷ο� ����, �׿� ���õ� ���������� ���������� ��� ������

/*

if (s > e) // �̺�Ž���� ���ߴ� ����
{
	for (long long i = temp1; i <= temp2; i++)
	{
		if (!binary(i, n)) return i - 1;
	}
}
else
{
	long long mlen = (s + e) / 2; //���ݱ��� -> �����÷ο� �߻�
	if (binary(mlen, n))
	{
		temp1 = mlen;
		solution(mlen + 1, e, n);
	}
	else
	{
		temp2 = mlen;
		solution(s, mlen - 1, n);
	}
}
���� �ۼ������� �̺�Ž�� ���ߴ� ���������� ����
temp1 ����, temp2 �Ұ��� �̰� �߸���
���� maxLen���� ���� ������ ���.

�׸��� while -> ������ �����ϴ� ���������� ����
��� -> ������ �������ϴ� ù �ܰ�
*/