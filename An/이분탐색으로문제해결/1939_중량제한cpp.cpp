/*#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>
#include <queue>
#include <memory.h>

using namespace std;

struct info 
{
	int next;
	int weight;
	info(int next, int weight) : next(next), weight(weight) {}
};

vector<info> G[10000+1];
int check[10000 + 1] = { 0, };
int N, M, s, e;
int ans = 0;

bool BFS(int a, int b, int weight) 
{
	check[a] = 1;
	queue<int> q;
	q.push(a);
	while (!q.empty()) 
	{
		int cur = q.front();
		int Gsize = G[cur].size();
		for (int i = 0; i < Gsize; i++) 
		{
			int next = G[cur][i].next;
			if (!check[next] && weight <= G[cur][i].weight) 
			{
				if (next == b) return true;
				q.push(next);
				check[next] = 1;
			}
		}
		q.pop();
	}
	return false;
}

void solution(int left, int right) // arg -> 중량범위

{
	while (left <= right) 
	{
		int m = (left + right) / 2;
		if(BFS(s,e,m))
		{
			ans = m;
			left = m + 1;
		}
		else right = m - 1;
		memset(check, 0, sizeof(check));
	}
}

int main()
{
	int maxWeight = 0;
	scanf("%d%d", &N, &M);
	for (int i = 0; i < M; i++) 
	{
		int a, b, c;
		scanf("%d%d%d", &a, &b, &c);
		G[a].push_back(info(b, c));
		G[b].push_back(info(a, c));
		if (c >= maxWeight) maxWeight = c;
	}
	scanf("%d %d", &s, &e);
	solution(1, maxWeight);
	printf("%d", ans);

	system("pause");
	return 0;
}*/

/*
한번에 맞았으나 DFS(재귀)로 푸는법 확실히 해두기
재귀 return 자유자재로 하는 방법
*/