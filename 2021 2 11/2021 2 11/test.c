#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//дһ������ʵ������3���ߵĳ������ж���ʲô������
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	while (scanf("%d %d %d", &a, &b, &c) != EOF)
//whileѭ����Ŀ������ʵ��һֱ����3�����ж���ʲô�����ζ��������	
//EOF���ĵ�������־������������Ļ���scanf�����᷵��EOF	
	{
		if ((a + b > c) && (a + c > b) && (b + c > a))
		{
			//������
			if (a == b && b == c)//�ȱ�������
			{
				printf("Equilateral triangle!\n");
			}
			else if (((a == b) && (b != c)) || ((a == c) && (c != b)) || ((b == c) && (c != a)))//����
			{
				printf("Isosceles triangle!\n");
			}
			else
			{
				printf("Ordinary triangle!\n");
			}
		}
		else
		{
			//����������
			printf("Not a triangle!\n");
		}
	}
	return 0;
}
