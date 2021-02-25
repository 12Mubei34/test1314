#include<stdio.h>
#include<string.h>
int main()
{
	if ((strlen("abc") - strlen("abcdef")) > 0)
	{
		printf("大于\n");;
	}
	else
	{
		printf("小于\n");
	}
	return 0;
}