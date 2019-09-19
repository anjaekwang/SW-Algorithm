/*#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>
#include <queue>
#include <memory.h>

using namespace std;

int a, b, tempA[4];
int check[100000] = { 0, };
vector<int> ans[100000];

void vClear() 
{
	for (int i = 0; i < 100000; i++) ans[i].clear();
}

void splitA(int a) 
{
	int temp = a;
	for (int i = 0; i < 4; i++)
	{
		tempA[3-i] = temp % 10;
		temp /= 10;
	}
}

int merge() 
{
	int temp = 0;
	for (int i = 0; i < 4; i++) 
	{
		temp = temp * 10 + tempA[i];
	}
	return temp;
}

void solution() 
{
	queue<int> q;
	check[a] = 1;
	q.push(a);

	while (!q.empty()) 
	{
		int cur = q.front();
		//all case
		for (int i = 0; i < 4; i++)
		{
			int temp, next;
			switch (i)
			{
			case 0:
				next = (cur * 2) % 10000;
				break;
			case 1:
				if (cur == 0) next = 9999;
				else next = cur -1;
				break;
			case 2:
				splitA(cur);
				temp = tempA[0];
				for (int i = 0; i < 3; i++)
					tempA[i] = tempA[i + 1];
				tempA[3] = temp;
				next = merge();
				break;
			case 3:
				splitA(cur);
				temp = tempA[3];
				for (int i = 3; i > 0; i--)
					tempA[i] = tempA[i-1];
				tempA[0] = temp;
				next = merge();
				break;
			}
			if (!check[next]) 
			{
				ans[next].assign(ans[cur].begin(), ans[cur].end());
				ans[next].push_back(i);
				check[next] = 1;
				q.push(next);
			}
		}
		q.pop();
	}

	int size = ans[b].size();
	for (int i = 0; i < size; i++)
	{
		switch (ans[b][i])
		{
		case 0: printf("D"); break;
		case 1: printf("S"); break;
		case 2: printf("L"); break;
		case 3: printf("R"); break;
		}
	}
	printf("\n");
}


int main()
{
	int t;
	scanf("%d", &t);
	while (t--) 
	{
		scanf("%d %d", &a, &b);
		solution();

		memset(check, 0, sizeof(check));
		vClear();
	}
	system("pause");
	return 0;
}*/

/*
string 연산 느려서 숫자로 넣음 -> 시간초과해결
벡터 전체복사
ans[next].assign(ans[cur].begin(), ans[cur].end());
*/