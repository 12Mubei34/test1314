#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//计算器 - 加、减、乘、除
void menu()
{
	printf("****************************\n");
	printf("**** 1. add   2. sub    ****\n");
	printf("**** 3. mul   4. div    ****\n");
	printf("**** 0. exit            ****\n");
	printf("****************************\n");
}

int Add(int x, int y)
{
	return x + y;
}

int Sub(int x, int y)
{
	return x - y;
}

int Mul(int x, int y)
{
	return x * y;
}

int Div(int x, int y)
{
	return x / y;
}
int main()
{
	int input = 0;
	int x = 0;
	int y = 0;
	int ret = 0;
	//函数指针数组 - 转移表
	int (*pfArr[])(int, int) = { 0, Add, Sub, Mul, Div };

	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);//1
		if (0 == input)
		{
			printf("退出程序\n");
			break;
		}
		else if (input>=1 && input<=4)
		{
			printf("请输入2个操作数:>");
			scanf("%d%d", &x, &y);
			ret = pfArr[input](x, y);//输入相应的数字即可调用相应功能的函数
			printf("ret = %d\n", ret);
		}
		else
		{
			printf("选择错误\n");
		}
	} while (input);

	return 0;
}