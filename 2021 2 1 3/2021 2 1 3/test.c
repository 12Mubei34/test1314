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
//}//此方法不调用函数打印出2021




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
//此两种方法调用了函数打印出来的结果都为2021
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