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

void SeqList_Init(SeqList* SL);//˳���ĳ�ʼ��
void SeqList_Des(SeqList* SL);//˳��������




void SeqListPB(SeqList* SL,SLTypedata data);//˳����β��

void SeqListPF(SeqList* SL);//˳����ͷ��




void SeqList_Print(SeqList SL);//��ӡ˳����е�����



