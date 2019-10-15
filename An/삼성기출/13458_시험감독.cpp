#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<limits.h>

using namespace std;

int a[1000000] = { 0, };

int main() 
{
	int n, b, c;

	scanf("%d", &n);
	for (int i = 0; i < n; i++) scanf("%d", a + i);
	scanf("%d%d", &b, &c);
	long long cnt = 0;

	for (int i = 0; i < n; i++)
	{
		a[i] -= b;
		cnt++;

		if (a[i] <= 0) continue;
		else 
		{
			cnt += (a[i] / c);
			if (a[i] % c != 0) cnt += 1;
		}
	}

	printf("%lld", cnt);
	system("pause");
	return 0;
}

/*
-시험장에 감독관 총감독1명, 부감독 n명
- 총감독 한번에 B명 
- 부감독 한번에 C명
- 시험장엔 수험생 한명은 무조건 있다
- 시험장엔  총감독 한명은 무조건 있다?
문제 : 필요한 감독관 최솟값


<히든 케이스 찾기>
전제 - 예제는 다 맞기
1. 조건은 확실하게 지켯는가?
2. 놓친것은 없는가?
3. 자료형이 오버플로우 나지 않는가?
*/