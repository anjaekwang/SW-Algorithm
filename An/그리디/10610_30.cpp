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
조큼은 수학적 내용
!!30의 배수란 말은 30 = 2 * 3 * 5 이기 때문에
2의배수이자 3의배수이자 5의 배수이면 된다!!
2의배수는 끝이 0 2 4 6 8 로 끝나면 되고
5의배수는 끝이 0 5로 끝나면 된다
즉 끝이 0으로 끝나야한다
또한 3의 배수는 수의 각 자리수의 합이 3으로 나눠 떨어지면
3의배수 
*/