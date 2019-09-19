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
	// m ���� d���� �����Ÿ��� ��ġ�� ������ ��� temp�� �־�д�.
	for (int i = s; i <= e; i++) 
	{
		if (d > (int)abs((a[m].x - a[i].x))) 
			temp.push_back(a[i]);
	}
	sort(temp.begin(), temp.end(), cmp); // y������ ����
	int vSize = temp.size();

	//���Ϳ� ���� ��� �ν� �� n^2
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
			else break; //break�� ���� d���� Ŀ�� ���鿡���ؼ� ���캸�� �ʴ´� O(n)�� �Ǿ����
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
Ǯ�� ���� �ȳ��� ���� ��.
���̿� ����, ������ ������ ��ͷ� Ǫ�µ�
���ʿ��� ������ Ž������ �������ν�
�ð����⵵�� ���δ�.

struct �⺻ �����ڰ� �����ϴ� -> �̸�(){}
struct �����Ҷ� cmp���ǿ��� ������� ��� ����� ������ �����ؾ���
�ȱ׷��� ��������.
vetor�� �缱�� �ɶ����� �ʱ�ȭ��(?)
*/