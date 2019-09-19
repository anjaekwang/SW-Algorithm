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

bool check(double d) //함수값이 더 큰지? 
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
5e-n 은 소수점 n번째에 0.0xx5나타남
float 과 double의 차이는?
정밀도차이. float은 소수점이하 6자리
double은 15자리
 절대/상대 오차는 10-3까지 허용한다?
 절대오차 : 답과의 차이 절대값.
*/