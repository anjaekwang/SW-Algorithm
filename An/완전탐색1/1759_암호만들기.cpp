/*#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

char s[15];

bool check(char a) //모음 여부
{
	char S[5] = { 'a', 'e', 'i', 'o', 'u' };
	for(int i=0; i<5; i++) 
	{
		if (a == S[i]) return true;
	}
	return false;
}

int main()
{
	int L, C;
	scanf("%d %d", &L, &C);
	vector<int> mask(C, 0);
	vector<char> temp;
	vector<vector<char>> ans;

	for (int i = C-L; i < C; i++) mask[i] = 1;

	for (int i = 0; i < C; i++) scanf(" %c", s + i);
	do 
	{
		int a = 0, b = 0; //a 모음개수, b 자음개수
		for (int i = 0; i < C; i++) 
		{
			if (mask[i] == 1) 
			{
				if (check(s[i])) a++;
				else b++;
				temp.push_back(s[i]);
			}
		}
		if (a >= 1 && b >= 2) 
		{
			sort(temp.begin(), temp.end());
			ans.push_back(temp);
		}
		temp.clear();
	} while (next_permutation(mask.begin(), mask.end()));

	int size = ans.size();
	sort(ans.begin(), ans.end());
	for (int i = 0; i < size; i++) 
	{
		for (int j = 0; j < L; j++) printf("%c", ans[i][j]);
		printf("\n");
	}
	system("pause");
	return 0;
}*/

/*
영어모음 아에이오우 aeiou밖에없음
*/