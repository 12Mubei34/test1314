#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
//strlen������ʹ��
//int main()
//{
//	char arr[] = "abc";
//	int len = strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//��������ʽʵ�֣�
//int my_strlen(char*str)
//{
//    assert(str != NULL);//���Ƕ���ָ����н����ò�����ö�Ҫ����
//	int count = 0;
//	while (*str != '\0')
//	{
//		str++;
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abc";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//�ݹ鷽ʽʵ�֣�
//int my_strlen(char*str)
//{
//    assert(str != NULL);
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "abc";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}


//ָ���ָ�뷽ʽʵ��
//int my_strlen(const char*str)
//{
//	assert(str != NULL);
//	const char*start = str;
//	while (*str)
//	{
//		str++;
//	}
//	return str - start;
//}
//int main()
//{
//	char arr[] = "abc";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//strcpy������ʹ��
//int main()
//{
//	char arr1[] = "*********";
//	char arr2[] = "ni hao";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//strcpy������ģ��ʵ��
//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest && src);
//	char*ret = dest;
//	while (*dest++ = *src++)//�����ַ���������'\0'
//	{
//		;
//	}
//	return ret;//���ص�Ŀ��ռ����ʼ��ַ
//}
//
//int main()
//{
//	char arr1[20] = "*************";
//	char arr2[] = "hello world";
//
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);//
//	return 0;
//}

//strcat������ʹ��
//int main()
//{
//	char arr1[20] = "hello ";//Ŀ��ռ�����㹻��
//	char arr2[] = "world";
//	strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//strcat������ģ��ʵ��
//char* my_strcat(char*dest, const char*src)
//{
//	assert(dest && src);
//	char*ret = dest;
//	//1. �ҵ�Ŀ��ռ��\0
//	while (*dest)
//	{
//		dest++;
//	}
//	//2. ׷��
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[] = "world";
//
//	printf("%s\n", my_strcat(arr1, arr2));
//
//	return 0;
//}

//strcmp������ʹ��
//int main()
//{
//	int ret = strcmp("abc", "abcdef");
//	printf("%d\n", ret);
//	return 0;
//	//��ӡ�Ľ����һ��С��0������
//}

//strcmp������ģ��ʵ��
//int my_strcmp(const char*s1, const char*s2)
//{
//	assert(s1 && s2);
//	while (*s1 == *s2)
//	{
//		if (*s1 == '\0')
//			return 0;
//		s1++;
//		s2++;
//	}
//	return *s1 - *s2;
//}
//
//int main()
//{
//	int ret = my_strcmp("abq", "abcdef");
//	printf("%d\n", ret);
//	return 0;
//}

//strncpy����
//1.��strcpy�������ƣ�����strcnpy�������Կ���������ַ��������Ա���strcpy�����ַ�����Ŀ��ռ�治��ϵͳ����
//2.���Դ�ַ����ĳ���С��num���򿽱���Դ�ַ���֮����Ŀ��ĺ��׷��0��ֱ��num����

//strncat����
//��strcat�������ƣ�����������strncat��������׷�Ӿ�����ַ�������
//��׷����Ӧ���ַ���������ں����Զ�����'\0'
//�����׷�ӵĳ��ȶ���һ���ַ����ĳ���ʱ���Ὣ���ַ���ȫ��׷���겢���ں��油��'\0'��

//strncmp����
//��strcmp�������ƣ���strncmp�������ԱȽϾ�����ַ�����


