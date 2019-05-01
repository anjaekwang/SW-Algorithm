#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string.h>
using namespace std;

int ex11656() 
{
	char a[1001];
	char b[1001][1001];
	int c[1000];

	int rank, len;

	scanf("%s", a);
	len = strlen(a);
	
	for (int i = 0; i < len; i++) 
	{
		strcpy(b[i], a + i);
	}
	
	for (int i = 0; i < len; i++)
	{
		rank = 0;
		for (int j = 0; j < len; j++) 
		{
			if (strcmp(b[i], b[j]) > 0)
				rank++;
		}
		c[i] = rank;
	}
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < len; j++)
		{
			if (c[j] == i)
			{
				printf("%s\n", b[j]);
			}
		}
		
	}
	return 0;
}

/*
그냥 생각없이 담을 공간 만들고 
기록해서 출력함

사람들 sort 함수 많이 이용함...
*/