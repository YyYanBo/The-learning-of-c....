#define _CRT_SECURE_NO_WARNINGS 1
//��̬˳��� ������ �����޸�
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
typedef int SLTypedata;//������������,��������޸�

typedef struct SeqList {
	SLTypedata * arr;//����˳����ָ�룬��������
	int size;//����˳������Ч���ݸ���
	int Capacity;//�ռ���������������˫�����ݣ������жϺ���������ʱ��ռ��Ƿ��㹻ʹ��
}SeqList;

//����˳���������Ҫ������²���
//ע�ͣ����º����Ĳ���������ָ�룬   /
//��Ϊ�����ڴ��ݲ����Ĺ���������ѹջ����ջ��ԭ��  /
// ��������ݵ����٣��޷�������ݵĲ���


void SlCheckcapcity(SeqList* ps);//����˳���ռ��Ƿ��㹻

void SeqList_Init(SeqList* ps);//˳���ĳ�ʼ��
void SeqList_Des(SeqList* ps);//˳��������




void SeqListPB(SeqList* ps,SLTypedata data);//˳����β��
void SeqListPF(SeqList* ps, SLTypedata data);//˳����ͷ��
void SeqListInsert(SeqList* ps, int pos, SLTypedata data);//��ָ��λ����ǰ��������
void SeqListErase(SeqList* ps, int pos);//��ָ��λ��ɾ������



void SeqList_Print(SeqList SL);//��ӡ˳����е�����



