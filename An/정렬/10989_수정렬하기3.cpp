/*#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	//바로 쓰고 버리고 정수 범위로 체크
	int nNum[10001] = { 0 };
	int n, temp;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) 
	{
		scanf("%d", &temp);
		nNum[temp] += 1;
	}
	for (int i = 1; i <= 10000; i++)
	{
		for(int j=0; j < nNum[i]; j++)
			printf("%d\n", i);
	}
	system("pause");
}*/
// 메모리 문제 -> 입력받은대로 바로바로 ?