/*#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <math.h>

using namespace std;

void solve(int n, int x, int y) 
{
	if (n == 1) printf("%d %d\n", x, y);
	else
	{
		solve(n - 1, x, 6 - x - y); //�Ʒ� ���� �����̱� ���� ���� ���� �ٸ������� �ű��
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
������ �߰������� ���ذ��Ȱ� 
���� �˰ڴµ�. -> �����
*/