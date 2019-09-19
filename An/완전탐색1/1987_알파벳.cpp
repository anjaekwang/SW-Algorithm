/*#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

char map[20][20] = { '\0', };
int R, C;
int check[26] = { 0, };//알파벳
int dy[4] = { 0,-1,0,1 };
int dx[4] = { -1,0,1,0 };
int ans = 0;

int temp = 0;
int max(int a, int b) 
{
	if (a >= b) return a;
	else return b;
}
void solution(int y, int x) 
{
	if (y == 0 && x == 0) temp = 1;
	check[map[y][x] - 'A'] = 1;
	for (int i = 0; i < 4; i++) 
	{
		int ny = y + dy[i];
		int nx = x + dx[i];
		if (ny >= 0 && ny < R && nx >= 0 && nx < C) 
		{
			if (!check[map[ny][nx] - 'A']) {
				temp++;
				solution(ny, nx); 
			}
		}
	}
	ans = max(temp, ans);
	check[map[y][x] - 'A'] = 0;
	temp--;
	
}


int main()
{
	scanf("%d%d", &R, &C);
	for (int y = 0; y < R; y++) 
	{
		for (int x = 0; x < C; x++) 
			scanf(" %c", &map[y][x]);
	}
	solution(0, 0);
	printf("%d ", ans);

	
	system("pause");
	return 0;
}*/
/*
BFS로 풀려했으나 무슨 알파벳 방문했는지에대한
check에서 백트래킹이 필요 하므로 stack을 이용해서 
풀이를 변경

재귀 이후 백트래킹 부분, 다시 상태로 돌아온다.
이를 인지하고 코딩.
길이의 max을 계산할때 temp와 ans 두 변수를 두어
temp는 현재 위치에서의 차수를 의미하고
때마다 ans와 비교하여 ans는 최대 값만 저장하기로함

최소값bfs는 어케하더라? 까먹음
*/
