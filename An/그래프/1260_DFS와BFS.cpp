/*#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>



using namespace std;

int check[1001] = {0,};
vector<int> a[1001];// 그래프


// 방문 한다를 의미
void DFS(int x) 
{
	check[x] = 1;
	printf("%d ", x);
	
	for (int i = 0; i < a[x].size(); i++)	//갈수있는곳중
	{
		int temp = a[x][i];
		if (check[temp] == 0)
			DFS(temp);
	}
}

void BFS(int x) 
{
	queue<int> q;
	check[x] = 1;
	q.push(x);
	printf("%d ", x);

	while (!q.empty())
	{
		int temp1 = q.front();
		for (int i = 0; i < a[temp1].size(); i++)
		{
			int temp = a[temp1][i];
			if (check[temp] == 0) 
			{
				check[temp] = 1;
				q.push(temp);
				printf("%d ", temp);
			}
		}
		q.pop();

	}
	
}

int main()
{
	int N, M, start;
	
	scanf("%d%d%d", &N, &M, &start);

	//그래프 생성, 인접리스트
	for (int i = 1; i <= M; i++) 
	{
		int temp1, temp2;
		scanf("%d %d", &temp1, &temp2);
		a[temp1].push_back(temp2);
		a[temp2].push_back(temp1);
	}
	for (int i = 1; i <= 1000; i++) 
	{
		sort(a[i].begin(), a[i].end());
	}
	DFS(start);
	printf("\n");
	for (int i = 1; i <= 1000; i++) check[i] = 0;
	BFS(start);
	printf("\n");


	system("pause");
	return 0;
}
*/