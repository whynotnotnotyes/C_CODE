#define _CRT_SECURE_NO_WARNINGS 1



//初识指针

//在计算机中，指针（pointer）是编程语言中的对象，
//利用地址，它的值直接指向(pointers to)存在电脑存储器中另一一个地方的值。
//由于通过地址能找到所需的变量单元，可以说:地址指向该变量单元。因此，将地址形象化为“指针”。
//意思是通过它能找到以为它为地址的内存单元


//指针是个变量，存放内存单元的地址(编号)
//一个内存单元大小是一个字节

//#include <stdio.h>
//
//int main()
//{
//	int a = 10;  	//在内存中开辟一块空间
//	int* p = &a;	//这里我们对变量a，取出它的地址，可以使用&操作符
//					//将a的地址存放在p变量中，p就是一个指针变量
//	return 0;
//}

//存放在指针中的值都被当成地址处理



//在32位的机器上，地址是32个0或者1组成的二进制序列，那地址就得用4个字节的空间来存储，
//所以一个指针变量的大小应该就是4个字节

//那如果在64位机器上，如果有64根地址线，那一个指针变量大小是8个字节，
//才能存放一个地址

//指针是用来存放地址的，地址是唯一标示一块地址空间的
//指针的大小在32位平台是4个字节，在64位平台上是8个字节





//指针类型
//指针是个变量,既然是个变量,就一定会有类型

//指针类型的两个意义1.
//#include <stdio.h>
//
//int main()
//{
//	int a = 0x11223344;
//  //一个16进制数就是4个bit，两个16进制数等于8bite，也就是一个字节
//	//int* pa = &a;
//	//*pa = 123;
//
//	char* pc = &a;
//	*pc = 0;
//	//当打开调试->窗口->内存的时候,一步一步调试，到*pc = 0的时候，只有第一个字节变成0
//	//如果是*pc是int*指针类型，四个字节都会变成0
//
//	//printf("%p\n", pa);
//	//printf("%p\n", pc);
//
//	return 0;
//}

//总结：指针类型决定了指针进行解引用操作的时候，能够访问空间的大小
//int*p    *p能够访问4个字节
//char*p	 *p能够访问1个字节
//double*p *p能够访问8个字节




//指针类型的两个意义2.
//指针的步长
//指针的加减

//#include <stdio.h>
//
//int main()
//{
//	int a = 0x11223344;
//
//	int* pa = &a;
//
//	printf("%p\n", pa);
//	printf("%p\n\n", pa+1);
//
//	char* pc = &a;
//
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);
//
//	return 0;
//}

//总结：指针的类型决定了指针向前或者向后走一步有多大距离
//int类型+1地址+4
//char类型+1地址+1





//上面的应用
//#include <stdio.h>
//
//int main()
//{
//	int arr[10] = { 0 };
//
//	int i = 0;
//
//	int* pa = &arr;
//	//如果这里改成(char* pa)的话,到最后只会改动10个字节，只会把前10个字节给赋值，
//	//而数组arr有40个字节
//
//	for (i = 0; i < 10; i++)
//	{
//		*(pa+i) = 1;
//	}
//
//	printf("%d\n", arr[9]);
//
//	return 0;
//}

//总结:指针的类型决定了对指针解引用操作时有多大的权限(能操作几个字节)
//比如:char*的指针解引用就只能访问一个字节,而int*的指针的解引用就能访问四个字节




//野指针
//野指针就是指针指向的位置是不可知的(随机的，不正确的，没有明确限制的)


//野指针成因1：指针未初始化
//#include <stdio.h>
//
//int main()
//{
//	int a; //局部变量不初始化，默认是随机值
//	int* p; //局部的指针变量，就被初始化为随机值
//	*p = 20;
//
//	return 0;
//}




//野指针成因2：指针越界访问

//#include <stdio.h>

//int main()
//{
//	int arr[10] = 0;
//
//	int* p = arr;
//
//	int i = 0;
//
//	for (i = 0; i < 12; i++)
//	{
//		p++;
//		//当指针指向的范围超过数组arr的范围时，p就是野指针
//	}
//
//	return 0;
//}



