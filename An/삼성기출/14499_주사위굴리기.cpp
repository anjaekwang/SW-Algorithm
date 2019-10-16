#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>
#include <map>

using namespace std;


// 변수
int n, m, x, y, k;
int info[20][20] = { 0, };
vector<int> command;
int die[4][3]{ {0,} };


//동서북남위아래 -> 123456
pair<int, int> dieLoc(int n) 
{
	switch (n)
	{
	case 1:// 동
		return make_pair(1, 2);
	case 2: //서
		return make_pair(1, 0);
	case 3: //북
		return make_pair(0, 1);
	case 4: //남
		return make_pair(2, 1);
	case 5: //위
		return make_pair(1, 1);
	case 6: //아래
		return make_pair(3, 1);
	}
}

void changDie(int dir) // 주사위 값 이동
{

	//주사위 카피
	int temp[4][3] = { {0,} };
	for (int i = 0; i < 4; i++) 
	{
		for (int j = 0; j < 3; j++) 
			temp[i][j] = die[i][j];
	}
	//동서북남위아래
	pair<int, int> E = dieLoc(1);
	pair<int, int> W = dieLoc(2);
	pair<int, int> N = dieLoc(3);
	pair<int, int> S = dieLoc(4);
	pair<int, int> U = dieLoc(5);
	pair<int, int> D = dieLoc(6);


	//동서북남 1234
	switch (dir)
	{
	case 1://동
	{
		die[D.first][D.second] = temp[E.first][E.second]; // 동 -> 아래
		die[E.first][E.second] = temp[U.first][U.second]; // 위 -> 동
		die[U.first][U.second] = temp[W.first][W.second]; // 서 -> 위
		die[W.first][W.second] = temp[D.first][D.second]; // 아래 -> 서
		break;
	}
	case 2://서
	{
		die[U.first][U.second] = temp[E.first][E.second]; // 동 -> 위
		die[W.first][W.second] = temp[U.first][U.second]; // 위 -> 서
		die[D.first][D.second] = temp[W.first][W.second]; // 서 -> 아래
		die[E.first][E.second] = temp[D.first][D.second]; // 아래 -> 동
		break;
	}
	case 3: //북
	{
		die[D.first][D.second] = temp[N.first][N.second]; // 북 -> 아래
		die[N.first][N.second] = temp[U.first][U.second]; // 위 -> 북
		die[U.first][U.second] = temp[S.first][S.second]; // 남 -> 위
		die[S.first][S.second] = temp[D.first][D.second]; // 아래 -> 남
		break;
	}
	case 4: //남
	{
		die[U.first][U.second] = temp[N.first][N.second]; // 북 -> 위
		die[S.first][S.second] = temp[U.first][U.second]; // 위 -> 남
		die[D.first][D.second] = temp[S.first][S.second]; // 남 -> 아래
		die[N.first][N.second] = temp[D.first][D.second]; // 아래 -> 북
		break;
	}
	}
}

int main() 
{
	int dieY = 0; //주사위 현위치
	int dieX = 0;
	int dx[4] = {1,-1,0,0}; //동서북남
	int dy[4] = {0,0,-1,1};


	//입력
	scanf("%d%d%d%d%d", &n, &m, &dieY, &dieX, &k);
	for (int i = 0; i < n; i++)  
	{
		for (int j = 0; j < m; j++) 
			scanf("%d", &info[i][j]);
	}
	for (int i = 0; i < k; i++)
	{
		int temp;
		scanf("%d", &temp);
		command.push_back(temp);
	}
	int size = command.size();
	for (int i = 0; i < size; i++) 
	{
		dieY += dy[command[i] - 1]; 
		dieX += dx[command[i] - 1];

		//바깥이동
		if (dieY < 0 || dieY >= n || dieX < 0 || dieX >= m) 
		{
			dieY -= dy[command[i] - 1];
			dieX -= dx[command[i] - 1];
			continue;
		}
		else {

			changDie(command[i]);//동서북남 1234

			pair<int, int> D = dieLoc(6); //아랫면 y,x
			// 이동한 위치가 0 일때 지도에 복사
			if (info[dieY][dieX] == 0)
			{
				info[dieY][dieX] = die[D.first][D.second];
			}
			// 0이 아닐때 주사위에 복사후 지도는 0
			else
			{
				int temp = info[dieY][dieX];
				info[dieY][dieX] = 0;
				die[D.first][D.second] = temp;
			}
			pair<int, int> U = dieLoc(5); //윗면 y,x
			printf("%d\n", die[U.first][U.second]);
		}
	}
	
	system("pause");
	return 0;
}

/*
<문제 이해 안간부분>
- 주사위의 전개도는 주어줬으면서 가장 처음에 주사위의 모든면이
0 이라는 것은 무엇이냐 ?
전개도 처럼 가정하고 윗면이 1이고 아랫면이 6이다를 의미


<조건>
주사위 전개도
  2 
4 1 3
  5
  6
- 주사위 위치가 0 ->  주사위 바닥이 칸 복사
-              x ->  바닥으로 복사후 0
- 동서남북 1234
- 밖으로 나가는 명령은 무시한다
-> 이동할때마다 윗면에 쓰여있는 수 출력


<어려움 겪음점>
- 구현 자체는 쉬우나 위치를 바꾸는거에서 정해진 순서를 
꼬이게 구현해서  헷갈림
-> switch break 빼먹어서 시간 버림;;
& 문제에서 정의한 yx와 내가 일반적으로 생각하는 yx 정의를 바꿔버려서
오래걸림;;

-> 문제 똑바로 보자
*/