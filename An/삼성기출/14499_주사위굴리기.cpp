#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>
#include <map>

using namespace std;


// ����
int n, m, x, y, k;
int info[20][20] = { 0, };
vector<int> command;
int die[4][3]{ {0,} };


//�����ϳ����Ʒ� -> 123456
pair<int, int> dieLoc(int n) 
{
	switch (n)
	{
	case 1:// ��
		return make_pair(1, 2);
	case 2: //��
		return make_pair(1, 0);
	case 3: //��
		return make_pair(0, 1);
	case 4: //��
		return make_pair(2, 1);
	case 5: //��
		return make_pair(1, 1);
	case 6: //�Ʒ�
		return make_pair(3, 1);
	}
}

void changDie(int dir) // �ֻ��� �� �̵�
{

	//�ֻ��� ī��
	int temp[4][3] = { {0,} };
	for (int i = 0; i < 4; i++) 
	{
		for (int j = 0; j < 3; j++) 
			temp[i][j] = die[i][j];
	}
	//�����ϳ����Ʒ�
	pair<int, int> E = dieLoc(1);
	pair<int, int> W = dieLoc(2);
	pair<int, int> N = dieLoc(3);
	pair<int, int> S = dieLoc(4);
	pair<int, int> U = dieLoc(5);
	pair<int, int> D = dieLoc(6);


	//�����ϳ� 1234
	switch (dir)
	{
	case 1://��
	{
		die[D.first][D.second] = temp[E.first][E.second]; // �� -> �Ʒ�
		die[E.first][E.second] = temp[U.first][U.second]; // �� -> ��
		die[U.first][U.second] = temp[W.first][W.second]; // �� -> ��
		die[W.first][W.second] = temp[D.first][D.second]; // �Ʒ� -> ��
		break;
	}
	case 2://��
	{
		die[U.first][U.second] = temp[E.first][E.second]; // �� -> ��
		die[W.first][W.second] = temp[U.first][U.second]; // �� -> ��
		die[D.first][D.second] = temp[W.first][W.second]; // �� -> �Ʒ�
		die[E.first][E.second] = temp[D.first][D.second]; // �Ʒ� -> ��
		break;
	}
	case 3: //��
	{
		die[D.first][D.second] = temp[N.first][N.second]; // �� -> �Ʒ�
		die[N.first][N.second] = temp[U.first][U.second]; // �� -> ��
		die[U.first][U.second] = temp[S.first][S.second]; // �� -> ��
		die[S.first][S.second] = temp[D.first][D.second]; // �Ʒ� -> ��
		break;
	}
	case 4: //��
	{
		die[U.first][U.second] = temp[N.first][N.second]; // �� -> ��
		die[S.first][S.second] = temp[U.first][U.second]; // �� -> ��
		die[D.first][D.second] = temp[S.first][S.second]; // �� -> �Ʒ�
		die[N.first][N.second] = temp[D.first][D.second]; // �Ʒ� -> ��
		break;
	}
	}
}

int main() 
{
	int dieY = 0; //�ֻ��� ����ġ
	int dieX = 0;
	int dx[4] = {1,-1,0,0}; //�����ϳ�
	int dy[4] = {0,0,-1,1};


	//�Է�
	scanf("%d%d%d%d%d", &n, &m, &dieY, &dieX, &k);
	for (int i = 0; i < n; i++)  
	{
		for (int j = 0; j < m; j++) 
			scanf("%d", &info[i][j]);
	}
	for (int i = 0; i < k; i++)
	{
		int temp;
		scanf("%d", &temp);
		command.push_back(temp);
	}
	int size = command.size();
	for (int i = 0; i < size; i++) 
	{
		dieY += dy[command[i] - 1]; 
		dieX += dx[command[i] - 1];

		//�ٱ��̵�
		if (dieY < 0 || dieY >= n || dieX < 0 || dieX >= m) 
		{
			dieY -= dy[command[i] - 1];
			dieX -= dx[command[i] - 1];
			continue;
		}
		else {

			changDie(command[i]);//�����ϳ� 1234

			pair<int, int> D = dieLoc(6); //�Ʒ��� y,x
			// �̵��� ��ġ�� 0 �϶� ������ ����
			if (info[dieY][dieX] == 0)
			{
				info[dieY][dieX] = die[D.first][D.second];
			}
			// 0�� �ƴҶ� �ֻ����� ������ ������ 0
			else
			{
				int temp = info[dieY][dieX];
				info[dieY][dieX] = 0;
				die[D.first][D.second] = temp;
			}
			pair<int, int> U = dieLoc(5); //���� y,x
			printf("%d\n", die[U.first][U.second]);
		}
	}
	
	system("pause");
	return 0;
}

/*
<���� ���� �Ȱ��κ�>
- �ֻ����� �������� �־������鼭 ���� ó���� �ֻ����� ������
0 �̶�� ���� �����̳� ?
������ ó�� �����ϰ� ������ 1�̰� �Ʒ����� 6�̴ٸ� �ǹ�


<����>
�ֻ��� ������
  2 
4 1 3
  5
  6
- �ֻ��� ��ġ�� 0 ->  �ֻ��� �ٴ��� ĭ ����
-              x ->  �ٴ����� ������ 0
- �������� 1234
- ������ ������ ����� �����Ѵ�
-> �̵��Ҷ����� ���鿡 �����ִ� �� ���


<����� ������>
- ���� ��ü�� ���쳪 ��ġ�� �ٲٴ°ſ��� ������ ������ 
���̰� �����ؼ�  �򰥸�
-> switch break ���Ծ �ð� ����;;
& �������� ������ yx�� ���� �Ϲ������� �����ϴ� yx ���Ǹ� �ٲ������
�����ɸ�;;

-> ���� �ȹٷ� ����
*/