//野指针成因3：指针指向的空间释放

//#include <stdio.h>
//
//int* test()
//{
//	int a = 10;
//	return &a;
//}
//
//int main()
//{
//	int* p = test();
//
//	*p = 20;
//
//	return 0;
//}

//当a局部变量在函数创建，中开辟了一块内存空间时
//出函数后局部变量销毁了，地址还是会传出去，但是成野指针了



//如何规避野指针
//1.指针初始化
//2.小心指针越界
//3.指针指向空间释放及时置NULL(空)
//4.指针使用之前检查有效性





//#include <stdio.h>
//
//int main()
//{
//	int* pa = NULL;
//	//如果不知道给指针赋什么值，就给NULL，变成空指针,空指针不是野指针
//	//NULL-用来初始化指针的，给指针赋值
//}






//#include <stdio.h>
//
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	*p = 20;
//	//改地址里的值只能解引用操作*才能改
//	//p = 20改不了
//	printf("%d\n", *p);
//}






//#include <stdio.h>
//
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//
//	pa = NULL;
//	//指针指向空间释放及时置NULL(空)
//
//	*pa = 35;
//	//置于空指针后不能访问,会报错
//
//	return 0;
//
//}





//#include <stdio.h>
//
//int main()
//{
//	int a = 10;
//
//	int* p = &a;
//
//	//int *p = NULL;
//
//	printf("%p\n", p);
//
//	return 0;
//}
//纯空指针的地址是0000000000000000
//已经存储地址的指针置空之后不是0000000000000000





//指针运算
//指针+-整数
//指针-指针
//指针的关系运算



//指针+-整数

//#include <stdio.h>
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	int i = 0;
//
//	int* p = &arr[9];
//	//具体到数组某一个前面要加&，不然就是数组第一个元素，但是这里又是arr[9]，冲突了
//
//
//	//for (i = 0; i < 5; i++)
//	//{
//	//	printf("%d\t", *p);
//	//	p+=2;//指针加
//	//}
//
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d\n", *p);
//		p -= 2; //指针减
//	}
//
//	return 0;
//}





//#include <stdio.h>
//
//int main()
//{
//	#define N_VALUES 5
//	float values[N_VALUES];
//
//	float* vp;
//
//	for (vp = &values[0]; vp < &values[N_VALUES];)  //指针是可以比较大小的
//	{
//		*vp++;
//		//这里是vp先++，再解引用，++的操作符比*高
//	}
//
//	return 0;
//}




//(自己悟的)
//#include <stdio.h>
//
//int main()
//{
//	int a = 10;
//	int* p = &a;
//
//	printf("p = %p\n", p);
//	printf("p+1 = %p\n\n", p+1);
//
//	printf("*(p + 1) = %p\n", *(p + 1));
//	printf("*(p + 1) = %d\n\n", *(p + 1));
//
//	printf("*p = %p\n", *p);
//	printf("(*p) + 1 = %p\n", (*p) + 1);
//	printf("(*p) + 1 = %d\n", (*p) + 1);
//}






//指针-指针

//#include <stdio.h>
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	printf("%d\n", &arr[9] - &arr[0]);
//	printf("%d\n", &arr[0] - &arr[9]);
//
//	int* pa = arr;
//	int* pb = &arr[3];
//	printf("%d\n", pb - pa);
//
//	return 0;
//}
//指针减去指针得到的是指针与指针之间的差值(大地址-小地址)
//小地址减去大地址的结果的绝对值是指针与指针之间的插值
//当一个指针减去另一个指针，两个指针一定要指向同一块内存空间，比如两个指针相减，需要这两个指针都是同一个数组



//#include <stdio.h>
//
//int main()
//{
//	int arr1[] = {2,3,5,4,8,5,9};
//	int arr2[] = {11,34,9,2,3,4,0};
//	printf("%d\n", &arr1[3] - &arr2[1]);
//
//
//	int a = 10;
//	int b = 20;
//	int* pa = &a;
//	int* pb = &b;
//	printf("%d\n", pa-pb);
//
//	return 0;
//}
//如果两个指针不是指向同一个数组,它们相减就没有意义
//指针的本质还是地址
//指针可以做减法，不适合做加法






