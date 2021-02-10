#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>
#include <time.h>
void menu()//设置菜单样式
{
	printf("********************************\n");
	printf("*******     1. play      *******\n");
	printf("*******     0. exit      *******\n");
	printf("********************************\n");
}
void game()
{
	//此处用到了rand函数，注意rand函数能生成随机数的最大值为32767
	//我们对其%100后加1，让生成的随机数在0~100之间
	int ret = rand() % 100 + 1;
	int num = 0;
	while (1)
	{
		printf("请猜数字:>");
		scanf("%d", &num);
		if (num == ret)
		{
			printf("恭喜你，猜对了\n");
			break;
		}
		else if (num > ret)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("猜小了\n");
		}
	}
}
int main()
{
	int input = 0;
	//srand函数的作用是设置一个随机的起点，这样才能使每次生成的随机数是变化的
	//因为电脑上的时间是每时每刻都在发生变化的，因此我们可以引入time函数，它的返回的类型是一个时间戳，永远是随机的
	//因为time函数的参数是一个指针，但我们又不想使用它真实的意义，因此可以将参数写为空指针NULL
	//即time(NULL),因为srand的参数类型是unsigned int，因此我们将time函数进行强制类型转换
	//随机数的起点在整个工程中设置一次就可以了，如果放在game函数的实现部分，每玩一次游戏设置一次起点的话可能导致生成的随机数相同
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
	return 0;
}