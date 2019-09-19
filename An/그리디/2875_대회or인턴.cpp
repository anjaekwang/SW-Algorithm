/*#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;

int main() 
{
	int N, M, K, ans = 0;
	scanf("%d %d %d", &N, &M, &K);

	while (N >= 2 && M >= 1)  
	{
		N -= 2; M--;
		ans++;
	}

	int ret = 0;
	if (N || M) ret = M + N;

	if (ret - K < 0)
	{
		ret = K - ret;
		if (ret % 3 == 0) ret /= 3;
		else ret = ret / 3 + 1;
		printf("%d\n", ans - ret);
	}
	else printf("%d\n", ans);

	system("pause");
	return 0;
}*/
/*
부족한 인원중 3명으로 묶어서 팀에서 빼는과정에서
부족한인원/3 + 1 로 처리했는데
부족한인원이 3으로 떨어지는 경우 +1 때문에 한팀 더 빠지게됨
이거 캐치 못해서 오래걸림
*/