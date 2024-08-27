#pragma once

#define NAME_MAX 20
#define GENDER_MAX 10
#define TEL_MAX 20
#define ADDR_MAX 100
//����ͨѶ¼���ݽṹ��
//���� �Ա� ���� �绰 ��ַ
typedef struct personInfo
{
	char name[NAME_MAX];
	char gender[GENDER_MAX];
	int age;
	char tel[TEL_MAX];
	char addr[ADDR_MAX];
}peoInfo;

//struct SeqList;

//ʹ��˳����еķ�����ͨѶ¼���в���
//��˳���ĸ�����
typedef struct SeqList Contact;//����������ͷ�ļ��л������ͷ�ļ�����ʹ��ǰ���������������18��
//ͨѶ¼��ط���

//ͨѶ¼�ĳ�ʼ��
void  ContactInit(Contact* con);
//ͨѶ¼������
void ContactDestory(Contact* con);
//ͨѶ¼�������
void ContactAdd(Contact* con);
//ͨѶ¼ɾ������
void ContactDel(Contact* con);
//ͨѶ¼�޸�����
void ContactModify(Contact* con);
//ͨѶ¼����(��������)
int FindbyName(Contact* con, char name[]);
//չʾͨѶ¼�е�����
void ContactShow(Contact con); 
//ͨѶ¼���Ҳ���չʾ
void Find(Contact* con);