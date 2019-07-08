/*#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
#include <algorithm>


using namespace std;

int main()
{
	string s, result= "";
	int n = 0;
	cin >> s;
	int len = s.size();

	for (int i = 0; i < len; i++) 
	{
		string temp = "";
		n = (int)(s[i] - '0');
		if (n == 0) 
		{
			temp = "000";
		}
		while (n > 0) 
		{
			temp += (char)(n % 2 + '0');
			n /= 2;
		}
		for (int i = 0; i < temp.size() % 3; i++) temp += '0';
		reverse(temp.begin(), temp.end());
		result += temp;
	}
	int a;
	for (int i = 0; i < 3; i++) 
	{
		if (result[i] == '1') 
		{
			a = i;
			break;
		}
		else a = 4;
	}
	if (a == 4) cout << "0" << endl;
	else cout << result.substr(a)<<endl;
	system("pause");
	return 0;
}*/
/*
8진수를 2진수로
3개씩 2진수로 변환하고
앞에 0은 지워준다
*/