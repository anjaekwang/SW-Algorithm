/*#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stack>

using namespace std;

int n;
int histo[100000] = { 0, };
stack<int> s;


int main()
{

	while (1)
	{
		scanf("%d", &n);
		if (!n) break;
		for (int i = 0; i < n; i++) scanf("%d", histo + i);
		long long ans = 0;
		for (int i = 0; i < n; i++)
		{
			while (!s.empty() && histo[s.top()] > histo[i]) //���� ���̺��� stack�� ������ ���̰� ū�� ����
			{
				int height = histo[s.top()];
				s.pop();
				int width = i;
				if (!s.empty()) width = i - (s.top() + 1);

				long long tempAns = (long long)width * (long long)height;
				if (tempAns > ans) ans = tempAns;
			}
			s.push(i);
		}
		//s�� ����� ���� ������
		while (!s.empty())
		{
			int height = histo[s.top()];
			s.pop();
			int width = n;
			if (!s.empty()) width = n - (s.top() + 1);
			long long tempAns = (long long)width * (long long)height;
			if (tempAns > ans) ans = tempAns;
		}
		printf("%lld\n", ans);
	}
	return 0;
}
*/
/*
������ ���븦 ���̷� �ϸ� �̵��� ����� �ִ� ���� ū 
���簢�� ���ؾ��ϴµ�
�׳��Ұ�� ���븶�� Ž���ؾ� �ϹǷ� n2����

stack�� �̿��Ͽ� ������ �����ϰ� �ð����⵵�� ���δ�
-> stack�� ������ ��ϵ�, ���� �ֱٰ��� ���ɶ�!

!int int�� ������� int�� ������� 
long long = int + int�� �ذ���� x
long long = (long long) int + (long long) int 
*/
