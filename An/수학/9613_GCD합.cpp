/*#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

int GCD(int a, int b)
{
	if (b == 0) return a;
	else
		return GCD(b, a%b);
}

int main()
{
	int a[100] = { 0, }, t, n;
	scanf("%d", &t);
	while (t--) 
	{
		long long result = 0;
		scanf("%d", &n);
		for (int i = 0; i < n; i++) scanf("%d", a + i);
		for (int i = 0; i < n-1; i++) 
		{
			for (int j = i + 1; j < n; j++) 
			{
				result += GCD(a[i], a[j]);
			}
		}
		printf("%lld\n", result);
	}
	system("pause");
	return 0;
}*/

/*
GCD합 문제
nC2의 최대 공약수를 g에 저장해 풀려고함
트리구조로 2개조합 3개조합.. 만들어지지만
트리를 안만들고 푸는 방법이 안떠오름
or
주어진 a를 가능한 쌍의 집합으로 만들고 g를 계산?

쌍 : 2개
문제를 3개 4개..가능한줄
*/