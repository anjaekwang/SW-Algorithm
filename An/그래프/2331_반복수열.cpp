/*#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int temp1(char* A, int p) 
{
	int temp = 0;
	for (int i = 0; A[i]!='\0'; i++) 
		temp += (int)pow(A[i] - '0', p);
	return temp;
}
void clearBuf(char* buf, int size) 
{
	for (int i = 0; i < size; i++) buf[i] = '\n';
}
int main()
{
	int A, P;
	char temp[10] = {'0',};
	int temp3 = 0;

	vector<int> a; //수열, 

	scanf("%d %d", &A, &P);
	sprintf(temp, "%d", A);
	a.push_back(A);
	a.push_back(temp1(temp,P));
	clearBuf(temp, 10);

	while (!temp3)
	{
		sprintf(temp, "%d", a.back());
		int temp2 = temp1(temp, P); //제곱 합 값
		clearBuf(temp, 10);

		for (int i = 0; i < a.size(); i++) 
		{
			if (a[i] == temp2) {
				temp3 = 1;
				printf("%d\n", i);
				break;
			}
		}
		a.push_back(temp2);
	}
	system("pause");

	return 0;
}*/


// int-> char : sprintf(char배열주소, 형식, int)
// 수자르는건 char 배열에 문자열로 받고 하면됨
// %s %d로 받는거가능 (띄어쓰기로 구분 됨)

// 나의 solution
// 자료형에 값을 하나씩 넣어가는데
// 그 자료형이 이미 존재하면 break
// size를 리턴한다.-> 이게 왜 안되는걸까..

// 문자배열을 '0'으로 초기화 해서 문제가 되었다.
// 문자배열은 항상 \0으로 초기화하자 !! 

/*
수 쪼개는 또다른 방법
 while (A != 0)
		{
			next_num += pow(A % 10, P);
			A /= 10;
		}

*/

// 그래프 싸이클 확인 : 방문을 몇번 했냐 체크하면되지
// check를 항상 0과1로 생각하지말고 
// 문제에 따라 의미를 바꿔라! (그래프는 탐색!)