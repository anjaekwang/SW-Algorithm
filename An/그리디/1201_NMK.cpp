/*#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int N, M, K;
	vector<int> a;
	scanf("%d %d %d", &N, &M, &K);
	for (int i = 1; i <= N; i++) a.push_back(i);
	if (N >= M + K - 1 && N <= M*K) 
	{
		int idx = 0;
		for (int i = 1; i <= M; i++) 
		{
			//K씩 증가하는데 끝에서 N-(M-i)개의 집합이 더 만들어져야 하는경우
			// N이 k개씩 M개가 안묶일 수 있으므로 부족한 만큼 1개 원소로 부분집합을 이룬다.
			int temp = min(idx + K, N - (M - i));
			reverse(a.begin()+idx, a.begin() + temp);
			idx = temp;
		}
		for (int i = 0; i < N; i++) printf("%d ", a[i]);
	}
	else printf("-1");
	system("pause");
	return 0;
}
*/
/*
강의봄 -> 종이에다가 적어둠
비둘기집 원리 찾아보기
*/
