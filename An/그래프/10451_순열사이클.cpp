/*#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>

using namespace std;

vector<int> G[1001];
int check[1001] = { 0, };

void DFS(int x) 
{
	check[x] = 1;
	for (int i = 0; i < G[x].size(); i++) 
	{
		int temp = G[x][i];
		if (check[temp] == 0) DFS(temp);
	}
}

int main()
{
	int N, t, temp, result=0;

	scanf("%d", &t);
	while (t--) 
	{
		scanf("%d", &N);
		for (int i = 1; i <= N; i++)
		{
			scanf("%d", &temp);
			G[i].push_back(temp);
		}

		for (int i = 1; i <= N; i++) 
		{
			if (check[i] == 0) 
			{
				DFS(i);
				result++;
			}
		}
		printf("%d\n", result);
		result = 0;
		for (int i = 1; i <= N; i++) 
		{
			G[i].clear();
			check[i] = 0;
		}
	}
	system("pause");
	return 0;
}*/

// �̰�쿡�� �������� ���� ó�� Ǯ���־���.
// �׳� �Ϲ� �׷��������� �ٽ� �������κ��� ���� �ڽ�����
// ��� ǥ���ұ�?