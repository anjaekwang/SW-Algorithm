#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>
#include <memory.h>

using namespace std;

int n, m , ans = 0;
int info[500][500] = { {0,} };
int dx[4] = { 0,1,0,-1 };
int dy[4] = { -1,0,1,0 };
bool visited[500][500] = { {false,} };

// 현재위치에서 ㅜ를 제외한 모양중 최대값
void DFS(int y, int x, int sum,  int cnt)
{
	visited[y][x] = true;

	if (cnt == 3) 
	{
		ans = max(ans, sum);
		return;
	}
	for (int k=0; k<4; k++)
	{
		int ny = y + dy[k];
		int nx = x + dx[k];
		if (ny < 0 || ny >= n || nx < 0 || nx >= m) continue;
		if (!visited[ny][nx]) //방문하지 않았을때
		{
			DFS(ny, nx, sum + info[ny][nx], cnt + 1);
			visited[ny][nx] = false;
		}
	}
}

void shape0(int y, int x) 
{
	int temp =info[y][x] + info[y][x + 1] + info[y][x + 2] + info[y + 1][x + 1];
	ans = max(ans, temp);
}
void shape1(int y, int x)
{
	int temp = info[y][x] + info[y+1][x] + info[y+2][x] + info[y + 1][x - 1];
	ans = max(ans, temp);
}
void shape2(int y, int x)
{
	int temp = info[y][x] + info[y][x-1] + info[y][x-2] + info[y - 1][x - 1];
	ans = max(ans, temp);
}
void shape3(int y, int x)
{
	int temp = info[y][x] + info[y-1][x] + info[y-2][x] + info[y - 1][x + 1];
	ans = max(ans, temp);
}


// 입력
void input() 
{
	scanf("%d%d", &n, &m);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			scanf("%d", &info[i][j]);
	}
}

void solution() 
{
	for (int y = 0; y < n; y++) 
	{
		for (int x = 0; x < m; x++) 
		{
			memset(visited, false, sizeof(visited));
			DFS(y, x, info[y][x], 0);
			if (y + 1 < n && x + 2 < m) shape0(y, x);
			if (y + 2 < n && x - 1 < m) shape1(y, x);
			if (y - 1 < n&&x - 2 < m) shape2(y, x);
			if (y - 2 < n && x + 1 < m) shape3(y, x);
		}
	}
}


void solve() 
{
	input();
	solution();
	printf("%d", ans);
}

int main() 
{
	solve();
	system("pause");
	return 0;
}
/*
- 모양 종류 5가지에서 ㅜ를 제외한 모든 모양은 depth4인 탐색으로가능
- 500*500칸 4로 나누면 최대 60000개 블럭을 넣을수있다.
- 각단계(블록을 넣는) 총 5가지 
- 완전 탐색을 할경우 경우마다 모든 블록이 들어간다 치면 5^60000 경우의수


<어려움 겪은점>
1. 블록을 어떻게 할지?
-> depth가 3으로 시작위치에서 갈수있는 모든 방향중 
총합이 최대가 되는것으로 한다

2. 그러면 해당 위치에서 최대값으로 블록을 두는것이 
마지막에 최대임을 어떻게 확신할수 있는가?, 완전탐색으로 모든 블록을
둘경우에 너무 많은 경우의수가 발생한다.
-> 문제 제대로 읽자!! 지도내 폴리오미노 하나만 두는것이다

<Tip>
- state를 지도 전체로 할 필요가없다. 지도내 위치중 해당위치를 못가게 함
-> 5종류 블록중 한블록을 정하면 각 블록의 visted를 그때마다 false로 둔다

<느낀점>

- 문제좀 제대로 읽자..!
- 회전 대신 모양이 특정 ㅜ를 제외하고 위치에서 갈수있는 방향
으로 depth3까지 할경우 회전,반전 모두 만들수있었다

*/