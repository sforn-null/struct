#include<stdio.h>

struct Point//зјБъ
{
	int x;
	int y;
};

struct Node
{
	struct Point p;
	struct Node* next;
};
int main()
{
	struct Point p = { 3,5 };
	printf("x=%d y=%d\n", p.x, p.y);
	struct Node n = { {5,9},NULL };
	printf("x=%d y=%d\n", n.p.x, n.p.y);
	return 0;
}