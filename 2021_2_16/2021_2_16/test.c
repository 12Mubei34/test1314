#include<stdio.h>
//��д��������ȡ�ַ����ĳ��ȣ�
//����1��������ʱ�������˷�����ӡ�Ľ��Ϊ6
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//	str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//����2�����õݹ鷽ʽ��⣬ͬ�����Ϊ6
int my_strlen(char*str)
{
	if (*str != '\0')
		return 1 + my_strlen(str + 1);
	else
	return 0;
}
int main()
{
	char arr[] = "abcdef";
	int len = my_strlen(arr);
	printf("%d\n", len);
	return 0;
}