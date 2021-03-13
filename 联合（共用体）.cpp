#include<stdio.h>

//union Un
//{
//	char c;
//	int i;
//};
//int main()
//{
//	union Un u = { 0 };
//	printf("%d\n", sizeof(u));//4个字节
//	//成员共用同一个空间
//	printf("%p\n", &u);//地址一样
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));
//	return 0;
//}

union Un
{
	char c[5];
	int i;
};

union U
{
	short s[7];
	int i;
};

int main()
{
	union Un u = { 0 };
	printf("%d\n", sizeof(u));//8
	//最小是最大的大小，并且得是最大对齐数的整数倍
	printf("%p\n", &u);
	printf("%p\n", &(u.c));
	printf("%p\n", &(u.i));
	printf("%d\n", sizeof(union U));//16
	return 0;
}

//改变一个变量就会改变另一个，所以同一时间最好只用一个
