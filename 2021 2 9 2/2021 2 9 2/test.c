#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//��������һ��������N��ͳ��1~N֮�������ĸ�����ż���ĸ������������
//������5�������3 2
int main()
{
	int n;//����n���Լ�����ģ����Բ���ʼ��Ϊ0
	scanf("%d", &n);
	int i;
	int odd = 0;//����û�б��ʽ��odd��ֵ�����Ա��뽫odd��ʼ��Ϊһ��ֵ
	for (i = 1; i <= n; i++)
	{
		if (i % 2 == 1)
			odd++;
	}
	printf("%d %d", odd, n - odd);	
}