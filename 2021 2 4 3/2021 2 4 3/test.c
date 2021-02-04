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

//函数传参-函数指针
//回调函数

void calc(int (*p)(int, int))
{
	int x = 0;
	int y = 0;
	int ret = 0;
	printf("请输入2个操作数:>");
	scanf("%d%d", &x, &y);
	ret = p(x, y);
	printf("ret = %d\n", ret);
}

int main()
{
	int input = 0;

	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			calc(Add);//计算器
			break;
		case 2:
			calc(Sub);//计算器
			break;
		case 3:
			calc(Mul);
			break;
		case 4:
			calc(Div);
			break;
		case 0:
			printf("退出计算器\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);

	return 0;
}