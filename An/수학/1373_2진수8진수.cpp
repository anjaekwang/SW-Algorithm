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

	// i�� ����
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
2������ 8������

2������ ������ %3���� �ȶ������� ������ ��ŭ �տ� 0�� 
ä������ ���Ŀ� 2������ ��ȯ
*/