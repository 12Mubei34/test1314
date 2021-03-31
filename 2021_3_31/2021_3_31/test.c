#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	char sex;			//孩子的性别
//	char sports;			//是否喜欢体育运动
//	char diet;			//是否有良好的饮食习惯
//	float myHeight;			//孩子身高
//	float faHeight;			//父亲身高
//	float moHeight;			//母亲身高
//	printf("Are you a boy(M) or a girl(F)?\n");
//	scanf("%c", &sex);
//	if (sex == 'M' || sex == 'm' || sex == 'F' || sex == 'f')
//	{
//
//		printf("Please input your father's height(cm):\n");
//		scanf("%f", &faHeight);
//		printf("Please input your mother's height(cm):\n");
//		scanf("%f", &moHeight);
//
//		if (sex == 'M')
//			myHeight = (faHeight + moHeight) * 0.54;
//		else if (sex == 'F')
//			myHeight = (faHeight * 0.923 + moHeight) / 2;
//
//		printf("Do you like sports(Y/N)?\n");
//		scanf(" %c", &sports);
//		if (sports == 'Y' || sports == 'y' || sports == 'N' || sports == 'n')
//		{
//			if (sports == 'Y')
//				myHeight = myHeight*(1 + 0.02);
//			else if (sports == 'N')
//				myHeight = myHeight;
//			printf("Do you have a good habit of diet(Y/N)?\n");
//			scanf(" %c", &diet);
//			if (diet == 'Y' || diet == 'y' || diet == 'N' || diet == 'n')
//			{
//
//				if (diet == 'Y')
//					myHeight = myHeight*(1 + 0.015);
//				else if (diet == 'N')
//					myHeight = myHeight;
//
//				printf("Your future height will be %3.6f(cm)\n", myHeight);
//			}
//			else
//			{
//				printf("Input diet error!");
//			}
//		}
//		else
//		{
//			printf("Input sports error!");
//		}
//	}
//	else
//	{
//		printf("Input sex error!");
//	}
//	return 0;
//}
#include <stdio.h>
int main( ) 
{ 
	double a, b; char op; 
	scanf("%lf%c%lf", &a, &op, &b);
	switch (op) 
	{ 
	case '+': printf("%lf + %lf = %lf\n", a, b, a + b); break; 
	case '-': printf("%lf - %lf = %lf\n", a, b, a - b); break; 
	case '*': printf("%lf * %lf = %lf\n", a, b, a * b); break; 
	case '/': if (b != 0) printf("%lf / %lf = %lf\n", a, b, a / b); else printf(" 除数不能是0! \n"); break; 
	} 
}