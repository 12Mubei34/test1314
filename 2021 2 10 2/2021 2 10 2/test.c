#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//二分查找法
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	//在arr这个有序数组中查找k
	int k = 0;
	//sizeof(arr)计算的是数组的总大小：40字节
	//sizeof(arr[0])计算的是数组第一个元素的大小：4字节
	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组元素个数：结果为10
	scanf("%d", &k);
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		//int mid = (left + right) / 2;
		//当数组中元素个数较多时，即left和right数值较大时，他们相加可能会超出
		//一个整形int所能表示的最大范围，这样就无法算出正确的平均值
		//因此，我们可以使用下面的这种求平均值的方法，这样就不用担心会超出范围了
		int mid = left + (right - left) / 2;
		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			printf("找到了，下标是：%d\n", mid);
			break;
		}

	}
	if (left > right)
	{
		printf("找不到了\n");
	}
	return 0;
}

