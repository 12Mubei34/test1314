#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//ͨ��λ����ʵ��2��n�η�����
int main()
{
	int n = 0;
	while (~scanf("%d", &n))
	{
		printf("%d\n", 1 << n);
	}
	return 0;
}
