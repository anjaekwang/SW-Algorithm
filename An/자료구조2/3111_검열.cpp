/*#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string.h>
#include <stack>
#include <algorithm>

using namespace std;

char t[300000 + 1];
char a[25 + 1];

stack<char> s1;
stack<char> s2;

int Size(int i) 
{
	if (i) 
	{
		int size = (sizeof(t) / sizeof(char));
		for (int i = 0; i < size; i++)
		{
			if (t[i] == '\n')
				return i;
		}
	}
	else 
	{
		int size = (sizeof(a) / sizeof(char));
		for (int i = 0; i < size; i++)
		{
			if (a[i] == '\n')
				return i;
		}
	}
}


void solution(int aLen, int tLen) 
{
	int L=0, R=tLen-1;
	while (L <= R) 
	{
		//s1 스택
		while (L<= R)
		{
			s1.push(t[L++]);
			if (s1.size() >= aLen)
			{
				char temp[26];
				for (int i = 0; i < aLen; i++)
				{
					temp[i] = s1.top();
					s1.pop();
				}
				reverse(temp, temp + aLen);
				temp[aLen] = '\n';
				temp[aLen + 1] = '\0';
				if (strcmp(temp, a) == 0) break;
				else
				{
					for (int i = 0; i < aLen; i++)	s1.push(temp[i]);
				}
			}
		}

		//s2스택
		while (L<=R)
		{
			s2.push(t[R--]);
			if (s2.size() >= aLen)
			{
				char temp[26];
				for (int i = 0; i < aLen; i++)
				{
					temp[i] = s2.top();
					s2.pop();
				}
				temp[aLen] = '\n';
				temp[aLen + 1] = '\0';
				if (strcmp(temp, a) == 0) break;
				else
				{
					reverse(temp, temp + aLen);
					for (int i = 0; i < aLen; i++)	s2.push(temp[i]);
				}
			}
		}
	}
	while (!s1.empty()) 
	{
		s2.push(s1.top());
		s1.pop();
		if (s2.size() >= aLen) 
		{
			char temp[26];
			for (int i = 0; i < aLen; i++)
			{
				temp[i] = s2.top();
				s2.pop();
			}
			temp[aLen] = '\n';
			temp[aLen + 1] = '\0';
			if (strcmp(temp, a) == 0)continue;
			else
			{
				reverse(temp, temp + aLen);
				for (int i = 0; i < aLen; i++)	s2.push(temp[i]);
			}
		}
	}
}
int main()
{
	fgets(a, 25 + 1, stdin);
	fgets(t, 300000 + 1, stdin);

	int aLen = Size(0);
	int tLen = Size(1);
	solution(aLen, tLen);
	int size = s2.size();

	for (int i = 0; i < size; i++)
	{
		printf("%c", s2.top());
		s2.pop();
	}

	system("pause");
	return 0;
}*/

/*
문자열 앞뒤로 없앨때 두 스택을 이용하는 것이
편리하고 시간 복잡도가 적다.
*/