#define _CRT_SECURE_NO_WARNINGS 1
//动态顺序表 ——— 按需修改
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
typedef int SLTypedata;//定义数据类型,方便后续修改

typedef struct SeqList {
	SLTypedata * arr;//定义顺序表的指针，方便扩容
	int size;//定义顺序表的有效数据个数
	int Capacity;//空间容量，后续可以双倍扩容，用于判断后续操作的时候空间是否足够使用
}SeqList;

//利用顺序表我们需要完成以下操作
//注释：以下函数的参数必须是指针，   /
//因为函数在传递参数的过程中由于压栈与退栈的原因，  /
// 会造成数据的销毁，无法完成数据的操作


void SlCheckcapcity(SeqList* ps);//检验顺序表空间是否足够

void SeqList_Init(SeqList* SL);//顺序表的初始化
void SeqList_Des(SeqList* SL);//顺序表的销毁




void SeqListPB(SeqList* SL,SLTypedata data);//顺序表的尾插

void SeqListPF(SeqList* SL);//顺序表的头插




void SeqList_Print(SeqList SL);//打印顺序表中的数据



