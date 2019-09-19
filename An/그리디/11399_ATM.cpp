/*#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<algorithm>

using namespace std;

int main() 
{
	int N;
	int time[1000] = { 0, };
	int ans = 0;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) scanf("%d", time + i);
	sort(time, time + N);
	for (int i = 0; i < N; i++) 
	{
		ans += ((N-i) * time[i]);
	}
	printf("%d\n", ans);

	system("pause");
	return 0;
}*/

/*
그리디는 DP의 쉬운 버전인가..
DP vs 그리디
문제파악하면서 나눠 풀어지거나 최선인게 예외존재할떄?
DP
확실히 이방법이 최선이라는 증명이 나타날때?
*/

