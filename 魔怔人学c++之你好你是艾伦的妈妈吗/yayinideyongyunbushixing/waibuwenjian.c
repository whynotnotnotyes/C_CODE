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

//int ADD(int a, int b)
//{
//	int z = a + b;
//
//	return z;
//}






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

//#include <stdio.h>
//#include "add.h"
//#include <stdlib.h>
//#include <time.h>
//
////����
//                       //��ά�������ʡ���в���ʡ���У����Բ���д��biard[][],Ҫд��board[][COLS]��board[ROW][COL]
//void InitBoard(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		int j = 0;
//		for (j = 0; j < col; j++)
//		{
//			board[i][j] = ' '; //ע�������ǵ�����
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
//		//1.��ӡһ�е�����
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
//		//2.��ӡ�ָ���
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
//�����
//void PlayerMove(char board[ROW][COL], int row, int col)
//{
//	int x = 0;
//	int y = 0;
//	printf("�����:>\n");
//
//	while (1)
//	{
//		printf("��ѡ��Ҫ�µ�����:>");
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
//				printf("�Ƿ�ռ�ã�������ѡ��\n");
//			}
//				
//		}
//		else
//		{
//			printf("����Ƿ���������ѡ��\n");
//		}
//	}
//}
//
//
//
//������
//void ComputerMove(char board[ROW][COL], int row, int col)
//{
//	int x = 0;
//	int y = 0;
//	printf("������:>\n");
//
//	while (1)
//	{
//		x = rand() % row;
//    //��һ������ģ����һ����������ķ�Χһ����0 ������һ����-1������
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
////������������
////���Ӯ: '*'
////����Ӯ��'#'
////ƽ�֣�'Q'
////��������: 'C'
//
// �ж��Ƿ�Ӯ
//char IsWin(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//
//	//������
//	for (i = 0; i < row; i++)
//	{
//		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
//		{
//			return board[i][1];
//		}
//	}
//
//	//������
//	for (i = 0; i < col; i++)
//	{
//		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] !=' ')
//		{
//			return board[1][i];
//		}
//	}
//
//	//�����Խ���
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
//	//�ж�ƽ�֣��ж���������û�У�
//
//	if (IsFull(board, ROW, COL) == 1)
//	{
//		return 'Q';
//	}
//
//	return 'C';
//}













//ɨ��
//#include <stdio.h>
//#include "add.h"
//#include <stdlib.h>
//#include <time.h>
//
////��ʼ��
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
////��ӡ����
//void DisplayBoard(char board[ROWS][COLS], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//
//	//��ӡ�к�
//	//printf("  ");   ��������û�е�һ���Ǹ�0
//
//	for (i = 0; i <= col; i++)
//	{
//		printf("%d ", i);
//	}
//	printf("\n");
//
//	for (i = 1; i <= row; i++)
//	{
//		//��ӡ�к�
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
////������
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
////ɨ��
//
////����x,y������Χ�м�����
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
//	//ֱ����EASY_COUNT�ᱨ����������һ������
//
//	while (win<=row*col-ret)
//	{
//		printf("����������:>\n");
//
//		scanf("%d", &x);
//		scanf("%d", &y);
//
//		//����Ϸ�
//		if ((x >= 1 && x <= row) && (y >= 1 && y <= col))
//		{
//			//1.����
//			if (mine[x][y] == '1')
//			{
//				printf("�㱻ը����\n");	
//				DisplayBoard(show, ROW, COL);
//				break;
//			} //2.������
//			else if (mine[x][y] == '0')
//			{
//				//����x,y������Χ�м�����
//				int count = get_mine_count(mine, x, y);
//				show[x][y] = count + '0';
//				DisplayBoard(show, ROW, COL);
//				win++;
//			}
//		}
//		else
//		{
//			printf("����Ƿ�,����������\n");
//		}
//			
//
//		if (win == row*col-ret)
//		{
//			printf("��ϲ�㣬��Ӯ��������\n\n��ϲ�㣬��Ӯ��������\n\n��ϲ�㣬��Ӯ��������\n\n");
//			DisplayBoard(mine, row, col);
//			break;
//		}
//		//ÿ����һ���ף���win++
//		//��show���̸����� ��ȥ EASY_COUNT ��������� ���� win,��Ӯ��
//	}
//
//}








