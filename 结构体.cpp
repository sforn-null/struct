#include<stdio.h>
//����һ��ѧ��-- һЩ����
//����
//����
//�绰
//�Ա�
//struct �ṹ��ؼ��� stu - �ṹ���ǩ struct stu-- �ṹ������
// ��һ��д��
struct stu
{
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}s1,s2,s3;//s1,s2,s3 ������ȫ�ֵĽṹ�����
//�ڶ���д��
typedef struct stu
{
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}stu;
int main()
{
    stu s;//�ֲ�����
	return 0;
}




