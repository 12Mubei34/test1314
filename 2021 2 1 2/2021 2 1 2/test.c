#include<stdio.h>
int main()
{
	//char* p = "abcdef";   
	char arr[] = "abcdef";
	/*printf("%s", p);  */    
	printf("%s", arr);
	return 0;
//此两种方法打印出来的结果都为abcdef，但注释的部分为指针数组
}