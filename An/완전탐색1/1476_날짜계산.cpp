/*#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	int E, M, S;
	scanf("%d %d %d", &E, &S, &M);
	int ans = 1;
	int e = 1, m = 1, s = 1;

	while (1) 
	{
		if (e == E && M == m && s == S)
		{
			printf("%d", ans);
			break;
		}
		ans++; e++; s++; m++;
		if (e == 15 + 1) e = 1;
		if (s == 28 + 1)s = 1;
		if (m == 19 + 1)m = 1;
	}
	system("pause");
	return 0;
}*/
/*
���Ʈ ����
��� ����Ǽ� ���غ���
EMS �ü� �ִ� ����Ǽ� 15 * 28*19
�ð����� �Ȱɸ�
-> ������Ǽ� ���� ans +1
->?����Ǽ��� ��� Ȯ���� 15 * 28 *19?
�ߺ��ǰ� ESM �������� �ٸ� ������ ��Ÿ���°��� ���°�?
-> �������� ���� ���� ���� ������ �Ͽ����Ƿ�
*/

