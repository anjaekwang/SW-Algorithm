/*#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int N, M, K;
	vector<int> a;
	scanf("%d %d %d", &N, &M, &K);
	for (int i = 1; i <= N; i++) a.push_back(i);
	if (N >= M + K - 1 && N <= M*K) 
	{
		int idx = 0;
		for (int i = 1; i <= M; i++) 
		{
			//K�� �����ϴµ� ������ N-(M-i)���� ������ �� ��������� �ϴ°��
			// N�� k���� M���� �ȹ��� �� �����Ƿ� ������ ��ŭ 1�� ���ҷ� �κ������� �̷��.
			int temp = min(idx + K, N - (M - i));
			reverse(a.begin()+idx, a.begin() + temp);
			idx = temp;
		}
		for (int i = 0; i < N; i++) printf("%d ", a[i]);
	}
	else printf("-1");
	system("pause");
	return 0;
}
*/
/*
���Ǻ� -> ���̿��ٰ� �����
��ѱ��� ���� ã�ƺ���
*/
