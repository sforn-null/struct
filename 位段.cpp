#include<stdio.h>
//λ�κͽṹ�����ƣ�����ÿ�����������и�:������
struct A
{
	int _a : 2;//�»���ûʲô��������ֻ������
	int _b : 5;//ð�ź����Ǳ���λ��һ���ֽ�8������λ
	int _c : 10;
	int _d : 30;
};
//�������������������֣���ĸ���»�����ɣ����ǵ�һ������������

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

	printf("%d\n", sizeof(S));//3,˵���õ����˷ѵķ�ʽ
	return 0;
}