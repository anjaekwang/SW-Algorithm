/*#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
#include <algorithm>
#include <stack>



using namespace std;

int main()
{
	int A, B, m, a[25] = {0,};
	int N=0; // 10���� ��
	stack<int> s;
	scanf("%d %d", &A, &B);
	scanf("%d", &m);
	for (int i = 0; i < m; i++)  //�̰� �����ؾ���
	{
		scanf("%d", a + i); //a�� A���� ���� �����
	}

	//A -> 10����
	for (int i = 0; i < m; i++) 
	{
		N = N * A + a[i];
	}
	while (N > 0) 
	{
		s.push(N%B);
		N /= B;
	}
	while (1) 
	{
		if (s.empty()) break;
		else 
		{
			printf("%d ", s.top());
			s.pop();
		}
	}
	system("pause");
	return 0;
}*/
/*
Base Conversion
A������ B ��������
�Է¼��� 
1. ����
2. A���� �ڸ���(1<=m<=25)
3. �������� ���еǴ� ���� �ڸ��� ���� ���ʴ�� �־�����
*/