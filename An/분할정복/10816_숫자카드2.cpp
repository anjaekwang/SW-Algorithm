/*#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
struct point 
{
	int val;
	int cnt;
	point(int val, int cnt) : val(val), cnt(cnt) {}
};

vector<point> a;
int b[500000] = { 0, };

int binarySearch(int L, int R, int des)//idx�� return
{
	if (L > R) return -1;
	else 
	{
		int M = (L + R) / 2;
		if (a[M].val == des) return M;
		else if (a[M].val < des) binarySearch(M + 1, R, des);
		else binarySearch(L, M - 1, des);
	}
}

int main()
{
	int N;
	scanf("%d", &N);

	// �Է¿Ϸ� -> vector�� ���� �� ������ ��������
	for (int i = 0; i < N; i++) scanf("%d", b+i);
	sort(b, b+N);
	for (int i = 0; i < N; i++) {
		int idx = binarySearch(0, a.size() - 1, b[i]);
		if (idx != -1) a[idx].cnt++;
		else a.push_back(point(b[i], 1));
	}

	int M, temp;
	scanf("%d", &M);
	int vSize = a.size();
	for (int i = 0; i < M; i++) 
	{
		scanf("%d", &temp);
		int idx = binarySearch(0, vSize - 1, temp);
		if (idx != -1) printf("%d ", a[idx].cnt);
		else printf("0 ");
	}
	
	system("pause");
	return 0;
}*/

/*
ù��° �õ�: 
���Ϳ� �Է��� �ִµ�
�Է��� ���� �̹� ������ cnt ++
�ƴϸ� push
(Ȯ��: logN, �� ���Ŀ� NlogN)
�̸�N�� �����Ƿ� O(N^2logN) -> �ð��ʰ�

�ι�° �õ�:
���� ������� �ϴµ� ��� 
sort ������ �ð��ʰ��� �߻��ϹǷ�
�Է��� ���� �̸� �޾Ƶΰ� sort�� ����Ѵ�
*/