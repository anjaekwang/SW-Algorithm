/*#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <queue>
#include <utility>
#include <vector>


using namespace std;

int M, N; //M:y N :x
int map[1000][1000] = { {0,0}, };
int check[1000][1000] = { {0,0}, };
int day = 0;
int dy[4] = { -1,1,0,0 };
int dx[4] = { 0,0,-1,1 };

// 중간에 끊지말고 방문할수 있는 모든걸 방문 시키고
// 최종 단계가 몇인지 알아야함
void BFS(vector<pair<int, int>> a) 
{
	queue<pair<int, int>> q;
	for (int i = 0; i < a.size(); i++) 
	{
		pair<int, int> temp = a[i];
		int y = temp.first;
		int x = temp.second;
		check[y][x] = 1;
		q.push(make_pair(y, x));

	}

	while (!q.empty()) 
	{
		int qSize = q.size();
		for (int j = 0; j < qSize; j++) 
		{
			pair<int, int> curNode = q.front();
			for (int i = 0; i < 4; i++)
			{
				int ny = curNode.first + dy[i]; //cur에서 갈수있는 노드들
				int nx = curNode.second + dx[i];

				if (ny >= 0 && nx >= 0 && nx < N&& ny < M) 
				{
					if (!check[ny][nx] && !map[ny][nx])
					{
						check[ny][nx] = 1;		// map이이렇게 되면 -1인곳과 1인곳 방문 안함
						map[ny][nx] = 1;
						q.push(make_pair(ny, nx));
					}
				}
			}
			q.pop(); //이웃다 넣은후 pop시킴.
		}
		if(!q.empty()) day++; 
		// 특정 점에서 끝나는게 아니기에
		// 이조건 추가 안하면 다끝나고도 마지막에 +됨

		//printf("\n");
		//for (int j = 0; j < M; j++) 
		//{
		//	for (int i = 0; i < N; i++) 
		//	{
		//		printf("%d ", map[j][i]);
		//	}
		//	printf("\n");
		//}
		//system("pause");
	}
 }



int main()
{
	scanf("%d%d", &N, &M);
	for (int y = 0; y < M; y++) 
	{
		for (int x = 0; x < N; x++)
		{
			int temp;
			scanf("%d", &temp);
			map[y][x] = temp;
		}
	}
	
	vector<pair<int, int>> a;
	//1이 있는곳(토마토가 있는곳)에서 BFS시작
	for (int y = 0; y < M; y++)
	{
		for (int x = 0; x < N; x++)
		{
			if (map[y][x] == 1 && !check[y][x]) a.push_back(make_pair(y, x));
		}
	}
	BFS(a);

	int flag = 0;
	for (int y = 0; y < M; y++)
	{
		for (int x = 0; x < N; x++)
		{
			if (map[y][x] == 0) flag = 1;
		}
	}

	if (flag) printf("-1\n");
	else printf("%d\n", day);
	system("pause");

}*/

//우선 하나씩만 해보자

/*
find 토마토 다익게되는 최소 일수
0 노익토 1 익토 -1 빈
익토를 중심으로 하루 지날때 마다 바뀐다
즉 BFS 단계를 구하면된다. 

1. 동시에 모든 익토가 시작되어야함 ->How to?
2. 0이 남아있을시 -1

문제핵심 : 노드를 동시에 BFS해서 끝내는법.
!! 중요.
동시에 진행해야하는 노드들을 초기에 큐에 차례대로 넣어주면 된다.

*/