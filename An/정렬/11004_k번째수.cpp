/*#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>


using namespace std;

int main()
{
	int N, K;
	scanf("%d %d", &N, &K);
	int* A = (int*)calloc(N, sizeof(int));
	for (int i = 0; i < N; i++) 
		scanf("%d", A + i);
	sort(A, A + N);
	printf("%d", *(A + K - 1));
	free(A);
	return 0;
}*/
