/*#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int N;
int location[15][15] = { {0,0} };
int ans = 0;

//해당 yx에 퀸을 둘수 있는가?
bool check(int y, int x) 
{
	//왼대각
	int tempY = y-1, tempX = x-1;
	while (tempY >= 0 && tempX >= 0) 
	{
		if (location[tempY][tempX]) return false;
		tempY--; tempX--;
	}
	//우대각
	tempY = y-1, tempX = x+1;
	while (tempY >= 0 && tempX < N)
	{
		if (location[tempY][tempX]) return false;
		tempY--; tempX++;
	}

	//위
	for (int i = y-1; i >= 0; i--) if (location[i][x]) return false;
	return true;
}

void solution(int row) 
{
	if (row == N)
	{
		ans++;
	}

	for (int x = 0; x < N; x++) 
	{
		location[row][x] = 1;
		if (check(row, x)) solution(row+1);
		location[row][x] = 0;
	}
}

int main()
{
	scanf("%d", &N);
	solution(0);
	printf("%d", ans);

	system("pause");
	return 0;
}*/
/*
재귀 마음껏 못바꾸겠다. DFS
-> 강의보기

기존 코드에서 백트래킹 하려면 map을 백트래킹 해야함
-> 매개 yx에 queen을 빼주어 대각등 0으로 돌리고 cnt도 줄여줘야함

문제의 특성을 더 활용하자 -> 퀸을 행별로 차례로 열을 결정할때
퀸을두면 해당 열에는 더이상 퀸을 둘수 없다

state를 문제의 특성에 맞게 가장 간단히 표현하자
그때 그때의 map의 상황을 그려 조건을 확인 하려 했으나 백트래킹
과정에서 복잡 해졌다.
-> 거꾸로 해당열에 위치할수있는지는 해당 위치에서 윗대각, 위에  이전 열에서 존재하는지 확인하자

주의 ++, --는 저장됨
*/