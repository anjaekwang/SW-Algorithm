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
stirng도 사전순이 존재하니 BST자료구조로
set의 자료형은 set헤더파일에 존재
s.insert(), s.erase(s.find())

보통은 char배열을 이용하고 문자열 전체를 사용할때는
string을 이용하는편 
cin >> 변수 >> 변수; 
string 비교  ==로 가능 

for ( auto v : { 1, 2, 3, 4, 5 } )
for (auto it = s.rbegin(); it != s.rend(); it++)
{
	cout << *it << '\n';
}

cin과 cout 느림.. 오죽 cout>> >>endl은 불통
cout>> >>'\n'은 통과
*/
