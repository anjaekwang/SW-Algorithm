#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>

using namespace std;

// d[n]을 a[n]끝으로 하는 연속합 으로 하고 
//   d[n] = max(d[i] + sigma a (i+1 ~ n)) 으로 계산하니 시간초과 
int FALE()
{
	int n, a[100001] = { 0, }, temp = 0, d[100001] = { 0, };
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) scanf("%d", a + i);
	d[1] = a[1];
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j < i; j++)
		{
			temp = d[j]; //j+1부터 i까지의 합

			for (int k = j+1; k <= i; k++)
			{
				temp += a[k];
			}
			d[i] = max(d[i], temp);
		}
	}
	temp = d[1];
	for (int i = 2; i <= n; i++) 
	{
		temp = max(temp, d[i]);
	}
	printf("%d", temp);
}

int main() 
{
	int n, a[100001] = { 0, },temp, d[100001] = { 0, };
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) scanf("%d", a + i);
	d[1] = a[1];

	for (int i = 1; i <= n; i++) d[i] = max(a[i], d[i - 1] + a[i]);

	temp = d[1];
	for (int i = 2; i <= n; i++) temp = max(temp, d[i]);
	printf("%d", temp);
}


/*
연속합
n개 정수로 이뤄진 수열 주어짐
이중 연속된 몇개를 선택해 합이 최대

특징 : 몇개 택하는지 정해지지 않음.

1차시도 :
음수는 피하는것이 좋으나 음수보다 뒤에 따라오는게 양수들 합이
음수보다 크면 가능

시작과 끝이 어딜까?
d[n]정의
시간 1시간 지남 -> 어떻게 푸는지 확인

강의 :
d[n]정의를 a[n]으로 끝나는 최대 연속합 -> 생각 해봤음
1. a[n-1]로 끝나는 연속합에 포함 d[n] = d[n-1] + a[n]
2. 새로운 연속합 시작 d[n] = a[n]
(왜 새로운 연속합의 시작으로 나누는지 이해가 안갔다.)
->이전 a[n-1]을 마지막(d[n-1])으로 가지면 a[n]을 더한것보다
a[n]이 크기에 a[n] 혼자가 더 나음
문제에선 연속이 조건이므로 새로운 연속합의 시작이 맞다!

1. d[n]을 정의할때 문제의 조건을 줄이게끔 잘정의 
(예를 들어 끝을지정 -> 연속합 맨앞이 어딘지 신경쓸 필요가 없어짐)
2. d의 정의를 이용하여 조건들을 이용하여 문제 풀이
(조건이 연속이므로 n-1을 이어가든지 아니면 차라리 자기 혼자가 되던지 두경우로 나뉨)


      1 2  3 4  5  6   7   8 9  10
a[i] 10 -4 3 1  5  6  -35 12 21 -1
d[i] 10 6  9 10 15 21 -14 12
*/