#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
int ex9095()
{	
	int t, N, d[12];
	scanf("%d", &t);
	for (int i = 0; i < 12; i++) d[i] = 0;
	
	d[1] = 1; d[2] = 2; d[3] = 4; d[4] = 7;

	for (int i = 5; i < 11; i++)
	{
		d[i] = d[i - 1] +  d[i - 2] + d[i - 3];
	}
	
	while (t--) 
	{
		scanf("%d", &N);
		printf("%d\n", d[N]);

	}
	system("pause");
	return 0;
}

/*
1,2,3 ���ϱ�
���� N�� 1,2,3 �����θ� ������ ���ϴ� ��� �� 
N<11

�����ذ� : �������صаſ��� ��� ���ؼ� Ǯ�������Ƿ�
DP

���� �ʱⰪ�� �߸������� �������
d[1] = 0�̶� ������;;
*/