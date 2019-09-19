/*#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>
#include <limits.h>

using namespace std;

int N, C, a[1000000] = { 0, };

int check(int minD) //minD -> 집간 넘어야하는 distance
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

int solution(int s, int e) // 인접거리 최소 최대
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
풀이봄.
인접 최소 길이가 d일때 공유기 개수가 최소한 c가
만들어 질수있냐 에 집착함.
이렇게되면 주어진 좌표에서 두 노드간 거리가 딱
d가되는 경우를 연산해야함 (N제곱)

그러지말고 d를 고정시키고 다만 정의는 (*최소 d만 넘기면* 설치)
이럴 경우 d가 커질수록 만들수 있는 c 가 점차줄어듬
이를 이용하여 이분탐색
단, 여기서 d 자체가 답이 아니고 계산을 해줘야한다 

*/