/*#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int k, a[12] = {0,};
	while (1) 
	{
		scanf("%d", &k);
		if (k == 0) break;
		for (int i = 0; i < k; i++) scanf("%d", a + i);

		vector<int> d;
		for (int i = 0; i < k - 6; i++) d.push_back(0);
		for (int i = 0; i < 6; i++) d.push_back(1);

		vector<vector<int>> ans;
 		do 
		{
			vector<int> temp;
			for (int i = 0; i < k; i++) 
			{
				if (d[i] == 1) temp.push_back(a[i]);
			}
			ans.push_back(temp);
		} while (next_permutation(d.begin(), d.end()));
		
		sort(ans.begin(), ans.end());
		for (auto &v : ans) 
		{
			for (int i = 0; i < v.size(); i++) printf("%d ", v[i]);
			printf("\n");

		}
	}
	system("pause");
	return 0;
}*/
/*
S���տ� ���� ���� �����ϴ°�� next_permutation��
�ߺ��Ǵ� ���� ������ �������༭ ���� : 1_1 1_2 �� 1_2 1_1�� �ߺ��Ǽ� ��Ÿ���� x
 
���տ��� ������ ��� ��츦 ��Ÿ���� ���:
���� s�� ũ�Ⱑ ������ d�� ����� 
�̶� d�� s���� � ���ҵ��� ����� ���� ����ũ? ��.
d�� 0�� 1�� �̷��������� �������Ҽ� k ��ŭ 1�� ����ִ�.
d�� ���Ҹ� ���� �������ν� ������ ���� (d�� next_permutation �ϴ°�� �ߺ��� ������
�ټ���� ��� ��� ��찡 ���´�.)

������ push_back�� �ִ� ���Ұ� �������� �״��
���� �ƿ� �����ؼ� ����

for(auto &v : ans) -> ans�� ����(����)�� ���ʷ� �ּ� �޾ƿ�
*/