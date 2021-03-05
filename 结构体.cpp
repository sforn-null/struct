#include<stdio.h>
//描述一个学生-- 一些数据
//名字
//年龄
//电话
//性别
//struct 结构体关键字 stu - 结构体标签 struct stu-- 结构体类型
// 第一种写法
struct stu
{
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}s1,s2,s3;//s1,s2,s3 是三个全局的结构体变量
//第二种写法
typedef struct stu
{
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}stu;
int main()
{
    stu s;//局部变量
	return 0;
}




