/*#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int n, In[100000] = { 0, }, Post[100000] = {0,};
void solve(int is, int ie,int ps, int pe) 
{
	if (is == ie && ps == pe) // �Ѱ��� ���
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
		//���ǽĿ��� idx ���Ҷ��� ���� ����ó��
		
		//�����ڽ��� ������ ile�� -1�̵�
		//������ �ڽ��� ������ ����Ʈ������ ��Ʈ��(������ pe) �������ڽ��� ���۰����̵�
		
		if(ile>=0) solve(is, ile, ps, postLe); //�����ڽ� ������
		if(postRs!=pe)solve(irs, ie, postRs, pe-1); //������ �ڽ� ������
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
�� ����ʰ��� �������� �𸣰ڴ�..
*/