/*#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <math.h>
#include <algorithm>


using namespace std;

void findN(int* result, int n)
{
	for (int i = 1; pow(2, i) <= n; i++)
	{
		*result += n / pow(2, i);
	}

	for (int i = 1; pow(5, i) <=n; i++)
	{
		*(result+1) += n / pow(5, i);
	}

}
int main()
{
	int n,m;
	int result[6] = { 0, }; //n,m,n-m 2,5°¹¼ö
	scanf("%d %d", &n, &m);

	findN(result, n);
	findN(result+2, m);
	findN(result+4, n-m);

	result[0] -= (result[2] + result[4]);
	result[1] -= (result[3] + result[5]);
	printf("%d", min(result[0], result[1]));

	system("pause");
}*/