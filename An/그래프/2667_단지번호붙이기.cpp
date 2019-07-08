/*#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int check[26 * 26] = { 0, };
vector<int> G[26];

//���� ���� ��ȯ
int BFS(int x)
{
	queue<int> q;
	check[x] = 1;
	q.push(x);
	int cnt = 1;

	while (!q.empty())
	{
		int temp = q.front();
		for (int i = 0; i < G[temp].size(); i++)
		{
			int neighbor = G[temp][i];
			if (check[neighbor] == 0)
			{
				check[neighbor] = 1;
				q.push(neighbor);
				cnt++;
			}
		}
		q.pop();
	}
	return cnt;
}
void Housefree(int** house, int N)
{
	for (int i = 0; i < N; i++)
		free(house[i]);
	free(house);
}

int main()
{
	int N;
	scanf("%d", &N);
	int** house = (int**)calloc(N, sizeof(int*));
	for (int i = 0; i < N; i++)
		house[i] = (int*)calloc(N, sizeof(int));


	// �� ���� 
	for (int i = 0; i < N; i++)
	{
		char* temp = (char*)calloc(N + 1, sizeof(char));
		scanf("%s", temp);

		for (int j = 0; j < N; j++)
			house[i][j] = (int)(temp[j] - '0');
		free(temp);
	}
	int VNum = 1;

	//Vertex ����
	for (int y = 0; y < N; y++)
	{
		for (int x = 0; x < N; x++)
		{
			if (house[y][x] == 1)
				house[y][x] = VNum++;
		}
	}

	//�����¿� :y-1 y+1 x-1 x+1
	for (int y = 0; y < N; y++)
	{
		for (int x = 0; x < N; x++)
		{
			if (y == N - 1 && x == N - 1) break;

			if (house[y][x] != 0)
			{
				if (x == N - 1) // �� ������
				{
					if (y == 0)
					{
						if (house[y + 1][x] != 0) // �Ʒ�
							G[house[y][x]].push_back(house[y + 1][x]);
					}
					else if (y == N - 1)
					{
						if (house[y - 1][x] != 0) // ��
							G[house[y][x]].push_back(house[y - 1][x]);
					}
					else
					{
						if (house[y - 1][x] != 0) // ��
							G[house[y][x]].push_back(house[y - 1][x]);
						if (house[y + 1][x] != 0) // �Ʒ�
							G[house[y][x]].push_back(house[y + 1][x]);
					}

					if (house[y][x - 1] != 0) // ����
						G[house[y][x]].push_back(house[y][x - 1]);
				}
				else if (y == N - 1) // �� �Ʒ�
				{
					if (x == 0) // �� ����
					{
						if (house[y - 1][x] != 0) // ��
							G[house[y][x]].push_back(house[y - 1][x]);
					}
					else
					{
						if (house[y - 1][x] != 0) // ��
							G[house[y][x]].push_back(house[y - 1][x]);
						if (house[y][x - 1] != 0) // ����
							G[house[y][x]].push_back(house[y][x - 1]);
					}
					if (house[y][x + 1] != 0) // ������
						G[house[y][x]].push_back(house[y][x + 1]);
				}
				else if (y == 0) //�� ��
				{
					if (x == 0)
					{
						if (house[y + 1][x] != 0) // �Ʒ�
							G[house[y][x]].push_back(house[y + 1][x]);
					}
					else
					{
						if (house[y][x - 1] != 0) // ����
							G[house[y][x]].push_back(house[y][x - 1]);
						if (house[y + 1][x] != 0) // �Ʒ�
							G[house[y][x]].push_back(house[y + 1][x]);
					}
					if (house[y][x + 1] != 0) // ������
						G[house[y][x]].push_back(house[y][x + 1]);
				}
				else if (x == 0)//�� ����
				{
					if (house[y + 1][x] != 0) // �Ʒ�
						G[house[y][x]].push_back(house[y + 1][x]);
					if (house[y][x + 1] != 0) // ������
						G[house[y][x]].push_back(house[y][x + 1]);
					if (house[y - 1][x] != 0) // ��
						G[house[y][x]].push_back(house[y - 1][x]);
				}
				else
				{
					//�����¿� :y-1 y+1 x-1 x+1

					if (house[y + 1][x] != 0) // �Ʒ�
						G[house[y][x]].push_back(house[y + 1][x]);
					if (house[y][x + 1] != 0) // ������
						G[house[y][x]].push_back(house[y][x + 1]);
					if (house[y - 1][x] != 0) // ��
						G[house[y][x]].push_back(house[y - 1][x]);
					if (house[y][x - 1] != 0) // ����
						G[house[y][x]].push_back(house[y][x - 1]);
				}
			}

		}
	}

	int cnt = 0;
	vector<int> result;
	for (int i = 1; i <= VNum - 1; i++)
	{
		if (check[i] == 0)
		{
			result.push_back(BFS(i));
			cnt++;
		}
	}
	printf("%d\n", cnt);

	sort(result.begin(), result.end());
	for (int i = 0; i < result.size(); i++)
		printf("%d\n", result[i]);
	system("pause");

	Housefree(house, N);
	return 0;
}*/


/*
ó������ ���� ���� �̿����踦 �ľ��ϰ� �׷����� �������ϴ� ����
�迭�� ������ ������ ������ ��� �׷����� �����ұ�?
 ->
 ù��° �õ�
 ��� �迭�� ��� ��ȣ�� ���ʴ�� �ְ� ������ ���� �̿�������
 ���! ���� ������ �����Ѵ�. : ������ Ǯ�� ��� �Ȱ���.


 �켱 ���ڵ��� ������:
 ���� yx�� ���Ͽ� �����¿츦 �ѹ��� ������ �ϴϱ�
 ���ǹ� ��û�����

 �׷������� yx������ �׶����� �����ΰ��� �Ϸΰ���..
 �� �ذ��ϱ�
 dx = {0,0,-1,1} dy = {1-1-00}������
*/
