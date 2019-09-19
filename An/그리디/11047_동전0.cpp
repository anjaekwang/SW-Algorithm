/*#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	int value[10 + 1] = { 0, };
	int N, K, result = 0;
	scanf("%d %d", &N, &K);
	for (int i = 1; i <= N; i++)
		scanf("%d", value + i);
	for (int i = N; i >= 1; i--)
	{
		int coin = value[i];
		if (coin <= K)
		{
			int temp = K / coin; //몫
			result += temp;
			K -= temp * coin;
		}
	}

	printf("%d\n", result);
	system("pause");
	return 0;
}*/
/*
그리디인 이유 
동전이 가치 단위가 배수이기 때문에
제일 작은 가치로 합을만들경우
그다음가치로 그것을 대체 가능하고 .. 
최적을 만족하기 때문에
*/