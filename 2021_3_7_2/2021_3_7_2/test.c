#include<stdio.h>
//多组输入大写字母转换为小写字母
int main()
{
	int ch = 0;
	while (~(ch=getchar()))
	{
		printf("%c\n", ch + 32);
		getchar();//清理缓冲区
	}
	return 0;
}