/*#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<vector>
#include<utility>
#include<queue>
#include<memory.h>
#include<algorithm>
#include<limits.h>



using namespace std;

int map[100][100] = { {0,0}, };
int fixedmap[100][100] = { {0,0}, };
int check[100][100] = { {0,0}, };

int dy[8] = { -1,1,0,0,-1,1,-1,1 };
int dx[8] = { 0,0,-1,1,1,1,-1,-1 };
int N;

void clusteringDFS(int y, int x, int val)
{
	check[y][x] = 1;
	fixedmap[y][x] = val;
	for (int i = 0; i < 4; i++)
	{
		int ny = y + dy[i];
		int nx = x + dx[i];
		if (nx >= 0 && ny >= 0 && nx < N && ny < N)
		{
			if (!check[ny][nx] && fixedmap[ny][nx])
			{
				clusteringDFS(ny, nx, val);
			}
		}
	}

}

int solutionBFS(vector<pair<int,int>> a)
{
	queue<pair<int, int>> q;
	int level = 0;


	for (int i = 0; i < a.size(); i++) 
	{
		check[a[i].first][a[i].second] = 1;
		q.push(a[i]);
	}

	while (!q.empty())
	{
		int qSize = q.size();
		for (int j = 0; j < qSize; j++)
		{
			pair<int, int> curNode = q.front();
			for (int i = 0; i < 4; i++)
			{
				int ny = curNode.first + dy[i];
				int nx = curNode.second + dx[i];
				if (ny >= 0 && nx >= 0 && nx < N && ny < N)
				{
					if (!map[ny][nx] && !check[ny][nx])
					{
						map[ny][nx] = map[curNode.first][curNode.second];
						check[ny][nx] = 1;
						q.push(make_pair(ny, nx));
					}
				}
			}
			q.pop();
		}

		if (!q.empty())level++;

		for (int y = 0; y < N; y++)
		{
			for (int x = 0; x < N; x++)
			{
				for (int i = 0; i <= 3; i++)
				{
					int ny = y + dy[i];
					int nx = x + dx[i];
					if (ny >= 0 && nx >= 0 && nx < N && ny < N)
						if (map[y][x] && map[ny][nx] && map[ny][nx] != map[y][x])
							return level;
				}
			}
		}

		for (int y = 0; y < N; y++)
		{
			for (int x = 0; x < N; x++)
			{
				for (int i = 4; i < 8; i++)
				{
					int ny = y + dy[i];
					int nx = x + dx[i];
					if (ny >= 0 && nx >= 0 && nx < N && ny < N)
						if (map[y][x] && map[ny][nx] && map[ny][nx] != map[y][x])
							return level + 1;
				}
			}
		}
	}
	return 0;
}


int main()
{
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			int temp = 0;
			scanf("%d", &temp);
			fixedmap[i][j] = temp;
		}
	}


	int color = 1;
	for (int y = 0; y < N; y++)
	{
		for (int x = 0; x < N; x++)
		{
			if (!check[y][x] && fixedmap[y][x])
			{
				clusteringDFS(y, x, color);
				color++;
			}
		}
	}
	
	memset(check, 0, sizeof(check));

	int level = INT_MAX;
	vector<pair<int, int>> a;
	for (int i = 1; i <= color-1; i++)
	{
		for (int y = 0; y < N; y++) 
		{
			for (int x = 0; x < N; x++) 
			{
				map[y][x] = fixedmap[y][x];
				if (map[y][x] == i)
				{
					a.push_back(make_pair(y, x));
					check[y][x] = 1;
				}
			}
		}
		level = min(level, solutionBFS(a));
		
		memset(check, 0, sizeof(check));
		memset(map, 0, sizeof(map));
		a.clear();
	}
	printf("%d\n", level);
	system("pause");
	return 0;
}*/


/*
다리는 대각선으로 안놓임, 다리 짧은거 하나만

문제 : 토마토와 다르게 전체가 아니라
맞닿으면 끝낸다
어떻게 테두리를 표현할까? clustring -> 단지 문제 처럼

첫번째시도 : 토마토 문제와 같이 동시에 진행하려 했으나
애초에 그럴 필요도 없었고 문제가 발생했음 (두가지의 경우가 발생하게된다)

그러지 말고 한 단지에서 한걸음씩 다리를 건설해서 
모든 단지의 level중 최소값을 이용했다.
-> 다른사람들 어떻게 풀었는지 확인하기!

*/
