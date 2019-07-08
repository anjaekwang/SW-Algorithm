/*#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>
#include <memory.h> //memset


using namespace std;

int check[20001] = { 0, };
vector<int> G[20001];

void DFS(int x, int color)  //색은 1과 2로
{
	check[x] = color;
	for (int i = 0; i < G[x].size(); i++)
	{
		int temp = G[x][i];
		if (!check[temp])
			DFS(temp, 3 - color);
	}
}

bool IsBipartite(int* check, int V)
{
	for (int i = 1; i <= V; i++)
	{
		for (int j = 0; j < G[i].size(); j++)
		{
			int curColor = check[G[i][j]];
			if (check[i] == curColor) return false;
		}
	}
	return true;
}

int main()
{
	int t, V, E;
	int result = 0; // 0이면 아님 1 이면 맞음

	scanf("%d", &t);
	while (t--)
	{
		int flag = 0;
		scanf("%d %d", &V, &E);

		//그래프 생성
		for (int i = 0; i < E; i++)
		{
			int a, b;
			scanf("%d %d", &a, &b);
			G[a].push_back(b);
			G[b].push_back(a);
		}

		// 색칠
		for (int i = 1; i <= V; i++)
		{
			if(check[i] == 0)
				DFS(i, 1);
		}

		if (IsBipartite(check, V))
			printf("YES\n");
		else printf("NO\n");

		for (int i = 1; i <= V; i++)
		{
			memset(check, 0, sizeof(check));
			G[i].clear();
		}

	}
	return 0;
}
*/