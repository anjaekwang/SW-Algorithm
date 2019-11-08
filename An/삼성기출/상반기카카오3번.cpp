#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<vector>

using namespace std;

vector<vector<int>> key;
vector<vector<int>> lock;
int M, N; //key, lock


//ȸ��
void rotation(vector<vector<int>>& A) 
{
	vector<vector<int>> B;
	vector<int> temp;
	for (int x = 0; x < M; x++) 
	{
		for (int y = 0; y < M; y++)
			temp.push_back(A[M - 1 - y][x]);
		B.push_back(temp);
		temp.clear();
	}

	// copy
	for (int y = 0; y < M; y++) 
	{
		for (int x = 0; x < M; x++) 
			A[y][x] = B[y][x];
	}
}

bool check(int startY, int startX, vector<vector<int>> key, vector<vector<int>> lock)
{
	vector<vector<int>> temp;
	vector<int> temp2;
	for (int i = 0; i < 2 * M + N; i++) temp2.push_back(0);
	for (int i = 0; i < 2 * M + N; i++) temp.push_back(temp2);

	//temp ����� lock�� ����
	for (int y = M; y < M + N; y++) 
	{
		for (int x = M; x < M + N; x++)
			temp[y][x] = lock[y - M][x - M];
	}


	//lock�� Ű�� ������, ����
	for (int y = startY; y < startY + M; y++) 
	{
		for (int x = startX; x < startX + M; x++) 
			temp[y][x] += key[y-startY][x-startX];
	}

	//Ű�� �´��� Ȯ��, ��� 1�ΰ�?
	for (int y = M; y < M + N; y++) 
	{
		for (int x = M; x < M + N; x++) 
			if (temp[y][x] != 1) return false;
	}
	return true;
}

bool solution(vector<vector<int>> key, vector<vector<int>> lock) {
	
	M = key.size();
	N = lock.size();
	for (int y = 0; y < M + N; y++)  //������ġ
	{
		for (int x = 0; x < M + N; x++)
		{
			if (x == 5)
			{
				printf("");
			}
			for (int i = 0; i < 4; i++) //4�� ȸ��
			{
				rotation(key);
				if (check(y, x, key, lock)) return true; 
				else continue;
			}
		}
	}
	return false;
}

int main() 
{
	//�Է�
	return 0;
}

/*
key(����, 2��, ���簢) : M -> 
lock(����, 2��, ���簢) : N
3 <= M<=N <= 20
���� ���͵��� Ű��

���� ��� 1�̸� true �׹ۿ� false
vector���� �ڷ��� call by reference -> �迭ó�� �Ű����� ���ǽ�&, ������ �׳� �̸�

<�ٽ�>
������ ����� ����ó���� �ٽ��ε�
-> ���������� ������ �򰥸��� ���� �����Ͽ�
ū temp �� ����� lock�� �����ϰ� ...

segmentation fault -> �޸� ���� ����?  
-> ���� �ڵ忡 �Ǽ��� �־� �ð������µ�.. true�� false�� �߸����ų�.. M��� �Ұ��� N���� ���ų�..
*/