//ͨѶ¼(��̬���ļ���)


//Contact ͨѶ¼ʵ��
//1.test.c ����
//2.contact.c ʵ�ֺ����Ĺ���
//3.contact.h ��������



//ʵ�ֹ��ܣ�
//1.���1000�����ѵ���Ϣ
//���֣��绰���Ա�סַ������

//2.���Ӻ�����Ϣ
//3.ɾ��ָ�����ֵĺ�����Ϣ
//4.���Һ�����Ϣ
//5.�޸ĺ�����Ϣ
//6.��ӡ������Ϣ
//7.����


//#include "add.h"
//#include <string.h>
//#include <errno.h>
//
////����ʵ����.c����ʵ��
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
//	//���ļ����Ѿ���ŵ�ͨѶ¼�е���Ϣ���ص�ͨѶ¼��
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
//	//��ȡ�ļ����ŵ�ͨѶ¼��
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
//	//����
//	if (ps->capacity == ps->size)
//	{
//		struct PeoInfo* ptr = realloc(ps->data, (ps->capacity + 2) * sizeof(struct PeoInfo));
//		if (ptr != NULL)
//		{
//			ps->data = ptr;
//			ps->capacity += 2;
//			printf("���ݳɹ�\n");
//		}
//		else
//		{
//			printf("����ʧ��\n");
//		}
//	}
//}
//
//void AddContact(struct Contact* ps)
//{
//	//��⵱ǰͨѶ¼������
//	//1.������ˣ������ӿռ�
//	//2.���������ɶ�²���
//	CheckCapacity(ps);
//
//	//��������
//	printf("����������:>");
//	scanf("%s", ps->data[ps->size].name);
//	printf("����������:>");
//	scanf("%d", &(ps->data[ps->size].age));
//	printf("�������Ա�:>");
//	scanf("%s", ps->data[ps->size].sex);
//	printf("������绰:>");
//	scanf("%s", ps->data[ps->size].tele);
//	printf("�������ַ:>");
//	scanf("%s", ps->data[ps->size].addr);
//
//	ps->size++;
//	printf("��ӳɹ�\n\n\n");
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
//		printf("ͨѶ¼Ϊ��\n\n");
//	}
//	else
//	{
//		int i = 0;
//		//��ӡ����
//		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
//		//��ӡ����
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
//	printf("������Ҫɾ���˵�����:>\n");
//	scanf("%s", name);
//
//	//1.����Ҫɾ��������ʲôλ��
//	int pos = 0;
//	pos = FindByName(ps, name);
//	//�ҵ��˷�����������Ԫ�ص��±�
//	//û�ҵ�����-1
//
//	//ɾ��
//	if (pos == -1)
//	{
//		printf("Ҫɾ�����˲���\n");
//	}
//	else
//	{
//		//ɾ������
//		int j = 0;
//
//		for (j = pos; j < ps->size - 1; j++)
//		{
//			ps->data[j] = ps->data[j + 1];
//		}
//		ps->size--;
//		printf("ɾ���ɹ�\n");
//	}
//}
//
//
//
//void SearchContact(const struct Contact* ps)
//{
//	char name[MAX_NAME];
//
//	printf("��������Ҫ���ҵ�����:>\n");
//	scanf("%s", name);
//
//	int pos = FindByName(ps, name);
//
//	if (pos == -1)
//	{
//		printf("Ҫ���ҵ��˲�����\n");
//	}
//	else
//	{
//		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
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
//	printf("������Ҫ�޸��˵�����\n");
//	scanf("%s", &name);
//
//	int pos = FindByName(ps, name);
//
//	if (pos == -1)
//	{
//		printf("�Ҳ�������ϵ��\n");
//	}
//	else
//	{
//		printf("������Ҫ�޸ĵ�����:>");
//		scanf("%s", ps->data[pos].name);
//
//		printf("������Ҫ�޸ĵ�����:>");
//		scanf("%d", &(ps->data[pos].age));
//
//		printf("������Ҫ�޸ĵ��Ա�:>");
//		scanf("%s", ps->data[pos].sex);
//
//		printf("������Ҫ�޸ĵĵ绰����:>");
//		scanf("%s", ps->data[pos].tele);
//
//		printf("������Ҫ�޸ĵĵ�ַ:>");
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




