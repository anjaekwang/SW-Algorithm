/*#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int N;
int location[15][15] = { {0,0} };
int ans = 0;

//�ش� yx�� ���� �Ѽ� �ִ°�?
bool check(int y, int x) 
{
	//�޴밢
	int tempY = y-1, tempX = x-1;
	while (tempY >= 0 && tempX >= 0) 
	{
		if (location[tempY][tempX]) return false;
		tempY--; tempX--;
	}
	//��밢
	tempY = y-1, tempX = x+1;
	while (tempY >= 0 && tempX < N)
	{
		if (location[tempY][tempX]) return false;
		tempY--; tempX++;
	}

	//��
	for (int i = y-1; i >= 0; i--) if (location[i][x]) return false;
	return true;
}

void solution(int row) 
{
	if (row == N)
	{
		ans++;
	}

	for (int x = 0; x < N; x++) 
	{
		location[row][x] = 1;
		if (check(row, x)) solution(row+1);
		location[row][x] = 0;
	}
}

int main()
{
	scanf("%d", &N);
	solution(0);
	printf("%d", ans);

	system("pause");
	return 0;
}*/
/*
��� ������ ���ٲٰڴ�. DFS
-> ���Ǻ���

���� �ڵ忡�� ��Ʈ��ŷ �Ϸ��� map�� ��Ʈ��ŷ �ؾ���
-> �Ű� yx�� queen�� ���־� �밢�� 0���� ������ cnt�� �ٿ������

������ Ư���� �� Ȱ������ -> ���� �ະ�� ���ʷ� ���� �����Ҷ�
�����θ� �ش� ������ ���̻� ���� �Ѽ� ����

state�� ������ Ư���� �°� ���� ������ ǥ������
�׶� �׶��� map�� ��Ȳ�� �׷� ������ Ȯ�� �Ϸ� ������ ��Ʈ��ŷ
�������� ���� ������.
-> �Ųٷ� �ش翭�� ��ġ�Ҽ��ִ����� �ش� ��ġ���� ���밢, ����  ���� ������ �����ϴ��� Ȯ������

���� ++, --�� �����
*/