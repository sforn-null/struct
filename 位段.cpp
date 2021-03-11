#include<stdio.h>
//位段和结构体类似，但是每个变量后面有个:和数字
struct A
{
	int _a : 2;//下划线没什么特殊意义只是命名
	int _b : 5;//冒号后面是比特位，一个字节8个比特位
	int _c : 10;
	int _d : 30;
};
//所有命名规则是由数字，字母，下划线组成，但是第一个不能是数字

struct S
{
	char a : 3;
	char b : 4;
	char c : 5;
	char d : 4;
};
int main()
{
	struct S s = { 0 };
	s.a = 10;
	s.b = 12;
	s.c = 3;
	s.d = 4;

	printf("%d\n", sizeof(S));//3,说明用的是浪费的方式
	return 0;
}