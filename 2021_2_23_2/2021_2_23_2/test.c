#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
//strlen函数的使用
//int main()
//{
//	char arr[] = "abc";
//	int len = strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//计数器方式实现：
//int my_strlen(char*str)
//{
//    assert(str != NULL);//凡是对于指针进行解引用操作最好都要断言
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

//递归方式实现：
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


//指针减指针方式实现
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

//strcpy函数的使用
//int main()
//{
//	char arr1[] = "*********";
//	char arr2[] = "ni hao";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//strcpy函数的模拟实现
//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest && src);
//	char*ret = dest;
//	while (*dest++ = *src++)//拷贝字符串，包括'\0'
//	{
//		;
//	}
//	return ret;//返回的目标空间的起始地址
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

//strcat函数的使用
//int main()
//{
//	char arr1[20] = "hello ";//目标空间必须足够大
//	char arr2[] = "world";
//	strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//strcat函数的模拟实现
//char* my_strcat(char*dest, const char*src)
//{
//	assert(dest && src);
//	char*ret = dest;
//	//1. 找到目标空间的\0
//	while (*dest)
//	{
//		dest++;
//	}
//	//2. 追加
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

//strcmp函数的使用
//int main()
//{
//	int ret = strcmp("abc", "abcdef");
//	printf("%d\n", ret);
//	return 0;
//	//打印的结果是一个小于0的数字
//}

//strcmp函数的模拟实现
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

//strncpy函数
//1.和strcpy函数类似，但是strcnpy函数可以拷贝具体的字符个数，以避免strcpy拷贝字符多了目标空间存不下系统报错
//2.如果源字符串的长度小于num，则拷贝完源字符串之后，在目标的后边追加0，直到num个。

//strncat函数
//和strcat函数类似，但区别在于strncat函数可以追加具体的字符个数，
//且追加相应的字符个数后会在后面自动补上'\0'
//（如果追加的长度多于一个字符串的长度时，会将该字符串全部追加完并且在后面补上'\0'）

//strncmp函数
//和strcmp函数相似，但strncmp函数可以比较具体的字符个数


