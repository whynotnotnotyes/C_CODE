#define _CRT_SECURE_NO_WARNINGS 1





int wer = 12;





//��̬�ľֲ�����
static int g_val = 150;

static int APP(int a, int b)
{

	int z = a + b;

	return z;

}





//�����Ķ���

int ADD(int a, int b)
{
	int z = a + b;

	return z;
}






//���ֲ��Һ���(����ģʽ)

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





//������Ϸ����(����ģʽ)

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
//			printf("����\n");
//		}
//		else if (i < ret)
//		{
//			printf("С��\n");
//		}
//		else
//			printf("��ϲ�㣬�ҵ���");
//			return ret;
//	}
//}










//������

#include <stdio.h>
#include "add.h"

//����
void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' '; //ע�������ǵ�����
		}
	}
}





void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;

	for (i = 0; i < row; i++)
	{
		int j = 0;

		//1.��ӡһ�е�����
		for (j = 0; j < col; j++)
		{	
			printf(" %c ", board[i][j]);

			if (j < col - 1)
				printf("|");
		}
		printf("\n");


		//2.��ӡ�ָ���
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
	printf("�����:>\n");

	while (1)
	{
		printf("��ѡ��Ҫ�µ�����:>");

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
				printf("�Ƿ�ռ�ã�������ѡ��\n");
			}
				
		}
		else
		{
			printf("����Ƿ���������ѡ��\n");
		}
	}
}








