#include<stdio.h>

//union Un
//{
//	char c;
//	int i;
//};
//int main()
//{
//	union Un u = { 0 };
//	printf("%d\n", sizeof(u));//4���ֽ�
//	//��Ա����ͬһ���ռ�
//	printf("%p\n", &u);//��ַһ��
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
	//��С�����Ĵ�С�����ҵ�������������������
	printf("%p\n", &u);
	printf("%p\n", &(u.c));
	printf("%p\n", &(u.i));
	printf("%d\n", sizeof(union U));//16
	return 0;
}

//�ı�һ�������ͻ�ı���һ��������ͬһʱ�����ֻ��һ��
