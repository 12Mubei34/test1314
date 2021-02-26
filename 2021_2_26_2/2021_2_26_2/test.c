#include<stdio.h>
#include<string.h>
//打印结果为bcdefa
char*left_move(char*str)
{
	char tmp = *str;
	int len = strlen(str);
	int i = 0;
	for (i = 0; i < len - 1; i++)
	{
		*(str + i) = *(str + i + 1);
	}
	*(str + len - 1) = tmp;
	return str;
}
int main()
{
	char arr[] = "abcdef";
	left_move(arr);
	printf("%s", arr);
	return 0;
}