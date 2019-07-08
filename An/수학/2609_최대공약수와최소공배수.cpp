/*#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

int GCD(int a, int b) 
{
	if (b == 0) return a;
	else
		return GCD(b, a%b);
}

int main() 
{
	int a, b, g, l;
	scanf("%d %d", &a, &b);
	g = GCD(a, b);
	l = a * b / g;
	printf("%d\n", g);
	printf("%d\n", l);

	system("pause");
	return 0;
}*/