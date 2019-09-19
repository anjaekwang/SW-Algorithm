/*#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <math.h>
#include <algorithm>
#include <limits.h>

using namespace std;

int N, M, broken[10] = {0,};

int possible(int C) 
{
	int len = 0;

	if (C == 0) 
	{
		if (broken[C])return 0;
		else return 1;
	}
	else 
	{
		while (C > 0)
		{
			if (broken[C % 10]) return 0;
			C /= 10;
			len++;
		}
		return len;
	}
}

int main()
{
	scanf("%d %d", &N, &M);
	for (int i = 0; i < M; i++) 
	{
		int temp;
		scanf("%d", &temp);
		broken[temp] = 1;
	}

	int ans = INT_MAX;
	for (int c = 0; c <= 500000*2; c++) 
	{
		int len = possible(c);
		if (len)  ans = min(ans, len + abs(N - c));
	}

	ans = min(ans, abs(N - 100));
	printf("%d", ans);

	system("pause");
	return 0;
}*/
