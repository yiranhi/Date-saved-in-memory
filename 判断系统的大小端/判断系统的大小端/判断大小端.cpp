#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//判断系统是大端存储还是小端存储

//判断函数ver.1
//int check_sys()
//{
//	int a = 1;
//	char* p = (char*) &a;
//	if (*p == 1)
//		return 1;
//	else
//		return 0;
//}

//判断函数ver.2
//int check_sys()
//{
//	int a = 1;
//	char* p = (char*) &a;
//	return *p;	//返回1为小端，返回0为大端
//}

//判断函数ver.3
int check_sys()
{
	int a = 1;
	return *(char*) &a;
}

int main()
{
	int i = 1;
	int ret = check_sys();
	if (ret == 1)
		printf("系统为小端存储");
	else
		printf("系统为大端存储");
	return 0;
}