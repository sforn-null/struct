#include<stdio.h>

//�ص�����
//����Ĳ�̫���г��õ���ʽ
void print(const char* str)
{
	printf("hehe:%s\n", str);
}
void test(void(*p)(const char*))
{
	printf("test\n");
	p("bit");
}
int main()
{
	test(print);
	return 0;
}

int main()
{
	//ð��������
	//ð��������ֻ��������������
	//qsort-���������������͵�����-�⺯��
	return 0;
}

qsort-�⺯��-����
quick sort-
