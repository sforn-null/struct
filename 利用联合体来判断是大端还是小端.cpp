#include<stdio.h>

//int check_sys()
//{
//	union
//	{
//		int i;
//		char a;
//	}u;
//	u.i = 1;
//	//因为共用一个空间
//	//返回0，表示大端
//	//返回1，表示小端
//	return u.a;
//}
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//		printf("大端\n");
//	return 0;
//}