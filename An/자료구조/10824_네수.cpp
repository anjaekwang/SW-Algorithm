#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;
int ex10824()
{
	char what[101];
	long long a, b, c, d;
	scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

	long long A, B;

	sprintf(what, "%lld%lld %lld%lld", a, b, c, d);
	sscanf(what, "%lld %lld", &A, &B);

	printf("%lld\n", A + B);
	system("pause");
	return 0;
}





/*
�׼�
�ڿ��� ABCD�� �Է�
AB+CD ���϶�
���ڿ��� ��� �ذ�
A<1000000

�ڷ��� ũ��, ���ڿ�->����

sprintf : ���ڿ��� ���������Ŀ����߾��.
sscanf

���ڿ� �ٿ��� ������ �ٲٴ�!!
*/