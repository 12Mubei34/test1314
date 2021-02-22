#include<stdio.h>
#include<stdlib.h>
//模拟实现qsort冒泡排序函数
void print_arr(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
int cmp_int(const void* e1, const void* e2)
{
	return (*(int*)e1 - *(int*)e2);
}
void _swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}
//
void bubble_sort(void* base, size_t sz, size_t width, int(*cmp)(const void*e1, const void*e2))
{
	size_t i = 0;
	//趟数
	for (i = 0; i < sz - 1; i++)
	{
		size_t j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			//相邻2个元素的比较
			//base[j] base[j+1] 
			if (cmp((char*)base + j*width, (char*)base + (j + 1)*width)>0)
			{
				//如果不满足顺序就交换
				_swap((char*)base + j*width, (char*)base + (j + 1)*width, width);
			}
		}
	}
}

void test3()
{
	//qsort 排序整形数组
	int arr[] = { 1, 5, 2, 4, 3, 9, 8, 6, 7, 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
	print_arr(arr, sz);
}

int main()
{
	test3();
	return 0;
}