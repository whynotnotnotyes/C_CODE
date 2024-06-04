#define _CRT_SECURE_NO_WARNINGS 1



//函数
//在计算机中，函数是一个大型程序中的某部分代码，有一个或者多个语句块组成
//它负责完成某项特定任务，而且相较于其他代码，具备相对的独立性

//一般会有输入参数并有返回值，提供对过程的封装和细节的隐藏
//这些代码通常被集成为软件库

//常用的函数的头文件：
//io函数		<stdio.h>
//字符串操作函数	<string.h>
//内存操作函数   memset
//时间/日期函数	<time.h>
//数学函数		<math.h>



//加法函数

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
//              //a, b这两个参数被称为输入参数
//
//	printf("%d\n", sum);
//
//	return 0;
//
//}




//把数组a内容放到数组b   1.

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




//题目：把数组a内容拷贝到数组b  2.

//#include <stdio.h>
//
//int main()
//{
//	char arr1[] = "bit";
//	char arr2[10] = "#######";
//  //如果源地址的字符多于目的地字符，就会溢出
//
//	strcpy(arr2, arr1);
//	//strcpy：作用是把一个字符串拷贝到字符串
//	//char*strcpy(char * destination(目的地址),const char * source(源头));
//	//这个strcpy会把字符串里面的\0也拷贝进去，F10监视窗口可以看见
//	
//	printf("%s\n", arr2);
//  //为什么不打印bit######？因为打印的时候到\0就停止打印了
//  //但凡用到字符串的地方，\0都是字符串的结束标志
//
//	return 0;
//}




//memset : 设置内存
//要引的头文件是:<memory.h> or <string.h>

//menset(void*ptr , int value , size_num);
//ptr:指针指向的那个要填充的内存块
//value:要设置的那个值
//num:要被设置的字符的个数


//#include <stdio.h>
//#include <memory.h>
//
//int main()
//{
//	char arr[] = "love you";
//	memset(arr, 'x', 4);
//  //如果要设置的值的字符多于目的地地址字符，就会溢出
//
//	printf("%s\n", arr);
//
//	return 0;
//}





//自定义函数的组成
//ret_type fun_name(part1, *);
//{
//	statement;
//}
//
//ret_type:函数类型
//fun_name:函数名
//part1:函数参数
//statement:语句项
//大括号里的是函数体：交代的是函数的实现







//题目：写一个函数，找出两个整数的较大值

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
//	printf("较大值是%d\n\n", max);
//
//	int max1 = get_max(999, 123);
//	//调用函数也可以直接比较
//
//	printf("较大值是%d\n", max1);
//	
//
//	return 0;
//}





//题目：写一个函数，交换两个变量

//#include <stdio.h>

//// 这个函数不能交换两个变量，因为实参转给形参，x和y是两个新变量了，相当于是a和b的临时拷贝
//// 函数的形参和实参分别占用不同的内存块，对形参的修改是不会改变实参的
////void swap1(x, y)
////{
////	int tmp = 0;
////	tmp = x;
////	x = y;
////	y = tmp;
////}
//
//void swap2(int* x,int* y)  //形式参数（形参）
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
//	//函数的使用就是函数的调用
//	//函数的调用有 传值调用 和 传址调用
//	swap1(a, b);
//	//传值调用：函数的形参和实参分别占用不同的内存块，对形参的修改是不会改变实参的
//
//	swap2(&a, &b);
//	//传址调用：传址调用是把函数外部创建变量的内存地址传递给函数参数的一种调用函数的方式
//  //这种传参方式可以让函数和函数外边的变量建立起真正的联系，也就是函数内部可以直接操作
//
//	printf("a=%d b=%d\n\n", a, b);
//  //swap(a,b);  //实参 实参可以传变量
//  //swap2(&a, &b); //实参 实参可以传地址
//  //swap(300,100); 实参可以传常量
//  //swap(300+1,100); 实参可以传表达式
//    max = get_max(a,get_max(b,c)); //实参可以传函数
//
//	printf("a=%d\n\n", max);
//	printf("max=%d\n",get_max(a,get_max(b,c))); //库函数也可以调用自定义函数
//
//	return 0;
//
//}

//实际参数(实参)：真实传给函数的参数，叫实参。实参可以说：常量，变量，表达式，函数等。
//无论实参是何种类型的量，在进行函数调用时，它们都必须有确定的值，以便把这些值传给形参

//形式参数（形参）：形式参数是指函数名后括号中的变量，因为形式参数只有在函数被调用的过程中才实例化（分配内存单元）
//所以叫做形式参数。形式参数当函数调用完成之后就自动销毁了。因此形式参数只在函数中有效

//形参是实参的一份临时拷贝，传数组的时候电脑不会这么傻把全部传过去，因为如果一个数组有一万个元素
//相当于把存储空间涨了一倍，所以为了避免空间浪费，只是传过去数组首元素的第一个地址






//题目：写一个函数判断一个数是不是素数

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
//		printf("这个数是素数\n");
//	}
//	else
//		printf("这个数不是素数\n");
//
//	return 0;
//}






//题目：写一个打印100-200之间的素数的函数

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
//			//为什么这里只能写return 0,不能写break,因为break跳出for循环后，就return 1了;
//			//break只跳出for循环
//			//return会直接跳出函数
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
//	printf("总共%d个素数\n", count);
//
//	return 0;
//}





//题目：写一个函数判断一年是不是闰年

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
//		printf("这年是闰年\n");
//	}
//	else if (year(a) == 0)
//	{
//		printf("这年不是闰年\n");
//	}
//
//	return 0;
//}





