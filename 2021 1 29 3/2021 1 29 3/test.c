#include<stdio.h>
int main()
{
	int arr[5] = { 1, 2, 3, 4, 5 };
	int*p = arr; int*p = &arr; int*p = &arr[0];
	//这一行写这三个表达式中的任意一个都可以
	//最终效果都是5个0
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
	//若改成*p++=0；则输出的结果为5，第五个元素没改变，因为*p是先使用后加1
	//输出的结果是0（即第五个元素，指针被赋予第四个元素的地址）
	printf("%d ", *p);
	return 0;
}