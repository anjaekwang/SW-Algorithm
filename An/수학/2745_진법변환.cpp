/*#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	string s;
	int a = 0, result =0;
	cin >> s;
	scanf("%d", &a);
	for (int i = 0; i < s.size(); i++) 
	{
		if (s[i] >= '0' && s[i] <= '9') result = result * a + (int)(s[i] - '0');
		else  result = result * a + (int)(s[i] - 'A' + 10);
	}
	printf("%d\n", result);


	system("pause");
	return 0;
}
*/
/*
B진수 10진수로
*/