//用数组相加减模拟实现strlen的功能

//#include <stdio.h>
//
//int mystrlen(char* arr)
//{
//	char* start = arr;
//	char* end = arr;
//
//	while (*end != '\0')  //这里必须要*end,因为end是地址,*end才是解引用之后的元素
//	{
//		end++;
//	}
//
//	return end - start;
//}
//
//int main()
//{
//	char arr[] = "bit";
//
//	int len = mystrlen(arr);
//
//	printf("%d\n", len);
//
//	return 0;
//}






//指针的关系运算(指针比较大小)

//#include <stdio.h>
//
//int main()
//{
//	#define N_VALUES 5
//
//	float values[N_VALUES];
//	float* vp;
//	
//	//第一种写法
//	for (vp = &values[N_VALUES]; vp > &values[0];)
//	{
//		*--vp = 0;
//	}
//
//
//	//第二种写法
//	//for (vp = &values[N_VALUES]; vp >= &values[0]; vp--)
//	//{
//	//	*vp = 0;
//	//}
//
//	
//}

//第二种写法实际在绝大部分的编译器上是可以顺利完成任务的，然而我们还是应该避免这样写，因为标准并不保证它可行

//标准规定：
//允许指向数组元素的指针与指向数组最后一个元素后面的那个内存位置的指针比较
//但是不允许与指向第一个元素之前的那个内存位置进行比较






//指针和数组


//数组名
//#include <stdio.h>
//
//int main()
//{
//	int arr[10] = { 0 };
//
//	printf("%p\n", arr);
//	printf("%p\n\n", arr+1);
//
//	printf("%p\n", &arr[0]);
//	printf("%p\n\n", &arr[0] + 1);
//
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//
//	//除了sizeof和&arr之外，其余所有数组名都是数组的第一个元素的地址
//	return 0;
//}



//#include <stdio.h>
//
//int main()
//{
//	int arr[10] = { 0 };
//
//	int i = 0;
//
//	int* p = arr;
//
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//		//指针数组初始化
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", arr[i]);
//		printf("%d\n\n", *(p + i));
//	}
//}






//二级指针

//#include <stdio.h>
//
//int main()
//{
//	int a = 10;		//a的类型是int
//
//	int * pa = &a;	//pa的类型是int*
//	//这样写也是可以的,中间空开一格，有一颗*代表pa是指针变量，这个指针变量所指向的类型是int类型
//
//	int* * ppa = &pa;  //这就是二级指针  ppa的类型是int**
//	//ppa是指针变量，ppa所指向的类型是指针变量
//
//	**ppa = 20;
//	printf("%d\n", **ppa);
//	
//	//通过ppa找到a
//
//	return 0;
//}
//一级指针存储的是变量的地址
//二级指针及以上存储的是指针的地址




//指针数组
//数组指针


//指针数组
//指针数组用来存放指针

//#include <stdio.h>
//
//int main()
//{
//	int a = 10, b = 15, c = 20;
//
//	int* arr[3] = { &a,&b,&c };
//
//	int i = 0;
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d\n", *(arr[i]));
//	}
//
//	return 0;
//}





//知识点

//return只能返回一个数

//函数可以嵌套调用，不能嵌套定义

//函数的定义不一定要放在函数的前面，可以后面定义，前面声明

//函数必须保证先声明后使用

//形参是在函数调用的时候才实例化，才开辟内存空间


//题目:
//函数调用exec((v1,v2),(v3,v4),v5,v6)中，实参的个数是多少个？


//(,)里是逗号表达式，逗号表达式的结果是最右边那个表达式的结果
//所以答案是4个


//函数设计应该追求高内聚低耦合(意思是设计的函数要独立一些)

//函数设计使用全局变量不宜过多

//函数设计时函数参数不宜过多

//设计函数时，尽量做到谁申请就由谁释放

//函数的实参可以是：变量，常量，表达式

//main的位置可以任意

//函数中形式参数是在栈中保存的

//在一个函数内复合语句中定义的变量不一定在本函数范围内有效(复合语句指函数中的成对括号构成的代码)
//例子:

