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
			if (now[i])//물이 존재한다면
			{
				for (int j = 1; j <= 2; j++) 
				{
					vector<int> next(3,0);
					int moveTo = (i+j) % 3;
					//i에서 moveTo로 물을 옮긴다
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
잔실수가 많아서 디버깅하는데 시간이 많이걸림.
state를 vector로 저장했다
vector 모든 원소 비교 ==
이런 문제(state가 하나의 정수가 아닌것)는 state를 저장하고
next state가  기존모든 state에 존재 안할때만 푸시
n개수중 n-1개 고르고 나머지를 나타낼때 n-(합) 하면 바로 나타남
state를 어떤 자료형으로 할꺼인가에 대해서 좀 시간이 걸린듯..


*/