#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string.h>

using namespace std;

int ex10809()
{
	int a[26], m[26] = {0,}; //알파벳
	char b[101]; // 글자
	int len = 0;

	for (int j = 0; j < 26; j++)  a[j] = -1;

	scanf("%s", b);
	len = strlen(b);
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < 26; j++)
		{
			if (b[i] == ('a' + j) && m[j] != 1)
			{
				a[j] = i;
				m[j] = 1;
				break;
			}
		}
	}

	for (int i = 0; i < 25; i++) printf("%d ", a[i]);
	printf("%d ", a[25]);
	system("pause");
	return 0;
}


/*
알파벳 찾기
단어있으면 처음등장하는 위치 0부터 그위치를 없을경우 -1
N<100
*/