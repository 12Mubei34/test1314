#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//������ - �ӡ������ˡ���
void menu()
{
	printf("****************************\n");
	printf("**** 1. add   2. sub    ****\n");
	printf("**** 3. mul   4. div    ****\n");
	printf("**** 0. exit            ****\n");
	printf("****************************\n");
}

int Add(int x, int y)
{
	return x + y;
}

int Sub(int x, int y)
{
	return x - y;
}

int Mul(int x, int y)
{
	return x * y;
}

int Div(int x, int y)
{
	return x / y;
}

//��������-����ָ��
//�ص�����

void calc(int (*p)(int, int))
{
	int x = 0;
	int y = 0;
	int ret = 0;
	printf("������2��������:>");
	scanf("%d%d", &x, &y);
	ret = p(x, y);
	printf("ret = %d\n", ret);
}

int main()
{
	int input = 0;

	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			calc(Add);//������
			break;
		case 2:
			calc(Sub);//������
			break;
		case 3:
			calc(Mul);
			break;
		case 4:
			calc(Div);
			break;
		case 0:
			printf("�˳�������\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);

	return 0;
}