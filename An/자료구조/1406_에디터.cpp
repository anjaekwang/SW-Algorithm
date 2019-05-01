#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stack>
#include <string.h>

using namespace std;


int ex1406()
{
	char s[600001];
	stack<char> a;
	stack<char> b;
	int t, len;

	scanf("%s", s);
	len = strlen(s);
	for (int i = 0; i < len; i++) a.push(s[i]); 
	scanf("%d", &t);

	
	//��ó���� c ������ ���õɱ�?, ���ۿ� \n�� �����ִ°����� ����
	while (t--) 
	{
		scanf(" %c", s);
		if (s[0] == 'P') 
		{
			scanf(" %c", s+1);
			a.push(s[1]);
		}
		else if (s[0] == 'L')
		{
			if (!a.empty()) 
			{
				b.push(a.top());
				a.pop();
			}
		}
		else if (s[0] == 'D') 
		{
			if (!b.empty()) 
			{
				a.push(b.top());
				b.pop();
			}
		}
		else if (s[0] == 'B') 
		{
			if (!a.empty())
			{
				a.pop();
			}
		}
	}
	len = a.size();
	for(int i =0; i<len; i++)
	{
		b.push(a.top());
		a.pop();
	}

	len = b.size();
	for (int i = 0; i < len; i++)
	{
		s[i] = b.top();
		b.pop();
	}
	s[len] = 0;

	printf("%s\n", s);

	
	return 0;
}

/*
������ ����

����Ư¡ : Ŀ���� ���� �ΰ� �׷����� ��������
           ���� �߰� �� ���� : �߰��� ���� �׷��� ���� 
		                       ������ ���� �׸��� ���� ����
		   ������ ��½� ���������� �ٳѰܼ� ���

�ذ� : FIFO ������ �ΰ��� �������� ����
*/