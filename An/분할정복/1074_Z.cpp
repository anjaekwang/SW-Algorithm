/*#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <math.h>

using namespace std;

int cnt = 0; int flag =0;
int solution(int y, int x, int N) //여기서 N은 크기 a,b는 찾을좌표
{
	if (N == 2) 
		return 2 * y + x;
	else 
	{
		if (y < N / 2) 
		{
			if (x < N / 2) return solution(y, x, N / 2);
			else return solution(y, x - N / 2, N / 2) + (int)pow(N / 2, 2);
		}
		else 
		{
			if (x < N / 2) return solution(y - N / 2, x, N / 2) + (int)pow(N / 2, 2) *2;
			else return solution(y - N / 2, x - N / 2, N / 2) + (int)pow(N / 2, 2)  * 3;
		}
	}
}

int main()
{
	int n, r, c;
	scanf("%d%d%d", &n, &r, &c);
	printf("%d", solution(r, c, (int)pow(2,n)));
	system("pause");
	return 0;
}*/
/*
무작정 모두 재귀하고 탐색하면 시간복잡도가 커지기에
찾으려는 좌표의 범위를 생각하고
4분할 범위중에 들어가는 범위만 재귀한다
z순서대로 (int)pow(N / 2, 2) 씩 더해주고 
*/