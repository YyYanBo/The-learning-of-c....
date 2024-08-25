#define _CRT_SECURE_NO_WARNINGS 1

#include "SeqList.h"

void Test01()
{
    SeqList SL;
	SeqList_Init(&SL);
	//进行增删查改

	SeqListPB(&SL, 1);
	SeqListPB(&SL, 2);
	SeqListPB(&SL, 3);
	SeqList_Print(SL);
	SeqListPF(&SL, 67);
	SeqListPF(&SL, 108);
	SeqListPF(&SL, 56);
	SeqList_Print(SL);
	SeqListPopBack(&SL);


	SeqList_Print(SL);
	SeqList_Des(&SL);

}
int main()
{
	//SeqList* test = &SL;
	//*test->arr = 0;


	Test01();
	return 0;
}