//#include <stdio.h>
//
//int main()
//{
//	{
//		int a = 10;
//	}
//	printf("%d\n", a);
//	//会报错，因为变量的作用域被限制在代码块内部了
//}


//题目：
//若定义int a[2][3] = { 1,2,3,4,5,6 };则值为4的数组元素是()？
//A. a[0][0]
//B. a[1][0]
//C. a[1][1]
//d. a[2][2]


//答案是B



//题目:下面sizeof的结果是什么
//#include <stdio.h>
//
//int main()
//{
//	int arr[] = { 1,2,(3,4),5,6 };
//
//	printf("%d\n", sizeof(arr));
//
//	return 0;
//}




//题目：实现一个让数组元素逆置的函数

//#include <stdio.h>
//
//void reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz-1;
//	int tmp = 0;
//
//	while (left <= right)
//	{
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//
//	int i = 0;
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	reverse(arr, sz);
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//
//	return 0;
//}



//题目：将数组A中的内容与数组B中的内容交换(两个数组大小一样)

//#include <stdio.h>
//
//void exchange(int arr1[], int arr2[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	int tmp = 0;
//	int tmp1 = 0;
//
//	while (left <= right)
//	{
//		if (left == right)
//		{
//			tmp = arr1[left];
//			arr1[left] = arr2[left];
//			arr2[left] = tmp;
//		}
//		int tmp = arr1[left];
//		arr1[left] = arr2[left];
//		arr2[left] = tmp;
//
//		int tmp1 = arr1[right];
//		arr1[right] = arr2[right];
//		arr2[right] = tmp1;
//
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10};
//
//	int arr2[] = { 11,12,13,14,15,16,17,18,19,20 };
//
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//
//	exchange(arr1, arr2, sz);
//
//	int i = 0;
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", arr1[i]);
//	}
//	
//	printf("\n");
// 
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", arr2[i]);
//	}
//
//	return 0;
//}




//表达式求值先看是否存在整型提升或算术转换，再进行计算

//表达式真正计算的时候先看相邻操作符的优先级决定算谁

//相邻操作符的优先级相同的情况下，看操作符的结合性决定计算顺序


//以下表达式是程序错误
//#include <stdio.h>
//
//int main()
//{
//	int ret = 0;
//	int i = 0;
//
//	ret = (++i) + (++i) + (++i);
//
//	printf("%d\n", ret);
//
//	return 0;
//}


//野指针不能正常使用

//局部指针变量不初始化就是野指针

//32位系统下,int占4个字节，指针占4个字节,操作系统可以使用的最大内存空间是2^32

//64位系统下,int占4个字节,指针占8个字节,操作系统可以使用的最大内存空间是2^64


//题目：下面代码输出是什么？
//#include <stdio.h>
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	short* p = (short*)arr;
//
//	int i = 0;
//
//	for (i = 0; i < 4; i++)
//	{
//		*(p + i) = 0;
//	}
//
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}


//int指针加一就是加4个字节
//char指针加一就是加一个字节
//short指针加一就是加两个字节




//题目：以下代码会输出什么
//#include <stdio.h>
//
//int main()
//{
//	int a = 0x11223344;
//	char* pc = (char*)&a;
//	*pc = 0;
//
//	printf("%x\n", a);
//
//	return 0;
//}


//在一个内存块内是倒着放的 ，是44 33 22 11



//题目：下面代码输出>还是<

//#include <stdio.h>
//
//int i;	//全局变量-不初始化的话默认为0
//
//int main()
//{
//	i--;
//	if (i > sizeof(i))	
//	//sizeof返回的是无符号数
//	{
//		printf(">");
//	}
//	else
//	{
//		printf("<");
//	}
//	return 0;
//}
	//sizeof()计算变量/类型所占内存的大小,所以一定是正数(也就是无符号数)
	//当一个整型与无符号数进行计算的时候，会把整数转换成无符号数
	//i--变成-1，-1转换成无符号数，符号位最高位的1变为有效位，将会是非常大的数字

	//-1
	//10000000000000000000000000000001 原
	//11111111111111111111111111111110 反
	//11111111111111111111111111111111 补
	//转换成无符号数之后，变成正数，正数原反补相等




