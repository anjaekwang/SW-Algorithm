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
				ans += Ttemp.second; //현재 들어오는 막대와 동일한 높이 끼리 보는 경우
				if (!s.empty()) ans++; //제일가까운 막대와 현재 들어오는 막대가 보는경우
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
stack에 볼 수 있는 것들을 저장한다.(시간복잡도 줄음)
-> 그러면 자연스럽게 stack에는 내림차순이된다
1. top보다 들어려는게 작을경우 
top에의해 stack에 저장된 것들을 볼수 없음.
top과 인접된건 볼수 있기 때문에 ans++하며 push한다.(다음 행위에서 현재것을 볼수 있기에)

2. top보다 들어오려는게 클경우
stack내 현재 들어오려는 것보다 작은것들은 다음 행위에서 절때 볼수없다.
pop 하면서 ans++(현재 들어오려는것이 볼수 있으니)
후 push
(stack이 비워있을땐 무조건 push하며 안비워져있을경우 ans++ push)

예외처리 - 동일한 높이가 들어올경우
들어오려는게 stack에서 가장 가까운 (높이가 가깝지않은) 막대와
동일한 높이의 막대들과 볼수있다.
동일한 높이의 막대들의 개수를 추가로 저장해 푸는게 더 간단.-> pair를 이용한다

히스토그램과 오아시스 재결합 문제를 통해 
스택에 문제에 해당하는 것들을 저장한뒤 이용하여 (오름차순 or 내림차순으로 정리시킴 stack 내)
시간 복잡도를 줄인다.
*/