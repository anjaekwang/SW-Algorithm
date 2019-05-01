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
가장 큰 중가 부분 수열
A가 주어 졌을때, 그 수열의 증가 부분 수열중
합이 가장 큰것은?

부분 수열의 마지막이 어디냐를 해결하기위해
d[n]을 다음과같이 정의
d[n] = a[i]를 마지막으로 하는 증가 부분집합의 합.
d[n] = d[j] + a[n](값) (j<i, a[j] < a[n])
*/