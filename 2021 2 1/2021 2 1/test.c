#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	a = a^b;
	b = a^b;
	a = a^b;
	printf("a=%d b=%d", a, b);
	return 0;
}
//此两种方法都可以在不创建临时变量的情况下交换两个整数
//最好用第二种，第一种方法可能会超范围