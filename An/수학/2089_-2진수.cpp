/*#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
#include <algorithm>


using namespace std;

int main()
{
	int a = 0;
	string s = "";
	scanf("%d", &a);
	if (a == 0) 
	{
		printf("%d", a);
		return 0;
	}
	while (abs(a) >0)
	{
		
		//n�� Ȧ���� ��� -2�� ������ ���� -3�̾ƴ� -4���ȴ�
		//�׷��� -2�� �������ٶ� �������� -1�� ��� (n-1)/-2�� ���
		//-> �̷��� ����� 2�����϶� -��ó���� ��������?
		
		char r = (char)(abs(a) % 2 + '0'); //�������� �׻� ��� 
		s += r;
		if (a % -2 == -1) a = (a - 1) / -2; // a�� ���� Ȧ�� �ΰ��
		else
			a /=-2;
	}
	reverse(s.begin(), s.end());
	cout << s << endl;
	system("pause");
	return 0;
}*/
/*
N������ -2������
*/