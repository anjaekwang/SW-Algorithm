/*#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>

using namespace std;

int S[20] = { 0, };
int mask[20] = { 0, };
int n, a;

bool check() //mask가 모두 1인지?
{
	for (int i = 0; i < n; i++) 
	{
		if (!mask[i]) return false;
	}
	return true;
}
int main()
{
	scanf("%d%d", &n, &a);
	for (int i = 0; i < n; i++) scanf("%d", &S[i]);
	
	int ans = 0;
	while(!check())
	{
		mask[0] = 1;
		sort(mask, mask + n);
		do 
		{
			int temp = 0;
			for (int i = 0; i < n; i++) 
			{
				if (mask[i]) temp += S[i];
			}
			if (temp == a) ans++;
		} while (next_permutation(mask, mask + n));
	}
	printf("%d", ans);
	system("pause");
	return 0;
}*/
/*
그냥 조합의 모든 경우로 해결함.
주의:
next_permutation은 마지막 순열에서 
행하면 false를 리턴하지만 배열의 값은 원래 초창기 
값으로 돌림.
001 이 100 으로 되는게 아니라 001로 된다
*/