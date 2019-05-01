#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stack>
#include<string.h>

using namespace std;

int EX10828() 
{
	int t,a;
	char command[10];
	stack<int> s;

	scanf("%d", &t);
	while (t--)
	{
		//fgets(command, 10, stdin); //왜안들어가지?
		scanf("%s", command);

		if (!strcmp(command, "push"))
		{
			scanf("%d", &a);
			s.push(a);
		}
		else if(!strcmp(command, "pop"))
		{
			if (s.empty()) printf("%d\n", -1);
			else
			{
				printf("%d\n", s.top());
				s.pop();
			}
		}
		else if(!strcmp(command, "size")) printf("%d\n",s.size());
		else if (!strcmp(command, "top"))
		{
			if (s.empty()) printf("%d\n", -1);
			else printf("%d\n", s.top());
		}
		else if (!strcmp(command, "empty"))
		{
			if (s.empty()) printf("%d\n", 1);
			else printf("%d\n", 0);
		}
	}
	system("pause");
	return 0;
}
