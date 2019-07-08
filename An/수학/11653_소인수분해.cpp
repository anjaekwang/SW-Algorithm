/*#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
using namespace std;

int main() 
{
	int N;
	scanf("%d", &N);
	//소인수 분해 
	do
	{
		for (int i =2; i<= N; i++)
		{
			if (N %i == 0) 
			{
				printf("%d\n", i);
				N /= i;
				break;
			}
		}
	} while (N != 1);
	system("pause");
}*/