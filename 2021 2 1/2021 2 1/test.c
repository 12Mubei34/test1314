#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	a = a^b;
	b = a^b;
	a = a^b;
	printf("a=%d b=%d", a, b);
	return 0;
}
//�����ַ����������ڲ�������ʱ����������½�����������
//����õڶ��֣���һ�ַ������ܻᳬ��Χ