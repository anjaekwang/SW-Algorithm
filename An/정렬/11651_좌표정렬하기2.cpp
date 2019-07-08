/*#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>

using namespace std;

typedef struct 
{
	int x; int y;
}point;

bool cmp(const point &a, const point &b) 
{
	if (a.x < b.x) return true;
	else if (a.x == b.x)
	{
		if (a.y < b.y) return true;
		else return false;
	}
	else return false;
}
int main()
{
	int N;
	scanf("%d", &N);
	point* a = (point*)calloc(N, sizeof(point));
	for (int i = 0; i < N; i++) 
	{
		scanf("%d %d", &(a + i)->x, &(a + i)->y);
	}
	sort(a, a + N, cmp);
	for (int i = 0; i < N; i++)
	{
		printf("%d %d\n", (a + i)->x, (a + i)->y);
	}
	system("pause");
	return 0;
}*/