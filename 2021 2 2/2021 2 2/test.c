#include<stdio.h>
#include<assert.h>
//模拟实现strlen函数
int my_strlen(const char*str)
//形参之所以为char*是因为arr的类型是char*类型，而后面的str是自己定义的变量，并且后面要用到
//此代码输出结果为len=6
{
	assert(str != NULL);
	const char*start = str;
	while (*str)
	{
		str++;
	}
	return str - start;
}
int main()
{
	char arr[] = "abcdef";
	int len = my_strlen(arr);
	printf("len=%d\n", len);
	return 0;
}