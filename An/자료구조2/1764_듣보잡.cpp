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
set�� �Է¹޴°� �ƴѰ͵��� ������ �Ҷ�
set.count() �Ű��� set�� �ִ��� ���� (return bool)

�ܼ��� �����ϰ� Ž���� ���� ������ Ǫ�¹���
-> �迭�� �̿��ϸ� �ð����⵵ �����ϹǷ�
-> BST�� �̿��Ѵ�
*/