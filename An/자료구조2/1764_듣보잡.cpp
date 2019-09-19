/*#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int main()
{
	set<string> s;
	int N, M;
	scanf("%d%d", &N, &M);
	while (N--) 
	{
		string name;
		cin >> name;
		s.insert(name);
	}
	vector<string> ans;
	while (M--) 
	{
		string temp;
		cin >> temp;
		if (s.count(temp)) ans.push_back(temp);
	}
	sort(ans.begin(), ans.end());
	int size = ans.size();
	printf("%d\n", size);
	for (int i=0; i<size; i++) 
	{
		cout << ans[i] << '\n';
	}

	system("pause");
	return 0;
}*/

/*
set에 입력받는거 아닌것들이 지워야 할때
set.count() 매개가 set에 있는지 여부 (return bool)

단순히 저장하고 탐색을 통해 문제를 푸는문제
-> 배열을 이용하면 시간복잡도 오버하므로
-> BST를 이용한다
*/