/*#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <queue>
#include <memory.h>
#include <algorithm>

#define MAX 9999

using namespace std;

int check[MAX] = { 0, };
int dist[MAX] = { 0, };
int a, b;

int Func(int cur, int a, int val) //ÀÚ¸®, °ª 
{
	int b[4];
	for (int i = 0; i < 4; i++)
	{
		b[i] = cur % 10;
		cur /= 10;
	}
	reverse(b, b + 4);

	b[a] = val;

	int temp=0;
	for (int i = 0; i < 4; i++)
	{
		int num = 3 - i;
		int temp2 = b[i];
		for (int j = 0; j < num; j++)
		{
			temp2 *= 10;
		}
		temp += temp2;
	}
	return temp;
}

bool prime(int x) 
{
	if (x == 2) return false;
	for (int i = 2; i*i <= x; i++) 
	{
		if (x % i == 0) return false;
	}
	return true;
}

void solution() 
{
	queue<int> q;
	q.push(a);
	check[a] = 1;

	while (!q.empty()) 
	{
		int cur = q.front();

		for (int i = 0; i < 4; i++) 
		{
			for (int j = 0; j < 10; j++) 
			{
				if (i == 0 && j == 0) continue;
				
				int next = Func(cur,i, j);
				if (prime(next) && !check[next]) 
				{
					check[next] = 1;
					dist[next] = dist[cur] + 1;
					q.push(next);
				}
				
			}
		}
		q.pop();
	}
	printf("%d\n", dist[b]);
}
int main()
{
	int t;
	scanf("%d", &t);
	while (t--) 
	{
		scanf("%d%d", &a, &b);
		solution();
		memset(check, 0, sizeof(check));
		memset(dist, 0, sizeof(dist));
	}

	system("pause");
	return 0;
}*/
