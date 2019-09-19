/*#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>

using namespace std;

struct Point 
{
	int x;
	int y;
	Point(){}
	Point(int x, int y) : x(x), y(y) {}
};


int dis(int x1, int y1, int x2, int y2) 
{
	return ((int)pow((x1 - x2), 2) + (int)pow((y1 - y2), 2));
}

bool cmp(const Point &a, const Point &b)
{
	if (a.y < b.y) return true;
	else if (a.y == b.y) return a.x < b.x;
	else return false;
}
bool cmp2(const Point &a, const Point &b)
{
	if (a.x < b.x) return true;
	else if (a.x == b.x) return a.y < b.y;
	else return false;
}

int brute_force(Point* a, int s, int e) {
	int ans = -1;
	for (int i = s; i <= e - 1; i++) {
		for (int j = i + 1; j <= e; j++) {
			int d = dis(a[i].x, a[i].y, a[j].x, a[j].y);
			if (ans == -1 || ans > d) {
				ans = d;
			}
		}
	}
	return ans;
}

int solution(Point* a, int s, int e) 
{

	int n = e - s + 1;
	if (n <= 3) return brute_force(a, s, e);

	int m = (s + e) / 2;
	int left = solution(a, s, m);
	int right = solution(a, m+1, e);
	int d = min(left, right);

	vector<Point> temp;
	// m 기준 d보다 작은거리에 위치한 점들을 모두 temp에 넣어둔다.
	for (int i = s; i <= e; i++) 
	{
		if (d > (int)abs((a[m].x - a[i].x))) 
			temp.push_back(a[i]);
	}
	sort(temp.begin(), temp.end(), cmp); // y에대해 정렬
	int vSize = temp.size();

	//벡터에 대해 모든 두쌍 비교 n^2
	for (int i = 0; i < vSize-1; i++) 
	{
		for (int j = i + 1; j < vSize; j++) 
		{
			int yd = (int)pow(abs(temp[i].y - temp[j].y), 2);
			if(yd < d) 
			{
				int tempD = dis(temp[i].x, temp[i].y, temp[j].x, temp[j].y);
				if (tempD < d) d = tempD;
			}
			else break; //break로 인해 d보다 커진 점들에대해선 살펴보지 않는다 O(n)이 되어버림
		}
	}
	return d;
}
int main()
{
	int n;
	Point a[100000];

	scanf("%d", &n);
	for (int i = 0; i < n; i++) scanf("%d%d", &a[i].x, &a[i].y);

	sort(a, a+n, cmp2);
	printf("%d", solution(a, 0, n - 1));
	system("pause");
	return 0;
}*/
/*
풀이 생각 안나서 강의 봄.
종이에 적음, 공간을 나누어 재귀로 푸는데
불필요한 범위를 탐색하지 않음으로써
시간복잡도를 줄인다.

struct 기본 생성자가 없습니다 -> 이름(){}
struct 정렬할때 cmp정의에서 같은경우 어떠한 방식을 따르게 정의해야지
안그러면 오류난다.
vetor도 재선언 될때마다 초기화됨(?)
*/