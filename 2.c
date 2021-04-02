#include<stdio.h>
struct S
{
	int a;
	char c;
	char arr[20];
	double d;
};

struct T
{
	char ch[10];
	struct S s;
	char* pc;
};

int main()
{
	struct T t = { "heh",{100,'w',"hello world",3.14},NULL };
	printf("%s\n", t.ch);
	printf("%s\n", t.s.arr);
	return 0;
}
