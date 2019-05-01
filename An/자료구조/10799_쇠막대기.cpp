#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int ex10799()
{
	int a, b,len, stack, cnt;
	char s[100001];
	stack = 0;
	cnt = 0;
	a = 0;

	scanf("%s", s);

	len = strlen(s);
	for (int i = 0; i < len; i++) 
	{
		/*이전 문자가 ( 이면 b = 0, )이면 b = 1*/
		if (s[i] == '(')
		{
			stack++;
			b = 0;
		}
		else if (s[i] == ')')
		{
			stack--;
			if (b == 0) cnt += stack; //레이저 일때
			else a++; //쇠막대기 일때
			b = 1;
		}
		
	}
	cnt += a;
	printf("%d\n", cnt);
	return 0; 
}

/*
 쇠막대기 자르는 문제
 조건 : 자기보다 긴 쇠막대기가 밑에 있어야 한다.
        무조건 레이저로 잘린다
 괄호 문제인 이유
  조건에 따라 그림을 그려본후 문자로 문제를 표현할때
  괄호 문제가 됨.
  맨 안쪽 괄호로 인해 무조건 잘리게 되고 쌍들이 
  가장 인접한거에서 이뤄지기에 위로갈수록 짧아짐 쇠막대기

  쇠막대기 조각 총 갯수

  잘리는 갯수 : )에 나올때 바로 이전이 (여야 레이저
                레이저 일때 pop후 (인접 ()안에 들어있는 (수가 잘린 막대기

				마지막 레이저 일 경우 ( 갯수에 * 2 -> 잘못생각
				쇠막대기가 끝날경우 +1

	how 괄호쌍의 갯수를 a 
	    인접한 괄호임을 어떻게 알수있을까? 이것도 기록  b

*/