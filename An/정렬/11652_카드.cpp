/*#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
#include <algorithm>
#include <limits.h>



using namespace std;

void solve(long long* a, int N) 
{
	int len = 1;
	long long temp=*a;
	int exlen = 0;
	for (int i = 1; i <= N; i++)
	{
		if (*(a + i - 1) == *(a + i))
			len++;
		else
		{
			if (exlen < len)
			{
				temp = *(a + i - 1);
				exlen = len;
			}
			else if(exlen == len) temp = min(temp, *(a + i - 1));
			len = 1;
		}
	}

	printf("%lld\n", temp);
}

int main()
{
	int N;
	scanf("%d", &N);
	long long* a = (long long*)calloc(N, sizeof(long long));

	// a�� ī�尡 �������
	for (int i = 0; i < N; i++) 
		scanf("%lld", a + i);
	sort(a, a + N);// ������������ ����

	solve(a, N);

	system("pause");
	return 0;
}*/
// �Ǽ� ������