#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<vector>
#include<queue>

using namespace std;

// 최대 가로세로 길이 10
int check[100][100] = { {0,0} };
int map[10][10] = { {0,0} };

int dx[4] = { -1, 0, 1, 0 };
int dy[4] = { 0, -1, 0, 1 };
int N, M; //세로, 가로


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
				// 두 구슬다 움직이지 못할때까지
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

					//동시에 들어가면 안됨
					if ((M * nR.first + nR.second) == goalIdx) 
					{ flag = 1; }
					if ((M * nB.first + nB.second) == goalIdx)
					{
						flag = 0;
						goto EXIT;
					}
					
					
					if (map[nR.first][nR.second] != '#' && map[nB.first][nB.second] != '#') continue;
					//멈추는경우
					else //하나라도 샾인 경우
					{
						if (map[nR.first][nR.second] == '#' && map[nB.first][nB.second] == '#')
						{
							//이전으로 돌려서 break
							nR.first -= dy[i];
							nR.second -= dx[i];
							nB.first -= dy[i];
							nB.second -= dx[i];
							break;
						}
						else if (map[nR.first][nR.second] == '#')
						{
							//만약에 구슬이 인접해있으면 돌려서 break
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
							//만약에 구슬이 인접해있으면 돌려서 break
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

				//check후 q에 넣는다
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

	int tempR, tempB, goal; //위치

	for (int y = 0; y < N; y++) //입력처리
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
두개의 대상을 움직이는 문제
움직이지 못하는 상황을 구별하는게..
1. # 때문 2.옆에구슬이 있고 옆구슬이 못움직일경우


-> 런타임 에러남 ... 모든예제 찾아보기(메모리 벗어날리 없을꺼같은데..)
-> goto EXIT 에서 문제 -> EXIT에서 다음코드가 없어서 오류 나는걸 continue(다음 조건으로 감)


- 2차원 state에 대해여 yx를 한개의 정수로 표현함 -> check를 편하게 하기위해
- but 2개의 state라 문제 해결하는데 어려움 겪음 (구현)
- 확인점 : 다른사람과 비교해서 state를 어떻게 표현했나? 더 간단하게 표현가능?
-> 특별히 다른점 못봄


- 문제를 풀때 의사코드 작성해서 풀고, 그 외에 디버깅하면서 잡아낼때 적어가면서 논리적으로 생각하는 습관
- BFS 단계 계산 -> 원래대로 bfs작성후 q size 만큼 for문 빼고 그밖에 답 ++
- 문제 제대로읽기..! 10초과로움직이면 -1return을 안봐서 오래걸림..

-결론
이차원 bfs문제는 state를 Idx로 두고 푸는게 나는 편하다
IDX = 몫 * 나눈거 + 나머지

*/