#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>

using namespace std;

//15일, idx를 -일로 접근위해 +1
int t[15 + 1] = { 0, }; //걸리는 날수
int p[15 + 1] = { 0, }; //금액
int d[15 + 1] = { 0, };
int n;

void input()
{
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
		scanf("%d%d", t + i, p + i);
}

int main()
{
	input();

	for (int i = 1; i <= n; i++) 
	{
		for (int j = 0; j <= i - 1; j++) 
		{
			int temp = 0;
			for (int k = j + 1; k <= i; k++) 
			{
				if((k+(t[k] -1)) ==  i)
					temp = max(temp, p[k]);
			}
			d[i] = max(d[i], d[j] + temp);
		}
	}

	int ans = 0;
	for (int i = 1; i <= n; i++) 
		ans = max(ans, d[i]);

	printf("%d", ans);
	system("pause");
	return 0;
}

/*
<조건>
- N일후 즉 N+1일날 퇴사
- 하루에 하나

<문제풀이>
- d[i]는 i날 받을수있는 최대 금액
*끝나는날 바로 받을 수 있다

- i이전에 돈을 받는것중 한번 일을 더해서 i가 되는것의 최대
d[i] = max(d[j] + max(p[k]))
j는 0~i-1 
k는 j+1~i중

j를 선택하면 j이전에는 일 할수 없으니
k는 j이후부터 i 까지이며 
그중 최대가 되는것을 찾는다


<얻은점>
- 어떤게 dp 문제 일까?(최적해 문제)
(부분수열, 타일링, 1로만들기, 스티커)
-> 점화식을 세울수 있는 문제, 이전의 결과를 이용해 다음
문제를 풀수 있어야한다, 연쇄적으로

- d를 어떻게 정의해야 쉽게풀까?
-> 보통은 d와 idx를 문제의 정답
ex) 최대이익 -> d[i] = i날 받을수 있는 최대금액
*/