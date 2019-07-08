/*#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int N, result =0;
	scanf("%d", &N);
	for (int k = 1; pow(5, k) < N; k++) 
	{
		result += N / pow(5, k);
	}
	printf("%d", result);
	system("pause");
	return 0;
}*/