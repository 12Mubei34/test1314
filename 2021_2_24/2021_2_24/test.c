#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
//strstr������ʹ��
//int main()
//{
//	char arr1[] = "abcdefgbcd";
//	char arr2[] = "bcd";
//	char*ret = strstr(arr1, arr2);
//	if (ret != NULL)
//		printf("%s\n", ret);
//	else
//		printf("�Ҳ���\n");
//	return 0;
//}

//ģ��ʵ��
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
//		const char *p2 = s2;//��p1��p2������const���������ͱ���һ��
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
//	char*ret = my_strstr(arr1, arr2);//��arr1�в���arr2�ַ�����һ�γ��ֵ�λ��
//	if (ret != NULL)
//		printf("%s\n", ret);
//	else
//		printf("�Ҳ����Ӵ�\n");
//
//	return 0;
//}

//strtok������ʹ��
//1.strtok���������ַ�����Ѱ�ұ�ǣ��ָ����������������Ǹĳ�'\0'��Ȼ�󷵻���ʼλ�á�
//2.strtok������ı䱻�������ַ�����������ʹ��strtok�����зֵ��ַ���һ�㶼����ʱ���������ݲ��ҿ��޸ġ�
//3.strtok�����ĵ�һ��������Ϊ NULL ���������ҵ�str�е�һ����ǣ�strtok���������������ַ����е�λ�á�
//strtok�����ĵ�һ������Ϊ NULL ����������ͬһ���ַ����б������λ�ÿ�ʼ��������һ����ǡ�
//����ַ����в����ڸ���ı�ǣ��򷵻� NULL ָ��
//4.��Ѱ�ҵڶ�����ǿ�ʼ����strtok����ʱ���ĵ�һ������Ӧ��Ϊ��ָ��
//int main()
//{
//	char arr[] = "abc@1234.vip.haha";//@. �ָ��
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

//strerror����
//strerror�����󱨸溯���������⺯��ʹ��ʱ��������ʱ�����ش����룬
//�Ѵ�����ת���ɶ�Ӧ�Ĵ�����Ϣ�����ش�����Ϣ��Ӧ�ַ�������ʼ��ַ

//memcpy������ʹ�ã�
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5, 6 };
//	int arr2[10] = { 0 };
//	memcpy(arr2, arr1, 16);
//	return 0;
//}

//memcpy������ģ��ʵ��
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

//memmove������ʹ��
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	memmove(arr + 2, arr, 16);
//	return 0;
//}

//memmove������ģ��ʵ��
//void* my_memmove(void* dest, const void*src, size_t count)
//{
//	void* ret = dest;
//	assert(dest && src);
//	if (dest < src)
//	{
//		//ǰ->��
//		while (count--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	else
//	{
//		//��->ǰ
//		while (count--)
//		{
//			*((char*)dest + count) = *((char*)src + count);
//		}
//	}
//	return ret;
//}

//memcmp����
//��strcmp������strcmp�Ƚϵ����ַ�����strcmp�ڱȽϹ�������Ҫע���Ƿ�������'\0'��
//��memcmp�Ƚϵ����ڴ�飬����ָ���Ƚϵ��ֽ�����

//memset����
//memset�������ڽ�ָ����ĳһ���ڴ��еĺ�n���ֽڵ�����ȫ������Ϊָ�����ַ�
