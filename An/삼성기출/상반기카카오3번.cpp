#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<vector>

using namespace std;

vector<vector<int>> key;
vector<vector<int>> lock;
int M, N; //key, lock


//회전
void rotation(vector<vector<int>>& A) 
{
	vector<vector<int>> B;
	vector<int> temp;
	for (int x = 0; x < M; x++) 
	{
		for (int y = 0; y < M; y++)
			temp.push_back(A[M - 1 - y][x]);
		B.push_back(temp);
		temp.clear();
	}

	// copy
	for (int y = 0; y < M; y++) 
	{
		for (int x = 0; x < M; x++) 
			A[y][x] = B[y][x];
	}
}

bool check(int startY, int startX, vector<vector<int>> key, vector<vector<int>> lock)
{
	vector<vector<int>> temp;
	vector<int> temp2;
	for (int i = 0; i < 2 * M + N; i++) temp2.push_back(0);
	for (int i = 0; i < 2 * M + N; i++) temp.push_back(temp2);

	//temp 가운데에 lock을 복사
	for (int y = M; y < M + N; y++) 
	{
		for (int x = M; x < M + N; x++)
			temp[y][x] = lock[y - M][x - M];
	}


	//lock에 키를 끼워봄, 더함
	for (int y = startY; y < startY + M; y++) 
	{
		for (int x = startX; x < startX + M; x++) 
			temp[y][x] += key[y-startY][x-startX];
	}

	//키가 맞는지 확인, 모두 1인가?
	for (int y = M; y < M + N; y++) 
	{
		for (int x = M; x < M + N; x++) 
			if (temp[y][x] != 1) return false;
	}
	return true;
}

bool solution(vector<vector<int>> key, vector<vector<int>> lock) {
	
	M = key.size();
	N = lock.size();
	for (int y = 0; y < M + N; y++)  //시작위치
	{
		for (int x = 0; x < M + N; x++)
		{
			if (x == 5)
			{
				printf("");
			}
			for (int i = 0; i < 4; i++) //4번 회전
			{
				rotation(key);
				if (check(y, x, key, lock)) return true; 
				else continue;
			}
		}
	}
	return false;
}

int main() 
{
	//입력
	return 0;
}

/*
key(열쇠, 2차, 정사각) : M -> 
lock(지도, 2차, 정사각) : N
3 <= M<=N <= 20
삐져 나와도댐 키가

합이 모두 1이면 true 그밖에 false
vector같은 자료형 call by reference -> 배열처럼 매개변수 정의시&, 넣을시 그냥 이름

<핵심>
범위를 벗어나는 예외처리가 핵심인듯
-> 범위에따라 나누면 헷갈리고 구현 복잡하여
큰 temp 정 가운데에 lock을 복사하고 ...

segmentation fault -> 메모리 참조 오류?  
-> 나는 코드에 실수가 있어 시간버리는듯.. true를 false로 잘못쓰거나.. M써야 할곳을 N으로 쓰거나..
*/