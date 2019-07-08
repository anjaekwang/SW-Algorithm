/*#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <queue>
#include <utility>

using namespace std;


//상하좌우 y-1x y+1x x-1y x+1y
int dx[4] = { 0,0,-1,1 };
int dy[4] = { -1,1,0,0 };
int check[100][100] = { {0,0} };
int map[100][100] = { {0,0} };
int N, M;
int level = 1; 


//차수를 어떻게 세는걸까?
void BFS(int y, int x) 
{
	queue<pair<int, int>> q;
	check[y][x] = 1;
	q.push(make_pair(y,x));

	while (!q.empty()) 
	{
		int qSize = q.size();
		for(int j=0; j< qSize; j++)//해당 단계의 모든 노드들
		{
			pair<int, int> temp = q.front(); // 지금 level에서의 cur 노드
			if (temp.first == N - 1 && temp.second == M - 1) return;

			for (int i = 0; i < 4; i++) //cur노드의 인접노드 다 쌓음
			{
				int ny = temp.first + dy[i];
				int nx = temp.second + dx[i];

				if (nx >= 0 && nx < M && ny >= 0 && ny < N)
				{
					if (!check[ny][nx] && map[ny][nx])
					{
						check[ny][nx] = 1;
						q.push(make_pair(ny, nx));
					}
				}
			}
			q.pop(); //쌓은뒤 pop됨
		}
		level++;
	}

}

int main() 
{
	scanf("%d%d", &N, &M); //N-1 M-1이 목적
	for (int y = 0; y < N; y++) 
	{
		char* temp = (char*)calloc(M + 1, sizeof(char));
		scanf("%s", temp);
		for (int x = 0; x < M; x++) 
		{
			map[y][x] = (int)(temp[x] - '0');
		}
		free(temp);
	}

	BFS(0, 0);
	printf("%d\n", level);
	system("pause");
}*/

//BFS 최단거리  -> 차수
/*
1. k단계에서 방문가능한 노드를 queue에 쌓고 pop된다
2. 그러므로 n개 자식이 있으면 queue에 n개가 쌓이게 된다.
3. 다음 쌓인 순서대로 모두 1.과 같은 행위를 해야 하므로
4. q의 size 만큼 1의 행위를 해야지 level을 상승시킨다.
-> BFS의 최단거리 보장. 쉽게 그냥 작성하고 크게 감싸면됨
*/

// for문내에 함수를 쓰지말자!, len이나 q사이즈나
// 조건 확인할때마다 함수가 호출되어 의도치 않게 조건 값이 변경됨