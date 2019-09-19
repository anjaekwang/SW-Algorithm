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
S집합에 같은 수가 존재하는경우 next_permutation은
중복되는 수의 순열을 제거해줘서 나옴 : 1_1 1_2 와 1_2 1_1을 중복되서 나타내지 x
 
집합에서 조합의 모든 경우를 나타내는 방법:
집합 s와 크기가 동일한 d를 만든다 
이때 d는 s에서 어떤 원소들을 뽑을까에 대한 마스크? 임.
d는 0과 1로 이뤄져있으면 뽑을원소수 k 만큼 1이 들어있다.
d를 원소를 줄을 세움으로써 조합을 구현 (d를 next_permutation 하는결과 중복은 제외한
줄세우는 방법 모든 경우가 나온다.)

벡터의 push_back은 넣는 원소가 없어져도 그대로
값을 아예 복사해서 넣음

for(auto &v : ans) -> ans의 원소(벡터)를 차례로 주소 받아옴
*/