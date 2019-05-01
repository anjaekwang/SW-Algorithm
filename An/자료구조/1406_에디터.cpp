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

	
	//왜처음에 c 받을때 무시될까?, 버퍼에 \n이 남아있는것으로 보임
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
에디터 구현

문제특징 : 커서로 인해 두개 그룹으로 나눠진다
           문자 추가 및 삭제 : 추가시 왼쪽 그룹의 끝에 
		                       삭제시 왼쪽 그릅의 끝이 삭제
		   마지막 출력시 오른쪽으로 다넘겨서 출력

해결 : FIFO 임으로 두개의 스택으로 구현
*/