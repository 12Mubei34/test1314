��̬ͨѶ¼��ʵ�֣�
�޸Ľṹ��ͷ�ļ��޸ģ���

typedef struct Contact
{
	PeoInfo* data;
	int sz;//��ЧԪ�صĸ���
	int capacity;//����
}Contact;
����������

void CheckCapacity(Contact* pcon)
{
	if (pcon->sz == pcon->capacity)
	{
		//ÿ������˫��
		PeoInfo* ptr = realloc(pcon->data, (pcon->capacity * 2)*sizeof(PeoInfo));
		if (ptr != NULL)
		{
			pcon->data = ptr;
			pcon->capacity *= 2;
			printf("���ݳɹ�\n");
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
�޸ĺ�����

void AddContact(Contact* pcon)
{
	assert(pcon);

	/******��������******/
	CheckCapacity(pcon); //����ǰ����������
	/******************/

	//¼����Ϣ
	printf("����������:>");
	scanf("%s", pcon->data[pcon->sz].name);
	printf("����������:>");
	scanf("%d", &(pcon->data[pcon->sz].age));
	printf("�������Ա�:>");
	scanf("%s", pcon->data[pcon->sz].sex);
	printf("������绰:>");
	scanf("%s", pcon->data[pcon->sz].tele);
	printf("�������ַ:>");
	scanf("%s", pcon->data[pcon->sz].addr);
	?
		pcon->sz++;
	printf("���ӳɹ�\n");
}
?
void InitContact(Contact* pcon)
{
	assert(pcon);
	pcon->sz = 0;
	//memset(pcon->data, 0, sizeof(pcon->data)); //�����Ҫ�ֶ�����ռ��ˡ�

	/******��������******/
	pcon->data = (PeoInfo *)calloc(DEFAULT_SZ, sizeof(PeoInfo)); //����Ĭ�ϴ�С�����
	if (pcon->data == NULL) //�������Ƿ�ɹ�
	{
		printf("%s\n", strerror(errno));
		return;
	}
	pcon->capacity = DEFAULT_SZ;
	/******************/
}
���Ժ����޸ģ�

  case EXIT:
	  DestroyContact(&con); //�˳�ʱ����
	  printf("�˳�����\n");
	  break;
