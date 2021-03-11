//很重要
#include<stdio.h>
#include<stddef.h>

struct S
{
	char c;
	int i;
};
int main()
{
	struct S s = { 0 };
	printf("%d\n", sizeof(s));//8个字节
	//offsetof(struct S, c);
	//offsetof(struct S, i);
	//求成员变量的偏移量，头文件是#include<stddef.h>
	return 0;
}

struct S
{
	char c1;
	int i;
	char c2;
	char c3;
};
int main()
{
	printf("%d\n", sizeof(struct S));//12
	return 0;
}

//对齐数:
//自身大小和默认对齐数的较小值，vs中的默认对齐数是8

struct S3
{
	double d;
	char c;
	int i;
};
int main()
{
	printf("%d\n", sizeof(struct S3));//16
	return 0;
}


//嵌套结构体
struct S3
{
	double d;
	char c;
	int i;
};
struct S4
{
	char c1;
	struct S3 s3;
	double d;
};
int main()
{
	printf("%d\n", sizeof(struct S4));
	return 0;
}
Linux上面没有默认对齐数

修改默认对齐数
#pragma pack(4)
struct S3
{
	char c1;
	double d;
	char c2;
};
#pragma pack()
//将中间的结构体的默认对齐数改为4，一般设置为2的次方

int main()
{
	printf("%d\n", sizeof(struct S3));//16
	return 0;
}


