#include<stdio.h>
//���������д��ĸת��ΪСд��ĸ
int main()
{
	int ch = 0;
	while (~(ch=getchar()))
	{
		printf("%c\n", ch + 32);
		getchar();//��������
	}
	return 0;
}