#include<stdio.h>
int main()
{
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	char*pc = arr;
	int i = 0;
	for (i = 0; i < 40; i++)
	{
		*(pc + i) = 'x';
		printf("%c", *(pc + i));
	}
	return 0;
}