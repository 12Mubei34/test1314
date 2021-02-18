#include <stdio.h>
int main()
{
	int a, b, c;   
	a = 5;
	c = ++a;                      //c=6,a=6
	b = ++c, c++, ++a, a++;       //c=8,a=8,b=7
	b += a++ + c;                 //a=9,b=23
	printf("a = %d b = %d c = %d\n:", a, b, c);
	return 0;
}
//打印的结果是9 23 8