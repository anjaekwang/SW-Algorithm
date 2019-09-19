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

int binarySearch(int L, int R, int des)//idx를 return
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

	// 입력완료 -> vector에 들어온 수 종류랑 갯수있음
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
첫번째 시도: 
벡터에 입력은 넣는데
입력의 수가 이미 있으면 cnt ++
아니면 push
(확인: logN, 또 정렬에 NlogN)
이를N개 넣으므로 O(N^2logN) -> 시간초과

두번째 시도:
같은 방법으로 하는데 대신 
sort 때문에 시간초과가 발생하므로
입력을 따로 미리 받아두고 sort후 사용한다
*/