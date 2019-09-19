/*#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

char map[20][20] = { '\0', };
int R, C;
int check[26] = { 0, };//���ĺ�
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
BFS�� Ǯ�������� ���� ���ĺ� �湮�ߴ���������
check���� ��Ʈ��ŷ�� �ʿ� �ϹǷ� stack�� �̿��ؼ� 
Ǯ�̸� ����

��� ���� ��Ʈ��ŷ �κ�, �ٽ� ���·� ���ƿ´�.
�̸� �����ϰ� �ڵ�.
������ max�� ����Ҷ� temp�� ans �� ������ �ξ�
temp�� ���� ��ġ������ ������ �ǹ��ϰ�
������ ans�� ���Ͽ� ans�� �ִ� ���� �����ϱ����

�ּҰ�bfs�� �����ϴ���? �����
*/
