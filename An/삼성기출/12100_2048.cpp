//실패

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<string>
#include<queue>
#include<map>
#include<algorithm>

using namespace std;
int n;


// string을 포인터로 어떻게 받아서 수정할까?
/*
void transPose(string* s)
{
for (int x = 0; x < n; x++)
{
for (int y = 0; y < n; y++)
{
if (y > x)swap(s[y*n + x], &s[x*n + y]);
}
}
}
*/

string move(string temp, int dir)
{
	string s = temp;
	//움직이는거 구현
	switch (dir)
	{
	case 0: //왼쪽 

		// 진행방향으로 수 밀기
		for (int y = 0; y < n; y++)
		{
			for (int x = 0; x < n; x++)
			{
				int idx = y * n + x;
				if (s[idx] == '0')
				{
					s.insert(y*n + n, "0");
					s.erase(idx, 1);
				}
			}
		}

		for (int i = 0; i < n*n - 1; i++)
		{
			// 같은 가로에 존재할때만
			if (s[i] != '0' && s[i] == s[i + 1] && i / n == (i + 1) / n)
			{
				int y = i / n;
				s[i] = (s[i] - '0') * 2 + '0';
				s.insert(y*n + n, "0"); //맨 오른쪽
				s.erase(i + 1, 1);
			}
		}
		break;

	case 1: //오른쪽

		// 진행방향 수밀기
		for (int y = 0; y < n; y++) 
		{
			for (int x = 0; x < n; x++) 
			{
				int idx = y * n + x;
				if (s[idx] == '0') 
				{
					s.erase(idx, 1);
					s.insert(y*n, "0");
				}
			}
		}

		for (int i = n * n - 1; i > 0; i--)
		{
			// 같은 가로에 존재할때만
			if (s[i] != '0' && s[i] == s[i - 1] && i / n == (i - 1) / n)
			{
				int y = i / n;
				//s[i] = (s[i] - '0') * 2 + '0';
				s[i] *= 2 ;

				s.insert(y*n, "0"); //맨 왼쪽
				s.erase(i, 1);
			}
		}
		break;

	case 2: //위

			//transPose
		for (int x = 0; x<n; x++)
		{
			for (int y = 0; y < n; y++)
			{
				if (y>x)swap(s[y*n + x], s[x*n + y]);
			}
		}

		// 진행방향으로 수 밀기
		for (int y = 0; y < n; y++)
		{
			for (int x = 0; x < n; x++)
			{
				int idx = y * n + x;
				if (s[idx] == '0')
				{
					s.insert(y*n + n, "0");
					s.erase(idx, 1);
				}
			}
		}

		for (int i = 0; i < n*n - 1; i++)
		{
			// 같은 가로에 존재할때만
			if (s[i] != '0' && s[i] == s[i + 1] && i / n == (i + 1) / n)
			{
				int y = i / n;
				//s[i] = (s[i] - '0') * 2 + '0';
				s[i] *= 2;

				s.insert(y*n + n, "0"); //맨 오른쪽
				s.erase(i + 1, 1);
			}
		}

		for (int x = 0; x < n; x++)
		{
			for (int y = 0; y < n; y++)
			{
				if (y > x)swap(s[y*n + x], s[x*n + y]);
			}
		}

		break;
	case 3: //아래

			//transPose
		for (int x = 0; x < n; x++)
		{
			for (int y = 0; y < n; y++)
			{
				if (y > x)swap(s[y*n + x], s[x*n + y]);
			}
		}
		// 진행방향 수밀기
		for (int y = 0; y < n; y++)
		{
			for (int x = 0; x < n; x++)
			{
				int idx = y * n + x;
				if (s[idx] == '0')
				{
					s.erase(idx, 1);
					s.insert(y*n, "0");
				}
			}
		}

		for (int i = n * n - 1; i > 0; i--)
		{
			// 같은 가로에 존재할때만
			if (s[i] != '0' && s[i] == s[i - 1] && i / n == (i - 1) / n)
			{
				int y = i / n;
				//s[i] = (s[i] - '0') * 2 + '0';
				s[i] *= 2;

				s.insert(y*n, "0"); //맨 왼쪽
				s.erase(i, 1);
			}
		}

		//transPose
		for (int x = 0; x < n; x++)
		{
			for (int y = 0; y < n; y++)
			{
				if (y > x)swap(s[y*n + x], s[x*n + y]);
			}
		}
		break;
	}
	return s;
}

int BFS(string s)
{
	map<string, int> check;
	queue<string> q;
	int ans = 0;

	q.push(s);

	int step = 0;
	while (!q.empty())
	{
		int size = q.size();
		for (int i = 0; i < size; i++)
		{
			string cur = q.front();
			for (int i = 0; i < 4; i++) // 상하좌우 0123
			{
				string next = move(cur, i);
				if (check.count(next) == 0)
				{
					check[next] = 1;
					q.push(next);

					//점수계산
					for (int j = 0; j < n*n; j++)
					{
						ans = max(ans, (int)(next[j] - '0'));
						if (ans == 64) 
						{
							system("pause");
						}
					}

				}
			}
			q.pop();
		}
		step++;
		if (step == 5) break;
	}
	return ans;
}

int main()
{
	int map[20][20] = { { 0,0 }, };
	scanf("%d", &n);

	string s = "";
	int temp;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++) 
		{
			scanf("%d", &temp);
            s += ((char)temp + '0');
		}
	}

	printf("%d", BFS(s));
	system("pause");
	return 0;
}
/*

<문제 풀이>
- 문제 적기(이해하기)
- 의사코드 작성해서 풀기 (논리적, 단계적)
- 함수로 빼내어서 코딩하기


<api 정리>
- map 사용 ,count 그리고 int로 사용했음
string의 stoi이용해서 to_string은 string 객체리턴

- 한개 문자를 int-char 변환은 아스키 코드이용
int-string 변환은 메소드, stoi, to_string이용

- ? string객체는 파라미터로 주소를 어떻게 넘겨줘야 수정할수있을까?

- string 원소 삽입, 제거
삽입(s.insert(idx, 문자열)) : string 범위외 삽임은 오류남
idx 위치에 삽입이 들어감 그 위치 문자열은 뒤로 밀림
삭제(s.erase(시작위치, 갯수))


<느낀점>
- 삼성문제 탐색문제 잘나오는데 개념이 어렵기보단 구현이 어려움 : 연습하자
- 맵을 string으로 표현하여 풀때 그 수가 아스키코드 때문에 0~127사이여야한다
- string으로 풀때 0~9는 문자를 숫자처럼 사용해도 되지만 10이상에서는 2자리
이기 때문에 아스키코드번호를 이용하여 푼다 -> 한개문자로 변환하여사용
-> 다른사람 풀이는 그냥 배열에 저장하여 값이 변환 될때마다 q.front()로 초기화 시킴, 지역변수  
*/