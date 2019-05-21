//풀이

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;


int main()
{
	int n, d[31] = {0,};
	scanf("%d", &n);
	d[0] = 1;
	d[2] = 3;

	for (int i = 4; i <= n; i+=2) 
	{
		int temp = 0;
		for (int j = 4; i-j >= 0 ; j += 2) 
		{
			temp += d[i - j];
		}
		d[i] = 2 * temp + 3 * d[i - 2];
	}
	printf("%d", d[n]);
	system("pause");
}

/*
타일 채우기
3*N, 크기 벽에 2*1, 1*2크기의 타일로 채우는 경우의 수
d[n] : 경우의 수

짝수만 가능하고 3*d[n-2] + 2*d[n-4]라 생각하는데 모르겠네

강의
아;;경우의수 4짜리에서 더있었음
2(d[0]+ ... +d[n-4]) + 3*d[n-2] = d[n]

*/
