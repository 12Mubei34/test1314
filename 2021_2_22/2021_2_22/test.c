#include<stdio.h>
//void print(int arr[5])
//{
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//int main()
//{
//	int arr[5] = { 1, 2, 3, 4, 5 };
//	print(arr);
//	return 0;
//}
//�����ַ���дһ��������ӡ�������ݵĽ����Ϊ1 2 3 4 5
void print(int *arr)
{
	int *p = arr;
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		printf("%d ", *(p+i));
	}
}

int main()
{
	int arr[5] = { 1, 2, 3, 4, 5 };
	print(arr);
	return 0;
}