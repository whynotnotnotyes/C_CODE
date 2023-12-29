#define _CRT_SECURE_NO_WARNINGS 1





int wer = 12;





//静态的局部变量
static int g_val = 150;

static int APP(int a, int b)
{

	int z = a + b;

	return z;

}





//函数的定义

int ADD(int a, int b)
{
	int z = a + b;

	return z;
}






//二分查找函数(工作模式)

//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//			return mid;
//	}
//	return -1;
//}





//猜数游戏函数(工作模式)

//int menu()
//{
//	printf("************************\n");
//	printf("*****1.play  2.exit*****\n");
//	printf("************************\n\n");
//}
//
//int game()
//{
//	int i = 0;
//	int ret = 0;
//
//	ret = rand() % 100 + 1;
//
//	while (1)
//	{
//		scanf("%d", &i);
//
//		if (i > ret)
//		{
//			printf("大了\n");
//		}
//		else if (i < ret)
//		{
//			printf("小了\n");
//		}
//		else
//			printf("恭喜你，找到了");
//			return ret;
//	}
//}










//三子棋

//#include <stdio.h>
//#include "add.h"
//#include <stdlib.h>
//#include <time.h>
//
////定义
//                       //二维数组可以省略行不能省略列，所以不能写成biard[][],要写成board[][COLS]或board[ROW][COL]
//void InitBoard(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		int j = 0;
//		for (j = 0; j < col; j++)
//		{
//			board[i][j] = ' '; //注意这里是单引号
//		}
//	}
//}
//
//
//
//
//
//void DisplayBoard(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//
//	for (i = 0; i < row; i++)
//	{
//		int j = 0;
//
//		//1.打印一行的数据
//		for (j = 0; j < col; j++)
//		{	
//			printf(" %c ", board[i][j]);
//
//			if (j < col - 1)
//				printf("|");
//		}
//		printf("\n");
//
//
//		//2.打印分割行
//		if (i < row - 1)
//		{
//			for (j = 0; j < col; j++)
//			{
//				printf("---");
//				if (j < col - 1)
//					printf("|");
//			}
//			printf("\n");
//		}
//		
//	}
//}
//
//
//
//int IsFull(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			if (board[i][j] == ' ')
//			{
//				return 0;
//			}
//		}
//	}
//	return 1;
//}
//
//
//
//
//玩家走
//void PlayerMove(char board[ROW][COL], int row, int col)
//{
//	int x = 0;
//	int y = 0;
//	printf("玩家走:>\n");
//
//	while (1)
//	{
//		printf("请选择要下的坐标:>");
//
//		scanf("%d %d", &x, &y);
//
//		if ((x >= 1 && x <= row) && (y >= 1 && y <= col))
//		{
//			if (board[x - 1][y - 1] == ' ')
//			{
//				board[x-1][y-1] = '*';
//				break;
//			}
//			else
//			{
//				printf("非法占用，请重新选择\n");
//			}
//				
//		}
//		else
//		{
//			printf("坐标非法，请重新选择\n");
//		}
//	}
//}
//
//
//
//电脑走
//void ComputerMove(char board[ROW][COL], int row, int col)
//{
//	int x = 0;
//	int y = 0;
//	printf("电脑走:>\n");
//
//	while (1)
//	{
//		x = rand() % row;
//    //当一个数字模上另一个数，结果的范围一定是0 到（另一个数-1）的数
//		y = rand() % col;
//
//		if (board[x][y] == ' ')
//		{
//			board[x][y] = '#';
//			break;
//		}
//	}
//
//}
//
//
////返回四种类型
////玩家赢: '*'
////电脑赢：'#'
////平局：'Q'
////继续下棋: 'C'
//
// 判断是否赢
//char IsWin(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//
//	//横三行
//	for (i = 0; i < row; i++)
//	{
//		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
//		{
//			return board[i][1];
//		}
//	}
//
//	//竖三列
//	for (i = 0; i < col; i++)
//	{
//		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] !=' ')
//		{
//			return board[1][i];
//		}
//	}
//
//	//两个对角线
//
//	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] !=' ')
//	{
//		return board[2][2];
//	}
//
//	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
//	{
//		return board[1][1];
//	}
//
//	//判断平局（判断棋盘满了没有）
//
//	if (IsFull(board, ROW, COL) == 1)
//	{
//		return 'Q';
//	}
//
//	return 'C';
//}













//扫雷
//#include <stdio.h>
//#include "add.h"
//#include <stdlib.h>
//#include <time.h>
//
////初始化
//void InitBoard(char board[ROWS][COLS], int rows, int cols,char set)
//{
//	int i = 0;
//	int j = 0;
//
//	for (i = 0; i < rows; i++)
//	{
//		for (j = 0; j < cols; j++)
//		{
//			board[i][j] = set;
//		}
//	}
//}
//
//
//
////打印棋盘
//void DisplayBoard(char board[ROWS][COLS], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//
//	//打印列号
//	//printf("  ");   这样可以没有第一行那个0
//
//	for (i = 0; i <= col; i++)
//	{
//		printf("%d ", i);
//	}
//	printf("\n");
//
//	for (i = 1; i <= row; i++)
//	{
//		//打印行号
//		printf("%d ", i);
//		for (j = 1; j <= col; j++)
//		{
//			printf("%c ", board[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//
////布置雷
//
//void SetMine(char board[ROWS][COLS], int row, int col)
//{
//
//	int count = EASY_COUNT;
//
//	while (count)
//	{
//		int x = rand() % row + 1;
//		int y = rand() % col + 1;
//
//		if(board[x][y]=='0')
//		{
//			board[x][y] = '1';
//			count--;
//		}
//	}
//}
//
//
//
//
//
////扫雷
//
////计算x,y坐标周围有几个雷
//int get_mine_count(char mine[ROWS][COLS], int x, int y)
//{
//	return  mine[x - 1][y] +
//		    mine[x - 1][y - 1] +
//		    mine[x - 1][y + 1] +
//		    mine[x][y - 1] +
//		    mine[x][y + 1] +
//		    mine[x + 1][y] +
//		    mine[x + 1][y - 1] +
//			mine[x + 1][y + 1] - 8 * '0';
//}
//
//
//
//void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
//{
//	int x = 0;
//	int y = 0;
//	int win = 0;
//	int ret = EASY_COUNT;
//	//直接用EASY_COUNT会报错，可以设置一个变量
//
//	while (win<=row*col-ret)
//	{
//		printf("请输入坐标:>\n");
//
//		scanf("%d", &x);
//		scanf("%d", &y);
//
//		//坐标合法
//		if ((x >= 1 && x <= row) && (y >= 1 && y <= col))
//		{
//			//1.踩雷
//			if (mine[x][y] == '1')
//			{
//				printf("你被炸死了\n");	
//				DisplayBoard(show, ROW, COL);
//				break;
//			} //2.不是雷
//			else if (mine[x][y] == '0')
//			{
//				//计算x,y坐标周围有几个雷
//				int count = get_mine_count(mine, x, y);
//				show[x][y] = count + '0';
//				DisplayBoard(show, ROW, COL);
//				win++;
//			}
//		}
//		else
//		{
//			printf("坐标非法,请重新输入\n");
//		}
//			
//
//		if (win == row*col-ret)
//		{
//			printf("恭喜你，你赢啦！！！\n\n恭喜你，你赢啦！！！\n\n恭喜你，你赢啦！！！\n\n");
//			DisplayBoard(mine, row, col);
//			break;
//		}
//		//每次排一个雷，就win++
//		//当show棋盘格子数 减去 EASY_COUNT 的数字相加 等于 win,就赢了
//	}
//
//}









