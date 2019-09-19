/*#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <queue>

#define MAX 200000

int check[MAX] = { 0, };
int dist[MAX] = { 0, };

using namespace std;

int main()
{
	int dx[2] = { -1, 1 };
	queue<int> q;

	int N, K;
	scanf("%d %d", &N, &K);
	q.push(N);
	check[N] = 1;
	while (!q.empty()) 
	{
		int cur = q.front();
		for (int i = 0; i < 3; i++) 
		{
			int nx;
			if (i == 2) nx = cur * 2;
			else nx = cur + dx[i];

			if (nx <0 || nx > MAX / 2) continue;
			else 
			{
				if (!check[nx]) 
				{
					check[nx] = 1;
					dist[nx] = dist[cur] + 1;
					q.push(nx);
				}
			}
		}
		q.pop();
	}
	printf("%d", dist[K]);
	system("pause");
	return 0;
}*/
/*
강의봄 -> BFS로 완전탐색
상태에서 다음 상태로의 가능경우가 계속 파생되는문제에서
최소를 구하고 간선 가중치가 1 인경우
*/