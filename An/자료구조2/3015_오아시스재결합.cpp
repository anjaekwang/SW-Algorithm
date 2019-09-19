/*#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stack>

using namespace std;

int n, a[500000] = { 0, };
stack<pair<int, int>> s;
long long ans = 0;
int main()
{
	scanf("%d", &n);
	for (int i = 0; i < n; i++) scanf("%d", a + i);
	for (int i = 0; i < n; i++) 
	{
		while (!s.empty() && s.top().first < a[i])
		{
			ans += s.top().second;
			s.pop();
		}
		if (s.empty()) s.push(make_pair(a[i], 1));
		else 
		{
			if (s.top().first == a[i]) 
			{
				pair<int, int> Ttemp = s.top();
				s.pop();
				ans += Ttemp.second; //���� ������ ����� ������ ���� ���� ���� ���
				if (!s.empty()) ans++; //���ϰ���� ����� ���� ������ ���밡 ���°��
				Ttemp.second++;
				s.push(Ttemp);
			}
			else 
			{
				s.push(make_pair(a[i], 1));
				ans++;
			}
		}
	}
	
	printf("%lld", ans);
	system("pause");
	return 0;
}*/

/*
stack�� �� �� �ִ� �͵��� �����Ѵ�.(�ð����⵵ ����)
-> �׷��� �ڿ������� stack���� ���������̵ȴ�
1. top���� �����°� ������� 
top������ stack�� ����� �͵��� ���� ����.
top�� �����Ȱ� ���� �ֱ� ������ ans++�ϸ� push�Ѵ�.(���� �������� ������� ���� �ֱ⿡)

2. top���� �������°� Ŭ���
stack�� ���� �������� �ͺ��� �����͵��� ���� �������� ���� ��������.
pop �ϸ鼭 ans++(���� �������°��� ���� ������)
�� push
(stack�� ��������� ������ push�ϸ� �Ⱥ����������� ans++ push)

����ó�� - ������ ���̰� ���ð��
�������°� stack���� ���� ����� (���̰� ����������) �����
������ ������ ������ �����ִ�.
������ ������ ������� ������ �߰��� ������ Ǫ�°� �� ����.-> pair�� �̿��Ѵ�

������׷��� ���ƽý� ����� ������ ���� 
���ÿ� ������ �ش��ϴ� �͵��� �����ѵ� �̿��Ͽ� (�������� or ������������ ������Ŵ stack ��)
�ð� ���⵵�� ���δ�.
*/