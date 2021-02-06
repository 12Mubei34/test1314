#include<stdio.h>
int main()
{
	int arr[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int* p = *(arr + 1);
	printf("%d\n", **(arr+1));
	printf("%d\n", *p);
	//p等价于*(arr+1),也就是说*(arr+1)相当于一个地址，再次解引用后才找到了对应元素5
	//打印的结果都是6
	return 0;
}
