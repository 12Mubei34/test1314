#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
double my_pow(int n, int k)
{
	if (k == 0)
		return 1;
	else if (k > 0)
		return n*(my_pow(n, k-1));
	//不能写成return my_pow(n,k)，这样的话k的值不会变化所以会无限递归下去
	else
		return  1.0 / (my_pow(n, -k));
	//递归一次后让k变成正的以后的递归在else if里执行
}
//利用递归实现n的k次方，不懂得话可以调试一下看k的变化
int main()
{
	int n = 0;
	int k = 0;
	scanf("%d %d", &n, &k);
	double ret = my_pow(n, k);
	printf("%lf\n", ret);
	return 0;
}