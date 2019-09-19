/*#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <memory.h>

using namespace std;


char map[7000][7000] = { {' '} };

void solution(int y, int x, int N)
{
	if (N == 1)
	{
		map[y][x] = '*';
		return;
	}
	else 
	{
		for (int i = 0; i < 3; i++) 
		{
			for (int j = 0; j < 3; j++) 
			{
				if (i == 1 && j == 1) continue;
				else solution(y + i * N / 3, x + j * N / 3, N / 3);
			}
		}
	}
}
int main()
{
	int n;
	scanf("%d", &n);

	for(int i =0; i<n; i++) memset(map[i], ' ', sizeof(map[i]));
	solution(0, 0, n);
	for (int i = 0; i < n; i++) 
	{
		for(int j=0; j<n; j++)
			printf("%c", map[i][j]);
		printf("\n");
	}
	system("pause");
	return 0;
}*/

/*
모르겠음 -> 강의봄 
*/


