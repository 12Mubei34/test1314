//头文件的引用
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//利用函数调用，循环语句等简单知识实现计算器 - 加、减、乘、除简单运算

//实现menu菜单函数
void menu()
{
//打印一个计算器菜单	
	printf("****************************\n");
	printf("**** 1. add   2. sub    ****\n");
	printf("**** 3. mul   4. div    ****\n");
	printf("**** 0. exit            ****\n");
	printf("****************************\n");
}
//实现每个运算
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
//首先我们先创建四个临时变量	
	int input = 0;
	int x = 0;
	int y = 0;
	int ret = 0;
//利用do while循环语句
	do
	{
		menu();//调用menu函数
		printf("请选择：>");
		scanf("%d", &input);//输入具体的数字以实现相应功能
		switch (input)//switch语句的使用
		{
		case 1:
				printf("请输入两个操作数:");
				scanf("%d %d", &x, &y);
				ret = Add(x, y);
				printf("ret=%d\n", ret);
				break;
		case 2:
			printf("请输入两个操作数:");
			scanf("%d %d", &x, &y);
			ret = Sub(x, y);
			printf("ret=%d\n", ret);
			break;
		case 3:
			printf("请输入两个操作数:");
			scanf("%d %d", &x, &y);
			ret = Mul(x, y);
			printf("ret=%d\n", ret);
			break;
		case 4:
			printf("请输入两个操作数:");
			scanf("%d %d", &x, &y);
			ret = Div(x, y);
			printf("ret=%d\n", ret);
			break;
		case 0:
			printf("退出计算器\n");
				break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);//当输入0时自动结束循环
	return 0;
}