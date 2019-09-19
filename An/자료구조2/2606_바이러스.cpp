/*#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int p[100 + 1] = { 0, };

int Find(int x) 
{
	if (p[x] == x) return x;
	else 
	{
		return p[x] = Find(p[x]);
	}
}

void Union(int x, int y) 
{
	x = Find(x);
	y = Find(y);
	if(x!=y)p[y] = x;
}

int main()
{
	int N, E;
	scanf("%d %d", &N, &E);
	for (int i = 1; i <= N; i++) p[i] = i;
	while (E--) 
	{
		int a, b;
		scanf("%d %d", &a, &b);
		Union(a, b);
	}
	int ans = 0;
	for (int i = 2; i <= N; i++) 
	{
		if (Find(i) == Find(1)) ans++;
	}
	printf("%d\n", ans);
	system("pause");
	return 0;
}*/

/*
�̹����� �׷����ε� Ǯ�̰��� 
but ������ ���꿡�� �����ո� �ֱ⶧���� �ſ� ���� ������ Ǯ�� ���� 

Union�� xy������ ���� rootNode�� �޶����ⶫ��
�켱 �Է����� ������ ����� 
Ư�� Node�� ���յ� �˱����ؼ� for�� ���� find(i) == find(Ư�����)
�� Ȯ���Ѵ�
*/