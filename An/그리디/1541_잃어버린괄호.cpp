/*#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
	string s;
	vector<int> sign;
	vector<int> num;

	cin >> s;
	int slen = s.size();

	int cnt = 0;

	sign.push_back(1);
	// ����, sign�� ��ȣ, num�� ��
	for (int i = 0; i < slen; i++)
	{
		if (s[i] == '-' || s[i] == '+')
		{
			if (s[i] == '-') sign.push_back(-1);
			else sign.push_back(1);
			num.push_back(cnt);
			cnt = 0;
		}
		else
			cnt = cnt * 10 + ((int)(s[i] - '0'));
	}
	num.push_back(cnt);


	int ans = 0;
	int numlen = num.size();
	bool minus = false;
	for (int i = 0; i < numlen; i++)
	{
		if (sign[i] == -1) minus = true;
		if (minus) ans -= num[i];
		else ans += num[i];
	}

	printf("%d", ans);

	return 0;
}*/

//�ѹ� �߰��� -�� �߻��ϴ� ���� �� ���ڴ� ���� -����


