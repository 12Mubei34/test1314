#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>
#include <time.h>
void menu()//���ò˵���ʽ
{
	printf("********************************\n");
	printf("*******     1. play      *******\n");
	printf("*******     0. exit      *******\n");
	printf("********************************\n");
}
void game()
{
	//�˴��õ���rand������ע��rand��������������������ֵΪ32767
	//���Ƕ���%100���1�������ɵ��������0~100֮��
	int ret = rand() % 100 + 1;
	int num = 0;
	while (1)
	{
		printf("�������:>");
		scanf("%d", &num);
		if (num == ret)
		{
			printf("��ϲ�㣬�¶���\n");
			break;
		}
		else if (num > ret)
		{
			printf("�´���\n");
		}
		else
		{
			printf("��С��\n");
		}
	}
}
int main()
{
	int input = 0;
	//srand����������������һ���������㣬��������ʹÿ�����ɵ�������Ǳ仯��
	//��Ϊ�����ϵ�ʱ����ÿʱÿ�̶��ڷ����仯�ģ�������ǿ�������time���������ķ��ص�������һ��ʱ�������Զ�������
	//��Ϊtime�����Ĳ�����һ��ָ�룬�������ֲ���ʹ������ʵ�����壬��˿��Խ�����дΪ��ָ��NULL
	//��time(NULL),��Ϊsrand�Ĳ���������unsigned int��������ǽ�time��������ǿ������ת��
	//��������������������������һ�ξͿ����ˣ��������game������ʵ�ֲ��֣�ÿ��һ����Ϸ����һ�����Ļ����ܵ������ɵ��������ͬ
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
	return 0;
}