#include<stdio.h>
#include<assert.h>
//ģ��ʵ��strlen����
int my_strlen(const char*str)
//�β�֮����Ϊchar*����Ϊarr��������char*���ͣ��������str���Լ�����ı��������Һ���Ҫ�õ�
//�˴���������Ϊlen=6
{
	assert(str != NULL);
	const char*start = str;
	while (*str)
	{
		str++;
	}
	return str - start;
}
int main()
{
	char arr[] = "abcdef";
	int len = my_strlen(arr);
	printf("len=%d\n", len);
	return 0;
}