/*#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<algorithm>

using namespace std;

int main() 
{
	int N;
	int time[1000] = { 0, };
	int ans = 0;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) scanf("%d", time + i);
	sort(time, time + N);
	for (int i = 0; i < N; i++) 
	{
		ans += ((N-i) * time[i]);
	}
	printf("%d\n", ans);

	system("pause");
	return 0;
}*/

/*
�׸���� DP�� ���� �����ΰ�..
DP vs �׸���
�����ľ��ϸ鼭 ���� Ǯ�����ų� �ּ��ΰ� ���������ҋ�?
DP
Ȯ���� �̹���� �ּ��̶�� ������ ��Ÿ����?
*/

