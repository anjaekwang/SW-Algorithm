/*#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	string s;
	int sum = 0;
	cin >> s;

	int sLen = s.size();
	int flag = 0;
	for (int i = 0; i < sLen; i++)
	{
		int temp = (int)(s[i] - '0');
		if (temp == 0) flag = 1;
		sum += temp;
	}

	if (sum % 3 != 0 || flag != 1)printf("-1\n");
	else 
	{
		sort(s.begin(), s.end(), greater<int>());
		cout << s;
	}
	system("pause");
	return 0;
}*/

/*
��ŭ�� ������ ����
!!30�� ����� ���� 30 = 2 * 3 * 5 �̱� ������
2�ǹ������ 3�ǹ������ 5�� ����̸� �ȴ�!!
2�ǹ���� ���� 0 2 4 6 8 �� ������ �ǰ�
5�ǹ���� ���� 0 5�� ������ �ȴ�
�� ���� 0���� �������Ѵ�
���� 3�� ����� ���� �� �ڸ����� ���� 3���� ���� ��������
3�ǹ�� 
*/