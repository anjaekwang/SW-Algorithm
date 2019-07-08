/*#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;


int main()
{
	int n, b;
	string s="";
	scanf("%d %d", &n, &b);

	while (n > 0) 
	{
		int temp = n%b;
		if (temp<10) s += (char)(temp + '0');
		else s += (char)(temp -10 + 'A');
		n /= b;
	}
	reverse(s.begin(), s.end());
	cout << s << endl;
	system("pause");
	return 0;
}*/

/*
10진수를 B진법으로 변환
*/