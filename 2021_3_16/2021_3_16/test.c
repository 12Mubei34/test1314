#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
{
	unsigned int a, b, p;
	double c;
	scanf("%u %u %u", &a,&b,&p);
	c = sqrt((a*a) + (b*b) - (2 * a*b*cos((p*3.1415926) / 180)));
	printf("%.2f\n", c);
	return 0;
}

