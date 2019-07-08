/*#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
#include <algorithm>


using namespace std;

int radixTrans(string s) 
{
	int result = 0;
	for (int i = 0; i < s.size(); i++) 
	{
		result = result * 2 + s[i] - '0';
	}
	return result;
}

int main() 
{
	string s = "";
	string result = "";
	cin >> s;
	string temp = "";
	int len = s.size();
	if (len % 3 != 0)
	{
		for (int i = 0; i < (3 - (len % 3)); i++)
		{
			temp += "0";
		}
	}
	temp += s;

	// i는 시작
	for (int i = temp.size() - 3; i >= 0; i -= 3) 
	{
		int _temp = radixTrans(temp.substr(i,3));
		result += (char)(_temp + '0');
	}

	reverse(result.begin(), result.end());
	cout << result<<endl;
	system("pause");
	return 0;


}*/
/*
2진수를 8진수로

2진수의 갯수가 %3으로 안떨어지면 부족한 만큼 앞에 0을 
채원준후 이후에 2진수로 변환
*/