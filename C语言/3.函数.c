#define _CRT_SECURE_NO_WARNINGS 1



//����
//�ڼ�����У�������һ�����ͳ����е�ĳ���ִ��룬��һ�����߶���������
//���������ĳ���ض����񣬶���������������룬�߱���ԵĶ�����

//һ���������������з���ֵ���ṩ�Թ��̵ķ�װ��ϸ�ڵ�����
//��Щ����ͨ��������Ϊ�����

//���õĺ�����ͷ�ļ���
//io����		<stdio.h>
//�ַ�����������	<string.h>
//�ڴ��������   memset
//ʱ��/���ں���	<time.h>
//��ѧ����		<math.h>



//�ӷ�����

//#include <stdio.h>
//
//int ADD(x, y)
//{
//	int z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	int sum = ADD(a, b);
//              //a, b��������������Ϊ�������
//
//	printf("%d\n", sum);
//
//	return 0;
//
//}




//������a���ݷŵ�����b   1.

//#include <stdio.h>
//
//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//
//	int b[5] = { 4,5,6,7,8 };
//
//	int i = 0;
//
//	int sz = sizeof(a) / sizeof(a[0]);
//
//	for (i = 0; i < sz; i++) {
//		b[i] = a[i];
//	}
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", b[i]);
//	}
//
//	return 0;
//}




//��Ŀ��������a���ݿ���������b  2.

//#include <stdio.h>
//
//int main()
//{
//	char arr1[] = "bit";
//	char arr2[10] = "#######";
//  //���Դ��ַ���ַ�����Ŀ�ĵ��ַ����ͻ����
//
//	strcpy(arr2, arr1);
//	//strcpy�������ǰ�һ���ַ����������ַ���
//	//char*strcpy(char * destination(Ŀ�ĵ�ַ),const char * source(Դͷ));
//	//���strcpy����ַ��������\0Ҳ������ȥ��F10���Ӵ��ڿ��Կ���
//	
//	printf("%s\n", arr2);
//  //Ϊʲô����ӡbit######����Ϊ��ӡ��ʱ��\0��ֹͣ��ӡ��
//  //�����õ��ַ����ĵط���\0�����ַ����Ľ�����־
//
//	return 0;
//}




//memset : �����ڴ�
//Ҫ����ͷ�ļ���:<memory.h> or <string.h>

//menset(void*ptr , int value , size_num);
//ptr:ָ��ָ����Ǹ�Ҫ�����ڴ��
//value:Ҫ���õ��Ǹ�ֵ
//num:Ҫ�����õ��ַ��ĸ���


//#include <stdio.h>
//#include <memory.h>
//
//int main()
//{
//	char arr[] = "love you";
//	memset(arr, 'x', 4);
//  //���Ҫ���õ�ֵ���ַ�����Ŀ�ĵص�ַ�ַ����ͻ����
//
//	printf("%s\n", arr);
//
//	return 0;
//}





//�Զ��庯�������
//ret_type fun_name(part1, *);
//{
//	statement;
//}
//
//ret_type:��������
//fun_name:������
//part1:��������
//statement:�����
//����������Ǻ����壺�������Ǻ�����ʵ��







//��Ŀ��дһ���������ҳ����������Ľϴ�ֵ

//#include <stdio.h>
//
//int get_max(x, y)
//{
//
//	return x > y ? x : y;
//
//	//if (x > y)
//	//	return x;
//
//	//if (y > x)
//	//	return y;
//}
//
//int main()
//{
//	int a = 20;
//	int b = 30;
//
//	int max = get_max(a, b);
//
//	printf("�ϴ�ֵ��%d\n\n", max);
//
//	int max1 = get_max(999, 123);
//	//���ú���Ҳ����ֱ�ӱȽ�
//
//	printf("�ϴ�ֵ��%d\n", max1);
//	
//
//	return 0;
//}





//��Ŀ��дһ��������������������

//#include <stdio.h>

