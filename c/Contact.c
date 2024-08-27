#define _CRT_SECURE_NO_WARNINGS 1
#include "SeqList.h"
#include "Contact.h"
//ͨѶ¼�ĳ�ʼ��
void  ContactInit(Contact* con)//con����SeqList
{
	//ʵ�ʾ���˳���ĳ�ʼ��
	SeqList_Init(con);
}
//ͨѶ¼������
void ContactDestory(Contact* con)
{
	SeqList_Des(con);
}
//ͨѶ¼�������
void ContactAdd(Contact* con)
{
	//��ȡ�û����������
	peoInfo Info;
	printf("��������Ҫ��ӵ���Ϣ");
	printf("\n");
	printf("���� �Ա� ���� �绰���� ��ַ");
	printf("\n");
	scanf("%s%s%d%s%s", Info.name, Info.gender, &Info.age, Info.tel, Info.addr); 
	//���õײ�������
	SeqListPF(con,Info);
}
//ͨѶ¼ɾ������
int FindbyName(Contact* con, char name[])
{
	for (int i = 0; i < con->size; i++)
	{
		if (0 == strcmp(con->arr[i].name, name))
		{
			//�ҵ���
			return  i;
		}
	}
	return -1;
}
void ContactDel(Contact* con)
{
	//����Ҫ�����Ƿ����
	char Name[NAME_MAX] = {0};
	printf("��������Ҫɾ������ϵ������:\n");
	scanf("%s", Name);
	int i = FindbyName(con, Name);
	if (i == -1)
	{
		printf("����ϵ�˲�����!!\n");
		return;//����ط�ʹ��return���������κ�ֵ����Ϊ��������ķ���ֵ��void�����Բ������κ�ֵ�պÿ����˳��ú���
	}
	else
	{
		SeqListErase(con, i);
		printf("ɾ���ɹ���\n");
	}

}
//ͨѶ¼�޸�����
void ContactModify(Contact* con)
{
	char Name[NAME_MAX] = { 0 };
	printf("��������Ҫ�޸ĵ���ϵ������:\n");
	scanf("%s", Name);
	int i = FindbyName(con, Name);
	if (i == -1)
	{
		printf("����ϵ�˲�����!!\n");
		return;//����ط�ʹ��return���������κ�ֵ����Ϊ��������ķ���ֵ��void�����Բ������κ�ֵ�պÿ����˳��ú���
	}
	else
	{
		printf("������������\n");
		scanf("%s", con->arr[i].name);
		printf("���������Ա�\n");
		scanf("%s", con->arr[i].gender);
		printf("������������\n");
		scanf("%s", &con->arr[i].age);
		printf("�������µ绰\n");
		scanf("%s", con->arr[i].tel);
		printf("�������µ�ַ\n");
		scanf("%s", con->arr[i].addr);
		printf("�޸ĳɹ���\n");
	}
}
//չʾͨѶ¼�е�����
void ContactShow(Contact con)
{
	printf("%s %s %s %s %s\n", "����", "�Ա�", "����", "�绰", "��ַ");
	SeqList_Print(con);
}
void Find(Contact* con)
{
	char Name[NAME_MAX] = { 0 };
	printf("��������Ҫ���ҵ���ϵ������:\n");
	scanf("%s", Name);
	int i = FindbyName(con, Name);
	if (i == -1)
	{
		printf("����ϵ�˲�����!!\n");
		return;//����ط�ʹ��return���������κ�ֵ����Ϊ��������ķ���ֵ��void�����Բ������κ�ֵ�պÿ����˳��ú���
	}
	else
	{
		printf("%s %s %s %s %s\n", "����", "�Ա�", "����", "�绰", "��ַ");
		printf("%s %s %d %s %s ",con->arr[i].name,
								con->arr[i].gender,
								con->arr[i].age,
								con->arr[i].tel,
								con->arr[i].addr);//(*con).arr[i].name,(*con).arr[i].gender,(*con).arr[i].age,(*con).arr[i].tel,(*con).arr[i].addr);
	}
}