#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main()
{
	int w = 0;
	double h = 0;
	double t = 0;
	scanf("%lf,%d", &h, &w);
	t = w / (h*h);
	if (t<18)
	{
		printf("t=%.6f\tLower weight!", t);
	}
	else if (t >= 18 && t < 25)
	{
		printf("t=%.6f\tStandard weight!", t);
	}
	else if (t >= 25 && t < 27)
	{
		printf("t=%.6f\tHigher weight!", t);
	}
	else
	{
		printf("t=%.6f\tToo fat!");
	}

	return 0;

}