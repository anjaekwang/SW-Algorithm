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
//�׳� �� ��� N^2���� �ð��ʰ��ȴ�
// logN ����Ž���̿� �϶�.
//���� ������ ���ÿ� ����Ǵµ�, 
// �ƽôٽ��� ������ ������ ������ �ֽ��ϴ�. �׷��� ������ �������� ���������ν�
// ������ ���� ���� ������ ������ �Ҵ��ؾ� �մϴ�.