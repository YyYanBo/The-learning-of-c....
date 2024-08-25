#define _CRT_SECURE_NO_WARNINGS 1
#include "SeqList.h"
 

//检验顺序表空间是否足够并对顺序表进行扩容
void SlCheckcapcity(SeqList* ps)
{
	assert(ps);//可以用if语句
	//插入数据之前需要访问空间是否足够
	if (ps->Capacity == ps->size)
	{
		//申请空间malloc calloc 没有增容的概念/
		// 所以我们使用的是realloc
		int newCapcity = (ps->Capacity == 0 ? 4 : 2 * ps->Capacity);//三目操作符完成新空间的定义
		SLTypedata* tmp = (SLTypedata*)realloc(ps->arr, newCapcity * sizeof(SLTypedata));
		if (tmp == NULL)
		{
			perror("Realloc fail!!");
			exit(1);
		}
		ps->arr = tmp;
		ps->Capacity = newCapcity;
		//ps->arr = (SLTypedata*)realloc(ps->arr, newCapcity * sizeof(SLTypedata));//为什么是从arr开始申请空间
		//assert(ps->arr);这几行可以这样写吗？
	}
}
 


//顺序表的初始化
 void SeqList_Init(SeqList* ps)
 {
	 ps->arr = NULL;// *ps->arr=NULL？？//为什么不用解引用就可以直接调用
	 ps->size = ps->Capacity =0;//*ps->Capacity会报错	(*ps).Capacity不报错？？


 }
//顺序表的销毁
 void SeqList_Des(SeqList* ps)
 {

	 if (ps->arr)
	 {
		 free(ps->arr);
	 }
	 ps->arr = NULL;
	 ps->Capacity = ps->size = 0;
 } 
 
 

 //顺序表的尾插
 void SeqListPB(SeqList* ps, SLTypedata data)
 {
	 assert(ps);//可以用if语句
	 SlCheckcapcity(ps);
	 //ps->arr[ps->size]=data;
	 //ps->size++;
	 ps->arr[ps->size++] = data;
 }
 //顺序表的头插
 void SeqListPF(SeqList* ps, SLTypedata data) 
 {
	 assert(ps);//可以用if语句
	 SlCheckcapcity(ps);
	 for (int i = ps->size; i > 0; i--)
	 {
		 ps->arr[i] = ps->arr[i - 1];//arr[1]=arr[]0
	 }
	 ps -> arr[0] = data;
	 ps->size++;
 }




//打印顺序表中的数据
 void SeqList_Print(SeqList SL) 
 {
	 for (int i = 0; i < SL.size; i++)
	 {
		 printf("%d ", SL.arr[i]);
	 }
	 printf("\n");
 }



 //顺序表的尾删
 void SeqListPopBack(SeqList* ps)
 {
	 assert(ps);
	 assert(ps->size);//顺序表不能为空

	 ps->size--;//直接进行减减就可以完成我们的需要   ps->arr--为什么不正确
 }
  //顺序表的头删,就是将数据整体往前挪动一位
 void SeqListPopFront(SeqList* ps)
 {
	 for (int i = 0; i < ps->size; i++)
	 {
		 ps->arr[i] = ps->arr[i + 1];//赋值运算，将等号的右边数据赋值给左边
		//最后一次进行数据的操作   ps->arr[（ps->size）-2]=ps->arr[(ps->size)-1]
	 }
	 ps->size--;
 }