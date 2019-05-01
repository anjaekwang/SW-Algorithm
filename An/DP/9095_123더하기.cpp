#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
int ex9095()
{	
	int t, N, d[12];
	scanf("%d", &t);
	for (int i = 0; i < 12; i++) d[i] = 0;
	
	d[1] = 1; d[2] = 2; d[3] = 4; d[4] = 7;

	for (int i = 5; i < 11; i++)
	{
		d[i] = d[i - 1] +  d[i - 2] + d[i - 3];
	}
	
	while (t--) 
	{
		scanf("%d", &N);
		printf("%d\n", d[N]);

	}
	system("pause");
	return 0;
}

/*
1,2,3 더하기
정수 N을 1,2,3 종류로만 가지고 더하는 방법 수 
N<11

문제해결 : 이전구해둔거에서 몇개를 더해서 풀수있으므로
DP

문제 초기값을 잘못이해해 헛수고함
d[1] = 0이라 생각함;;
*/