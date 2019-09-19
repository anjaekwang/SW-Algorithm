/*#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
#include <algorithm>
#include <limits.h>


using namespace std;

void writeAns(string &s, int width) 
{
	int flag = 0;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < width - 1; j++)
		{
			if (!flag) s += 'R';
			else s += 'L';
		}
		s += 'D';
		flag = !flag;
	}
}

int map[1000][1000];

int main()
{
	int height, width;
	int flag = 0;

	scanf("%d %d", &height, &width);
	for (int y = 0; y < height; y++) 
	{
		for (int x = 0; x < width; x++) 
		{
			int temp;
			scanf("%d", &temp);
			map[y][x] = temp;
		}
	}

	// 홀수 일때 
	if (height % 2 != 0) 
	{
		for (int i = 0; i < height ; i++) 
		{
			for (int j = 0; j < width - 1; j++) 
			{
				if (!flag) printf("R");
				else printf("L");
			}
			flag = !flag;
			if(i != height-1)printf("D");
		}
	}
	else 
	{
		if (width % 2 != 0) 
		{
			for (int i = 0; i < width; i++)
			{
				for (int j = 0; j < height - 1; j++)
				{
					if (!flag) printf("D");
					else printf("U");
				}
				flag = !flag;
				if (i != width - 1)printf("R");
			}
		}
		else //짝짝 일때
		{
			int minX, minY, score = INT_MAX;
			string s1="", s2="";
			for (int y = 0; y < height; y++) 
			{
				for (int x = 0; x < width; x++) 
				{
					if ((x + y) % 2 != 0) 
					{
						if (score > map[y][x]) 
						{
							score = map[y][x];
							minX = x;
							minY = y;
						}
					}
				}
			}
			int y1 =0;
			while (1) 
			{
				if (y1 == minY || y1 + 1 == minY) break;
				else
				{
					y1 += 2;
					writeAns(s1, width);
				}
			}
			int y2 = height - 1;
			while (1) 
			{
				if (y2 - 1 == minY || y2 == minY) break;
				else
				{
					y2 -= 2;
					writeAns(s2, width);
				}
			}
			
			int x1 =0;
			while (1) 
			{
				if (x1 == minX || x1 + 1 == minX) break;
				else 
				{
					x1 += 2;
					s1 += "DRUR";
				}
			}
			int x2 = width - 1;
			while (1)
			{
				if (x2 == minX || x2 -1 == minX) break;
				else
				{
					x2 -= 2;
					s2 += "DRUR";
				}
			}

			if (minY == y1) s1 += "DR";
			else s1 += "RD";
			reverse(s2.begin(), s2.end());
			s1 += s2;
			cout << s1;
		}
	}
	
	system("pause");
	return 0;
}*/
/*
문제는 쉬웠다 -> 적어둠
다만 짝수 * 짝수 에서 놓친부분 있음
&
string 을 함수의 매개변수로 쓸경우 void a(string &s)로 하고 사용은 a(s)로 해야함
*/