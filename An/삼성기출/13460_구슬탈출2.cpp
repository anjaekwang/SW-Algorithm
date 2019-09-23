#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<vector>
#include<queue>

using namespace std;

// �ִ� ���μ��� ���� 10
int check[100][100] = { {0,0} };
int map[10][10] = { {0,0} };

int dx[4] = { -1, 0, 1, 0 };
int dy[4] = { 0, -1, 0, 1 };
int N, M; //����, ����


int BFS(int RIdx, int BIdx, int goalIdx) 
{
	int ans = 0;
	int flag = 0;
	int nRIdx = 0;
	int nBIdx = 0;
	queue<pair<int, int>> q;
	check[RIdx][BIdx] = 1;
	q.push(make_pair(RIdx, BIdx));

	while (!q.empty())
	{
		int size = q.size();
		for (int j = 0; j < size; j++)
		{
			pair<int, int> cur = q.front();
			for (int i = 0; i < 4; i++)
			{
				pair<int, int> nR = make_pair(cur.first / M, cur.first % M);
				pair<int, int> nB = make_pair(cur.second / M, cur.second % M);
				// �� ������ �������� ���Ҷ�����
				while (1)
				{
					if (map[nR.first][nR.second] != '#') 
					{
						nR.first += dy[i];
						nR.second += dx[i];
					}
					if (map[nB.first][nB.second] != '#')
					{
						nB.first += dy[i];
						nB.second += dx[i];
					}

					//���ÿ� ���� �ȵ�
					if ((M * nR.first + nR.second) == goalIdx) 
					{ flag = 1; }
					if ((M * nB.first + nB.second) == goalIdx)
					{
						flag = 0;
						goto EXIT;
					}
					
					
					if (map[nR.first][nR.second] != '#' && map[nB.first][nB.second] != '#') continue;
					//���ߴ°��
					else //�ϳ��� ���� ���
					{
						if (map[nR.first][nR.second] == '#' && map[nB.first][nB.second] == '#')
						{
							//�������� ������ break
							nR.first -= dy[i];
							nR.second -= dx[i];
							nB.first -= dy[i];
							nB.second -= dx[i];
							break;
						}
						else if (map[nR.first][nR.second] == '#')
						{
							//���࿡ ������ ������������ ������ break
							nB.first += dy[i];
							nB.second += dx[i];
							if (nR.first == nB.first && nR.second == nB.second)
							{
								nR.first -= dy[i];
								nR.second -= dx[i];
								nB.first -= (2*dy[i]);
								nB.second -= (2*dx[i]);
								break;
							}
							else 
							{
								nB.first -= dy[i];
								nB.second -= dx[i];
							}
						}
						else if (map[nB.first][nB.second] == '#')
						{
							//���࿡ ������ ������������ ������ break
							nR.first += dy[i];
							nR.second += dx[i];
							if (nR.first == nB.first && nR.second == nB.second)
							{
								nR.first -= (2*dy[i]);
								nR.second -= (2*dx[i]);
								nB.first -= dy[i];
								nB.second -= dx[i];
								break;
							}
							else 
							{
								nR.first -= dy[i];
								nR.second -= dx[i];
							}
						}
					}
					
				}
				if (flag && ans+1 <= 10) return (ans+1);

				//check�� q�� �ִ´�
				nRIdx = M * nR.first + nR.second;
				nBIdx = M * nB.first + nB.second;
				if (!check[nRIdx][nBIdx])
				{
					check[nRIdx][nBIdx] = 1;
					q.push(make_pair(nRIdx, nBIdx));
				}
			EXIT: continue;
			}
			q.pop();
		}
		ans++;
		if (ans > 10) return -1;
	}
	return -1;
}

int main()
{
	scanf("%d%d", &N, &M);

	int tempR, tempB, goal; //��ġ

	for (int y = 0; y < N; y++) //�Է�ó��
	{
		for (int x = 0; x < M; x++) 
		{
			char temp;
			scanf(" %c", &temp);
			
			if (temp == '.') map[y][x] = temp;
			else 
			{
				if (temp == 'R') tempR = M * y + x;
				else if (temp == 'B') tempB = M * y + x;
				else if (temp == 'O') goal = M * y + x;
				map[y][x] = temp;
			}
		}
	}

	printf("%d\n", BFS(tempR, tempB, goal));
	system("pause");
	return 0;
}
/*
�ΰ��� ����� �����̴� ����
�������� ���ϴ� ��Ȳ�� �����ϴ°�..
1. # ���� 2.���������� �ְ� �������� �������ϰ��


-> ��Ÿ�� ������ ... ��翹�� ã�ƺ���(�޸� ����� ������������..)
-> goto EXIT ���� ���� -> EXIT���� �����ڵ尡 ��� ���� ���°� continue(���� �������� ��)


- 2���� state�� ���ؿ� yx�� �Ѱ��� ������ ǥ���� -> check�� ���ϰ� �ϱ�����
- but 2���� state�� ���� �ذ��ϴµ� ����� ���� (����)
- Ȯ���� : �ٸ������ ���ؼ� state�� ��� ǥ���߳�? �� �����ϰ� ǥ������?
-> Ư���� �ٸ��� ����


- ������ Ǯ�� �ǻ��ڵ� �ۼ��ؼ� Ǯ��, �� �ܿ� ������ϸ鼭 ��Ƴ��� ����鼭 �������� �����ϴ� ����
- BFS �ܰ� ��� -> ������� bfs�ۼ��� q size ��ŭ for�� ���� �׹ۿ� �� ++
- ���� ������б�..! 10�ʰ��ο����̸� -1return�� �Ⱥ��� �����ɸ�..

-���
������ bfs������ state�� Idx�� �ΰ� Ǫ�°� ���� ���ϴ�
IDX = �� * ������ + ������

*/