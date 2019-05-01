#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string.h>
#include <queue>

using namespace std;

int ex10845()
{
	int t, b;
	char a[10];
	queue<int> q;
	scanf("%d", &t);
	
	while (t--) 
	{
		scanf("%s", a);
		if (!strcmp(a, "push")) 
		{
			scanf("%d", &b);
			q.push(b);
		}
		else if (!strcmp(a, "pop")) 
		{
			if (q.empty()) printf("%d\n", -1);
			else 
			{
				printf("%d\n", q.front());
				q.pop();
			}
		}
		else if (!strcmp(a, "size")) printf("%d\n", q.size());
		else if (!strcmp(a, "empty")) 
		{
			if (q.empty()) printf("%d\n", 1);
			else printf("%d\n", 0);
		}
		else if (!strcmp(a, "front")) 
		{
			if (q.empty()) printf("%d\n", -1);
			else printf("%d\n", q.front());
		}
		else if (!strcmp(a, "back")) 
		{
			if (q.empty()) printf("%d\n", -1);
			else printf("%d\n", q.back());
		}
	}

	return 0;
}
/*
큐 구현

문제특징 : 없음
*/