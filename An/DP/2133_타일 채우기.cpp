//Ǯ��

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;


int main()
{
	int n, d[31] = {0,};
	scanf("%d", &n);
	d[0] = 1;
	d[2] = 3;

	for (int i = 4; i <= n; i+=2) 
	{
		int temp = 0;
		for (int j = 4; i-j >= 0 ; j += 2) 
		{
			temp += d[i - j];
		}
		d[i] = 2 * temp + 3 * d[i - 2];
	}
	printf("%d", d[n]);
	system("pause");
}

/*
Ÿ�� ä���
3*N, ũ�� ���� 2*1, 1*2ũ���� Ÿ�Ϸ� ä��� ����� ��
d[n] : ����� ��

¦���� �����ϰ� 3*d[n-2] + 2*d[n-4]�� �����ϴµ� �𸣰ڳ�

����
��;;����Ǽ� 4¥������ ���־���
2(d[0]+ ... +d[n-4]) + 3*d[n-2] = d[n]

*/
