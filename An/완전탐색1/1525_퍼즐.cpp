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

좋음 .

state를 어찌 저장할지 모르겠음 -> 강의봄
이차원 state를 저장하는 방법 -> 정수 1개로 표현해야한다.
이차원 원소가 한자리 수 이므로 이를 일렬로 나열하여 정수로 저장한다

cf) idx를 0~n이라 두면 이차원에서는 y = idx / 너비, x = idx % 너비, 너비 개수대로 그룹이 묶이므로
높이 기준으로 묶을때는 반대
and
이렇게 구한 y,x를 통해 다시 idx구하려면 idx = 너비 * y + x 가된다

string 유용 메소드
to_string
stoi
find

map유용 메소드
.count() 있는지 bool
-> 이렇게 state가 연속적이 않을때 (1,2,3,4 이런게 아닌 12,24,28 같이) 유용함
*/
