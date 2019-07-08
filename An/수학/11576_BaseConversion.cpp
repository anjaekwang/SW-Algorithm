/*#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
#include <algorithm>
#include <stack>



using namespace std;

int main()
{
	int A, B, m, a[25] = {0,};
	int N=0; // 10진법 수
	stack<int> s;
	scanf("%d %d", &A, &B);
	scanf("%d", &m);
	for (int i = 0; i < m; i++)  //이거 수정해야함
	{
		scanf("%d", a + i); //a에 A진법 수가 저장됨
	}

	//A -> 10진법
	for (int i = 0; i < m; i++) 
	{
		N = N * A + a[i];
	}
	while (N > 0) 
	{
		s.push(N%B);
		N /= B;
	}
	while (1) 
	{
		if (s.empty()) break;
		else 
		{
			printf("%d ", s.top());
			s.pop();
		}
	}
	system("pause");
	return 0;
}*/
/*
Base Conversion
A진법을 B 진법으로
입력순서 
1. 진법
2. A진법 자리수(1<=m<=25)
3. 공백으로 구분되는 높은 자리수 부터 차례대로 주어진다
*/