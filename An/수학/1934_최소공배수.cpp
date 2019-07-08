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
	int a, b, g, t;
	long long l;
	scanf("%d", &t);
	while (t--) 
	{
		scanf("%d %d", &a, &b);
		g = GCD(a, b);
		l = a * b / g;
		printf("%d\n", a*b / g);

	}
	system("pause");
	return 0;
}*/