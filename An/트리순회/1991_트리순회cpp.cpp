/*#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>

using namespace std;

int Tree[26][2] = { {0,0}, }; //행 : Vertex 
int N;


void preorder(int Vertex) 
{
	if (Vertex != -1) {
		printf("%c", (char)(Vertex + 'A'));
		preorder(Tree[Vertex][0]);
		preorder(Tree[Vertex][1]);
	}
}

void inorder(int Vertex)
{
	if (Vertex != -1) {
		inorder(Tree[Vertex][0]);
		printf("%c", (char)(Vertex + 'A'));
		inorder(Tree[Vertex][1]);
	}
}


void postorder(int Vertex)
{
	if (Vertex != -1) {
		postorder(Tree[Vertex][0]);
		postorder(Tree[Vertex][1]);
		printf("%c", (char)(Vertex + 'A'));
	}
}
int main()
{
	scanf("%d", &N);
	for (int i = 0; i < N; i++) 
	{
		char a, b, c;
		cin >> a >> b >> c;
		int Vertex = (int)(a - 'A');
		
		if (b == '.') Tree[Vertex][0] = -1;
		else Tree[Vertex][0] = (int)(b - 'A');

		if (c == '.') Tree[Vertex][1] = -1;
		else Tree[Vertex][1] = (int)(c - 'A');
	}

	preorder(0);
	printf("\n");
	inorder(0);
	printf("\n");
	postorder(0);
	printf("\n");

	return 0;
}*/

// 이진트리 단순 순회 방식
// 없는 노드를 -1로 표현(특정값)
// 노드를 각 숫자로 매핑(보통 순차적?)
// Tree[a][2] a는 vertex를 의미한다!