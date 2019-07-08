/*#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>
#include <memory.h>
#include <queue>
#include <algorithm>

using namespace std;
struct Edge 
{
	int to;
	int cost;
	Edge(int to, int cost) : to(to), cost(cost) {}
};
vector<Edge> Tree[100000 + 1];
int dis[100000 + 1];
int check[100000 + 1] = {0,};

void BFS(int x) 
{
	memset(dis, 0, sizeof(dis));
	memset(check, 0, sizeof(check));
	queue<int> q;
	
	check[x] = 1;
	q.push(x);

	while (!q.empty()) 
	{
		int cur = q.front();
		for (int i = 0; i < Tree[cur].size(); i++) 
		{
			int next = Tree[cur][i].to;
			if (!check[next]) 
			{
				check[next] = 1;
				q.push(next);
				dis[next] = dis[cur]  + Tree[cur][i].cost;
			}
		}
		q.pop();
	}
}

int main()
{
	int V;
	scanf("%d", &V);
	for (int i = 1; i <= V; i++) 
	{
		int Vertex;
		scanf("%d", &Vertex);
		while (1) 
		{
			int a, b=0;
			scanf("%d", &a);
			if (a == -1) break;
			else 
			{
				scanf("%d", &b);
			}
			Tree[Vertex].push_back(Edge(a,b));
			Tree[a].push_back(Edge(Vertex, b));
		}
	}
	BFS(1);
	int start = 1;
	for (int i = 2; i <= V; i++) 
	{
		if (dis[start] < dis[i]) start = i;
	}
	BFS(start);
	sort(dis + 1, dis + 1 + V, greater<int>());
	printf("%d\n", dis[1]);

	system("pause");
	return 0;
}*/
/*
정점번호는 1부터
입력 : 정점번호, 연결된 간선, 거리
간선정보는 한꺼번에 처리(구조체를 만들어서)
*/