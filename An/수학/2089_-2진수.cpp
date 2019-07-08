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
		
		//n이 홀수인 경우 -2로 나누면 몫은 -3이아닌 -4가된다
		//그래서 -2로 나누어줄때 나머지가 -1인 경우 (n-1)/-2로 계산
		//-> 이러한 방법이 2진수일때 -수처리도 가능한지?
		
		char r = (char)(abs(a) % 2 + '0'); //나머지는 항상 양수 
		s += r;
		if (a % -2 == -1) a = (a - 1) / -2; // a가 음수 홀수 인경우
		else
			a /=-2;
	}
	reverse(s.begin(), s.end());
	cout << s << endl;
	system("pause");
	return 0;
}*/
/*
N진수를 -2진수로
*/