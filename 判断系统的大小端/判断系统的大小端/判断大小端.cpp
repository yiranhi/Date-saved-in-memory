#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//�ж�ϵͳ�Ǵ�˴洢����С�˴洢

//�жϺ���ver.1
//int check_sys()
//{
//	int a = 1;
//	char* p = (char*) &a;
//	if (*p == 1)
//		return 1;
//	else
//		return 0;
//}

//�жϺ���ver.2
//int check_sys()
//{
//	int a = 1;
//	char* p = (char*) &a;
//	return *p;	//����1ΪС�ˣ�����0Ϊ���
//}

//�жϺ���ver.3
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
		printf("ϵͳΪС�˴洢");
	else
		printf("ϵͳΪ��˴洢");
	return 0;
}