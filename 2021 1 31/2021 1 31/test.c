#include<stdio.h>
int main()
{
	int arr[] = { 1, 2, 3, 4, 5 };
	int*p;
	for (p = &arr[5]; p > &arr[0];)
	{
		*--p = 0;
		printf("%d ", *p);
	}
	return 0;
}//������Ϊ5��0
