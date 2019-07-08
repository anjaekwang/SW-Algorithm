/*#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int N;
	scanf("%d", &N);
	int* a = (int*)calloc(N, sizeof(int));

	for (int i = 0; i < N; i++)
		scanf("%d", a + i);
	sort(a, a + N);
	for (int i = 0; i < N; i++)
		printf("%d\n", *(a + i));
	system("pause");
	return 0;
}*/