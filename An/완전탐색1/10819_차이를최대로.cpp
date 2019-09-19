/*#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <math.h>
#include <algorithm>

using namespace std;
int N, a[8] = { 0, };

int cal() 
{
	int ans = 0;
	for (int i = 0; i <= N - 2; i++) 
		ans += abs(a[i] - a[i + 1]);
	return ans;
}
int main()
{
	scanf("%d", &N);
	for (int i = 0; i < N; i++) scanf("%d", a + i);
	sort(a, a + N);
	int ans = 0;
	do 
	{
		ans = max(ans, cal());
	} while (next_permutation(a, a + N));

	printf("%d", ans);

	system("pause");
	return 0;
}*/
