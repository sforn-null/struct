#include<stdio.h>
//�ṹ�崫�Σ����Դ�����Ҳ���Դ���ַ
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
	//�����ֶ���ʵ�ֵ���ѡprint2����Ϊ�������ε�ʱ�򣬲�������Ҫѹջ��
	print1(s);
	print2(&s);
	return 0;
}