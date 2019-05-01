#define _CRT_SECURE_NO_WARNINGS

#include <iostream>


int a(int x)  
{
	if (x == 1) return 0;
	else // x >= 2
	{
		if ((x - 1) % 3 == 0 || (x - 1) % 2 == 0) return a(--x) + 1;
		else if (x % 3 == 0) return  a(x / 3) + 1;
		else if (x % 2 == 0) return a(x / 2) + 1;
		else return a(--x) + 1;

	}
}

int ex1463() 
{
	int x;
	int* d = (int*)malloc(sizeof(int) * 1000000);
	for (int i = 0; i < 1000000; i++) d[i] = 0;
	
	d[1] = 0;
	d[2] = 1;
	d[3] = 1;

	scanf("%d", &x);

	for (int i = 0; i <= x; i++)
	{
		// 어차피 다 푸니깐
		if (i % 3 == 0 && i>3) 
		{
			if (d[i / 3] <= d[i - 1]) d[i] = d[i / 3] + 1;
			else d[i] = d[i - 1] + 1;
		}
		else if (i % 2 == 0 && i>2) 
		{
			if (d[i / 2] <= d[i - 1]) d[i] = d[i / 2] + 1;
			else d[i] = d[i - 1] + 1;
		}
		else if(i % 3 != 0 && i % 2 != 0 && i>3) d[i] = d[i - 1] + 1;
	}
	printf("%d", d[x]);

	system("pause");
	return 0;
}


/*
이게 DP냐 보는거는? 하나씩 차근차근 푸는데 한번구하면 일정하고
그게 이용될때!

1로 만들기
정수 x를 1로 만드는 연산 최솟값
연산
x가 3으로 나누어 떨어지면 3으로 나눔 
x가 2으로 나누어 떨어지면 2으로 나눔
아닌 경우 1뺀다
x<= 1,000,000

문제특징 :
N에대해서 문제를 풀때 M(<N)에대해서 답을 알고있으면 
그걸 이용하면됨! 그래서 DP문제다.

문제점 :
6의배수에 대해 어떻게 처리할것인가? -> ㄴㄴ 2*3이므로 노상관


재귀로 풀기에는 익숙하지 않고 
어떨때 -1해야 더 연산적을지 모르겠음
그래서 반복문으로 하나하나 씩 모두 풀어서 
어떤게 더 짧은지 조건문으로 판단
*/