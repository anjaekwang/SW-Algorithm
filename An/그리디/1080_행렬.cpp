/*#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

void flip(int** A, int y, int x) 
{
	for (int j = y; j < y+3; j++) 
	{
		for (int i = x; i < x + 3; i++) 
			A[j][i] = !A[j][i];
	}
}

void Mfree(int** A, int height) 
{
	for (int y = 0; y < height; y++) 
		free(A[y]);
	free(A);
}

int main() 
{
	int N, M, ans=0;

	char s[5] = { '\0' };
	
	scanf("%d %d", &N, &M);
	int** A = (int**)calloc(N, sizeof(int*));
	int** B = (int**)calloc(N, sizeof(int*));

	for (int y = 0; y < N; y++) 
	{
		for (int x = 0; x < M; x++) 
		{
			A[y] = (int*)calloc(M, sizeof(int));
			B[y] = (int*)calloc(M, sizeof(int));
		}
	}

	for (int y = 0; y < 2 * N; y++) 
	{
		scanf("%s", s);
		for (int x = 0; x < M; x++) 
		{
			int temp = (int)(s[x] - '0');
			if (y < N) A[y][x] = temp;
			else B[y-N][x] = temp;
		}
	}
	for (int y = 0; y < N - 2; y++) 
	{
		for (int x = 0; x < M - 2; x++) 
		{
			if (A[y][x] != B[y][x])
			{
				flip(B, y, x);
				ans++;
			}
		}
	}
	int flag = 0;

	for (int y = 0; y < N; y++) 
	{
		for (int x = 0; x < M; x++) 
		{
			if (A[y][x] != B[y][x]) flag = 1;
		}
	}

	if (flag) printf("-1\n");
	else printf("%d\n", ans);
	Mfree(A, N);
	Mfree(B, N);


	system("pause");
	return 0;
}*/

/*
강의봄 -> 종이에다가 적어둠
연속된 수 입력 필드폭으로 받을수도 있음
*/