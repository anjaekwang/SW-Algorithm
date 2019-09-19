/*#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>
#include <limits.h>

using namespace std;

long long a[10000];
int k, n;

//len의 길이로 n개 가능한가?
bool binary(long long len, int n) 
{
	long long cnt = 0;
	for (int i = 0; i < k; i++) 
	{
		cnt += a[i] / len;
	}
	if (cnt >= n) return true;
	else return false;
}

// 길이에 대해서 이분탐색을한다. s:최소길이, e는 최대길이
long long solution(long long s, long long e, int n) // 1부터 maxLen 
{
	long long ans = 0;
	while (s <= e)
	{
		long long mlen = (s + e) / 2;
		if (binary(mlen, n)) 
		{
			if (ans < mlen) ans = mlen;
			s = mlen+1;
		}
		else e = mlen - 1;
	}
	return ans;
}
int main()
{
	scanf("%d %d", &k, &n);
	for (int i = 0; i < k; i++)scanf("%lld", a + i);
	sort(a, a + k);
	long long maxLen = a[k - 1];
	printf("%lld", solution(1, maxLen, n));
	system("pause");
	return 0;
}*/

// 오버플로우 문제, 그와 관련된 변수에대한 형식지정자 모두 같게함

/*

if (s > e) // 이분탐색이 멈추는 구간
{
	for (long long i = temp1; i <= temp2; i++)
	{
		if (!binary(i, n)) return i - 1;
	}
}
else
{
	long long mlen = (s + e) / 2; //절반길이 -> 오버플로우 발생
	if (binary(mlen, n))
	{
		temp1 = mlen;
		solution(mlen + 1, e, n);
	}
	else
	{
		temp2 = mlen;
		solution(s, mlen - 1, n);
	}
}
으로 작성했을때 이분탐색 멈추는 구간에서의 가정
temp1 가능, temp2 불가능 이게 잘못됨
가령 maxLen까지 전부 가능한 경우.

그리고 while -> 조건이 만족하는 마지막까지 실행
재귀 -> 조건이 만족안하는 첫 단계
*/