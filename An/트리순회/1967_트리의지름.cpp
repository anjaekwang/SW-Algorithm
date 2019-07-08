/*#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>
#include <queue>
#include <memory.h>
#include <algorithm>

struct Edge
{
	int child;
	int weight;
	Edge(int child, int weight) : child(child), weight(weight) {}
};

using namespace std;
vector<Edge> Tree[10000 + 1];
int check[10000 + 1] = { 0, };
int dis[10000 + 1] = { 0, };

void BFS(int x) 
{
	memset(check, 0, sizeof(check));
	memset(dis, 0, sizeof(dis));

	queue<int> q;
	check[x] = 1;
	q.push(x);

	while (!q.empty()) 
	{
		int cur = q.front();
		for (int i = 0; i < Tree[cur].size(); i++)
		{
			int next = Tree[cur][i].child;
			if (!check[next]) 
			{
				check[next] = 1;
				q.push(next);
				dis[next] = dis[cur] + Tree[cur][i].weight;
			}
		}
		q.pop();
	}
}

int main()
{
	int n;
	scanf("%d", &n);

	//트리정보
	for (int i = 0; i < n-1; i++) 
	{
		int Vertex, child, weight;
		scanf("%d%d%d", &Vertex, &child, &weight);
		Tree[Vertex].push_back(Edge(child, weight));
		Tree[child].push_back(Edge(Vertex, weight));

	}

	BFS(1);
	int start = 1;
	for (int i = 2; i <= n; i++) 
		if (dis[start] < dis[i]) start = i;

	BFS(start);
	sort(dis + 1, dis +1+ n, greater<int>());
	printf("%d\n", dis[1]);

	system("pause");
	return 0;
}*/