//// ����������ܽ���������������Ϊʵ��ת���βΣ�x��y�������±����ˣ��൱����a��b����ʱ����
//// �������βκ�ʵ�ηֱ�ռ�ò�ͬ���ڴ�飬���βε��޸��ǲ���ı�ʵ�ε�
////void swap1(x, y)
////{
////	int tmp = 0;
////	tmp = x;
////	x = y;
////	y = tmp;
////}
//
//void swap2(int* x,int* y)  //��ʽ�������βΣ�
//{
//	int tmp = 0;
//	tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//
//int get_max(x, y)
//{
//	if (x > y)
//		return x;
//	
//	if (y > x)
//		return y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 12;
//	int c = 15;
//	int max = 0;
//
//	//������ʹ�þ��Ǻ����ĵ���
//	//�����ĵ����� ��ֵ���� �� ��ַ����
//	swap1(a, b);
//	//��ֵ���ã��������βκ�ʵ�ηֱ�ռ�ò�ͬ���ڴ�飬���βε��޸��ǲ���ı�ʵ�ε�
//
//	swap2(&a, &b);
//	//��ַ���ã���ַ�����ǰѺ����ⲿ�����������ڴ��ַ���ݸ�����������һ�ֵ��ú����ķ�ʽ
//  //���ִ��η�ʽ�����ú����ͺ�����ߵı�����������������ϵ��Ҳ���Ǻ����ڲ�����ֱ�Ӳ���
//
//	printf("a=%d b=%d\n\n", a, b);
//  //swap(a,b);  //ʵ�� ʵ�ο��Դ�����
//  //swap2(&a, &b); //ʵ�� ʵ�ο��Դ���ַ
//  //swap(300,100); ʵ�ο��Դ�����
//  //swap(300+1,100); ʵ�ο��Դ����ʽ
//    max = get_max(a,get_max(b,c)); //ʵ�ο��Դ�����
//
//	printf("a=%d\n\n", max);
//	printf("max=%d\n",get_max(a,get_max(b,c))); //�⺯��Ҳ���Ե����Զ��庯��
//
//	return 0;
//
//}

//ʵ�ʲ���(ʵ��)����ʵ���������Ĳ�������ʵ�Ρ�ʵ�ο���˵�����������������ʽ�������ȡ�
//����ʵ���Ǻ������͵������ڽ��к�������ʱ�����Ƕ�������ȷ����ֵ���Ա����Щֵ�����β�

//��ʽ�������βΣ�����ʽ������ָ�������������еı�������Ϊ��ʽ����ֻ���ں��������õĹ����в�ʵ�����������ڴ浥Ԫ��
//���Խ�����ʽ��������ʽ�����������������֮����Զ������ˡ������ʽ����ֻ�ں�������Ч

//�β���ʵ�ε�һ����ʱ�������������ʱ����Բ�����ôɵ��ȫ������ȥ����Ϊ���һ��������һ���Ԫ��
//�൱�ڰѴ洢�ռ�����һ��������Ϊ�˱���ռ��˷ѣ�ֻ�Ǵ���ȥ������Ԫ�صĵ�һ����ַ






//��Ŀ��дһ�������ж�һ�����ǲ�������

//#include <stdio.h>
//
//int is_prime(int n)
//{
//	int i = 0;
//
//	for (i = 2; i < n; i++)
//	{
//		if (n % i == 0)
//		{
//			return 0;
//		}
//		else if (i == (n - 1))
//			return 1;
//	}
//
//}
//
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//
//	if (is_prime(i) == 1)
//	{
//		printf("�����������\n");
//	}
//	else
//		printf("�������������\n");
//
//	return 0;
//}






//��Ŀ��дһ����ӡ100-200֮��������ĺ���

//#include <stdio.h>
//#include <math.h>
//
//int is_prime(int n)
//{
//	int j = 0;
//
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//		{
//			return 0;
//			//Ϊʲô����ֻ��дreturn 0,����дbreak,��Ϊbreak����forѭ���󣬾�return 1��;
//			//breakֻ����forѭ��
//			//return��ֱ����������
//		}
//	}
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//		{
//			printf("%d\n", i);
//			count++;
//		}
//	}
//
//	printf("�ܹ�%d������\n", count);
//
//	return 0;
//}





//��Ŀ��дһ�������ж�һ���ǲ�������

//#include <stdio.h>
//
//int year(int a)
//{
//	if ((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//		
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//
//	if (year(a) == 1)
//	{
//		printf("����������\n");
//	}
//	else if (year(a) == 0)
//	{
//		printf("���겻������\n");
//	}
//
//	return 0;
//}





//��Ŀ:дһ�����������1000-2000��֮�������

//#include <stdio.h>
//
//int year(int x)
//{
//	if ((x % 4 == 0 && x % 100 != 0) || (x % 400 == 0))
//	{
//		return 1;
//	}
//	else
//		return 0;
//}
//
//int main()
//{
//	int i = 0;
//
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (year(i) == 1)
//		{
//			printf("%d\t", i);
//		}
//	}
//
//}





//��Ŀ��дһ��������ʵ��һ��������������Ķ��ֲ���

