/*#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <math.h>

using namespace std;

int cnt = 0; int flag =0;
int solution(int y, int x, int N) //���⼭ N�� ũ�� a,b�� ã����ǥ
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
������ ��� ����ϰ� Ž���ϸ� �ð����⵵�� Ŀ���⿡
ã������ ��ǥ�� ������ �����ϰ�
4���� �����߿� ���� ������ ����Ѵ�
z������� (int)pow(N / 2, 2) �� �����ְ� 
*/