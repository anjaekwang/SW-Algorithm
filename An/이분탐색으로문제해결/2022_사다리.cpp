/*#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <math.h>
#include <algorithm>

using namespace std;
double x, y, c, m;

double func(double d) 
{
	double A = sqrt(x*x - d * d);
	double B = sqrt(y*y - d * d);

	return ((A*B) / (A + B));
}

bool check(double d) //�Լ����� �� ū��? 
{
	return func(d) >= c;
}
void solution(double left, double right) 
{
	while(left <= right)
	{
		m = (left + right) / 2;
		if (check(m)) left = m + (1e-3);
		else right = m - (1e-3);
	}
	printf("%.3lf", m+(5e-4));

}

int main()
{
	scanf("%lf %lf %lf", &x, &y, &c);
	double max = min(x, y);
	solution(0., max);
	system("pause");
}
*/
/*
5e-n �� �Ҽ��� n��°�� 0.0xx5��Ÿ��
float �� double�� ���̴�?
���е�����. float�� �Ҽ������� 6�ڸ�
double�� 15�ڸ�
 ����/��� ������ 10-3���� ����Ѵ�?
 ������� : ����� ���� ���밪.
*/