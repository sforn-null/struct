#include<stdio.h>

struct Node
{
	int data;
	struct Node* next;
};
int main()
{
	struct Node n;
	return 0;
}

typedef struct Node
{
	int data;
	struct Node* next;//����д��Node * next;
}Node;
int main()
{
	Node n2;
	return 0;
}