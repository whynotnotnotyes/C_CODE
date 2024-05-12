#define _CRT_SECURE_NO_WARNINGS 1

#define MAX 1000

#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30

#include <stdio.h>
#include <string.h>

//这个结构体是全局变量，全局变量的生命周期是整个工程
//但是要用这个结构体，要引这个头文件

enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT
};

struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
};


//通讯录类型
struct Contact
{
	struct PeoInfo data[MAX]; //存放一个信息
	int size; //记录当前已经有的元素个数
};


//函数声明在.h文件里
//初始化通讯录的函数
void InitContact(struct Contact* ps);

//增加一个信息到通讯录
void AddContact(struct Contact* ps);

//打印通讯录中的信息
void ShowContact(const struct Contact* ps);

//删除指定的联系人
void DelContact(struct Const* ps);

//查找联系人
void SearchContact(const struct Contact* ps);

//修改指定联系人
void ModifyContact(struct Contact* ps);