#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//通过位运算实现2的n次方运算
int main()
{
	int n = 0;
	while (~scanf("%d", &n))
	{
		printf("%d\n", 1 << n);
	}
	return 0;
}
