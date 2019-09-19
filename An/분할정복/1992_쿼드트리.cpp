/*#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>

using namespace std;

int n;
int map[64][64] = { {0,0} };
string ans;

bool isOneElement(int y, int x, int N) //������ġ 
{
	for (int ny = y; ny < y + N; ny++) 
	{
		for (int nx = x; nx < x + N; nx++) 
		{
			if (map[y][x] != map[ny][nx])
				return false;
		}
	}
	if(map[y][x]) ans += '1';
	else ans += '0';
	return true;
}

void solution(int y, int x, int N) 
{
	if (N == 1) 
	{
		if (map[y][x]) ans += '1';
		else ans += '0';
		return;
	}
	else
	{
		if (!isOneElement(y, x, N)) //false�� ����
		{
			ans += '(';
			solution(y, x, N / 2); //����
			solution(y, x + N / 2, N / 2); //����
			solution(y + N / 2, x, N / 2); //�޾�
			solution(y + N / 2, x + N / 2, N / 2); //����
			ans += ')';
		}
		else return;
	}
}

int main()
{
	scanf("%d", &n);
	for (int y = 0; y < n; y++) 
	{
		char temp[64 + 1] = { '\0', };
		scanf("%s", temp);
		for (int x = 0; x < n; x++) 
			map[y][x] = (int)(temp[x] - '0');
	}
	solution(0, 0, n);
	cout << ans;
	system("pause");
	return 0;
}
*/
/*
�����°� �ܹ��� ���ҹ���
*/


