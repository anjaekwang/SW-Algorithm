/*#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int N, M, a[10000] = { 0, };
long long m;

long long lastP(long long x)
{
	long long temp = M;
	for (int i = 0; i < M; i++)
		temp += (x  / a[i]);
	return temp;
}
int ans(long long time)
{
	long long exP = lastP(time - 1);
	long long rest = N - exP;
	int cnt = 0;
	for (int i = 0; i < M; i++)
	{
		if ((time % a[i]) == 0)
		{
			cnt++;
			if (cnt == rest) return i + 1;
		}
	}
}
void solution(long long left, long long right)
{
	if (N <= M) printf("%d", N);
	else
	{
		while (left <= right)
		{
			m = (left + right) / 2;
			long long startP = lastP(m - 1) + 1;
			long long end = lastP(m);
			if (startP <= N && N <= end) break;
			else if (N > end) left = m + 1;
			else if (N < startP) right = m - 1;
		}
		printf("%d", ans(m));
	}
}

int main()
{
	scanf("%d %d", &N, &M);
	for (int i = 0; i < M; i++) scanf("%d", a + i);
	long long max = INT_MAX * (long long)30;
	solution(0, max);
	system("pause");
}*/

/*
solution의 arg를 놀이공원 운행시간으로 두어서
0,30 으로 하려 했으나
0~30은 각 놀이기구의 운행 term이고 문제에서 놀이동산
운행시간 언급 x  만약 20억명이 1개의 놀이기구 30분 텀 인것을 타려면
총시간 20억 * 30 분 걸림 ->다시짬

운행시간을 제한 조건에서의 최대 길이로줌
여기서 또 문제가 longlong 과 int간의 연산!! 가능은하나
언더플로우 오버플로우 생각 해서 형변환 해줘야한다. 
long long a = INT_MAX * 30; (기본 int)에서 왼쪽은 롱롱 으로 선언했고
오른쪽 두 값은 안이니 상관 x가 아니라 우항이 오버플로운지 생각도 해야함
INT_MAX * (long long) 30
*/



