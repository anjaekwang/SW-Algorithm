/*#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>

using namespace std;

int N, M, a[500000] = { 0, };

int solve(int L, int R, int des) 
{
	if (L > R) return 0;
	else 
	{
		int M = (L + R) / 2;
		if (a[M] == des) return 1;
		else if (des < a[M]) solve(L, M - 1, des);
		else solve(M + 1, R, des);
	}
}

int main()
{
	scanf("%d", &N);
	for (int i = 0; i < N; i++) scanf("%d", a + i);
	scanf("%d", &M);

	sort(a, a + N);
	int L = 0, R = N - 1;
	for (int i = 0; i < M; i++) 
	{
		int temp;
		scanf("%d", &temp);
		printf("%d ", solve(L, R, temp));
	}

	system("pause");
	return 0;
}*/
//그냥 할 경우 N^2으로 시간초과된다
// logN 이진탐색이용 하라.
//지역 변수는 스택에 선언되는데, 
// 아시다시피 스택은 공간이 한정돼 있습니다. 그래서 변수를 전역으로 선언함으로써
// 공간이 넓은 정적 데이터 영역에 할당해야 합니다.