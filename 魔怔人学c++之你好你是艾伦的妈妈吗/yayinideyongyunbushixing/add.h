//#define _CRT_SECURE_NO_WARNINGS 1
//这句话可以不加，因为.h文件里可以不用scanf和printf



//int add(int a, int b);



//int binary_search(int arr[], int k, int sz);
//形参和实参一样是没有问题的，因为形参和实参相互独立



//void menu();
//void game();



//#ifndef __ADD_H__
//如果函数未定义
//#define __ADD_H__
//那就定义一个函数

//int add(int x, int y);

//#endif
//结束

//如果函数已定义，那就不再定义，为了防止函数的重复定义







//三子棋   6794行
//#define ROW 3     //宏定义后面不用加分号 ;
//#define COL 3
//
////声明
////                       二维数组的[][]里需要加形参
//void InitBoard(char board[ROW][COL], int row, int col);
//
//void DisplayBoard(char board[ROW][COL], int row, int col);
//
//void PlayerMove(char board[ROW][COL], int row, int col);
//
//void ComputerMove(char board[ROW][COL], int row, int col);
//
//char IsWin(char board[ROW][COL], int row, int col);










//扫雷

//#define ROW 9
//#define COL 9
//
//#define ROWS ROW+2	//这里不用加 = 号
//#define COLS COL+2
//
//#define EASY_COUNT 10;
//
////声明
//
//void InitBoard(char board[ROWS][COLS], int rows, int cols,char set);
//
//void DisplayBoard(char board[ROWS][COLS], int row, int col);
////                          传过来的是mine数组是ROWS和COLS,所以只能写board[ROWS][COLS]
//
//void SetMine(char board[ROWS][COLS], int row, int col);
//
//void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);









//通讯录

//#define MAX 1000
//
//#define MAX_NAME 20
//#define MAX_SEX 5
//#define MAX_TELE 12
//#define MAX_ADDR 30
//
//#include <stdio.h>
//#include <string.h>
//
////这个结构体是全局变量，全局变量的生命周期是整个工程
////但是要用这个结构体，要引这个头文件
//
//enum Option
//{
//	EXIT,
//	ADD,
//	DEL,
//	SEARCH,
//	MODIFY,
//	SHOW,
//	SORT
//};
//
//struct PeoInfo
//{
//	char name[MAX_NAME];
//	int age;
//	char sex[MAX_SEX];
//	char tele[MAX_TELE];
//	char addr[MAX_ADDR];
//};
//
//
////通讯录类型
//struct Contact
//{
//	struct PeoInfo data[MAX]; //存放一个信息
//	int size; //记录当前已经有的元素个数
//};
//
//
////函数声明在.h文件里
////初始化通讯录的函数
//void InitContact(struct Contact* ps);
//
////增加一个信息到通讯录
//void AddContact(struct Contact* ps);
//
////打印通讯录中的信息
//void ShowContact(const struct Contact* ps);
//
////删除指定的联系人
//void DelContact(struct Const* ps);
//
////查找联系人
//void SearchContact(const struct Contact* ps);
//
////修改指定联系人
//void ModifyContact(struct Contact* ps);











