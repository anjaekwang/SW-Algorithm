/*#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>

using namespace std;

int N; //노드의 개수
vector<int> tree[100000 + 1];
int parent[100000 + 1] = { 0, }; //부모저장
int check[100000 + 1] = { 0, }; 

void DFS(int x) 
{
	check[x] = 1;
	for (int i=0; i<tree[x].size(); i++) 
	{
		int child = tree[x][i];
		if (!check[child]) 
		{
			parent[child] = x;
			DFS(child);
		}
	}
}

int main() 
{
	scanf("%d", &N);
	for (int i = 1; i <= N-1; i++) 
	{
		int a, b;
		scanf("%d%d", &a, &b);
		tree[a].push_back(b);
		tree[b].push_back(a);

	}

	DFS(1);

	for (int i = 2; i <= N; i++) 
		printf("%d\n", parent[i]);
	system("pause");
	return 0;
}*/

/*
문제에서 간선정보를 입력으로 주어지기 때문에
그래프 저장을 양방향으로 저장
*/
