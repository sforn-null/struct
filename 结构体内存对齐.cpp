//����Ҫ
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
	printf("%d\n", sizeof(s));//8���ֽ�
	//offsetof(struct S, c);
	//offsetof(struct S, i);
	//���Ա������ƫ������ͷ�ļ���#include<stddef.h>
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

//������:
//�����С��Ĭ�϶������Ľ�Сֵ��vs�е�Ĭ�϶�������8

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


//Ƕ�׽ṹ��
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
Linux����û��Ĭ�϶�����

�޸�Ĭ�϶�����
#pragma pack(4)
struct S3
{
	char c1;
	double d;
	char c2;
};
#pragma pack()
//���м�Ľṹ���Ĭ�϶�������Ϊ4��һ������Ϊ2�Ĵη�

int main()
{
	printf("%d\n", sizeof(struct S3));//16
	return 0;
}


