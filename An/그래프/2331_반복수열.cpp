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

	vector<int> a; //����, 

	scanf("%d %d", &A, &P);
	sprintf(temp, "%d", A);
	a.push_back(A);
	a.push_back(temp1(temp,P));
	clearBuf(temp, 10);

	while (!temp3)
	{
		sprintf(temp, "%d", a.back());
		int temp2 = temp1(temp, P); //���� �� ��
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


// int-> char : sprintf(char�迭�ּ�, ����, int)
// ���ڸ��°� char �迭�� ���ڿ��� �ް� �ϸ��
// %s %d�� �޴°Ű��� (����� ���� ��)

// ���� solution
// �ڷ����� ���� �ϳ��� �־�µ�
// �� �ڷ����� �̹� �����ϸ� break
// size�� �����Ѵ�.-> �̰� �� �ȵǴ°ɱ�..

// ���ڹ迭�� '0'���� �ʱ�ȭ �ؼ� ������ �Ǿ���.
// ���ڹ迭�� �׻� \0���� �ʱ�ȭ���� !! 

/*
�� �ɰ��� �Ǵٸ� ���
 while (A != 0)
		{
			next_num += pow(A % 10, P);
			A /= 10;
		}

*/

// �׷��� ����Ŭ Ȯ�� : �湮�� ��� �߳� üũ�ϸ����
// check�� �׻� 0��1�� ������������ 
// ������ ���� �ǹ̸� �ٲ��! (�׷����� Ž��!)