#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//写一个代码实现输入3条边的长度来判断是什么三角形
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	while (scanf("%d %d %d", &a, &b, &c) != EOF)
//while循环的目的是能实现一直输入3条边判断是什么三角形而不会结束	
//EOF是文档结束标志，如果输入错误的话，scanf函数会返回EOF	
	{
		if ((a + b > c) && (a + c > b) && (b + c > a))
		{
			//三角形
			if (a == b && b == c)//等边三角形
			{
				printf("Equilateral triangle!\n");
			}
			else if (((a == b) && (b != c)) || ((a == c) && (c != b)) || ((b == c) && (c != a)))//等腰
			{
				printf("Isosceles triangle!\n");
			}
			else
			{
				printf("Ordinary triangle!\n");
			}
		}
		else
		{
			//不是三角形
			printf("Not a triangle!\n");
		}
	}
	return 0;
}
