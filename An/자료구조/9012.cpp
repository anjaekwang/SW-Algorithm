#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stack>

int EX9012()
{
	int t, stack, len;
	char a[51];

	scanf("%d", &t);
	while (t--)
	{
		stack = 0;
		scanf("%s", a);
		len = strlen(a);

		for (int i = 0; i < len; i++)
		{
			if (a[i] == '(') stack++;
			else 
			{
				stack--;
				if (stack < 0) break;
			} 
		}
		if (stack == 0) printf("YES\n");
		else printf("NO\n");
	}
	system("pause");
	return 0;
}


