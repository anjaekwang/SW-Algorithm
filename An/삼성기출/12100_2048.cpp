//����

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<string>
#include<queue>
#include<map>
#include<algorithm>

using namespace std;
int n;


// string�� �����ͷ� ��� �޾Ƽ� �����ұ�?
/*
void transPose(string* s)
{
for (int x = 0; x < n; x++)
{
for (int y = 0; y < n; y++)
{
if (y > x)swap(s[y*n + x], &s[x*n + y]);
}
}
}
*/

string move(string temp, int dir)
{
	string s = temp;
	//�����̴°� ����
	switch (dir)
	{
	case 0: //���� 

		// ����������� �� �б�
		for (int y = 0; y < n; y++)
		{
			for (int x = 0; x < n; x++)
			{
				int idx = y * n + x;
				if (s[idx] == '0')
				{
					s.insert(y*n + n, "0");
					s.erase(idx, 1);
				}
			}
		}

		for (int i = 0; i < n*n - 1; i++)
		{
			// ���� ���ο� �����Ҷ���
			if (s[i] != '0' && s[i] == s[i + 1] && i / n == (i + 1) / n)
			{
				int y = i / n;
				s[i] = (s[i] - '0') * 2 + '0';
				s.insert(y*n + n, "0"); //�� ������
				s.erase(i + 1, 1);
			}
		}
		break;

	case 1: //������

		// ������� ���б�
		for (int y = 0; y < n; y++) 
		{
			for (int x = 0; x < n; x++) 
			{
				int idx = y * n + x;
				if (s[idx] == '0') 
				{
					s.erase(idx, 1);
					s.insert(y*n, "0");
				}
			}
		}

		for (int i = n * n - 1; i > 0; i--)
		{
			// ���� ���ο� �����Ҷ���
			if (s[i] != '0' && s[i] == s[i - 1] && i / n == (i - 1) / n)
			{
				int y = i / n;
				//s[i] = (s[i] - '0') * 2 + '0';
				s[i] *= 2 ;

				s.insert(y*n, "0"); //�� ����
				s.erase(i, 1);
			}
		}
		break;

	case 2: //��

			//transPose
		for (int x = 0; x<n; x++)
		{
			for (int y = 0; y < n; y++)
			{
				if (y>x)swap(s[y*n + x], s[x*n + y]);
			}
		}

		// ����������� �� �б�
		for (int y = 0; y < n; y++)
		{
			for (int x = 0; x < n; x++)
			{
				int idx = y * n + x;
				if (s[idx] == '0')
				{
					s.insert(y*n + n, "0");
					s.erase(idx, 1);
				}
			}
		}

		for (int i = 0; i < n*n - 1; i++)
		{
			// ���� ���ο� �����Ҷ���
			if (s[i] != '0' && s[i] == s[i + 1] && i / n == (i + 1) / n)
			{
				int y = i / n;
				//s[i] = (s[i] - '0') * 2 + '0';
				s[i] *= 2;

				s.insert(y*n + n, "0"); //�� ������
				s.erase(i + 1, 1);
			}
		}

		for (int x = 0; x < n; x++)
		{
			for (int y = 0; y < n; y++)
			{
				if (y > x)swap(s[y*n + x], s[x*n + y]);
			}
		}

		break;
	case 3: //�Ʒ�

			//transPose
		for (int x = 0; x < n; x++)
		{
			for (int y = 0; y < n; y++)
			{
				if (y > x)swap(s[y*n + x], s[x*n + y]);
			}
		}
		// ������� ���б�
		for (int y = 0; y < n; y++)
		{
			for (int x = 0; x < n; x++)
			{
				int idx = y * n + x;
				if (s[idx] == '0')
				{
					s.erase(idx, 1);
					s.insert(y*n, "0");
				}
			}
		}

		for (int i = n * n - 1; i > 0; i--)
		{
			// ���� ���ο� �����Ҷ���
			if (s[i] != '0' && s[i] == s[i - 1] && i / n == (i - 1) / n)
			{
				int y = i / n;
				//s[i] = (s[i] - '0') * 2 + '0';
				s[i] *= 2;

				s.insert(y*n, "0"); //�� ����
				s.erase(i, 1);
			}
		}

		//transPose
		for (int x = 0; x < n; x++)
		{
			for (int y = 0; y < n; y++)
			{
				if (y > x)swap(s[y*n + x], s[x*n + y]);
			}
		}
		break;
	}
	return s;
}

int BFS(string s)
{
	map<string, int> check;
	queue<string> q;
	int ans = 0;

	q.push(s);

	int step = 0;
	while (!q.empty())
	{
		int size = q.size();
		for (int i = 0; i < size; i++)
		{
			string cur = q.front();
			for (int i = 0; i < 4; i++) // �����¿� 0123
			{
				string next = move(cur, i);
				if (check.count(next) == 0)
				{
					check[next] = 1;
					q.push(next);

					//�������
					for (int j = 0; j < n*n; j++)
					{
						ans = max(ans, (int)(next[j] - '0'));
						if (ans == 64) 
						{
							system("pause");
						}
					}

				}
			}
			q.pop();
		}
		step++;
		if (step == 5) break;
	}
	return ans;
}

int main()
{
	int map[20][20] = { { 0,0 }, };
	scanf("%d", &n);

	string s = "";
	int temp;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++) 
		{
			scanf("%d", &temp);
            s += ((char)temp + '0');
		}
	}

	printf("%d", BFS(s));
	system("pause");
	return 0;
}
/*

<���� Ǯ��>
- ���� ����(�����ϱ�)
- �ǻ��ڵ� �ۼ��ؼ� Ǯ�� (����, �ܰ���)
- �Լ��� ����� �ڵ��ϱ�


<api ����>
- map ��� ,count �׸��� int�� �������
string�� stoi�̿��ؼ� to_string�� string ��ü����

- �Ѱ� ���ڸ� int-char ��ȯ�� �ƽ�Ű �ڵ��̿�
int-string ��ȯ�� �޼ҵ�, stoi, to_string�̿�

- ? string��ü�� �Ķ���ͷ� �ּҸ� ��� �Ѱ���� �����Ҽ�������?

- string ���� ����, ����
����(s.insert(idx, ���ڿ�)) : string ������ ������ ������
idx ��ġ�� ������ �� �� ��ġ ���ڿ��� �ڷ� �и�
����(s.erase(������ġ, ����))


<������>
- �Ｚ���� Ž������ �߳����µ� ������ ��Ʊ⺸�� ������ ����� : ��������
- ���� string���� ǥ���Ͽ� Ǯ�� �� ���� �ƽ�Ű�ڵ� ������ 0~127���̿����Ѵ�
- string���� Ǯ�� 0~9�� ���ڸ� ����ó�� ����ص� ������ 10�̻󿡼��� 2�ڸ�
�̱� ������ �ƽ�Ű�ڵ��ȣ�� �̿��Ͽ� Ǭ�� -> �Ѱ����ڷ� ��ȯ�Ͽ����
-> �ٸ���� Ǯ�̴� �׳� �迭�� �����Ͽ� ���� ��ȯ �ɶ����� q.front()�� �ʱ�ȭ ��Ŵ, ��������  
*/