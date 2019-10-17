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

// ������ġ���� �̸� ������ ����� �ִ밪
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
		if (!visited[ny][nx]) //�湮���� �ʾ�����
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


// �Է�
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
- ��� ���� 5�������� �̸� ������ ��� ����� depth4�� Ž�����ΰ���
- 500*500ĭ 4�� ������ �ִ� 60000�� ���� �������ִ�.
- ���ܰ�(����� �ִ�) �� 5���� 
- ���� Ž���� �Ұ�� ��츶�� ��� ����� ���� ġ�� 5^60000 ����Ǽ�


<����� ������>
1. ����� ��� ����?
-> depth�� 3���� ������ġ���� �����ִ� ��� ������ 
������ �ִ밡 �Ǵ°����� �Ѵ�

2. �׷��� �ش� ��ġ���� �ִ밪���� ����� �δ°��� 
�������� �ִ����� ��� Ȯ���Ҽ� �ִ°�?, ����Ž������ ��� �����
�Ѱ�쿡 �ʹ� ���� ����Ǽ��� �߻��Ѵ�.
-> ���� ����� ����!! ������ �������̳� �ϳ��� �δ°��̴�

<Tip>
- state�� ���� ��ü�� �� �ʿ䰡����. ������ ��ġ�� �ش���ġ�� ������ ��
-> 5���� ����� �Ѻ���� ���ϸ� �� ����� visted�� �׶����� false�� �д�

<������>

- ������ ����� ����..!
- ȸ�� ��� ����� Ư�� �̸� �����ϰ� ��ġ���� �����ִ� ����
���� depth3���� �Ұ�� ȸ��,���� ��� ������־���

*/