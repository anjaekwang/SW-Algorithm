#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <queue>

using namespace std;

int ex1158() 
{
	int M, N, idx;
	queue<int> q, die;

	scanf("%d %d", &N, &M);

	for (int i = 1; i <= N; i++) q.push(i);
	
	while (!q.empty()) 
	{
		for (int i = 0; i < M; i++)
		{
			if (i == M - 1) die.push(q.front());
			else q.push(q.front());
			q.pop();
		}
	}

	printf("<");
	for (int i = 0; i < N; i++)
	{
		if (i != N-1) printf("%d, ", die.front());
		else printf("%d>\n", die.front());
		die.pop();
	}

	return 0;
}
/*
�����۽�
N���� ������ �ɾ��ְ� M��° ��� ���� 
���ż��� ��� ���̸� ��
(1<= M <= N <= 5000)
�Է� N M

����Ư¡ : 
 - ����ִ� ��� �ʿ���
   �������� �ڷΰ� �ٽ� ���鼭 M��° �ִ� �����������

   ---
   <--  �̷������� �ڷ����� ���⼺ ���� que�α���!
   ---
*/