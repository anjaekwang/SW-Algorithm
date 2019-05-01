#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>
using namespace std;

int ex9465() 
{
	int d[10001] = { 0, }; //n최대 먹양
	int n, a[10001] = {0,}; //포도주양
	int temp1,temp2,temp3;

	scanf("%d", &n);
	for (int i = 1; i <= n; i++) scanf("%d", a + i);

	d[0] = 0; d[1] = a[1]; d[2] = d[1] + a[2]; d[3] = max(max(a[1] + a[2], a[1] + a[3]), a[2] + a[3]);

	for (int i = 4; i <= n; i++) 
	{
		temp1 = d[i - 2] + a[i];
		temp2 = d[i - 4] + a[i - 1] + a[i - 2];
		temp3 = d[i - 3] + a[i - 1] + a[i];

		d[i] = max(max(temp1,temp2),temp3);
	}

	printf("%d\n", d[n]);
	return 0;
}
/*
좀 푸는데 오래걸림 -> 오답노트 작성

포도주 시식 
n개 일렬로 다양한 포도주 최대한 많은양 먹기
1. 마시고(한잔 원샷) 다시 내려놔야한다
2. 연속으로 놓인 3잔 못먹

d[n] : n잔 최대양
a[n] : n번째 포도주양

경우의수
1) n번째 잔 마시는 경우
1-1) n,n-1번째 잔 마시는 경우
    d[n] = d[n-3] + a[n] + a[n-1]
1-2) n번째마시고 n-1번쨰 못마시는경우
    d[n] = d[n-2] + a[n]
2) n번째 잔 못 마시는 경우
  d[n] = d[n-4] + a[n-1] + a[n-2]

처음 문제를 풀때 어떠한 방식으로 포도주를 마셨냐에 집중됨
이걸 해결하기 어려웠다. 새로운 한잔이 추가 됨에 따라 
최대가되는 방식이 달라지므로

그래서 d[n-A]가 어떻게 마셨는지 신경안쓰도록
경우를 나눠서 d[n-A]를 활용하여 문제를 해결!
*/