/*#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>

using namespace std;

int location[9][9] = { {0,0} };
vector<pair<int, int>> zero;

bool check(int y, int x, int num)
{
	//가로, 세로
	for (int i = 0; i < 9; i++)
	{
		if (location[y][i] == num && i != x) return false;
		if (location[i][x] == num && i != y) return false;
	}
	int tempY = (int)(y / 3) * 3;
	int tempX = (int)(x / 3) * 3;
	for (int i = tempY; i < tempY + 3; i++)
	{
		for (int j = tempX; j < tempX + 3; j++)
		{
			if (location[i][j] == num && i != y && j != x) return false;
		}
	}
	return true;
}

void findZero()
{
	for (int y = 0; y < 9; y++)
	{
		for (int x = 0; x < 9; x++)
		{
			if (!location[y][x]) zero.push_back(make_pair(y, x));
		}
	}
	zero.push_back(make_pair(-1, -1));
}

void printAns()
{
	for (int y = 0; y < 9; y++)
	{
		for (int x = 0; x < 9; x++)
		{
			printf("%d ", location[y][x]);
		}
		printf("\n");
	}
}
int flag = 0;
void solution(int idx)
{
	int y = zero[idx].first;
	int x = zero[idx].second;
	if (y == -1 && x == -1)
	{
		printAns();
		flag = 1;
		return;
	}


	for (int num = 1; num < 10; num++)
	{
		location[y][x] = num;
		if (check(y, x, num)) solution(idx + 1);
		
		while (flag == 1) return;
		location[y][x] = 0;
	}
}
int main()
{
	for (int y = 0; y < 9; y++)
	{
		for (int x = 0; x < 9; x++)
		{
			scanf("%d", &location[y][x]);
		}
	}
	findZero();
	solution(0);
	system("pause");

	return 0;
}*/
/*
N-queen과 같은 문제
재귀를 완전히 끝내고싶으면 flag를 두자
문제를 의사코드 작성후 작성하는게 안헷갈림
*/