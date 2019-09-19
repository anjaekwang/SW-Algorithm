/*#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> ans;
vector<vector<int>> state;

bool search(vector<int> a) 
{
	int size = state.size();
	for (int i = 0; i < size; i++)
		if (a == state[i]) return true;
	return false;
}

int main()
{
	int v[3];
	scanf("%d%d%d", &v[0], &v[1], &v[2]);


	vector<int> start(3, 0);
	start[2] = v[2];

	queue<vector<int>> q;
	state.push_back(start);
	q.push(start);
	ans.push_back(v[2]);

	while (!q.empty()) 
	{
		vector<int> now = q.front();
		for (int i = 0; i < 3; i++) 
		{
			if (now[i])//���� �����Ѵٸ�
			{
				for (int j = 1; j <= 2; j++) 
				{
					vector<int> next(3,0);
					int moveTo = (i+j) % 3;
					//i���� moveTo�� ���� �ű��
					next[moveTo] = now[i] + now[moveTo];
					next[i] = 0;

					if (v[moveTo] < next[moveTo]) 
					{
						next[i] = next[moveTo] - v[moveTo];
						next[moveTo] = v[moveTo];
					}

					next[3-(i+moveTo)] = now[3 - (i + moveTo)];

					if (!search(next)) 
					{
						q.push(next);
						state.push_back(next);
						if (next[0] == 0) ans.push_back(next[2]);
					}
				}
			}
		}
		q.pop();
	}
	
	int size = ans.size();
	sort(ans.begin(), ans.end());
	for (int i = 0; i < size; i++)printf("%d ", ans[i]);
	system("pause");
	return 0;
}*/

/*
�ܽǼ��� ���Ƽ� ������ϴµ� �ð��� ���̰ɸ�.
state�� vector�� �����ߴ�
vector ��� ���� �� ==
�̷� ����(state�� �ϳ��� ������ �ƴѰ�)�� state�� �����ϰ�
next state��  ������� state�� ���� ���Ҷ��� Ǫ��
n������ n-1�� ���� �������� ��Ÿ���� n-(��) �ϸ� �ٷ� ��Ÿ��
state�� � �ڷ������� �Ҳ��ΰ��� ���ؼ� �� �ð��� �ɸ���..


*/