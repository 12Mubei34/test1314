#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//���ֲ��ҷ�
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	//��arr������������в���k
	int k = 0;
	//sizeof(arr)�������������ܴ�С��40�ֽ�
	//sizeof(arr[0])������������һ��Ԫ�صĴ�С��4�ֽ�
	int sz = sizeof(arr) / sizeof(arr[0]);//��������Ԫ�ظ��������Ϊ10
	scanf("%d", &k);
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		//int mid = (left + right) / 2;
		//��������Ԫ�ظ����϶�ʱ����left��right��ֵ�ϴ�ʱ��������ӿ��ܻᳬ��
		//һ������int���ܱ�ʾ�����Χ���������޷������ȷ��ƽ��ֵ
		//��ˣ����ǿ���ʹ�������������ƽ��ֵ�ķ����������Ͳ��õ��Ļᳬ����Χ��
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
			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
			break;
		}

	}
	if (left > right)
	{
		printf("�Ҳ�����\n");
	}
	return 0;
}

