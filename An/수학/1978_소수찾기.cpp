/*#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>

using namespace std;

bool prime(int N) 
{
	if (N < 2) return false;
	for (int i = 2; i*i <= N; i++) 
	{
		if (N % i == 0) return false;
	}
	return true;
}
int main()
{
	int num;
	int N[100];
	int temp = 0;
	
	scanf("%d", &num);
	for (int i = 0; i < num; i++) 
		scanf("%d", N + i);
	for (int i = 0; i < num; i++)
	{
		if (prime(N[i]))
		{ 
			temp++; 
		}
	}
	printf("%d\n", temp);
	system("pause");
	return 0;
}*/
/*
소수 찾기
*/