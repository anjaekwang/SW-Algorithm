/*#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int check[26 * 26] = { 0, };
vector<int> G[26];

//집의 수를 반환
int BFS(int x)
{
	queue<int> q;
	check[x] = 1;
	q.push(x);
	int cnt = 1;

	while (!q.empty())
	{
		int temp = q.front();
		for (int i = 0; i < G[temp].size(); i++)
		{
			int neighbor = G[temp][i];
			if (check[neighbor] == 0)
			{
				check[neighbor] = 1;
				q.push(neighbor);
				cnt++;
			}
		}
		q.pop();
	}
	return cnt;
}
void Housefree(int** house, int N)
{
	for (int i = 0; i < N; i++)
		free(house[i]);
	free(house);
}

int main()
{
	int N;
	scanf("%d", &N);
	int** house = (int**)calloc(N, sizeof(int*));
	for (int i = 0; i < N; i++)
		house[i] = (int*)calloc(N, sizeof(int));


	// 집 정보 
	for (int i = 0; i < N; i++)
	{
		char* temp = (char*)calloc(N + 1, sizeof(char));
		scanf("%s", temp);

		for (int j = 0; j < N; j++)
			house[i][j] = (int)(temp[j] - '0');
		free(temp);
	}
	int VNum = 1;

	//Vertex 제공
	for (int y = 0; y < N; y++)
	{
		for (int x = 0; x < N; x++)
		{
			if (house[y][x] == 1)
				house[y][x] = VNum++;
		}
	}

	//상하좌우 :y-1 y+1 x-1 x+1
	for (int y = 0; y < N; y++)
	{
		for (int x = 0; x < N; x++)
		{
			if (y == N - 1 && x == N - 1) break;

			if (house[y][x] != 0)
			{
				if (x == N - 1) // 맨 오른쪽
				{
					if (y == 0)
					{
						if (house[y + 1][x] != 0) // 아래
							G[house[y][x]].push_back(house[y + 1][x]);
					}
					else if (y == N - 1)
					{
						if (house[y - 1][x] != 0) // 위
							G[house[y][x]].push_back(house[y - 1][x]);
					}
					else
					{
						if (house[y - 1][x] != 0) // 위
							G[house[y][x]].push_back(house[y - 1][x]);
						if (house[y + 1][x] != 0) // 아래
							G[house[y][x]].push_back(house[y + 1][x]);
					}

					if (house[y][x - 1] != 0) // 왼쪽
						G[house[y][x]].push_back(house[y][x - 1]);
				}
				else if (y == N - 1) // 맨 아래
				{
					if (x == 0) // 맨 왼쪽
					{
						if (house[y - 1][x] != 0) // 위
							G[house[y][x]].push_back(house[y - 1][x]);
					}
					else
					{
						if (house[y - 1][x] != 0) // 위
							G[house[y][x]].push_back(house[y - 1][x]);
						if (house[y][x - 1] != 0) // 왼쪽
							G[house[y][x]].push_back(house[y][x - 1]);
					}
					if (house[y][x + 1] != 0) // 오른쪽
						G[house[y][x]].push_back(house[y][x + 1]);
				}
				else if (y == 0) //맨 위
				{
					if (x == 0)
					{
						if (house[y + 1][x] != 0) // 아래
							G[house[y][x]].push_back(house[y + 1][x]);
					}
					else
					{
						if (house[y][x - 1] != 0) // 왼쪽
							G[house[y][x]].push_back(house[y][x - 1]);
						if (house[y + 1][x] != 0) // 아래
							G[house[y][x]].push_back(house[y + 1][x]);
					}
					if (house[y][x + 1] != 0) // 오른쪽
						G[house[y][x]].push_back(house[y][x + 1]);
				}
				else if (x == 0)//맨 왼쪽
				{
					if (house[y + 1][x] != 0) // 아래
						G[house[y][x]].push_back(house[y + 1][x]);
					if (house[y][x + 1] != 0) // 오른쪽
						G[house[y][x]].push_back(house[y][x + 1]);
					if (house[y - 1][x] != 0) // 위
						G[house[y][x]].push_back(house[y - 1][x]);
				}
				else
				{
					//상하좌우 :y-1 y+1 x-1 x+1

					if (house[y + 1][x] != 0) // 아래
						G[house[y][x]].push_back(house[y + 1][x]);
					if (house[y][x + 1] != 0) // 오른쪽
						G[house[y][x]].push_back(house[y][x + 1]);
					if (house[y - 1][x] != 0) // 위
						G[house[y][x]].push_back(house[y - 1][x]);
					if (house[y][x - 1] != 0) // 왼쪽
						G[house[y][x]].push_back(house[y][x - 1]);
				}
			}

		}
	}

	int cnt = 0;
	vector<int> result;
	for (int i = 1; i <= VNum - 1; i++)
	{
		if (check[i] == 0)
		{
			result.push_back(BFS(i));
			cnt++;
		}
	}
	printf("%d\n", cnt);

	sort(result.begin(), result.end());
	for (int i = 0; i < result.size(); i++)
		printf("%d\n", result[i]);
	system("pause");

	Housefree(house, N);
	return 0;
}*/


/*
처음으로 내가 직접 이웃관계를 파악하고 그래프를 만들어야하는 문제
배열에 문제의 정보를 가지고 어떻게 그래프를 생성할까?
 ->
 첫번째 시도
 모든 배열에 노드 번호를 차례대로 주고 문제에 따라 이웃정보를
 모두! 간선 정보를 저장한다. : 이전에 풀던 방식 똑같이.


 우선 이코드의 문제점:
 기준 yx에 대하여 상하좌우를 한번에 따지려 하니깐
 조건문 엄청길어짐

 그러지말고 yx에대해 그때마다 상으로간거 하로간거..
 로 해결하기
 dx = {0,0,-1,1} dy = {1-1-00}과같이
*/
