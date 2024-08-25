#define _CRT_SECURE_NO_WARNINGS 1
#include "SeqList.h"
 

//����˳���ռ��Ƿ��㹻����˳����������
void SlCheckcapcity(SeqList* ps)
{
	assert(ps);//������if���
	//��������֮ǰ��Ҫ���ʿռ��Ƿ��㹻
	if (ps->Capacity == ps->size)
	{
		//����ռ�malloc calloc û�����ݵĸ���/
		// ��������ʹ�õ���realloc
		int newCapcity = (ps->Capacity == 0 ? 4 : 2 * ps->Capacity);//��Ŀ����������¿ռ�Ķ���
		SLTypedata* tmp = (SLTypedata*)realloc(ps->arr, newCapcity * sizeof(SLTypedata));
		if (tmp == NULL)
		{
			perror("Realloc fail!!");
			exit(1);
		}
		ps->arr = tmp;
		ps->Capacity = newCapcity;
		//ps->arr = (SLTypedata*)realloc(ps->arr, newCapcity * sizeof(SLTypedata));//Ϊʲô�Ǵ�arr��ʼ����ռ�
		//assert(ps->arr);�⼸�п�������д��
	}
}
 


//˳���ĳ�ʼ��
 void SeqList_Init(SeqList* ps)
 {
	 ps->arr = NULL;// *ps->arr=NULL����//Ϊʲô���ý����þͿ���ֱ�ӵ���
	 ps->size = ps->Capacity =0;//*ps->Capacity�ᱨ��	(*ps).Capacity��������


 }
//˳��������
 void SeqList_Des(SeqList* ps)
 {

	 if (ps->arr)
	 {
		 free(ps->arr);
	 }
	 ps->arr = NULL;
	 ps->Capacity = ps->size = 0;
 } 
 
 

 //˳����β��
 void SeqListPB(SeqList* ps, SLTypedata data)
 {
	 assert(ps);//������if���
	 SlCheckcapcity(ps);
	 //ps->arr[ps->size]=data;
	 //ps->size++;
	 ps->arr[ps->size++] = data;
 }
 //˳����ͷ��
 void SeqListPF(SeqList* ps, SLTypedata data) 
 {
	 assert(ps);//������if���
	 SlCheckcapcity(ps);
	 for (int i = ps->size; i > 0; i--)
	 {
		 ps->arr[i] = ps->arr[i - 1];//arr[1]=arr[]0
	 }
	 ps -> arr[0] = data;
	 ps->size++;
 }




//��ӡ˳����е�����
 void SeqList_Print(SeqList SL) 
 {
	 for (int i = 0; i < SL.size; i++)
	 {
		 printf("%d ", SL.arr[i]);
	 }
	 printf("\n");
 }



 //˳����βɾ
 void SeqListPopBack(SeqList* ps)
 {
	 assert(ps);
	 assert(ps->size);//˳�����Ϊ��

	 ps->size--;//ֱ�ӽ��м����Ϳ���������ǵ���Ҫ   ps->arr--Ϊʲô����ȷ
 }
  //˳����ͷɾ,���ǽ�����������ǰŲ��һλ
 void SeqListPopFront(SeqList* ps)
 {
	 for (int i = 0; i < ps->size; i++)
	 {
		 ps->arr[i] = ps->arr[i + 1];//��ֵ���㣬���Ⱥŵ��ұ����ݸ�ֵ�����
		//���һ�ν������ݵĲ���   ps->arr[��ps->size��-2]=ps->arr[(ps->size)-1]
	 }
	 ps->size--;
 }