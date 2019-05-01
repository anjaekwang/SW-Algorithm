#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

int ex11057() 
{
	int n, result, d[1001][10] = {0,};
	result = 0;
	scanf("%d", &n);
	for (int i = 0; i < 10; i++) d[1][i] = 1;
	for (int i = 2; i <= n; i++) 
	{
		for (int j = 0; j < 10; j++) 
		{
			for (int k = j; k < 10; k++) d[i][k] += d[i - 1][j] % 10007;
		}
	}
	for (int i = 0; i < 10; i++) result += d[n][i]%10007;
	printf("%d\n", result % 10007);
	system("pause");
	return 0;
}

/*
오르막수
오른쪽으로갈수록 수가 올라가야함. 인접수 같은거 인죵
N길이 오르막수 갯수


특징 : 처음에는 0으로 시작할수 없음 -> 초기값으로 해결.
       이전의 값이 뭐였는지 알아야 할 필요가 있음.
	   이전 N-1 의 정답이 고정 되어있으 N의 정답에 쓰임
	   -> d[N][j] : N길이 오름수, j(0~9) 끝이 어떻게 끝난지?
	   j로 끝났을 경우(d[n-1][j]) j~9까지 n에 이용될수있다
		(d[n][j]~d[n][9])	  
*/