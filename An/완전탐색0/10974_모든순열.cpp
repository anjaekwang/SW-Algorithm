/*#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>

using namespace std;

int N, a[8];

int main()
{
	scanf("%d", &N);
	int temp = 1;
	for (int i = 0; i < N; i++)
	{
		printf("%d ", temp);
		a[i] = temp++;
	}
	printf("\n");
	while (1)
	{
		if (next_permutation(a, a + N))
		{
			for (int i = 0; i < N; i++) printf("%d ", a[i]);
			printf("\n");
		}
		else break;
	}
	system("pause");
	return 0;
}
*/

