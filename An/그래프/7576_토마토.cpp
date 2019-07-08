/*#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <queue>
#include <utility>
#include <vector>


using namespace std;

int M, N; //M:y N :x
int map[1000][1000] = { {0,0}, };
int check[1000][1000] = { {0,0}, };
int day = 0;
int dy[4] = { -1,1,0,0 };
int dx[4] = { 0,0,-1,1 };

// �߰��� �������� �湮�Ҽ� �ִ� ���� �湮 ��Ű��
// ���� �ܰ谡 ������ �˾ƾ���
void BFS(vector<pair<int, int>> a) 
{
	queue<pair<int, int>> q;
	for (int i = 0; i < a.size(); i++) 
	{
		pair<int, int> temp = a[i];
		int y = temp.first;
		int x = temp.second;
		check[y][x] = 1;
		q.push(make_pair(y, x));

	}

	while (!q.empty()) 
	{
		int qSize = q.size();
		for (int j = 0; j < qSize; j++) 
		{
			pair<int, int> curNode = q.front();
			for (int i = 0; i < 4; i++)
			{
				int ny = curNode.first + dy[i]; //cur���� �����ִ� ����
				int nx = curNode.second + dx[i];

				if (ny >= 0 && nx >= 0 && nx < N&& ny < M) 
				{
					if (!check[ny][nx] && !map[ny][nx])
					{
						check[ny][nx] = 1;		// map���̷��� �Ǹ� -1�ΰ��� 1�ΰ� �湮 ����
						map[ny][nx] = 1;
						q.push(make_pair(ny, nx));
					}
				}
			}
			q.pop(); //�̿��� ������ pop��Ŵ.
		}
		if(!q.empty()) day++; 
		// Ư�� ������ �����°� �ƴϱ⿡
		// ������ �߰� ���ϸ� �ٳ����� �������� +��

		//printf("\n");
		//for (int j = 0; j < M; j++) 
		//{
		//	for (int i = 0; i < N; i++) 
		//	{
		//		printf("%d ", map[j][i]);
		//	}
		//	printf("\n");
		//}
		//system("pause");
	}
 }



int main()
{
	scanf("%d%d", &N, &M);
	for (int y = 0; y < M; y++) 
	{
		for (int x = 0; x < N; x++)
		{
			int temp;
			scanf("%d", &temp);
			map[y][x] = temp;
		}
	}
	
	vector<pair<int, int>> a;
	//1�� �ִ°�(�丶�䰡 �ִ°�)���� BFS����
	for (int y = 0; y < M; y++)
	{
		for (int x = 0; x < N; x++)
		{
			if (map[y][x] == 1 && !check[y][x]) a.push_back(make_pair(y, x));
		}
	}
	BFS(a);

	int flag = 0;
	for (int y = 0; y < M; y++)
	{
		for (int x = 0; x < N; x++)
		{
			if (map[y][x] == 0) flag = 1;
		}
	}

	if (flag) printf("-1\n");
	else printf("%d\n", day);
	system("pause");

}*/

//�켱 �ϳ����� �غ���

/*
find �丶�� ���ͰԵǴ� �ּ� �ϼ�
0 ������ 1 ���� -1 ��
���並 �߽����� �Ϸ� ������ ���� �ٲ��
�� BFS �ܰ踦 ���ϸ�ȴ�. 

1. ���ÿ� ��� ���䰡 ���۵Ǿ���� ->How to?
2. 0�� ���������� -1

�����ٽ� : ��带 ���ÿ� BFS�ؼ� �����¹�.
!! �߿�.
���ÿ� �����ؾ��ϴ� ������ �ʱ⿡ ť�� ���ʴ�� �־��ָ� �ȴ�.

*/