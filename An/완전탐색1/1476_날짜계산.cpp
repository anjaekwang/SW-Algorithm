/*#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	int E, M, S;
	scanf("%d %d %d", &E, &S, &M);
	int ans = 1;
	int e = 1, m = 1, s = 1;

	while (1) 
	{
		if (e == E && M == m && s == S)
		{
			printf("%d", ans);
			break;
		}
		ans++; e++; s++; m++;
		if (e == 15 + 1) e = 1;
		if (s == 28 + 1)s = 1;
		if (m == 19 + 1)m = 1;
	}
	system("pause");
	return 0;
}*/
/*
브루트 포스
모든 경우의수 다해보기
EMS 올수 있는 경우의수 15 * 28*19
시간제한 안걸림
-> 모든경우의수 마다 ans +1
->?경우의수가 어떻게 확실히 15 * 28 *19?
중복되게 ESM 나오지만 다른 연도를 나타내는경우는 없는가?
-> 문제에서 답이 가장 빠른 연도로 하였으므로
*/

