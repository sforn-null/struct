#include<stdio.h>

////创建一个学生类型
struct stu
{
	char name[20];
	short age;
	char sex[5];
}s1,s2;//全局变量
int main()
{
	struct stu s = { "张三",20,"男" } ;
	//局部变量
	return 0;
}

//特殊声明

//匿名声明
struct 
{
	char name[20];
	short age;
	char sex[5];
}s1;
struct
{
	char name[20];
	short age;
	char sex[5];
}*ps;
int main()
{
	//ps = &s1; 这样是不行的，编译器会把上面两个声明当成完全不同的类型
	return 0;
}