//题目:写一个函数，输出1000-2000年之间的闰年

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





//题目：写一个函数，实现一个整形有序数组的二分查找

//#include <stdio.h>
////					既然传过来的是地址，那int arr[]就是指针变量
//int binary_search(int arr[], int k, int sz)
//{
////int sz = sizeof(arr) / sizeof(arr[0]);
////指针变量在32位系统是4个字节，在64位系统上是8个字节，sz=8/4=2
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
//	//数组在传参的时候仅仅只是传过去数组第一个元素的地址
// 
//	if (ret == -1)
//	{
//		printf("找不到指定数字\n");
//	}
//	else
//		printf("找到了,下标是%d\n", ret);
//
//	return 0;
//}




//题目：写一个函数，每调用一次这个函数，就会把num的值增加1

//#include <stdio.h>
//
////用不上返回值，所以用void
//
//void diaoyong(int* p)
//{
//	(*p)++;
//	//++的优先级别比*高，所以解引用操作符*要加括号，不然就是先p++再*
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








//函数的嵌套调用和链式访问

//函数和函数之间可以有机的组合的


//函数的嵌套调用

//#include <stdio.h>
//
//void new_line()
//{
//	printf("加油黄冠\n");
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




//函数链式访问

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


//printf链式访问

//#include <stdio.h>
//
//int main()
//{
//	printf("%d", printf("%d\n", printf("%d\n", 43)));
//	//每一个printf函数返回的都是打印的字符的个数
// 
//  printf("%d\n",printf("%d\n",printf("%d\n",4567)));
//  //转义字符'\n'也是一位数
//
//	return 0;
//}








//函数的声明与定义

//函数声明：
		//1.告诉编译器有一个函数叫什么，参数是什么，返回类型是什么。但具体是不是存在，无关紧要
		//2.函数的声明一般出现在函数的使用之前。要满足先声明后使用
		//3.函数的声明一般要放在头文件中
//函数的定义：
		//  函数的定义是指函数的具体实现，交待函数的功能实现



//在工作中，函数的定义和声明和源文件一般不在同一个源文件中

//#include <stdio.h>
//
////函数的声明
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
////函数的定义
//int add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//
//	return z;
//}



//工作情况：
//函数的声明放在.h文件中，函数的定义放在.c文件中
//库函数头文件用<.h>  ,  自己写的函数的头文件用".h"

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






//二分查找函数(工作模式)

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
//		printf("你查找的数不存在");
//	}
//	else
//		printf("找到了,下标是%d\n", ret);
//
//	return 0;
//	
//}




//猜数游戏函数(工作模式)
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
//	srand((unsigned int)time(NULL));  //time函数，参数给空指针
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
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	}while (input);
//
//	return 0;
//}





//#ifndef __ADD_H__
// 如果函数未定义
//#define __ADD_H__
// 那就定义一个函数
//#endif
//结束

//如果函数已经定义，那就不再定义，为了防止重复定义


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







//递归

// 什么是递归：
// 程序调用自身的编程技巧称为递归(recursion).递归做为一种算法在程序设计语言中广泛应用。
// 一个过程或函数在其定义或说明中有直接或间接调用自身的一种方法，它通常把一个大型复杂的问题
// 层层转化为一个与原问题相似的规模较小的问题来求解，递归策略只需要少量的程序就可以描述出解题过程所需要的多次重复计算
// 大大减少了程序的代码量，递归的主要思考方式在于：把大事化小

//一个函数可以调用别的函数，一个函数调用自己就是递归

//递归常见的错误:Stack overflow  栈溢出

//#include <stdio.h>
//
//int main()
//{
//	printf("hehe\n");
//
//	main();
//
//}




//递归实现 正序输出无符号整型变量  eg:输入1234 输出1 2 3 4

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

//递归的两个必要条件
//1.存在限制条件，当满足这个限制条件的时候，递归便不再继续
//2.每次递归调用之后越来越接近这个限制条件




//题目:编写函数不允许创建临时变量，求字符串长度
//临时变量是一种只在调用期间有效，且具有常性的变量

//strlen的实现原理(我猜的)


//以下是允许创建临时变量的情况

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
//		str++; //数组开辟的是连续的空间，str存放第一个字符的地址，str++就是地址向后延续，就是第二个字符的地址
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "bite";
//
//	int len = my_strlen(&arr);  //arr是数组，数组传参，传过去的不是整个数组，而是首元素的地址
//
//	printf("%d\n", len);
//
//	return 0;
//}




//以下是不允许创建临时变量的情况
//#include <stdio.h>
//#include <string.h>
//
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//		//为什么不是*str+1而是str+1，因为*str就是b，而str是str的地址
//		//为什么str是str的地址，因为main主函数传上来的就是数组的地址
//	}
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[] = "bite";
//
//	int len = my_strlen(&arr);  //arr是数组，数组传参，传过去的不是整个数组，是首元素的地址
//
//	printf("%d\n", len);
//
//	return 0;
//}






//递归实现阶乘

//#include <stdio.h>
//
//int fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * fac(n - 1);
//	  //当n=1的时候，return的1是整个fac(n-1)的结果 
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




//题目：求出第n个斐波那契数
//用递归和循环都可以解决，但是循环更适合这个代码

//1.循环解法

//#include <stdio.h>
//
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;//为什么c是1，因为如果n=1，就不会进入循环，就会返回c，c是0的话就错了
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




//2.递归解法

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


//写代码用循环解决还是递归解决都行，递归效率高代码简单，但是会栈溢出

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

//并不是说递归满足两个必要条件就不会栈溢出了，比如以上代码








