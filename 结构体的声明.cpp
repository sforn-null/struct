#include<stdio.h>

////����һ��ѧ������
struct stu
{
	char name[20];
	short age;
	char sex[5];
}s1,s2;//ȫ�ֱ���
int main()
{
	struct stu s = { "����",20,"��" } ;
	//�ֲ�����
	return 0;
}

//��������

//��������
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
	//ps = &s1; �����ǲ��еģ����������������������������ȫ��ͬ������
	return 0;
}