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
������ �ο��� 3������ ��� ������ ���°�������
�������ο�/3 + 1 �� ó���ߴµ�
�������ο��� 3���� �������� ��� +1 ������ ���� �� �����Ե�
�̰� ĳġ ���ؼ� �����ɸ�
*/