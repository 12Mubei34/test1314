//�ҵ�������:
//һ��������ֻ�����������ǳ���һ�Σ������������ֶ����������Ρ�
//��дһ�������ҳ�������ֻ����һ�ε����֡�
#include<stdio.h>
void findTwoNum(int arr[], int n, int * pnum1, int * pnum2)
{
	int i;
	int sum = 0;
	?
	for (i = 0; i < 9; i++)
	{
		sum ^= arr[i];
	} //���ҵ��������������Ľ��
	?
		int pos;
	for (i = 0; i < 32; i++)
	{
		if (sum & 1 << i)
		{
			pos = i;
			break;
		}
	} //���ҵ��з����һλ������һλ�ϣ�������һ����һ��1һ��0
	?
		*pnum1 = *pnum2 = 0;
	for (i = 0; i < 10; i++)
	{
		if (arr[i] & 1 << pos)
		{
			*pnum1 ^= arr[i]; //��һλ��1�ģ�������1��
		}
		else
		{
			*pnum2 ^= arr[i]; //��һλ��0�ģ�������2��
		}
	}
}