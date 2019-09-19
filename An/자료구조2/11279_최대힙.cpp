/*#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>

using namespace std;

int heap[100000 + 1] = { 0, };
int LastIdx = 0; //트리는 idx 1부터 시작

void Push(int x) 
{
	heap[++LastIdx] = x;
	for (int i = LastIdx; i > 1; i /= 2) 
	{
		if (heap[i] >= heap[i / 2]) swap(heap[i], heap[i / 2]);
		else break;
	}
}

int Pop() //아래로
{
	if (!LastIdx) return 0;
	int ans = heap[1];
	heap[1] = heap[LastIdx];
	heap[LastIdx--] = 0;
	for (int i = 1; i*2 <= LastIdx;) 
	{
		if (heap[i] > heap[2 * i] && heap[i] > heap[2 * i + 1]) break;
		else if (heap[2 * i] > heap[2 * i + 1]) 
		{
			swap(heap[i], heap[2 * i]);
			i = 2 * i;
		}
		else 
		{
			swap(heap[i], heap[2 * i + 1]);
			i = 2 * i +1;
		}
	}
	return ans;
}

int main()
{
	int n;
	scanf("%d", &n);
	while (n--) 
	{
		int Case;
		scanf("%d", &Case);
		if (Case) Push(Case);
		else printf("   %d\n", Pop());
	}
	system("pause");
	return 0;
}*/

/*
최대힙 알고리즘

int i라면 i/2 를 배열에 넣어도 알아서 정수형으로
swap arg는 그냥 변수
*/