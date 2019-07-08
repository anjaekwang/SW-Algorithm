/*#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	int m, n;
	bool c[1000000] = {false,}; //지워진지 여부
	c[0] = true;
	c[1] = true;

	scanf("%d%d", &m, &n);

	for (int i = 2; i <= n; i++) 
	{
		if (!c[i]) //지워지지 않은 수 
		{
			for (int j = i * 2; j <= n; j+=i) // 현재소수의 제곱부터 지우면됨
												// 정수 오버플로 막기위해 *2부터 지움
			{
				c[j] = true;
			}
		}
	}

	for (int i = m; i <= n; i++) 
	{
		if (!c[i] ) printf("%d\n", i);
	}



	system("pause");
	return 0;
}*/