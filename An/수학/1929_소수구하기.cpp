/*#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	int m, n;
	bool c[1000000] = {false,}; //�������� ����
	c[0] = true;
	c[1] = true;

	scanf("%d%d", &m, &n);

	for (int i = 2; i <= n; i++) 
	{
		if (!c[i]) //�������� ���� �� 
		{
			for (int j = i * 2; j <= n; j+=i) // ����Ҽ��� �������� ������
												// ���� �����÷� �������� *2���� ����
			{
				c[j] = true;
			}
		}
	}

	for (int i = m; i <= n; i++) 
	{
		if (!c[i] ) printf("%d\n", i);
	}



	system("pause");
	return 0;
}*/