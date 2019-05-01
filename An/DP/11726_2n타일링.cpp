#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

int ex11726()
{
	int n;
	scanf("%d", &n);
	int d[1001] = {0,};

	d[1] = 1;
	d[2] = 2;

	for (int i = 3; i <= n; i++) 
	{
		d[i] = (d[i - 1] + d[i - 2]) %10007;
	}
	printf("%d\n", d[n]);
	system("pause");
	return 0;
}

/*
2*n 타일링
2*n 공간을 2*1, 1*2 타일로 채우는 방법수

문제특징: 이전에 채우면 고정됨 그거이용
-> DP

!! %A 한뒤 사칙연산할때 지장없음
왜냐면 A 진수를 넘어간 자리수는 의미가없기에.
그럼 값이 같은데 
d[i] = (d[i - 1] + d[i - 2]) %10007 와
d[n] % 10007은 왜 다르냐?
오버플로우 떄문에!
*/