//#include <stdio.h>
////					��Ȼ���������ǵ�ַ����int arr[]����ָ�����
//int binary_search(int arr[], int k, int sz)
//{
////int sz = sizeof(arr) / sizeof(arr[0]);
////ָ�������32λϵͳ��4���ֽڣ���64λϵͳ����8���ֽڣ�sz=8/4=2
// 
//	int left = 0;
//	int right = sz - 1;
//	
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
//
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	int k = 7;
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	int ret = binary_search(arr, k, sz);
//	//�����ڴ��ε�ʱ�����ֻ�Ǵ���ȥ�����һ��Ԫ�صĵ�ַ
// 
//	if (ret == -1)
//	{
//		printf("�Ҳ���ָ������\n");
//	}
//	else
//		printf("�ҵ���,�±���%d\n", ret);
//
//	return 0;
//}




//��Ŀ��дһ��������ÿ����һ������������ͻ��num��ֵ����1

//#include <stdio.h>
//
////�ò��Ϸ���ֵ��������void
//
//void diaoyong(int* p)
//{
//	(*p)++;
//	//++�����ȼ����*�ߣ����Խ����ò�����*Ҫ�����ţ���Ȼ������p++��*
//}
//
//int main()
//{
//	int num = 1;
//
//	diaoyong(&num);
//	printf("num=%d\n", num);
//
//	diaoyong(&num);
//	printf("num=%d\n", num);
//
//	diaoyong(&num);
//	printf("num=%d\n", num);
//
//	diaoyong(&num);
//	printf("num=%d\n", num);
//
//	return 0;
//
//}








//������Ƕ�׵��ú���ʽ����

//�����ͺ���֮������л�����ϵ�


//������Ƕ�׵���

//#include <stdio.h>
//
//void new_line()
//{
//	printf("���ͻƹ�\n");
//}
//
//void three_line()
//{
//	int i = 0;
//
//	for (i = 0; i < 3; i++)
//	{
//		new_line();
//	}
//}
//int main()
//{
//	three_line();
//
//	return 0;
//}




//������ʽ����

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	// 1.
//	int len = 0;
//
//	len = strlen("abc");
//
//	printf("%d\n", len);
//
//	// 2.
//	printf("%d\n", strlen("abc"));
//
//	return 0;
//}


//printf��ʽ����

//#include <stdio.h>
//
//int main()
//{
//	printf("%d", printf("%d\n", printf("%d\n", 43)));
//	//ÿһ��printf�������صĶ��Ǵ�ӡ���ַ��ĸ���
// 
//  printf("%d\n",printf("%d\n",printf("%d\n",4567)));
//  //ת���ַ�'\n'Ҳ��һλ��
//
//	return 0;
//}








//�����������붨��

//����������
		//1.���߱�������һ��������ʲô��������ʲô������������ʲô���������ǲ��Ǵ��ڣ��޹ؽ�Ҫ
		//2.����������һ������ں�����ʹ��֮ǰ��Ҫ������������ʹ��
		//3.����������һ��Ҫ����ͷ�ļ���
//�����Ķ��壺
		//  �����Ķ�����ָ�����ľ���ʵ�֣����������Ĺ���ʵ��



//�ڹ����У������Ķ����������Դ�ļ�һ�㲻��ͬһ��Դ�ļ���

//#include <stdio.h>
//
////����������
//int sum(int x, int y);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = add(a, b);
//
//	printf("sum=%d\n", sum);
//
//	return 0;
//}
//
////�����Ķ���
//int add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//
//	return z;
//}



//���������
//��������������.h�ļ��У������Ķ������.c�ļ���
//�⺯��ͷ�ļ���<.h>  ,  �Լ�д�ĺ�����ͷ�ļ���".h"

//#include <stdio.h>
//#include "add.h"
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//		
//	sum = add(a, b);
//
//	printf("sum=%d\n", sum);
//
//	return 0;
//}






//���ֲ��Һ���(����ģʽ)

//#include <stdio.h>
//#include "add.h"
//
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	int k = 7;
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	int ret = binary_search(arr, k, sz);
//
//	if (ret == -1)
//	{
//		printf("����ҵ���������");
//	}
//	else
//		printf("�ҵ���,�±���%d\n", ret);
//
//	return 0;
//	
//}




//������Ϸ����(����ģʽ)
// 
//#include <stdio.h>
//#include "add.h"
//#include <time.h>
//#include <stdlib.h>
//
//int main()
//{
//	int input = 0;
//	
//	srand((unsigned int)time(NULL));  //time��������������ָ��
//
//	do {
//		menu();
//
//		scanf("%d", &input);
//
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	}while (input);
//
//	return 0;
//}





//#ifndef __ADD_H__
// �������δ����
//#define __ADD_H__
// �ǾͶ���һ������
//#endif
//����

//��������Ѿ����壬�ǾͲ��ٶ��壬Ϊ�˷�ֹ�ظ�����


