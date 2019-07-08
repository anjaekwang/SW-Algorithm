/*#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

void solve(int n, bool* c) 
{
	int a, b,d;
	a = 0; b = 0; d = 0;
	for (int i = 3; i <= n; i += 2)
	{
		if (!c[i] && !c[n - i])
		{
			a = i;
			b = n - i;
			d = 1;
			break;
		}
	}
	if (d==0) cout << "Goldbach's conjecture is wrong." << endl;
	else printf("%d = %d + %d\n", n, a, b);
}


int main()
{
	int n;
	bool c[1000000] = { false, };
	int pNum = 0;
	int* prime = (int*)calloc(80000, sizeof(int));

	
	for (int i = 2; i <= 1000000; i++) 
	{
		if (!c[i])
		{
			prime[pNum++] = i;
			for (int j = 2 * i; j <= 1000000; j += i) 
			{
				c[j] = true;
			}
		}
	}
	c[0] = true; c[1] = true;

	while (1) 
	{
		scanf("%d", &n);
		if (n == 0) break;
		solve(n, c);
	}

	return 0;
}*/
// �� �Ҽ��� ������ prime�� ũ�Ⱑ 1�̿��� �Ǵ���?
// begin��end Ž�� ���̸� ���� �ɸ����� ->���� �Ҽ� ������ �鸸�̶� ���� �ϸ� �����ɸ��°� �¾�
// -> �ٸ� ������� ?