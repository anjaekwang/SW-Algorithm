#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <queue>

using namespace std;

int ex1158() 
{
	int M, N, idx;
	queue<int> q, die;

	scanf("%d %d", &N, &M);

	for (int i = 1; i <= N; i++) q.push(i);
	
	while (!q.empty()) 
	{
		for (int i = 0; i < M; i++)
		{
			if (i == M - 1) die.push(q.front());
			else q.push(q.front());
			q.pop();
		}
	}

	printf("<");
	for (int i = 0; i < N; i++)
	{
		if (i != N-1) printf("%d, ", die.front());
		else printf("%d>\n", die.front());
		die.pop();
	}

	return 0;
}
/*
조세퍼스
N명이 원으로 앉아있고 M번째 사람 제거 
제거순서 명단 보이면 됨
(1<= M <= N <= 5000)
입력 N M

문제특징 : 
 - 살아있는 명단 필요함
   차례차례 뒤로감 다시 들어가면서 M번째 애는 죽은명단으로

   ---
   <--  이런식으로 자료형이 방향성 있음 que로구현!
   ---
*/