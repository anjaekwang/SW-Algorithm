#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>
#include <queue>


using namespace std;

int n, k, l; // 맵크기, 사과개수, 방향전환
vector<pair<int, int>> appleLoc;
vector<pair<int, int>> snake;
vector<pair<int, char>> dir;

int cnt = 0;
int nowDir = 1; //0123 상우하좌

bool isapple(int y, int x) // 해당 위치에 사과가 존재하는지?
{
	int size = appleLoc.size();
	for (int i = 0; i < size; i++)
	{
		if (appleLoc[i].first == y && appleLoc[i].second == x)
		{
			appleLoc.erase(appleLoc.begin() + i);
			return true;
		}
	}
	return false;
}

bool bump(int y, int x) //몸끼리 부딪히는지 
{
	int size =  snake.size();
	for (int i = 0; i < size; i++) 
		if (snake[i].first == y && snake[i].second == x) return true;
	return false;
}

bool ispossible(int y, int x, int nowCnt)  // 다음행위에 뱀의 머리가 위치할수 있는가?
{
	switch (nowDir) //유의 하기 
	{
		case 1: 
			x += 1;
			break;
		case 2: 
			y += 1;
			break;
		case 3:
			x -= 1;
			break;
		case 0:
			y -= 1;
			break;
	}
	if (y >= n || y < 0 || x >= n || x < 0 || bump(y, x)) return false;
	else return true;
}

// snake의 맨뒤가 머리
bool move()
{
	pair<int, int> head;
	head = make_pair(snake.back().first, snake.back().second);
	if (ispossible(head.first, head.second, cnt)) 
	{
		switch (nowDir) //방향전환
		{
			case 1:
				head.second += 1;
				break;
			case 2:
				head.first += 1;
				break;
			case 3:
				head.second -= 1;
				break;
			case 0:
				head.first -= 1;
				break;
		}

		snake.push_back(head);
		if (!isapple(head.first, head.second))
			snake.erase(snake.begin());
		cnt++;
		int size =  dir.size();
		for (int i = 0; i < size; i++)  //방향전환, 종류, 진행방향의 L(왼쪽),D(오른쪽)
		{
			if (dir[i].first == cnt)
			{
				if (dir[i].second == 'L') nowDir = ((nowDir - 1) + 4) % 4;
				else nowDir = (nowDir + 1) % 4;
			}
		}
		return true;
	}
	else return false;
}

int main()
{
	scanf("%d", &n);
	scanf("%d", &k);

	for (int i = 0; i < k; i++)  //사과 위치정보
	{
		int a, b;
		scanf("%d %d", &a, &b);
		appleLoc.push_back(make_pair(a-1, b-1));
	}

	scanf("%d", &k);
	for (int i = 0; i < k; i++) //방향 전환 정보
	{
		int a; char b;
		scanf("%d %c", &a, &b);
		dir.push_back(make_pair(a, b));
	}
	snake.push_back(make_pair(0, 0));
	while (move()) { continue; }

	printf("%d", cnt+1);

	system("pause");
	return 0;
}
/*
<조건>
- 벽or 자신 부딪히면 끝
- 사과먹으면 길이 +1
- 움직일때 머리길이 +1 하여 위치
 -> 사과 있으면 그대로

- 이동경로가 주어질때 몇번이동?

<발생 문제 & 해결>
히든케이스 어떻게 찾냐
-> 반례 질문으로 찾음 ㅠㅠ 
사과 먹고 지우는거를 구현안함

<stl>
-a.erase(a.begin()+i); 하시면 i번 인덱스의 원소가 삭제

*/