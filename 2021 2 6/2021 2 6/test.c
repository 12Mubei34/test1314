#include<stdio.h>
int main()
{
	int arr[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int* p = *(arr + 1);
	printf("%d\n", **(arr+1));
	printf("%d\n", *p);
	//p�ȼ���*(arr+1),Ҳ����˵*(arr+1)�൱��һ����ַ���ٴν����ú���ҵ��˶�ӦԪ��5
	//��ӡ�Ľ������6
	return 0;
}
