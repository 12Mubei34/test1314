#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
double my_pow(int n, int k)
{
	if (k == 0)
		return 1;
	else if (k > 0)
		return n*(my_pow(n, k-1));
	//����д��return my_pow(n,k)�������Ļ�k��ֵ����仯���Ի����޵ݹ���ȥ
	else
		return  1.0 / (my_pow(n, -k));
	//�ݹ�һ�κ���k��������Ժ�ĵݹ���else if��ִ��
}
//���õݹ�ʵ��n��k�η��������û����Ե���һ�¿�k�ı仯
int main()
{
	int n = 0;
	int k = 0;
	scanf("%d %d", &n, &k);
	double ret = my_pow(n, k);
	printf("%lf\n", ret);
	return 0;
}