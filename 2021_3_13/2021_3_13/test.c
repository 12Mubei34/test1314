动态通讯录的实现：
修改结构（头文件修改）：

typedef struct Contact
{
	PeoInfo* data;
	int sz;//有效元素的个数
	int capacity;//容量
}Contact;
新增函数：

void CheckCapacity(Contact* pcon)
{
	if (pcon->sz == pcon->capacity)
	{
		//每次扩容双倍
		PeoInfo* ptr = realloc(pcon->data, (pcon->capacity * 2)*sizeof(PeoInfo));
		if (ptr != NULL)
		{
			pcon->data = ptr;
			pcon->capacity *= 2;
			printf("增容成功\n");
		}
	}
}
?
void DestroyContact(Contact* pcon)
{
	free(pcon->data);
	pcon->data = NULL;
	pcon->capacity = 0;
	pcon->sz = 0;
}
修改函数：

void AddContact(Contact* pcon)
{
	assert(pcon);

	/******新增代码******/
	CheckCapacity(pcon); //插入前检查扩容情况
	/******************/

	//录入信息
	printf("请输入名字:>");
	scanf("%s", pcon->data[pcon->sz].name);
	printf("请输入年龄:>");
	scanf("%d", &(pcon->data[pcon->sz].age));
	printf("请输入性别:>");
	scanf("%s", pcon->data[pcon->sz].sex);
	printf("请输入电话:>");
	scanf("%s", pcon->data[pcon->sz].tele);
	printf("请输入地址:>");
	scanf("%s", pcon->data[pcon->sz].addr);
	?
		pcon->sz++;
	printf("增加成功\n");
}
?
void InitContact(Contact* pcon)
{
	assert(pcon);
	pcon->sz = 0;
	//memset(pcon->data, 0, sizeof(pcon->data)); //这回需要手动分配空间了。

	/******新增代码******/
	pcon->data = (PeoInfo *)calloc(DEFAULT_SZ, sizeof(PeoInfo)); //分配默认大小并清空
	if (pcon->data == NULL) //检查分配是否成功
	{
		printf("%s\n", strerror(errno));
		return;
	}
	pcon->capacity = DEFAULT_SZ;
	/******************/
}
测试函数修改：

  case EXIT:
	  DestroyContact(&con); //退出时销毁
	  printf("退出程序\n");
	  break;
