#include<stdio.h>
//编写函数，求取字符串的长度：
//方法1：创建临时变量，此方法打印的结果为6
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//	str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//方法2：利用递归方式求解，同样结果为6
int my_strlen(char*str)
{
	if (*str != '\0')
		return 1 + my_strlen(str + 1);
	else
	return 0;
}
int main()
{
	char arr[] = "abcdef";
	int len = my_strlen(arr);
	printf("%d\n", len);
	return 0;
}