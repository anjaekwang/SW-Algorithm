/*#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>
#include <memory.h>

using namespace std;

int check[100000 + 1] = { 0, };
int done[100000 + 1] = { 0, };
int cnt;
vector<int> G[100000 + 1];

void DFS(int x)
{
	check[x]= 1;
	for (int i = 0; i < G[x].size(); i++)
	{
		int temp = G[x][i];
		if (check[temp] == 0)
			DFS(temp);
		// 이미 완전히 끝났다 판단되는거는 cnt 안하기 위해
		// 써클 찾는 문제 이므로 이미 방문해서 써클안되는 노드는 절때 써클 안됨(간선 한개씩 일시에)
		else if(!done[temp])		// 재귀 마치면 마칠 당시를
			                        // x라 하면 (x-1, x)쌍
									// 그다음은 (x-2, x-1) 쌍
									
		{
			for (int j = temp; j != x; j = G[j][0]) // 마지막 노드가 써클이룸
				cnt++;							    // 그 써클타고 계속 돌면 자기 자신이 나옴
													// 써클 멤버들을 모두 방문
			cnt++;									// 자기 자신을 세워준다
		}
		done[x] = 1; // 방문했던거 모두 이제 done 1.
					 // stack인해 방문한 노드 모두
		             // done 1이 채워진다
	}
	//!! 이거 재귀 순서 정리 잘하기!
}


int main()
{
	int t, n;
	scanf("%d", &t);
	while (t--)
	{
		scanf("%d", &n);

		memset(check, 0, sizeof(check));
		memset(done, 0, sizeof(done));
		for (int i = 1; i <= n; i++) G[i].clear();
		cnt = 0;

		for (int i = 1; i <= n; i++)
		{
			int temp = 0;
			scanf("%d", &temp);
			G[i].push_back(temp);
		}
		for (int i = 1; i <= n; i++)
			if (check[i] == 0) DFS(i);
		printf("%d\n", n-cnt);

	}
	return 0;
}*/


/*
DFS check을 이용
노드수 만큼 방문하면 루프 참여 -> 시간 초과
5
5 3 4 5 1 과 같이 4노드 때문에 이렇게 함.
다른 방법 떠오르지 않음
*/

/*
간선이 하나씩만 있는 그래프에서 
탐색하면 내부에서 방문한곳 또 방문 하면 싸이클이 생김
*/

