/*#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <queue>
#include <map>
#include <string>

using namespace std;

int dy[4] = { 0,-1,0,1 };
int dx[4] = { -1,0,1,0 };
map<int, int> dist;
queue<int> q;
int main()
{
	int start=0;
	for (int i = 0; i < 3; i++) 
	{
		for (int j = 0; j < 3; j++) 
		{
			int temp;
			scanf("%d", &temp);
			if (temp == 0) temp = 9;
			start = start * 10 + temp;
		}
	}

	q.push(start);
	while (!q.empty()) 
	{
		int _now = q.front();
		string  now = to_string(_now);
		int z = now.find('9');
		int y = z % 3;
		int x = z / 3;

		for (int i = 0; i < 4; i++) 
		{
			int ny = y + dy[i];
			int nx = x + dx[i];

			if (nx < 0 || nx >=3 || ny < 0 || ny>=3) continue;
			else 
			{
				string next = now;
				swap(next[x * 3 + y], next[nx * 3 + ny]);
				int num = stoi(next);
				if (dist.count(num) == 0) 
				{
					q.push(num);
					dist[num] = dist[_now] + 1;
				}
			}
		}
		q.pop();
	}
	if(dist.count(123456789)) printf("%d", dist[123456789]);
	else printf("-1");
	
	system("pause");
	return 0;
}*/

/*

���� .

state�� ���� �������� �𸣰��� -> ���Ǻ�
������ state�� �����ϴ� ��� -> ���� 1���� ǥ���ؾ��Ѵ�.
������ ���Ұ� ���ڸ� �� �̹Ƿ� �̸� �Ϸķ� �����Ͽ� ������ �����Ѵ�

cf) idx�� 0~n�̶� �θ� ������������ y = idx / �ʺ�, x = idx % �ʺ�, �ʺ� ������� �׷��� ���̹Ƿ�
���� �������� �������� �ݴ�
and
�̷��� ���� y,x�� ���� �ٽ� idx���Ϸ��� idx = �ʺ� * y + x ���ȴ�

string ���� �޼ҵ�
to_string
stoi
find

map���� �޼ҵ�
.count() �ִ��� bool
-> �̷��� state�� �������� ������ (1,2,3,4 �̷��� �ƴ� 12,24,28 ����) ������
*/
