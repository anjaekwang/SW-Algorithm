/*#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <queue>
#include <utility>

using namespace std;


//�����¿� y-1x y+1x x-1y x+1y
int dx[4] = { 0,0,-1,1 };
int dy[4] = { -1,1,0,0 };
int check[100][100] = { {0,0} };
int map[100][100] = { {0,0} };
int N, M;
int level = 1; 


//������ ��� ���°ɱ�?
void BFS(int y, int x) 
{
	queue<pair<int, int>> q;
	check[y][x] = 1;
	q.push(make_pair(y,x));

	while (!q.empty()) 
	{
		int qSize = q.size();
		for(int j=0; j< qSize; j++)//�ش� �ܰ��� ��� ����
		{
			pair<int, int> temp = q.front(); // ���� level������ cur ���
			if (temp.first == N - 1 && temp.second == M - 1) return;

			for (int i = 0; i < 4; i++) //cur����� ������� �� ����
			{
				int ny = temp.first + dy[i];
				int nx = temp.second + dx[i];

				if (nx >= 0 && nx < M && ny >= 0 && ny < N)
				{
					if (!check[ny][nx] && map[ny][nx])
					{
						check[ny][nx] = 1;
						q.push(make_pair(ny, nx));
					}
				}
			}
			q.pop(); //������ pop��
		}
		level++;
	}

}

int main() 
{
	scanf("%d%d", &N, &M); //N-1 M-1�� ����
	for (int y = 0; y < N; y++) 
	{
		char* temp = (char*)calloc(M + 1, sizeof(char));
		scanf("%s", temp);
		for (int x = 0; x < M; x++) 
		{
			map[y][x] = (int)(temp[x] - '0');
		}
		free(temp);
	}

	BFS(0, 0);
	printf("%d\n", level);
	system("pause");
}*/

//BFS �ִܰŸ�  -> ����
/*
1. k�ܰ迡�� �湮������ ��带 queue�� �װ� pop�ȴ�
2. �׷��Ƿ� n�� �ڽ��� ������ queue�� n���� ���̰� �ȴ�.
3. ���� ���� ������� ��� 1.�� ���� ������ �ؾ� �ϹǷ�
4. q�� size ��ŭ 1�� ������ �ؾ��� level�� ��½�Ų��.
-> BFS�� �ִܰŸ� ����. ���� �׳� �ۼ��ϰ� ũ�� ���θ��
*/

// for������ �Լ��� ��������!, len�̳� q�����
// ���� Ȯ���Ҷ����� �Լ��� ȣ��Ǿ� �ǵ�ġ �ʰ� ���� ���� �����