#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//̷��ǿC���Եڶ������һ�⣬����Ľ��Ϊ5
int main()
{
	int i = 0;
	int max = 0;
	int arr[5] = { 1, 2, 3, 4, 5 };
	for (i = 0; i < 5; i++)
	{
		max = max > arr[i] ? max : arr[i];

	}
	printf("%d\n", max);
	return 0;
}
