#include<stdio.h>
int check_sys()
{
	union Un
	{
		char c;
		int i;
	}u;
	u.i = 1;

	return u.c;
}


int main()
{
	int ret = check_sys();
	if (ret == 1)
	{
		printf("С��\n");
	}
	else
	{
		printf("���\n");
	}

	return 0;
}
int check_sys()
{
	int a = 1;//0x 00 00 00 01
	//��                   ��
	//01 00 00 00 - С��
	//00 00 00 01 - ���
	if (1 == *(char*)&a)//int*
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
union U
{
	short arr[7];//14
	int i;//4
};

int main()
{
	union U u;
	printf("%d\n", sizeof(u));//16

	return 0;
}