#include<stdio.h>
//����һ���������飬ʵ��һ��������
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//����ż��λ������ĺ�벿�֡�
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	int tmp = 0;
	while (left<right)
	{
		// ��ǰ�����ҵ�һ��ż�����ҵ���ֹͣ
		while ((left<right) && (arr[left] % 2 == 1))
		{
			left++;
		}

		// �Ӻ���ǰ�ң���һ���������ҵ���ֹͣ
		while ((left<right) && (arr[right] % 2 == 0))
		{
			right--;
		}
		// ���ż�����������ҵ����������������ݵ�λ��
		// Ȼ������ң�ֱ������ָ������
		if (left<right)
		{
			tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}
	}
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d", arr[i]);
	}
	return 0;
}
