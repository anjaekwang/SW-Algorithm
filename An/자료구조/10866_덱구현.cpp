#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <deque>
#include <string.h>


using namespace std;

int ex10866()
{
	deque<int> dq;
	int t,x;
	char a[20];
	
	scanf("%d", &t);
	while (t--) 
	{
		scanf("%s", a);
		if (!strcmp(a, "push_front")) 
		{
			scanf("%d", &x);
			dq.push_front(x);
		}
		else if (!strcmp(a, "push_back")) 
		{
			scanf("%d", &x);
			dq.push_back(x);
		}
		else if (!strcmp(a, "pop_front"))
		{
			if (dq.empty()) printf("%d\n", -1);
			else 
			{
				printf("%d\n", dq.front());
				dq.pop_front();
			}
		}
		else if (!strcmp(a, "pop_back")) 
		{
			if (dq.empty()) printf("%d\n", -1);
			else
			{
				printf("%d\n", dq.back());
				dq.pop_back();
			}
		}
		else if (!strcmp(a, "size")) printf("%d\n", dq.size());
		else if (!strcmp(a, "empty")) 
		{
			if (dq.empty()) printf("%d\n", 1);
			else printf("%d\n", 0);
		}
		else if (!strcmp(a, "front")) 
		{
			if (dq.empty()) printf("%d\n", -1);
			else printf("%d\n", dq.front());
		}
		else if (!strcmp(a, "back")) 
		{
			if (dq.empty()) printf("%d\n", -1);
			else printf("%d\n", dq.back());
		}
	}

	system("pause");
	return 0;
}
