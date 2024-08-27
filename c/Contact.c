#define _CRT_SECURE_NO_WARNINGS 1
#include "SeqList.h"
#include "Contact.h"
//通讯录的初始化
void  ContactInit(Contact* con)//con就是SeqList
{
	//实际就是顺序表的初始化
	SeqList_Init(con);
}
//通讯录的销毁
void ContactDestory(Contact* con)
{
	SeqList_Des(con);
}
//通讯录添加数据
void ContactAdd(Contact* con)
{
	//获取用户输入的数据
	peoInfo Info;
	printf("请输入需要添加的信息");
	printf("\n");
	printf("姓名 性别 年龄 电话号码 地址");
	printf("\n");
	scanf("%s%s%d%s%s", Info.name, Info.gender, &Info.age, Info.tel, Info.addr); 
	//调用底层完成添加
	SeqListPF(con,Info);
}
//通讯录删除数据
int FindbyName(Contact* con, char name[])
{
	for (int i = 0; i < con->size; i++)
	{
		if (0 == strcmp(con->arr[i].name, name))
		{
			//找到了
			return  i;
		}
	}
	return -1;
}
void ContactDel(Contact* con)
{
	//先需要查找是否存在
	char Name[NAME_MAX] = {0};
	printf("请输入你要删除的联系人姓名:\n");
	scanf("%s", Name);
	int i = FindbyName(con, Name);
	if (i == -1)
	{
		printf("该联系人不存在!!\n");
		return;//这个地方使用return而不返回任何值是因为这个函数的返回值是void，所以不返回任何值刚好可以退出该函数
	}
	else
	{
		SeqListErase(con, i);
		printf("删除成功！\n");
	}

}
//通讯录修改数据
void ContactModify(Contact* con)
{
	char Name[NAME_MAX] = { 0 };
	printf("请输入你要修改的联系人姓名:\n");
	scanf("%s", Name);
	int i = FindbyName(con, Name);
	if (i == -1)
	{
		printf("该联系人不存在!!\n");
		return;//这个地方使用return而不返回任何值是因为这个函数的返回值是void，所以不返回任何值刚好可以退出该函数
	}
	else
	{
		printf("请输入新姓名\n");
		scanf("%s", con->arr[i].name);
		printf("请输入新性别\n");
		scanf("%s", con->arr[i].gender);
		printf("请输入新年龄\n");
		scanf("%s", &con->arr[i].age);
		printf("请输入新电话\n");
		scanf("%s", con->arr[i].tel);
		printf("请输入新地址\n");
		scanf("%s", con->arr[i].addr);
		printf("修改成功！\n");
	}
}
//展示通讯录中的数据
void ContactShow(Contact con)
{
	printf("%s %s %s %s %s\n", "姓名", "性别", "年龄", "电话", "地址");
	SeqList_Print(con);
}
void Find(Contact* con)
{
	char Name[NAME_MAX] = { 0 };
	printf("请输入你要查找的联系人姓名:\n");
	scanf("%s", Name);
	int i = FindbyName(con, Name);
	if (i == -1)
	{
		printf("该联系人不存在!!\n");
		return;//这个地方使用return而不返回任何值是因为这个函数的返回值是void，所以不返回任何值刚好可以退出该函数
	}
	else
	{
		printf("%s %s %s %s %s\n", "姓名", "性别", "年龄", "电话", "地址");
		printf("%s %s %d %s %s ",con->arr[i].name,
								con->arr[i].gender,
								con->arr[i].age,
								con->arr[i].tel,
								con->arr[i].addr);//(*con).arr[i].name,(*con).arr[i].gender,(*con).arr[i].age,(*con).arr[i].tel,(*con).arr[i].addr);
	}
}