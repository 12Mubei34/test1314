//ͷ�ļ�������
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//���ú������ã�ѭ�����ȼ�֪ʶʵ�ּ����� - �ӡ������ˡ���������

//ʵ��menu�˵�����
void menu()
{
//��ӡһ���������˵�	
	printf("****************************\n");
	printf("**** 1. add   2. sub    ****\n");
	printf("**** 3. mul   4. div    ****\n");
	printf("**** 0. exit            ****\n");
	printf("****************************\n");
}
//ʵ��ÿ������
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
int main()
{
//���������ȴ����ĸ���ʱ����	
	int input = 0;
	int x = 0;
	int y = 0;
	int ret = 0;
//����do whileѭ�����
	do
	{
		menu();//����menu����
		printf("��ѡ��>");
		scanf("%d", &input);//��������������ʵ����Ӧ����
		switch (input)//switch����ʹ��
		{
		case 1:
				printf("����������������:");
				scanf("%d %d", &x, &y);
				ret = Add(x, y);
				printf("ret=%d\n", ret);
				break;
		case 2:
			printf("����������������:");
			scanf("%d %d", &x, &y);
			ret = Sub(x, y);
			printf("ret=%d\n", ret);
			break;
		case 3:
			printf("����������������:");
			scanf("%d %d", &x, &y);
			ret = Mul(x, y);
			printf("ret=%d\n", ret);
			break;
		case 4:
			printf("����������������:");
			scanf("%d %d", &x, &y);
			ret = Div(x, y);
			printf("ret=%d\n", ret);
			break;
		case 0:
			printf("�˳�������\n");
				break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);//������0ʱ�Զ�����ѭ��
	return 0;
}