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

#include <stdio.h>
#include "add.h"

//定义
void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' '; //注意这里是单引号
		}
	}
}





void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;

	for (i = 0; i < row; i++)
	{
		int j = 0;

		//1.打印一行的数据
		for (j = 0; j < col; j++)
		{	
			printf(" %c ", board[i][j]);

			if (j < col - 1)
				printf("|");
		}
		printf("\n");


		//2.打印分割行
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
			printf("\n");
		}
		
	}
}




void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("玩家走:>\n");

	while (1)
	{
		printf("请选择要下的坐标:>");

		scanf("%d %d", &x, &y);

		if ((x >= 1 && x <= row) && (y >= 1 && y <= col))
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x-1][y-1] = '*';
				break;
			}
			else
			{
				printf("非法占用，请重新选择\n");
			}
				
		}
		else
		{
			printf("坐标非法，请重新选择\n");
		}
	}
}








