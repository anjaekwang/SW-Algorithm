#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string.h>

using namespace std;

int ex10808()
{
	int a[26] = {0,};
	char b[101];
	int len = 0;

	scanf("%s", b);
	len = strlen(b);
	for (int i = 0; i < len; i++) 
	{
		a[b[i] - 'a'] ++;
	}

	for (int i = 0; i < 25; i++) printf("%d ", a[i]);
	printf("%d ", a[25]);
	return 0;
}

/*
알파벳 개수
단어, 알파벳 종류별로 몇개인지 출력?
N < 100


문제특징 : 
단순히 26개 배열에 하나 씩 추가하면?

알파벳 별로 문자 조사해서 하나씩 추가

*/