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
���ĺ� ����
�ܾ�, ���ĺ� �������� ����� ���?
N < 100


����Ư¡ : 
�ܼ��� 26�� �迭�� �ϳ� �� �߰��ϸ�?

���ĺ� ���� ���� �����ؼ� �ϳ��� �߰�

*/