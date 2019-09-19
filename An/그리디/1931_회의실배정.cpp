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

//a가 먼저오는게 맞은면 true 리턴하게한다.
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
	vector<time> meeting; //idx는 회의
	scanf("%d", &N);

	//회의 시간정보
	for (int i = 0; i < N; i++) 
	{
		int temp1, temp2;
		scanf("%d %d", &temp1, &temp2);
		meeting.push_back(time(temp1, temp2)); //i번쨰 회의 시작
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
가장 일찍 시작, 가장 회의시간 짧은순 -> 반례존재
가장 일찍 끝나는거 순서대로 한다.
-> 사실상 증명 강의대로 말고 수기로 어떻게 하냐?
*/