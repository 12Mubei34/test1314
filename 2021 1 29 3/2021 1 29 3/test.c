#include<stdio.h>
int main()
{
	int arr[5] = { 1, 2, 3, 4, 5 };
	int*p = arr; int*p = &arr; int*p = &arr[0];
	//��һ��д���������ʽ�е�����һ��������
	//����Ч������5��0
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		*(p + i) = 0;
		printf("%d ", *(p + i));
	}
	return 0;
}
int main()
{
	int arr[5] = { 1, 2, 3, 4, 5 };
	int*p = &arr[0];
	for (p = arr; p < &arr[4];)
		*++p = 0;
	//���ĳ�*p++=0��������Ľ��Ϊ5�������Ԫ��û�ı䣬��Ϊ*p����ʹ�ú��1
	//����Ľ����0���������Ԫ�أ�ָ�뱻������ĸ�Ԫ�صĵ�ַ��
	printf("%d ", *p);
	return 0;
}