#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//��������Ľ����a=8
//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;//
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}

//дһ��������3�����Ӵ�С��������ʵ����ⲻ�˵Ļ����Ծٸ�����
//int main()
//{
//	int a, b, c;1 3 2
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;                   a=3
//		b = tmp;                 b=1
//	}
//	if (a < c)
//	{
//		int tmp = a;             
//		a = c                    
//		c = tmp;                 
//	}
//	if (b < c)
//	{
//		int tmp = b;             tmp=1
//		b = c;                   b=2
//		c = tmp;                 c=1
//	}                     
//}

//��ӡ3�ı�������
int main()
{
	int i = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("%d", i);
	}
	return 0;
}