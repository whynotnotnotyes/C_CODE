//#define _CRT_SECURE_NO_WARNINGS 1
//��仰���Բ��ӣ���Ϊ.h�ļ�����Բ���scanf��printf



//int add(int a, int b);



//int binary_search(int arr[], int k, int sz);
//�βκ�ʵ��һ����û������ģ���Ϊ�βκ�ʵ���໥����



//void menu();
//void game();



//#ifndef __ADD_H__
//�������δ����
//#define __ADD_H__
//�ǾͶ���һ������

//int add(int x, int y);

//#endif
//����

//��������Ѷ��壬�ǾͲ��ٶ��壬Ϊ�˷�ֹ�������ظ�����







//������   6794��
//#define ROW 3     //�궨����治�üӷֺ� ;
//#define COL 3
//
////����
////                       ��ά�����[][]����Ҫ���β�
//void InitBoard(char board[ROW][COL], int row, int col);
//
//void DisplayBoard(char board[ROW][COL], int row, int col);
//
//void PlayerMove(char board[ROW][COL], int row, int col);
//
//void ComputerMove(char board[ROW][COL], int row, int col);
//
//char IsWin(char board[ROW][COL], int row, int col);










//ɨ��

//#define ROW 9
//#define COL 9
//
//#define ROWS ROW+2	//���ﲻ�ü� = ��
//#define COLS COL+2
//
//#define EASY_COUNT 10;
//
////����
//
//void InitBoard(char board[ROWS][COLS], int rows, int cols,char set);
//
//void DisplayBoard(char board[ROWS][COLS], int row, int col);
////                          ����������mine������ROWS��COLS,����ֻ��дboard[ROWS][COLS]
//
//void SetMine(char board[ROWS][COLS], int row, int col);
//
//void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);









//ͨѶ¼

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
////����ṹ����ȫ�ֱ�����ȫ�ֱ�����������������������
////����Ҫ������ṹ�壬Ҫ�����ͷ�ļ�
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
////ͨѶ¼����
//struct Contact
//{
//	struct PeoInfo data[MAX]; //���һ����Ϣ
//	int size; //��¼��ǰ�Ѿ��е�Ԫ�ظ���
//};
//
//
////����������.h�ļ���
////��ʼ��ͨѶ¼�ĺ���
//void InitContact(struct Contact* ps);
//
////����һ����Ϣ��ͨѶ¼
//void AddContact(struct Contact* ps);
//
////��ӡͨѶ¼�е���Ϣ
//void ShowContact(const struct Contact* ps);
//
////ɾ��ָ������ϵ��
//void DelContact(struct Const* ps);
//
////������ϵ��
//void SearchContact(const struct Contact* ps);
//
////�޸�ָ����ϵ��
//void ModifyContact(struct Contact* ps);











