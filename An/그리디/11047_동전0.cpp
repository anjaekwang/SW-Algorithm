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
			int temp = K / coin; //��
			result += temp;
			K -= temp * coin;
		}
	}

	printf("%d\n", result);
	system("pause");
	return 0;
}*/
/*
�׸����� ���� 
������ ��ġ ������ ����̱� ������
���� ���� ��ġ�� ����������
�״�����ġ�� �װ��� ��ü �����ϰ� .. 
������ �����ϱ� ������
*/