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


















