#define _CRT_SECURE_NO_WARNINGS 1

#include "SeqList.h"

//void Test01()
//{
//    SeqList SL;
//	SeqList_Init(&SL);
//	进行增删查改
//
//	SeqListPB(&SL, 1);
//	SeqListPB(&SL, 2);
//	SeqListPB(&SL, 3);
//	SeqList_Print(SL);
//	SeqListPF(&SL, 67);
//	SeqListPF(&SL, 108);
//	SeqListPF(&SL, 56);
//	SeqList_Print(SL);
//	SeqListPopBack(&SL);
//	SeqList_Print(SL);
//	SeqListErase(&SL, 0);
//	SeqList_Print(SL);
//	SeqListErase(&SL, 1);
//	SeqList_Print(SL);
//	SeqListInsert(&SL, 1, 2);
//	SeqList_Print(SL);
//	SeqListInsert(&SL, 0, 789);
//	SeqList_Print(SL);
//	SeqList_Des(&SL);
//
//}


//void Test()
//{
//	Contact con;
//	ContactInit(&con);
//	ContactAdd(&con);
//	ContactAdd(&con);
//	ContactShow(con);
//	ContactDel(&con);
//	ContactShow(con);
//	ContactModify(&con);
//	ContactShow(con);
//
//	Find(& con);
//	ContactDestory(&con);
//}


void menu()
{
		printf("--------—----通讯录-------------\n");
		printf("--1.添加联系人-----2.删除联系人--\n");
		printf("--3.查找联系人-----4.修改联系人--\n");
		printf("--5.展示联系人-----0.退出--------\n");
		printf("--------------请选择-------------\n"); 
}

int main()
{
	//SeqList* test = &SL;
	//*test->arr = 0;int op = 0;
		Contact con;
		int op=0;
		ContactInit(&con);
		do
		{
				menu();
				scanf("%d", &op);
				switch (op)
				{
				case 1:  ContactAdd(&con);
					break;
				case 2:ContactDel(&con);
					break;
				case 3:Find(&con);
					break;
				case 4:ContactModify(&con);
					break;
				case 5:ContactShow(con);
					break;
				case 0:printf("退出中.......");
					break;
				default:printf("选择错误，请重试！");
					break;
				}

		}while (op!=0);			
		ContactDestory(&con);
	     return 0;
}