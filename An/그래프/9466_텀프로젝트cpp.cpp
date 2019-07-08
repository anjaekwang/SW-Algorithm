/*#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>
#include <memory.h>

using namespace std;

int check[100000 + 1] = { 0, };
int done[100000 + 1] = { 0, };
int cnt;
vector<int> G[100000 + 1];

void DFS(int x)
{
	check[x]= 1;
	for (int i = 0; i < G[x].size(); i++)
	{
		int temp = G[x][i];
		if (check[temp] == 0)
			DFS(temp);
		// �̹� ������ ������ �ǴܵǴ°Ŵ� cnt ���ϱ� ����
		// ��Ŭ ã�� ���� �̹Ƿ� �̹� �湮�ؼ� ��Ŭ�ȵǴ� ���� ���� ��Ŭ �ȵ�(���� �Ѱ��� �Ͻÿ�)
		else if(!done[temp])		// ��� ��ġ�� ��ĥ ��ø�
			                        // x�� �ϸ� (x-1, x)��
									// �״����� (x-2, x-1) ��
									
		{
			for (int j = temp; j != x; j = G[j][0]) // ������ ��尡 ��Ŭ�̷�
				cnt++;							    // �� ��ŬŸ�� ��� ���� �ڱ� �ڽ��� ����
													// ��Ŭ ������� ��� �湮
			cnt++;									// �ڱ� �ڽ��� �����ش�
		}
		done[x] = 1; // �湮�ߴ��� ��� ���� done 1.
					 // stack���� �湮�� ��� ���
		             // done 1�� ä������
	}
	//!! �̰� ��� ���� ���� ���ϱ�!
}


int main()
{
	int t, n;
	scanf("%d", &t);
	while (t--)
	{
		scanf("%d", &n);

		memset(check, 0, sizeof(check));
		memset(done, 0, sizeof(done));
		for (int i = 1; i <= n; i++) G[i].clear();
		cnt = 0;

		for (int i = 1; i <= n; i++)
		{
			int temp = 0;
			scanf("%d", &temp);
			G[i].push_back(temp);
		}
		for (int i = 1; i <= n; i++)
			if (check[i] == 0) DFS(i);
		printf("%d\n", n-cnt);

	}
	return 0;
}*/


/*
DFS check�� �̿�
���� ��ŭ �湮�ϸ� ���� ���� -> �ð� �ʰ�
5
5 3 4 5 1 �� ���� 4��� ������ �̷��� ��.
�ٸ� ��� �������� ����
*/

/*
������ �ϳ����� �ִ� �׷������� 
Ž���ϸ� ���ο��� �湮�Ѱ� �� �湮 �ϸ� ����Ŭ�� ����
*/

