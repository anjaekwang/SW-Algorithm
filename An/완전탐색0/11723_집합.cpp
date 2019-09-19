/*#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string.h>

using namespace std;

int N = 0;

void add(int x) //or연산 
{
	N = N | (1 << x);
}

void remove(int x) 
{
	N = N & (~(1<<x));
}

void check(int x) //and연산
{
	if ((N & (1 << x))) printf("1\n");
	else printf("0\n");
}

void toggle(int x)  //xor연선
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
string 비교 
a.compare(b) 0보다 작을시 a가 앞선다
==0일시 같다.

string 매우 느리다 -> char로만 사용하자
char 문자열 바로 저장시에도 \n자동 저장

string과 숫자 동시에 받는거 -> %[^]이거 이용
\0은 자동 저장됨
*/