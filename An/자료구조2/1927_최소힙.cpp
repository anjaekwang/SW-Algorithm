/*#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <queue>
using namespace std;

priority_queue<int> q;

int main()
{
	int n;
	scanf("%d", &n);
	while (n--)
	{
		int x;
		scanf("%d", &x);
		if (x) q.push(-x);
		else if (!x && q.empty()) {printf("0\n");}
		else{
			printf("%d\n", -q.top());
			q.pop();
		}
	}
	system("pause");
	return 0;
}

*/