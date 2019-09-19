/*#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>
#include <limits.h>

using namespace std;
int N, a[10000];

bool pre_permutation()
{
	int tempI = INT_MAX;
	for (int i = 1; i < N; i++) if (a[i - 1] > a[i]) tempI = i;
	if (tempI == INT_MAX) return false;
	else
	{
		int tempJ = INT_MAX;
		for (int j = tempI; j < N; j++)
		{
			if (a[tempI - 1] > a[j]) tempJ = j;
		}
		swap(a[tempJ], a[tempI - 1]);
		reverse(a + tempI, a + N);
		return true;
	}
}
int main()
{
	scanf("%d", &N);
	for (int i = 0; i < N; i++) scanf("%d", a + i);
	if (pre_permutation())
		for (int i = 0; i < N; i++) printf("%d ", a[i]);
	else printf("-1");
	return 0;
}
*/

