#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

using namespace std;

int main() 
{
	int n, t;
	unsigned long long d[101] = { 0, };
	scanf("%d", &t);
	d[1] = 1; d[2] = 1; d[3] = 1; d[4] = 2; d[5] = 2;
	for (int i = 6; i <= 100; i++)
	{
		d[i] = d[i - 1] + d[i - 5];
	}
	while (t--) 
	{
		scanf("%d", &n);
		printf("%lld\n", d[n]);
	}
	return 0;
}

/*
파도 반수열
가장긴 나선의 변의 길이에 정삼각형을추가한다.
똑바른 삼각형 뒤집은 삼각형 번갈아서 추가됨
최대한 길이가 늘어가는 방향으로 삼각형이 붙음 -> 상관 없음 계속 이어짐
d : 추가한 삼각형의 길이

11122 까진 규칙없다가, 3부터(6번쨰) 규칙발생하는것으로 보임
(하나씩 해본 결과)-> 이게 제일 중요한듯 문제풀때(별표)
d[n] = d[n-1] + d[n-5]

항상 n의 마지막을 확인하여 int값 넘어가는지 확인
넘어갈시에는 long long과 lld 사용
*/