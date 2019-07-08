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
�ٸ��� �밢������ �ȳ���, �ٸ� ª���� �ϳ���

���� : �丶��� �ٸ��� ��ü�� �ƴ϶�
�´����� ������
��� �׵θ��� ǥ���ұ�? clustring -> ���� ���� ó��

ù��°�õ� : �丶�� ������ ���� ���ÿ� �����Ϸ� ������
���ʿ� �׷� �ʿ䵵 ������ ������ �߻����� (�ΰ����� ��찡 �߻��ϰԵȴ�)

�׷��� ���� �� �������� �Ѱ����� �ٸ��� �Ǽ��ؼ� 
��� ������ level�� �ּҰ��� �̿��ߴ�.
-> �ٸ������ ��� Ǯ������ Ȯ���ϱ�!

*/
