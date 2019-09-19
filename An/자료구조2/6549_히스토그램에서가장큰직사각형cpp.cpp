/*#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stack>

using namespace std;

int n;
int histo[100000] = { 0, };
stack<int> s;


int main()
{

	while (1)
	{
		scanf("%d", &n);
		if (!n) break;
		for (int i = 0; i < n; i++) scanf("%d", histo + i);
		long long ans = 0;
		for (int i = 0; i < n; i++)
		{
			while (!s.empty() && histo[s.top()] > histo[i]) //현재 높이보다 stack안 막대의 높이가 큰거 까지
			{
				int height = histo[s.top()];
				s.pop();
				int width = i;
				if (!s.empty()) width = i - (s.top() + 1);

				long long tempAns = (long long)width * (long long)height;
				if (tempAns > ans) ans = tempAns;
			}
			s.push(i);
		}
		//s가 비워져 있지 않을때
		while (!s.empty())
		{
			int height = histo[s.top()];
			s.pop();
			int width = n;
			if (!s.empty()) width = n - (s.top() + 1);
			long long tempAns = (long long)width * (long long)height;
			if (tempAns > ans) ans = tempAns;
		}
		printf("%lld\n", ans);
	}
	return 0;
}
*/
/*
각각의 막대를 높이로 하며 이들중 만들수 있는 가장 큰 
직사각형 구해야하는데
그냥할경우 막대마다 탐색해야 하므로 n2나옴

stack을 이용하여 정보를 저장하고 시간복잡도를 줄인다
-> stack의 이전의 기록들, 제일 최근것이 사용될때!

!int int의 계산결과가 int를 넘을경우 
long long = int + int로 해결되지 x
long long = (long long) int + (long long) int 
*/
