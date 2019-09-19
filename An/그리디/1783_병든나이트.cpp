/*#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int height, width;
	int ans = 0;
	scanf("%d %d", &height, &width);

	if (height == 1) ans = 1;
	else if (height < 3) ans = min(4, (width + 1) / 2);
	else 
	{
		if (width >= 7) ans = width - 2;
		else ans = min(4, width);
	}

	printf("%d\n", ans);
	system("pause");

	return 0;
}
*/
/*
강의봄 
!우선 N,M제한이 ㅈㄴ 크면
for불가, 배열사용 불가이기에 보통 수식으로 해결됨

이동횟수가 4번 이상인 경우에는 위 이동방법 각각 한번 이상 이용해야한다.
-> 이말 이해 안되었다.

이동은 항상오른쪽이며 위아래로만 흔들리기 때문에
height를 기준으로 문제를 풀면


문제의 답은 '최대한'많이이동

height =1 -> 못움직임
height < 3 -> 2,3 밖에 못하고 최대 3번 이동 가능
height >= 3 -> x로 +1씩 이동하는게 제일 많이 이동가능
but 이동횟수 4번 이상일시에 2.3 한번은 사용해야함
widh 7에서 구분한다

4번이상 이동시 최소 height는 3이상, width는 7이상이여야한다(조건때문에
원래 최대 많이가는 방법은 +1인것만 하는것
*/