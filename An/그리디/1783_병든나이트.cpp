/*#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int height, width;
	int ans = 0;
	scanf("%d %d", &height, &width);

	if (height == 1) ans = 1;
	else if (height < 3) ans = min(4, (width + 1) / 2);
	else 
	{
		if (width >= 7) ans = width - 2;
		else ans = min(4, width);
	}

	printf("%d\n", ans);
	system("pause");

	return 0;
}
*/
/*
���Ǻ� 
!�켱 N,M������ ���� ũ��
for�Ұ�, �迭��� �Ұ��̱⿡ ���� �������� �ذ��

�̵�Ƚ���� 4�� �̻��� ��쿡�� �� �̵���� ���� �ѹ� �̻� �̿��ؾ��Ѵ�.
-> �̸� ���� �ȵǾ���.

�̵��� �׻�������̸� ���Ʒ��θ� ��鸮�� ������
height�� �������� ������ Ǯ��


������ ���� '�ִ���'�����̵�

height =1 -> ��������
height < 3 -> 2,3 �ۿ� ���ϰ� �ִ� 3�� �̵� ����
height >= 3 -> x�� +1�� �̵��ϴ°� ���� ���� �̵�����
but �̵�Ƚ�� 4�� �̻��Ͻÿ� 2.3 �ѹ��� ����ؾ���
widh 7���� �����Ѵ�

4���̻� �̵��� �ּ� height�� 3�̻�, width�� 7�̻��̿����Ѵ�(���Ƕ�����
���� �ִ� ���̰��� ����� +1�ΰ͸� �ϴ°�
*/