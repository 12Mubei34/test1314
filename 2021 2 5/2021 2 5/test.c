int main()
{
	//字符数组
	char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };

	//printf("%d\n", strlen(arr));//随机值-因为arr数组中本来没有\0，就会在数组arr后继续找\0。
	//printf("%d\n", strlen(arr + 0));//随机值
	////printf("%d\n", strlen(*arr));//err
	////printf("%d\n", strlen(arr[1]));//err
	//printf("%d\n", strlen(&arr));//随机值
	//printf("%d\n", strlen(&arr + 1));//随机值
	//printf("%d\n", strlen(&arr[0] + 1));//随机值


	printf("%d\n", sizeof(arr));//6-数组名arr，单独放在sizeof内部
	printf("%d\n", sizeof(arr + 0));//4/8 arr是数组首元素的地址
	printf("%d\n", sizeof(*arr));   //1 - *arr 数组首元素 
	printf("%d\n", sizeof(arr[1])); //1 - arr[1]数组的第二个元素
	printf("%d\n", sizeof(&arr));   //4/8 &arr虽然是数组的地址，但也是地址，是地址大小就是4/8字节
	printf("%d\n", sizeof(&arr + 1)); //4/8 &arr+1跳过了整个数组，指向了数组之后，但还是地址
	printf("%d\n", sizeof(&arr[0] + 1));//4/8  &arr[0]+1是第二个元素的地址


	return 0;
}