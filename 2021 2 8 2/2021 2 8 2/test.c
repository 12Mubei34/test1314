#include<stdio.h>
#include<string.h>
//程序输出什么？
int main()
{
	printf("%d\n", strlen("abcdef"));
	// \32被解析成一个转义字符(\ddd形式)
	//八进制中只有0到7，没有8，所以\328表示2个长度，不懂的话可以看第二课59分钟
	//输出的结果为6 14
	printf("%d\n", strlen("c:\test\328\test.c"));
	return 0;
}