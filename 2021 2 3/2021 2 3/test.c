#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* p = arr;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}
//�����ִ��붼�ܴ�ӡ1��10��һ��ͨ��ָ�������ʣ�һ��ͨ������ָ��������
//һ��дͨ��ָ�������ʣ���������������ָ���Ϊ�鷳
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int(*p)[10] = &arr;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d", (*p)[i]);
	}
	return 0;
}
