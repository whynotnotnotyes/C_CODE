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





