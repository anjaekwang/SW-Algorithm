/*#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>
#include <string.h>


using namespace std;

typedef struct 
{
	char name[100];
	int KScore;
	int EScore;
	int MScore;
}info;

bool cmp(const info &a, const info &b) 
{
	if (a.KScore > b.KScore) return true;
	else if (a.KScore == b.KScore) 
	{
		if (a.EScore < b.EScore)return true;
		else if (a.EScore == b.EScore) 
		{
			if (a.MScore > b.MScore) return true;
			else if (a.MScore == b.MScore)
			{
				if (strcmp(a.name, b.name) < 0)return true;
			}
		}
	}
	return false;
}
int main()
{
	int N;
	scanf("%d", &N);
	info* db = (info*)calloc(N, sizeof(info));
	for (int i = 0; i < N; i++) 
		scanf("%s %d %d %d", (db + i)->name, &(db + i)->KScore, &(db + i)->EScore, &(db + i)->MScore);
	sort(db, db + N, cmp);
	for (int i = 0; i < N; i++)
		printf("%s\n", (db + i)->name);
	system("pause");
}
*/