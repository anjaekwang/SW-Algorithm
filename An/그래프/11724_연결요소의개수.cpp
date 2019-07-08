/*#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int cnt = 0;
int check[1001] = { 0, };
queue<int> q;
vector<int> E[1001]; //��������


void BFS(int i) 
{
	check[i] = 1;
	q.push(i);

	while (!q.empty()) //q�� ����������� cnt +=1
	{
		int cur = q.front(); //���� ���
		for (int j = 0; j < E[cur].size(); j++) //�����尡 �����ִ� ��� ��� �湮
		{
			int temp = E[cur][j];
			if (check[temp] == 0)
			{
				check[temp] = 1;
				q.push(temp);
			}
		}
		q.pop();
	}
	cnt++;
}

int main()
{
	int N, M;


	scanf("%d %d", &N, &M);

	for (int i = 0; i < M; i++) //������ ��ŭ 
	{
		int temp1, temp2;
		scanf("%d %d", &temp1, &temp2);
		E[temp1].push_back(temp2);
		E[temp2].push_back(temp1);
	}

	for (int i = 1; i <= N; i++) // Ž��
	{
		if (check[i] == 0) 
		{
			BFS(i);
		}
	}
	printf("%d\n", cnt);
	system("pause");
	return 0;
}*/
/*
�������� ����, �� �׷����� � ���������?
E���տ� ��� �����ϰ�
BFS��� ������ ���� cnt ++
*/