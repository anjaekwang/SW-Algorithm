/*#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <memory.h>

using namespace std;

char map[7000][7000];

void basic(int y, int x) //������ǥ 
{
	int k = 2;
	int cnt = 0;
	for (int ny = y; ny < y + 3; ny++) 
	{
		for (int nx = x; nx < x + 5; nx++) 
		{
			cnt++;
			if (cnt <= k) continue;
			else
			{
				map[ny][nx] = '*';
				cnt = 0;
			}
		}
		cnt = 0;
		k--;
	}
}

void solution(int y, int x, int N)  //�߽���ǥ�� ũ�� N
{
	if (N == 3) basic(y, x);
	else 
	{
		solution(y, x + N / 2, N / 2);
		solution(y + N / 2, x, N / 2);
		solution(y + N / 2, x + N, N / 2);
	}
}

int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) memset(map[i], ' ', sizeof(map[i]));
	solution(0, 0, n);
	for (int y = 0; y < n; y++) 
	{
		for (int x = 0; x < 2 * n - 1; x++) 
			printf("%c", map[y][x]);
		printf("\n");
	}
	system("pause");
	return 0;
}
*/

// �׸����� recursive �κ��� ã��
// basic�� �׸��� ���� ã�� �ű⼭ ����
