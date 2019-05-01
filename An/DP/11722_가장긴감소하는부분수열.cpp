#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<algorithm>

using namespace std;

int ex11722()
{
	int a[1001] = {}, d[1001] = {}, n = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) scanf("%d", a + i);
	int temp = 0;
	d[1] = 1;

	for (int i = 2; i <= n; i++)
	{
		for (int j = 1; j < i; j++)
		{
			if (a[i] >= a[j]) continue;
			else temp = max(temp, d[j]);
		}
		d[i] = temp + 1;
		temp = 0;
	}

	for (int i = 1; i <= n; i++) temp = max(temp, d[i]);
	printf("%d", temp);
	system("pause");
	return 0;

}

/*
가장 긴 감소하는 부분 수열
같은 문제
d[i] = a[i]를 마지막으로 하는 감소하는 부분수열 길이.
*/