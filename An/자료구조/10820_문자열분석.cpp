#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string.h>

using namespace std;

int ex10820() 
{
	char a[3];
	int len = 0;
	int b[4] = { 0, };

	while (fgets(a, 4, stdin) != 0) 
	{
		len = strlen(a);
		for (int i = 0; i < len; i++) 
		{
			if (a[i] >= 'a' && a[i] <= 'z') b[0]++;
			else if (a[i] >= 'A' && a[i] <= 'Z') b[1]++;
			else if (a[i] >= '0' && a[i] <= '9') b[2]++;
			else if (a[i] == ' ') b[3]++;
		}
		for (int i = 0; i < 3; i++)
		{
			printf("%d ", b[i]);
			b[i] = 0;
		}
		printf("%d\n", b[3]);
		b[3] = 0;
	}
	system("pause");
	return 0;
}

/*
���ڿ� �м�
���ڿ��� �ް� �ҹ���, �빮��, ����, ������ ������ ����
N<100

����Ư¡ : ���ڷ��̷��� -> �ƽ�Ű �ڵ� Ȱ��
*/