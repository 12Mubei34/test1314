#include<stdio.h>
//struct S
//{
//	int* p;
//};
//int main()
//{
//	int a = 2021;
//	struct S s = { &a };
//	printf("%d\n", *s.p);
//	return 0;
//}//�˷��������ú�����ӡ��2021




/*struct S
{
	int* p;
};
void print1(struct S* ps)
{
	printf("%d\n", *(ps->p));
}
int main()
{
	int a = 2021;
	struct S s = { &a };
	print1(&s);
	return 0;
}*/
//�����ַ��������˺�����ӡ�����Ľ����Ϊ2021
struct S
{
	int p;
};
void print1(struct S*ps)
{
	printf("%d\n", ps->p);
}
int main()
{
	int a = 2021;
	struct S s = { a };
	print1(&s);
	return 0;
}