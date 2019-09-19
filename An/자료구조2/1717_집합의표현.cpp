/*#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int p[1000000 + 1] = { 0, };

int find(int x) 
{
	if (p[x] == x) return x; //루트노드
	else 
	{
		return p[x] = find(p[x]);
	}
}

void Union(int x, int y) 
{
	int tempX = find(x);
	int tempY = find(y);
	p[tempY] = tempX;
}


int main()
{
	int n, m;
	scanf("%d %d", &n, &m);

	for (int i = 0; i < n + 1; i++) p[i] = i;

	while (m--) 
	{
		int Case, x, y;
		scanf("%d%d%d", &Case, &x, &y);

		if (Case) 
		{
			int Rx = find(x);
			int Ry = find(y);
			if (Rx == Ry) printf("YES\n");
			else printf("NO\n");
		}
		else //합집합
		{
			Union(x, y);
		}
	}
	system("pause");
	return 0;
}*/

/*
유니온 파인드 기초 구현
*/