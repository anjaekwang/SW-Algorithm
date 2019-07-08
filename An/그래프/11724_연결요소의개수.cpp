/*#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int cnt = 0;
int check[1001] = { 0, };
queue<int> q;
vector<int> E[1001]; //간선집합


void BFS(int i) 
{
	check[i] = 1;
	q.push(i);

	while (!q.empty()) //q가 비워져있으며 cnt +=1
	{
		int cur = q.front(); //현재 노드
		for (int j = 0; j < E[cur].size(); j++) //현재노드가 갈수있는 모든 노드 방문
		{
			int temp = E[cur][j];
			if (check[temp] == 0)
			{
				check[temp] = 1;
				q.push(temp);
			}
		}
		q.pop();
	}
	cnt++;
}

int main()
{
	int N, M;


	scanf("%d %d", &N, &M);

	for (int i = 0; i < M; i++) //간선수 만큼 
	{
		int temp1, temp2;
		scanf("%d %d", &temp1, &temp2);
		E[temp1].push_back(temp2);
		E[temp2].push_back(temp1);
	}

	for (int i = 1; i <= N; i++) // 탐색
	{
		if (check[i] == 0) 
		{
			BFS(i);
		}
	}
	printf("%d\n", cnt);
	system("pause");
	return 0;
}*/
/*
연결요소의 개수, 즉 그래프가 몇개 만들어지냐?
E집합에 모두 저장하고
BFS사용 끝날때 마다 cnt ++
*/