#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
//strstr函数的使用
//int main()
//{
//	char arr1[] = "abcdefgbcd";
//	char arr2[] = "bcd";
//	char*ret = strstr(arr1, arr2);
//	if (ret != NULL)
//		printf("%s\n", ret);
//	else
//		printf("找不到\n");
//	return 0;
//}

//模拟实现
//char* my_strstr(const char*s1, const char*s2)
//{
//	assert(s1 && s2);
//	const char *cp = s1;
//
//	if (*s2 == '\0')
//		return (char*)s1;
//
//	while (*cp)
//	{
//		const char *p1 = cp;
//		const char *p2 = s2;//给p1，p2都加上const让两边类型保持一致
//		while ((*p1!='\0') && (*p2!='\0') &&  (*p1 == *p2))
//		{
//			p1++;
//			p2++;
//		}
//		if (*p2 == '\0')
//		{
//			return (char*)cp;
//		}
//		cp++;
//	}
//	return NULL;
//}
//	
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "defq";
//
//	char*ret = my_strstr(arr1, arr2);//在arr1中查找arr2字符串第一次出现的位置
//	if (ret != NULL)
//		printf("%s\n", ret);
//	else
//		printf("找不到子串\n");
//
//	return 0;
//}

//strtok函数的使用
//1.strtok函数会在字符串中寻找标记（分隔符），并将这个标记改成'\0'，然后返回起始位置。
//2.strtok函数会改变被操作的字符串，所以在使用strtok函数切分的字符串一般都是临时拷贝的内容并且可修改。
//3.strtok函数的第一个参数不为 NULL ，函数将找到str中第一个标记，strtok函数将保存它在字符串中的位置。
//strtok函数的第一个参数为 NULL ，函数将在同一个字符串中被保存的位置开始，查找下一个标记。
//如果字符串中不存在更多的标记，则返回 NULL 指针
//4.从寻找第二个标记开始调用strtok函数时传的第一个参数应该为空指针
//int main()
//{
//	char arr[] = "abc@1234.vip.haha";//@. 分割符
//	char arr2[30] = { 0 };
//	strcpy(arr2, arr);
//	char*p = ".@";
//	char *ret = NULL;
//	for (ret = strtok(arr2, p); ret != NULL; ret = strtok(NULL, p))
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}

//strerror函数
//strerror（错误报告函数），当库函数使用时发生错误时，返回错误码，
//把错误码转换成对应的错误信息，返回错误信息对应字符串的起始地址

//memcpy函数的使用：
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5, 6 };
//	int arr2[10] = { 0 };
//	memcpy(arr2, arr1, 16);
//	return 0;
//}

//memcpy函数的模拟实现
//void* my_memcpy(void*dest, const void*src, size_t count)
//{
//	void*ret = dest;
//	assert(dest && src);
//
//	while (count--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;//((char*)dest)++;
//		++(char*)src;//((char*)src)++;
//	}
//	return ret;
//}

//memmove函数的使用
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	memmove(arr + 2, arr, 16);
//	return 0;
//}

//memmove函数的模拟实现
//void* my_memmove(void* dest, const void*src, size_t count)
//{
//	void* ret = dest;
//	assert(dest && src);
//	if (dest < src)
//	{
//		//前->后
//		while (count--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	else
//	{
//		//后->前
//		while (count--)
//		{
//			*((char*)dest + count) = *((char*)src + count);
//		}
//	}
//	return ret;
//}

//memcmp函数
//和strcmp的区别：strcmp比较的是字符串，strcmp在比较过程中需要注意是否遇到了'\0'。
//而memcmp比较的是内存块，可以指定比较的字节数。

//memset函数
//memset函数用于将指定的某一块内存中的后n个字节的内容全部设置为指定的字符
