/*#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string.h>

using namespace std;

int N = 0;

void add(int x) //or���� 
{
	N = N | (1 << x);
}

void remove(int x) 
{
	N = N & (~(1<<x));
}

void check(int x) //and����
{
	if ((N & (1 << x))) printf("1\n");
	else printf("0\n");
}

void toggle(int x)  //xor����
{
	N = N ^ (1 << x);
}

void all() 
{
	N = (1 << 21) - 2;
}
void empty() 
{
	N = 0;
}

int main()
{
	int t;
	scanf("%d", &t);
	char a[6][7] = { "add", "remove", "check", "toggle", "all", "empty" };
	while (t--) 
	{
		char s[7];
		scanf(" %[^ \n]", s);

		if (!strcmp(s, a[5]) || !strcmp(s, a[4]))
		{
			if (!strcmp(s, a[4])) all();
			else empty();
		}
		else 
		{
			int temp;
			scanf("%d", &temp);
			if (!strcmp(s, a[0])) add(temp);
			else if (!strcmp(s, a[1])) remove(temp);
			else if (!strcmp(s, a[2])) check(temp);
			else toggle(temp);
		}
	}
	system("pause");
}*/

/*
string �� 
a.compare(b) 0���� ������ a�� �ռ���
==0�Ͻ� ����.

string �ſ� ������ -> char�θ� �������
char ���ڿ� �ٷ� ����ÿ��� \n�ڵ� ����

string�� ���� ���ÿ� �޴°� -> %[^]�̰� �̿�
\0�� �ڵ� �����
*/