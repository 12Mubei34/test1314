#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//求一个整数二进制位中1的个数
int main()
{
	int a = 0;
	scanf("%d", &a);
	int i = 0;
	int count = 0;
	for (i = 0; i < 32; i++)
	{
		if (((a >> i)) & 1 == 1)
			count++;
	}
	printf("%d\n", count);
	return 0;
}