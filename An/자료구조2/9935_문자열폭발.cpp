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
		//reverse�� ���
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
stack�� ������ ���� ���� ����?
ex
�˿� ���� ��� �չ��� �ڹ����� ���� 2�� �������Ƿ� 2��
���ڿ� ������ ������� �տ����� �̷� ���Ƿ� 1��

fgets�� 2��°���ڴ� �����Ҽ� �ִ� �ִ����
fgets�� ���๮�� ���� �����ϹǷ�
\n\0 �� 2���� �޸� ���������� �ʿ���
(���ڿ��� ���� �׻� \0���� ���� ����)
*/