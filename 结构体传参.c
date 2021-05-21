#include<stdio.h>
//结构体传参，可以传变量也可以传地址
struct S
{
	char arr[1024];
	int i;
};

void print1(struct S ss)
{
	printf("%s %d\n", ss.arr, ss.i);
}

void print2(struct S* ss)
{
	printf("%s %d\n", ss->arr, ss->i);
}

int main()
{
	struct S s = { "hello world",100 };
	//这两种都能实现但首选print2，因为函数传参的时候，参数是需要压栈的
	print1(s);
	print2(&s);
	return 0;
}
