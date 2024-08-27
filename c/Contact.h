#pragma once

#define NAME_MAX 20
#define GENDER_MAX 10
#define TEL_MAX 20
#define ADDR_MAX 100
//定义通讯录数据结构体
//姓名 性别 年龄 电话 地址
typedef struct personInfo
{
	char name[NAME_MAX];
	char gender[GENDER_MAX];
	int age;
	char tel[TEL_MAX];
	char addr[ADDR_MAX];
}peoInfo;

//struct SeqList;

//使用顺序表中的方法对通讯录进行操作
//给顺序表改个名字
typedef struct SeqList Contact;//不能再两个头文件中互相包含头文件，而使用前置声明，见代码第18行
//通讯录相关方法

//通讯录的初始化
void  ContactInit(Contact* con);
//通讯录的销毁
void ContactDestory(Contact* con);
//通讯录添加数据
void ContactAdd(Contact* con);
//通讯录删除数据
void ContactDel(Contact* con);
//通讯录修改数据
void ContactModify(Contact* con);
//通讯录查找(按照名字)
int FindbyName(Contact* con, char name[]);
//展示通讯录中的数据
void ContactShow(Contact con); 
//通讯录查找并且展示
void Find(Contact* con);