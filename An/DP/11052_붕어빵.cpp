#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;
#include <algorithm>

int ex11052() 
{
	int n, a[1001], d[1001] = {0,};
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) scanf("%d", a + i);

	d[1] = a[1]; 

	for (int i = 1; i <= n; i++) //종류 수 n
	{
		for (int j = 1; j <= i; j++) //n개 중에서 계산
		{
			d[i] = max(d[i-j] + a[j], d[i]);
		}
	}
	
	printf("%d\n", d[n]);
	return 0;
}
/*
카드 구매하기
N개를 구매하는데 N개의 카드팩 종류가있음(입력으로 받음)
최대로 비싸게 사면 얼마?

이전 DP 문제들은 고정되어 있어서 이전 결과값을 이용하면되는데
이거는 카드팩 종류와 값이 달라짐..

핵심 : 다른 변수를 추가하며 조건문으로 문제 해결하는거 
       두려워 하지 말기. 1로만들기, 붕어빵문제
*/