//题目:求二进制中不同位的个数
//实现两个int(32位)整数m和n的二进制表达中，有多少个(bit)不同？
//例：1999 2299 输出：7

//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int a = 10;
//	int b = 19;
//
//	int count = 0;
//
//	int c = a ^ b;
//
//	int i = 0;
//
//	for (i = 0; i < 32; i++)
//	{
//		if((c>>i)&1==1)
//		{
//			count++;
//		}
//
//	}
//
//	printf("%d\n", count);
//	system("pause");
////	//system库函数-执行系统命令-pause(暂停) ,需要调用<stdlib.h>的头文件
////	//暂停放在return0前，所有代码后面
//	return 0;
//}


//方法2.
//#include <stdio.h>
//
//int main()
//{
//	int a = 10;
//	int b = 19;
//	int c = a ^ b;
//
//	int count = 0;
//
//	while (c)
//	{
//		c = c & (c - 1);
//		count++;
//	}
//
//	printf("%d\n", count);
//
//	return 0;
//}




//打印一个整数的二进制序列中所有的偶数位和奇数位

//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//
//	int i = 0;
//
//	printf("奇数位：\n");
//
//	//为什么这里是30,因为30就是第31位,0是第一位
//	for (i = 30; i >=0; i-=2)
//	{
//		printf("%d ", (a>>i) & 1 );
//	}	
//	
//	printf("\n");
//
//	printf("偶数位：\n");
//	for (i = 31; i >= 1; i-=2)
//	{
//		printf("%d ", (a>>i) & 1 );
//	}
//
//	return 0;
//}



//题目：用指针打印数组(不使用下标)
//#include <stdio.h>
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//
//	int* p = arr;
//
//	int i = 0;
//
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//
//	return 0;
//}


//递归层次太深，会出现栈溢出的现象




//题目：不使用库函数把字符串数组逆序

//方法1.
//#include <stdio.h>
//#include <string.h>
//
//int mystrlen(char arr[])
//{
//	while (*arr != '\0')
//	{
//		return 1+mystrlen(arr + 1);
//	}
//}
//
//int main()
//{
//	char arr[] = "abcdefg";
//
//	int left = 0;
//	int right = mystrlen(arr)-1;
//
//	while (left < right)
//	{
//		int tmp = 0;
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//
//		left++;
//		right--;
//	}
//
//	printf("%s\n", arr);
//
//	return 0;
//}



//方法2.
//#include <stdio.h>
//
//int my_strlen(char arr[])
//{
//	while (*arr != '\0')
//	{
//		return 1 + my_strlen(arr + 1);
//	}
//}
//
//void reverse_string(char arr[])
//{
//	char tmp = arr[0];
//	int len = my_strlen(arr);
//	arr[0] = arr[len - 1];
//	arr[len - 1] = '\0';
//
//	if (my_strlen(arr + 1) >= 2)
//	{
//		reverse_string(arr + 1);
//	}
//	arr[len - 1] = tmp;
//}
//
//int main()
//{
//	char arr[] = "abcdefg";
//	reverse_string(arr);
//	printf("%s\n", arr);
//}



//三种方法实现strlen:1.计数器方法(6409)	2.递归的方法(不创建临时变量)(6438)   3.指针减指针的方法(8844)



//题目：写一个递归函数DigitSum(n),输入一个非负数，返回组成它的数字之和
//例如：1729 返回(1+7+2+9) = 19;

//#include <stdio.h>
//
//int DigitSum(int a)
//{
//	if(a > 9)
//	{
//		return DigitSum(a / 10) + (a % 10);
//	}
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//
//	int ret = DigitSum(a);
//
//	printf("ret = %d\n", ret);
//
//	return 0;
//}




//题目：编写一个函数实现n的k次方，使用递归实现

//#include <stdio.h>
//
//double test(int n, int k)
//{
//	if (k < 0)
//	{
//		return (1.0 / test(n, -k));
//	}
//	else if (k <= 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * test(n, k - 1);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	int k = 0;
//	scanf("%d", &k);
//
//	double ret = test(n, k);
//
//	printf("ret = %lf\n", ret);
//
//	return 0;
//}





