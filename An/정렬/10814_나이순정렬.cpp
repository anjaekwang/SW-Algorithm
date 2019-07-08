/*#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>
#include <string>


using namespace std;

typedef struct 
{
	int idx;
	int age; 
	char name[101];
}info;

bool cmp(const info &a, const info &b) 
{
	if (a.age < b.age) return true;
	else if (a.age == b.age) 
	{
		if (a.idx < b.idx) return true;
		else return false;
	}
	else return false;
}
int main()
{
	int N;
	scanf("%d", &N);
	info* information = (info*)calloc(N, sizeof(info));
	for (int i = 0; i < N; i++)
	{
		scanf("%d %s", &(information + i)->age, (information + i)->name);
		(information+i)->idx = i;
	}
	sort(information, information + N, cmp);
	for (int i = 0; i < N; i++)
	{
		printf("%d %s\n", (information + i)->age, (information + i)->name);
	}
	system("pause");
	return 0;
}*/