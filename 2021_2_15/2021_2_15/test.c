#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag*(1.0 / i);
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}
int main()
{
	int arr[10] = { 0 };
	int i = 0;
	for (i = 0; i < 10; i++)//����ʮ��Ԫ��
	{
		scanf("%d",&arr[i]);
	}
	int max = arr[0];
	for (i = 1; i < 10; i++)
	{
		if (arr[i]>max)
		{
			max = arr[i];
		}
	}
	printf("%d\n", max);
	return 0;
//дһ�����룬�ҳ�10�������е����ֵ
}