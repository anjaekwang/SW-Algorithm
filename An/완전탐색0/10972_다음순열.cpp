/*#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>

using namespace std;

int N, a[10000];


bool next_permutation() 
{
	//find i
	int tempI = INT_MAX;
	int tempJ = INT_MAX;
	for (int i = 1; i < N; i++) 
		if (a[i - 1] < a[i]) tempI = i;
	if (tempI == INT_MAX) return false;
	else
	{
		for (int j = tempI; j < N; j++)
			if (a[tempI - 1] < a[j]) tempJ = j;
		int temp = a[tempJ];
		a[tempJ] = a[tempI - 1];
		a[tempI - 1] = temp;
		sort(a + tempI, a + N);
		return true;
	}
}
int main()
{
	scanf("%d", &N);
	for (int i = 0; i < N; i++) scanf("%d", a + i);
	
	if(next_permutation()) for (int i = 0; i < N; i++) printf("%d ", a[i]);
	else printf("-1");
	system("pause");
	return 0;
}*/

