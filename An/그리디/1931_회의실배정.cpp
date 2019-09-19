/*#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

struct time 
{
	int start;
	int end;
	time(int start, int end) : start(start), end(end) {}
};

//a�� �������°� ������ true �����ϰ��Ѵ�.
bool cmp(const time &a, const time &b)
{
	if (a.end < b.end) return true;
	else if (a.end == b.end) 
	{
		if (a.start <= b.start) return true;
		else return false;
	}
	else return false;
}

int main() 
{
	int N;
	vector<time> meeting; //idx�� ȸ��
	scanf("%d", &N);

	//ȸ�� �ð�����
	for (int i = 0; i < N; i++) 
	{
		int temp1, temp2;
		scanf("%d %d", &temp1, &temp2);
		meeting.push_back(time(temp1, temp2)); //i���� ȸ�� ����
	}

	sort(meeting.begin(), meeting.end(), cmp);

	int criteria = 0;
	int ans = 0;

	for (int i = 0; i < N; i++)
	{
		//if (meeting[i].start = meeting[i].end)
		//	ans++;
		if (meeting[i].start >= criteria) 
		{
			criteria = meeting[i].end;
			ans++;
		}
	}
	printf("%d\n", ans);

	system("pause");
	return 0;
}*/

/*
���� ���� ����, ���� ȸ�ǽð� ª���� -> �ݷ�����
���� ���� �����°� ������� �Ѵ�.
-> ��ǻ� ���� ���Ǵ�� ���� ����� ��� �ϳ�?
*/