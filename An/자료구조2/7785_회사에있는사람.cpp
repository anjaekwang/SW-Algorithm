/*#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
#include <set>

using namespace std;


int main()
{
	int n;
	scanf("%d", &n);
	set<string> s;
	string name, what;
	while(n--)
	{
		cin >> name >> what;
		if (what == "enter") s.insert(name);
		else s.erase(s.find(name));
	}
	for (auto it = s.rbegin(); it != s.rend(); it++) 
	{
		cout << *it << '\n';
	}
	return 0;
}*/
/*
stirng�� �������� �����ϴ� BST�ڷᱸ����
set�� �ڷ����� set������Ͽ� ����
s.insert(), s.erase(s.find())

������ char�迭�� �̿��ϰ� ���ڿ� ��ü�� ����Ҷ���
string�� �̿��ϴ��� 
cin >> ���� >> ����; 
string ��  ==�� ���� 

for ( auto v : { 1, 2, 3, 4, 5 } )
for (auto it = s.rbegin(); it != s.rend(); it++)
{
	cout << *it << '\n';
}

cin�� cout ����.. ���� cout>> >>endl�� ����
cout>> >>'\n'�� ���
*/
