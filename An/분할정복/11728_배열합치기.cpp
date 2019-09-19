/*#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>

using namespace std;

int A[1000000] = { 0, };
int B[1000000] = { 0, };
int C[2*1000000] = { 0, };

int k = 0;
void merge(int L, int R) 
{
	int M = (L + R) / 2;
	int L2 = M + 1;
	while (L <= M && L2 <= R) 
	{
		if (A[L++] < B[L2++]) C[k++] = A[L];
		else C[k++] = B[L2];
	}
	while (L <= M) C[k++] = A[L++];
	while (L2 <= R) C[k++] = A[L2++];
}
void mergeSort(int L, int R) 
{
	if (L == R) return;
	else 
	{
		int M = (L + R) / 2;
		mergeSort(L, M);
		mergeSort(M+1, R);
		merge(L, R);
	}
}

int main()
{
	int N, M;
	scanf("%d %d", &N, &M);
	for (int i = 0; i < N; i++) scanf("%d", A + i);
	for (int i = 0; i < M; i++) scanf("%d", B + i);
	for (int i = 0; i < N + M; i++) 
	{
		if (i < N) C[i] = A[i];
		else C[i] = B[i - N];
	}
	sort(C, C + N + M);
	for (int i = 0; i < N + M; i++) printf("%d ", C[i]);
	
	system("pause");
	return 0;
}*/

