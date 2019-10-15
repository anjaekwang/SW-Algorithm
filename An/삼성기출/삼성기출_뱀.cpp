#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>
#include <queue>


using namespace std;

int n, k, l; // ��ũ��, �������, ������ȯ
vector<pair<int, int>> appleLoc;
vector<pair<int, int>> snake;
vector<pair<int, char>> dir;

int cnt = 0;
int nowDir = 1; //0123 �������

bool isapple(int y, int x) // �ش� ��ġ�� ����� �����ϴ���?
{
	int size = appleLoc.size();
	for (int i = 0; i < size; i++)
	{
		if (appleLoc[i].first == y && appleLoc[i].second == x)
		{
			appleLoc.erase(appleLoc.begin() + i);
			return true;
		}
	}
	return false;
}

bool bump(int y, int x) //������ �ε������� 
{
	int size =  snake.size();
	for (int i = 0; i < size; i++) 
		if (snake[i].first == y && snake[i].second == x) return true;
	return false;
}

bool ispossible(int y, int x, int nowCnt)  // ���������� ���� �Ӹ��� ��ġ�Ҽ� �ִ°�?
{
	switch (nowDir) //���� �ϱ� 
	{
		case 1: 
			x += 1;
			break;
		case 2: 
			y += 1;
			break;
		case 3:
			x -= 1;
			break;
		case 0:
			y -= 1;
			break;
	}
	if (y >= n || y < 0 || x >= n || x < 0 || bump(y, x)) return false;
	else return true;
}

// snake�� �ǵڰ� �Ӹ�
bool move()
{
	pair<int, int> head;
	head = make_pair(snake.back().first, snake.back().second);
	if (ispossible(head.first, head.second, cnt)) 
	{
		switch (nowDir) //������ȯ
		{
			case 1:
				head.second += 1;
				break;
			case 2:
				head.first += 1;
				break;
			case 3:
				head.second -= 1;
				break;
			case 0:
				head.first -= 1;
				break;
		}

		snake.push_back(head);
		if (!isapple(head.first, head.second))
			snake.erase(snake.begin());
		cnt++;
		int size =  dir.size();
		for (int i = 0; i < size; i++)  //������ȯ, ����, ��������� L(����),D(������)
		{
			if (dir[i].first == cnt)
			{
				if (dir[i].second == 'L') nowDir = ((nowDir - 1) + 4) % 4;
				else nowDir = (nowDir + 1) % 4;
			}
		}
		return true;
	}
	else return false;
}

int main()
{
	scanf("%d", &n);
	scanf("%d", &k);

	for (int i = 0; i < k; i++)  //��� ��ġ����
	{
		int a, b;
		scanf("%d %d", &a, &b);
		appleLoc.push_back(make_pair(a-1, b-1));
	}

	scanf("%d", &k);
	for (int i = 0; i < k; i++) //���� ��ȯ ����
	{
		int a; char b;
		scanf("%d %c", &a, &b);
		dir.push_back(make_pair(a, b));
	}
	snake.push_back(make_pair(0, 0));
	while (move()) { continue; }

	printf("%d", cnt+1);

	system("pause");
	return 0;
}
/*
<����>
- ��or �ڽ� �ε����� ��
- ��������� ���� +1
- �����϶� �Ӹ����� +1 �Ͽ� ��ġ
 -> ��� ������ �״��

- �̵���ΰ� �־����� ����̵�?

<�߻� ���� & �ذ�>
�������̽� ��� ã��
-> �ݷ� �������� ã�� �Ф� 
��� �԰� ����°Ÿ� ��������

<stl>
-a.erase(a.begin()+i); �Ͻø� i�� �ε����� ���Ұ� ����

*/