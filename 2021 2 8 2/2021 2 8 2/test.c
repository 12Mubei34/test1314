#include<stdio.h>
#include<string.h>
//�������ʲô��
int main()
{
	printf("%d\n", strlen("abcdef"));
	// \32��������һ��ת���ַ�(\ddd��ʽ)
	//�˽�����ֻ��0��7��û��8������\328��ʾ2�����ȣ������Ļ����Կ��ڶ���59����
	//����Ľ��Ϊ6 14
	printf("%d\n", strlen("c:\test\328\test.c"));
	return 0;
}