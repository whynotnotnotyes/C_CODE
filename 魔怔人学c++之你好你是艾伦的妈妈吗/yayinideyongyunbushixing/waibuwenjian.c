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

//int ADD(int a, int b)
//{
//	int z = a + b;
//
//	return z;
//}






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








//通讯录(动态，文件版)


//Contact 通讯录实现
//1.test.c 测试
//2.contact.c 实现函数的功能
//3.contact.h 声明函数



//实现功能：
//1.存放1000个好友的信息
//名字，电话，性别，住址，年龄

//2.增加好友信息
//3.删除指定名字的好友信息
//4.查找好友信息
//5.修改好友信息
//6.打印好友信息
//7.排序


//#include "add.h"
//#include <string.h>
//#include <errno.h>
//
////函数实现在.c里面实现
//
//
//
//void InitContact(struct Contact* ps)
//{
//	ps->data = (struct PeoInfo*)malloc(3 * sizeof(struct PeoInfo));
//	if (ps->data == NULL)
//	{
//		return;
//	}
//	ps->size = 0;
//	ps->capacity = DEFAULT_sz;
//
//	//把文件中已经存放的通讯录中的信息加载到通讯录中
//	LoadContact(ps);
//}
//
//void CheckCapacity(struct Contact* ps);
//
//void LoadContact(struct Contact* ps)
//{
//	PeoInfo tmp = { 0 };
//
//	FILE* pfRead = fopen("contact.dat", "rb");
//
//	if (pfRead == NULL)
//	{
//		printf("LoadContact::%s\n", strerror(errno));
//		return;
//	}
//
//	//读取文件，放到通讯录中
//	while (fread(&tmp, sizeof(PeoInfo), 1, pfRead))
//	{
//		CheckCapacity(ps);
//		ps->data[ps->size] = tmp;
//		ps->size++;
//	}
//
//	fclose(pfRead);
//	pfRead = NULL;
//}
//
//void CheckCapacity(struct Contact* ps)
//{
//	//扩容
//	if (ps->capacity == ps->size)
//	{
//		struct PeoInfo* ptr = realloc(ps->data, (ps->capacity + 2) * sizeof(struct PeoInfo));
//		if (ptr != NULL)
//		{
//			ps->data = ptr;
//			ps->capacity += 2;
//			printf("扩容成功\n");
//		}
//		else
//		{
//			printf("扩容失败\n");
//		}
//	}
//}
//
//void AddContact(struct Contact* ps)
//{
//	//检测当前通讯录的容量
//	//1.如果满了，就增加空间
//	//2.如果不满，啥事不干
//	CheckCapacity(ps);
//
//	//增加数据
//	printf("请输入名字:>");
//	scanf("%s", ps->data[ps->size].name);
//	printf("请输入年龄:>");
//	scanf("%d", &(ps->data[ps->size].age));
//	printf("请输入性别:>");
//	scanf("%s", ps->data[ps->size].sex);
//	printf("请输入电话:>");
//	scanf("%s", ps->data[ps->size].tele);
//	printf("请输入地址:>");
//	scanf("%s", ps->data[ps->size].addr);
//
//	ps->size++;
//	printf("添加成功\n\n\n");
//
//
//}
//
//
//
//void ShowContact(const struct Contact* ps)
//{
//	if (ps->size == 0)
//	{
//		printf("通讯录为空\n\n");
//	}
//	else
//	{
//		int i = 0;
//		//打印标题
//		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
//		//打印数据
//		for (i = 0; i < ps->size; i++)
//		{
//			printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
//				ps->data[i].name,
//				ps->data[i].age,
//				ps->data[i].sex,
//				ps->data[i].tele,
//				ps->data[i].addr);
//		}
//		printf("\n");
//	}
//}
//
//
//
//static int FindByName(const struct Contact* ps, char name[MAX_NAME])
//{
//	int i = 0;
//
//	for (i = 0; i < ps->size; i++)
//	{
//		if (strcmp(ps->data[i].name, name) == 0)
//		{
//			return i;
//		}
//	}
//	return -1;
//}
//
//
//
//void DelContact(struct Contact* ps)
//{
//	char name[MAX_NAME];
//	printf("请输入要删除人的名字:>\n");
//	scanf("%s", name);
//
//	//1.查找要删除的人在什么位置
//	int pos = 0;
//	pos = FindByName(ps, name);
//	//找到了返回名字所在元素的下标
//	//没找到返回-1
//
//	//删除
//	if (pos == -1)
//	{
//		printf("要删除的人不在\n");
//	}
//	else
//	{
//		//删除数据
//		int j = 0;
//
//		for (j = pos; j < ps->size - 1; j++)
//		{
//			ps->data[j] = ps->data[j + 1];
//		}
//		ps->size--;
//		printf("删除成功\n");
//	}
//}
//
//
//
//void SearchContact(const struct Contact* ps)
//{
//	char name[MAX_NAME];
//
//	printf("请输入你要查找的名字:>\n");
//	scanf("%s", name);
//
//	int pos = FindByName(ps, name);
//
//	if (pos == -1)
//	{
//		printf("要查找的人不存在\n");
//	}
//	else
//	{
//		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
//		printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
//			ps->data[pos].name,
//			ps->data[pos].age,
//			ps->data[pos].sex,
//			ps->data[pos].tele,
//			ps->data[pos].addr);
//		printf("\n");
//	}
//
//}
//
//
//
//void ModifyContact(struct Contact* ps)
//{
//	char name[MAX_NAME];
//	printf("请输入要修改人的名字\n");
//	scanf("%s", &name);
//
//	int pos = FindByName(ps, name);
//
//	if (pos == -1)
//	{
//		printf("找不到此联系人\n");
//	}
//	else
//	{
//		printf("请输入要修改的名字:>");
//		scanf("%s", ps->data[pos].name);
//
//		printf("请输入要修改的年龄:>");
//		scanf("%d", &(ps->data[pos].age));
//
//		printf("请输入要修改的性别:>");
//		scanf("%s", ps->data[pos].sex);
//
//		printf("请输入要修改的电话号码:>");
//		scanf("%s", ps->data[pos].tele);
//
//		printf("请输入要修改的地址:>");
//		scanf("%s", ps->data[pos].addr);
//	}
//}
//
//
//
//void DestroyContact(struct Contact* ps)
//{
//	free(ps->data);
//	ps->data = NULL;
//}
//
//
//
//void SaveContact(Contact* ps)
//{
//	FILE* pfWrite = fopen("contact.dat", "wb");
//
//	if (pfWrite == NULL)
//	{
//		printf("SaveContact::%s\n", strerror(errno));
//		return;
//	}
//
//	int i = 0;
//	for (i = 0; i < ps->size; i++)
//	{
//		fwrite(&(ps->data[i]), sizeof(PeoInfo), 1, pfWrite);
//	}
//
//	fclose(pfWrite);
//	pfWrite = NULL;
//}




