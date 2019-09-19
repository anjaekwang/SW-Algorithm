/*#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stack>
#include <algorithm>
#include <string.h>

using namespace std;

char a[1000000 + 2];
char b[36 + 2];


int main()
{
	fgets(a, sizeof(a) / sizeof(char), stdin);
	fgets(b, sizeof(b)/sizeof(char), stdin);
	stack<char> s;
	int aLen = strlen(a)-1;
	int bLen = strlen(b)-1;

	for (int i = 0; i < aLen; i++) 
	{
		s.push(a[i]);
		if (s.size() >= bLen) 
		{
			char temp[36 + 1];
			for (int j = 0; j < bLen; j++) 
			{
				temp[j] = s.top();
				s.pop();
			}
			reverse(temp, temp + bLen);
			temp[bLen] = '\n';
			temp[bLen+1] = '\0';

			if (strcmp(temp, b) == 0) continue;
			else 
			{
				for (int j = 0; j < bLen; j++)
				{
					s.push(temp[j]);
				}
			}
		}
	}

	int size = s.size();
	if (size == 0) printf("FRULA");
	else
	{
		//reverse후 출력
		stack<char> ans;
		for (int i = 0; i < size; i++)
		{
			ans.push(s.top());
			s.pop();
		}
		for (int i = 0; i < size; i++) 
		{
			printf("%c", ans.top());
			ans.pop();
		}

	}

	system("pause");
	return 0;
}*/

/*
stack의 개수는 연산 행위 개수?
ex
검열 같은 경우 앞문자 뒤문자의 행위 2개 가있으므로 2개
문자열 폭발은 순서대로 앞에서만 이뤄 지므로 1개

fgets의 2번째인자는 저장할수 있는 최대길이
fgets는 개행문자 까지 저장하므로
\n\0 총 2개의 메모리 여유공간이 필요함
(문자열의 끝은 항상 \0임을 잊지 말기)
*/