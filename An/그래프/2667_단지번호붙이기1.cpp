/*#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int check[26][26] = {{0,0},};
int cnt=0;
int N;
int house[25][25];

//상하좌우
int dy[4] = { -1,1,0,0 };
int dx[4] = { 0,0,-1,1 };

void DFS(int y, int x) 
{
	check[y][x] = 1;
	cnt++;

	for (int i = 0; i < 4; i++) 
	{
		int ny = y + dy[i];
		int nx = x + dx[i];

		if (ny >= 0 && ny < N && nx >= 0 && nx < N) 
		{
			if (!check[ny][nx]&& house[ny][nx])
			{
				DFS(ny, nx);
			}
		}
	}
	
}

int main()
{
	scanf("%d", &N);


	// 집 정보 
	for (int i = 0; i < N; i++)
	{
		char* temp = (char*)calloc(N + 1, sizeof(char));
		scanf("%s", temp);

		for (int j = 0; j < N; j++)
			house[i][j] = (int)(temp[j] - '0');
		free(temp);
	}

	vector<int> result;
	int resultCnt = 0;
	for (int y = 0; y < N; y++) 
	{
		for (int x = 0; x < N; x++) 
		{
			if (!check[y][x] && house[y][x]) 
			{
				DFS(y, x);
				resultCnt++;
				result.push_back(cnt);
				cnt = 0;
			}
		}
	}

	printf("%d\n", resultCnt);
	sort(result.begin(), result.end());
	for (int i = 0; i < result.size(); i++) printf("%d\n", result[i]);
	system("pause");
	return 0;
}*/
