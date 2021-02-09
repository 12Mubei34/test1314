#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//任意输入一个正整数N，统计1~N之间奇数的个数和偶数的个数，并输出。
//若输入5，则输出3 2
int main()
{
	int n;//后面n是自己输入的，可以不初始化为0
	scanf("%d", &n);
	int i;
	int odd = 0;//后面没有表达式给odd赋值，所以必须将odd初始化为一个值
	for (i = 1; i <= n; i++)
	{
		if (i % 2 == 1)
			odd++;
	}
	printf("%d %d", odd, n - odd);	
}