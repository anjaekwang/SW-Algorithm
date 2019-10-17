#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>

using namespace std;

//15��, idx�� -�Ϸ� �������� +1
int t[15 + 1] = { 0, }; //�ɸ��� ����
int p[15 + 1] = { 0, }; //�ݾ�
int d[15 + 1] = { 0, };
int n;

void input()
{
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
		scanf("%d%d", t + i, p + i);
}

int main()
{
	input();

	for (int i = 1; i <= n; i++) 
	{
		for (int j = 0; j <= i - 1; j++) 
		{
			int temp = 0;
			for (int k = j + 1; k <= i; k++) 
			{
				if((k+(t[k] -1)) ==  i)
					temp = max(temp, p[k]);
			}
			d[i] = max(d[i], d[j] + temp);
		}
	}

	int ans = 0;
	for (int i = 1; i <= n; i++) 
		ans = max(ans, d[i]);

	printf("%d", ans);
	system("pause");
	return 0;
}

/*
<����>
- N���� �� N+1�ϳ� ���
- �Ϸ翡 �ϳ�

<����Ǯ��>
- d[i]�� i�� �������ִ� �ִ� �ݾ�
*�����³� �ٷ� ���� �� �ִ�

- i������ ���� �޴°��� �ѹ� ���� ���ؼ� i�� �Ǵ°��� �ִ�
d[i] = max(d[j] + max(p[k]))
j�� 0~i-1 
k�� j+1~i��

j�� �����ϸ� j�������� �� �Ҽ� ������
k�� j���ĺ��� i �����̸� 
���� �ִ밡 �Ǵ°��� ã�´�


<������>
- ��� dp ���� �ϱ�?(������ ����)
(�κм���, Ÿ�ϸ�, 1�θ����, ��ƼĿ)
-> ��ȭ���� ����� �ִ� ����, ������ ����� �̿��� ����
������ Ǯ�� �־���Ѵ�, ����������

- d�� ��� �����ؾ� ����Ǯ��?
-> ������ d�� idx�� ������ ����
ex) �ִ����� -> d[i] = i�� ������ �ִ� �ִ�ݾ�
*/