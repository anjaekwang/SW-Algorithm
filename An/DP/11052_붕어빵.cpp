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

	for (int i = 1; i <= n; i++) //���� �� n
	{
		for (int j = 1; j <= i; j++) //n�� �߿��� ���
		{
			d[i] = max(d[i-j] + a[j], d[i]);
		}
	}
	
	printf("%d\n", d[n]);
	return 0;
}
/*
ī�� �����ϱ�
N���� �����ϴµ� N���� ī���� ����������(�Է����� ����)
�ִ�� ��ΰ� ��� ��?

���� DP �������� �����Ǿ� �־ ���� ������� �̿��ϸ�Ǵµ�
�̰Ŵ� ī���� ������ ���� �޶���..

�ٽ� : �ٸ� ������ �߰��ϸ� ���ǹ����� ���� �ذ��ϴ°� 
       �η��� ���� ����. 1�θ����, �ؾ����
*/