//#include <stdio.h>
//#include "add.h"
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = ADD(a, b);
//
//	printf("%d\n", sum);
//
//	return 0;
//}







//�ݹ�

// ʲô�ǵݹ飺
// �����������ı�̼��ɳ�Ϊ�ݹ�(recursion).�ݹ���Ϊһ���㷨�ڳ�����������й㷺Ӧ�á�
// һ�����̻������䶨���˵������ֱ�ӻ��ӵ��������һ�ַ�������ͨ����һ�����͸��ӵ�����
// ���ת��Ϊһ����ԭ�������ƵĹ�ģ��С����������⣬�ݹ����ֻ��Ҫ�����ĳ���Ϳ��������������������Ҫ�Ķ���ظ�����
// �������˳���Ĵ��������ݹ����Ҫ˼����ʽ���ڣ��Ѵ��»�С

//һ���������Ե��ñ�ĺ�����һ�����������Լ����ǵݹ�

//�ݹ鳣���Ĵ���:Stack overflow  ջ���

//#include <stdio.h>
//
//int main()
//{
//	printf("hehe\n");
//
//	main();
//
//}




//�ݹ�ʵ�� ��������޷������ͱ���  eg:����1234 ���1 2 3 4

//#include <stdio.h>
//
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//
//	scanf("%d", &num);
//
//	print(num);
//
//	return 0;
//}

//�ݹ��������Ҫ����
//1.���������������������������������ʱ�򣬵ݹ�㲻�ټ���
//2.ÿ�εݹ����֮��Խ��Խ�ӽ������������




//��Ŀ:��д��������������ʱ���������ַ�������
//��ʱ������һ��ֻ�ڵ����ڼ���Ч���Ҿ��г��Եı���

//strlen��ʵ��ԭ��(�Ҳµ�)


//��������������ʱ���������

//#include <stdio.h>
//#include <string.h>
//
//int my_strlen(char* str)
//{
//	int count = 0;
//
//	while (*str != '\0')
//	{
//		count++;
//		str++; //���鿪�ٵ��������Ŀռ䣬str��ŵ�һ���ַ��ĵ�ַ��str++���ǵ�ַ������������ǵڶ����ַ��ĵ�ַ
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "bite";
//
//	int len = my_strlen(&arr);  //arr�����飬���鴫�Σ�����ȥ�Ĳ����������飬������Ԫ�صĵ�ַ
//
//	printf("%d\n", len);
//
//	return 0;
//}




//�����ǲ���������ʱ���������
//#include <stdio.h>
//#include <string.h>
//
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//		//Ϊʲô����*str+1����str+1����Ϊ*str����b����str��str�ĵ�ַ
//		//Ϊʲôstr��str�ĵ�ַ����Ϊmain�������������ľ�������ĵ�ַ
//	}
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[] = "bite";
//
//	int len = my_strlen(&arr);  //arr�����飬���鴫�Σ�����ȥ�Ĳ����������飬����Ԫ�صĵ�ַ
//
//	printf("%d\n", len);
//
//	return 0;
//}






//�ݹ�ʵ�ֽ׳�

//#include <stdio.h>
//
//int fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * fac(n - 1);
//	  //��n=1��ʱ��return��1������fac(n-1)�Ľ�� 
//}
////5 *
////4 *
////3 *
////2 *
////1 *
//int main()
//{
//	int n = 0;
//	int ret = 0;
//
//	scanf("%d", &n);
//
//	ret = fac(n);
//
//	printf("%d\n", ret);
//
//}




//��Ŀ�������n��쳲�������
//�õݹ��ѭ�������Խ��������ѭ�����ʺ��������

//1.ѭ���ⷨ

//#include <stdio.h>
//
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;//Ϊʲôc��1����Ϊ���n=1���Ͳ������ѭ�����ͻ᷵��c��c��0�Ļ��ʹ���
//
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//
//		n--;
//	}
//	
//	return c;
//
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	int ret = fib(n);
//
//	printf("ret=%d\n", ret);
//
//	return 0;
//}




//2.�ݹ�ⷨ

//#include <stdio.h>
//
//int fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return fib(n - 1) + fib(n - 2);
//
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	int ret = fib(n);
//
//	printf("ret=%d\n", ret);
//
//	return 0;
//}


//д������ѭ��������ǵݹ������У��ݹ�Ч�ʸߴ���򵥣����ǻ�ջ���

//#include <stdio.h>
//
//void test(int n)
//{
//	if (n < 10000)
//		test(n + 1);
//}
//
//int main()
//{
//	test(1);
//	return 0;
//}

//������˵�ݹ�����������Ҫ�����Ͳ���ջ����ˣ��������ϴ���








