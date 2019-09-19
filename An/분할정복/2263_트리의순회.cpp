/*#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int n, In[100000] = { 0, }, Post[100000] = {0,};
void solve(int is, int ie,int ps, int pe) 
{
	if (is == ie && ps == pe) // 한개일 경우
	{
		printf("%d ", In[is]);
		return; 
	}
	else
	{
		int root = Post[pe];
		int InRootIdx;
		printf("%d ", root);
		for (int i = is; i <= ie; i++) 
		{
			if (In[i] == root) 
			{
				InRootIdx = i;
				break;
			}
		}
		int ile = InRootIdx - 1;
		int irs = InRootIdx + 1;
		int postLe = ps + (ile -is + 1) -1;
		int postRs = postLe + 1;
		//위의식에서 idx 구할때를 토대로 예외처리
		
		//왼쪽자식이 없을때 ile이 -1이됨
		//오른쪽 자식이 없을때 포스트오더의 루트가(마지막 pe) 오른쪽자식이 시작과끝이됨
		
		if(ile>=0) solve(is, ile, ps, postLe); //왼쪽자식 있을때
		if(postRs!=pe)solve(irs, ie, postRs, pe-1); //오른쪽 자식 있을때
	}
}

int main()
{
	scanf("%d", &n);
	for (int i = 0; i < n; i++) scanf("%d", In + i);
	for (int i = 0; i < n; i++) scanf("%d", Post + i);
	solve(0, n - 1, 0, n - 1);
	printf("\n");
	system("pause");
	return 0;
}*/


/*
왜 출력초과가 나오는지 모르겠다..
*/