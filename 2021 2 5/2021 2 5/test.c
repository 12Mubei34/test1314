int main()
{
	//�ַ�����
	char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };

	//printf("%d\n", strlen(arr));//���ֵ-��Ϊarr�����б���û��\0���ͻ�������arr�������\0��
	//printf("%d\n", strlen(arr + 0));//���ֵ
	////printf("%d\n", strlen(*arr));//err
	////printf("%d\n", strlen(arr[1]));//err
	//printf("%d\n", strlen(&arr));//���ֵ
	//printf("%d\n", strlen(&arr + 1));//���ֵ
	//printf("%d\n", strlen(&arr[0] + 1));//���ֵ


	printf("%d\n", sizeof(arr));//6-������arr����������sizeof�ڲ�
	printf("%d\n", sizeof(arr + 0));//4/8 arr��������Ԫ�صĵ�ַ
	printf("%d\n", sizeof(*arr));   //1 - *arr ������Ԫ�� 
	printf("%d\n", sizeof(arr[1])); //1 - arr[1]����ĵڶ���Ԫ��
	printf("%d\n", sizeof(&arr));   //4/8 &arr��Ȼ������ĵ�ַ����Ҳ�ǵ�ַ���ǵ�ַ��С����4/8�ֽ�
	printf("%d\n", sizeof(&arr + 1)); //4/8 &arr+1�������������飬ָ��������֮�󣬵����ǵ�ַ
	printf("%d\n", sizeof(&arr[0] + 1));//4/8  &arr[0]+1�ǵڶ���Ԫ�صĵ�ַ


	return 0;
}