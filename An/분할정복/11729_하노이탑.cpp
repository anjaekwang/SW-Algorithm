/*#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <math.h>

using namespace std;

void solve(int n, int x, int y) 
{
	if (n == 1) printf("%d %d\n", x, y);
	else
	{
		solve(n - 1, x, 6 - x - y); //아래 판을 움직이기 위해 위에 판을 다른곳으로 옮긴다
		printf("%d %d\n", x, y);
		solve(n - 1, 6 - x - y, y);
	}
}

int main()
{
	int N;
	scanf("%d", &N);
	printf("%d\n", (int)pow(2 ,N )- 1);
	solve(N, 1, 3);
	system("pause");
	return 0;
}*/

/*
도저히 중간과정이 이해가안가 
답은 알겠는데. -> 적어둠
*/