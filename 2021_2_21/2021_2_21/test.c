#include<stdio.h>
//有关整形提升的例题
int main()
{
	char a = -128;
	printf("%u\n", a);
	return 0;
	//结果是4,294,967,168
}