#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

int ex11727() 
{
	int n;
	int d[1001] = {0,};

	d[1] = 1;
	d[2] = 3;
	scanf("%d", &n);

	for (int i = 3; i <= n; i++) 
	{
		d[i] = (2 * d[i - 2] + d[i - 1]) % 10007;
	}
	printf("%d\n", d[n]);
	system("pause");
	return 0;
}
/*
2*n 타일링
2*n 공간을 2*1, 2*2 타일로 채우는 방법수
*/