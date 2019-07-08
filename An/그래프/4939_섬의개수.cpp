/*#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <memory.h>
using namespace std;

int map[50][50] = { {0,0}, };
int check[50][50] = { {0,0}, };
int height, width;
int cnt = 0;


//상부터 시계방향
int dx[8] = { 0,1,1,1,0,-1,-1,-1 };
int dy[8] = { -1,-1,0,1,1,1,0,-1 };

void DFS(int y, int x) 
{
	check[y][x] = 1;
	for (int i = 0; i < 8; i++) 
	{
		int ny = y + dy[i];
		int nx = x + dx[i];
		if (ny >= 0 && ny < height && nx >= 0 && nx < width)
		{
			if (map[ny][nx] && !check[ny][nx]) DFS(ny, nx);
		}
	}
}
void clear() 
{
	memset(map, 0, sizeof(map));
	memset(check, 0, sizeof(check));
	cnt = 0;
}
int main() 
{
	while(1)
	{
		scanf("%d%d", &width, &height);
		if (width == 0 && height == 0) break;

		for (int y = 0; y < height; y++) 
		{
			for(int x=0; x<width; x++)
			{
				int temp = 0;
				scanf("%d", &temp);
				map[y][x] = temp;
			}
		}
		
		for (int y = 0; y < height; y++) 
		{
			for (int x = 0; x < width; x++) 
			{
				if (!check[y][x] && map[y][x]) cnt++,DFS(y, x);
		
			}
		}
		printf("%d\n", cnt);
		clear();

	}

	system("pause");
	return 0;
}*/