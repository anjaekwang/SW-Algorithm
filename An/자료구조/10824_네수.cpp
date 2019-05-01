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
네수
자연수 ABCD가 입력
AB+CD 구하라
문자열로 끊어서 해결
A<1000000

자료형 크기, 문자열->숫자

sprintf : 문자열에 데이터형식에맞추어쓴다.
sscanf

문자열 붙여서 정수로 바꾸는!!
*/