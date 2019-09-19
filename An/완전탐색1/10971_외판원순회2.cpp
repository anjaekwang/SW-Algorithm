/*#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>
#include <limits.h>

using namespace std;

int N, a[10] = {0,}, cost[11][11] = { {0,0} };
int main()
{
	scanf("%d", &N);
	for (int y = 1; y <= N; y++) 
		for (int x = 1; x <= N; x++) scanf("%d", &cost[y][x]);
	
	int temp = 1;
	for (int i = 0; i < N; i++)a[i] = temp++;

	int ans = INT_MAX;
	do 
	{
		int temp = 0;
		for (int i = 0; i < N; i++) 
		{
			int x = a[i % N];
			int y = a[(i + 1) % N];
			if (!cost[x][y]) goto EXIT;
			else 
			{
				temp += cost[x][y];
			}
		}
		ans = min(ans, temp);
	EXIT:
		continue;
	}
	while (next_permutation(a, a + N));

	printf("%d", ans);
	system("pause");
	return 0;
}
*/
/*
break : 반복문을 빠져나간다
continue : 조건문 확인하러간다.
goto EXIT; - EXIT: 해당 레이블로 이동후 코드를 실행

idx 범위내 도는거 %
*/
