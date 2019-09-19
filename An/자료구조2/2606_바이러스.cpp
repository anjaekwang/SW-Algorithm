/*#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int p[100 + 1] = { 0, };

int Find(int x) 
{
	if (p[x] == x) return x;
	else 
	{
		return p[x] = Find(p[x]);
	}
}

void Union(int x, int y) 
{
	x = Find(x);
	y = Find(y);
	if(x!=y)p[y] = x;
}

int main()
{
	int N, E;
	scanf("%d %d", &N, &E);
	for (int i = 1; i <= N; i++) p[i] = i;
	while (E--) 
	{
		int a, b;
		scanf("%d %d", &a, &b);
		Union(a, b);
	}
	int ans = 0;
	for (int i = 2; i <= N; i++) 
	{
		if (Find(i) == Find(1)) ans++;
	}
	printf("%d\n", ans);
	system("pause");
	return 0;
}*/

/*
이문제는 그래프로도 풀이가능 
but 집합의 연산에서 합집합만 있기때문에 매우 쉽고 빠르게 풀이 가능 

Union의 xy순서에 따라 rootNode가 달라지기땜에
우선 입력으로 집합을 만들고 
특정 Node의 집합들 알기위해선 for문 통해 find(i) == find(특정노드)
로 확인한다
*/