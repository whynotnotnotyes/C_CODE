#define _CRT_SECURE_NO_WARNINGS 1



//最后一章节！：程序环境和C语言预处理

//本章重点：
//程序的翻译环境
//程序的执行环境
//详解：C语言程序的编译+链接
//预定义符号介绍
//预处理指定#define
//宏和函数的对比
//预处理操作符#和##的介绍
//命令定义
//预处理指令#include
//预处理指令#undef
//条件编译




//程序的翻译环境和执行环境

//程序有两个环境：一个叫翻译环境一个叫执行环境
//在ANSIC的任意一种实现中，存在两个不同的环境
//第一种是翻译环境，在这个环境中源代码被转换为可执行的机器指令。 .c----->.exe
//第二种是执行环境，它用于实际执行代码


//C代码(文本文件)   编译   链接       二进制的信息（二进制文件）       运行
//test.c--------------------------->test.exe-------------------------->
//源文件(源程序)      (翻译环境)                           (运行环境)



//每一个源文件都会经过编译器单独进行处理，比如test.c和add.c这两个源文件会单独进行处理
//通过编译器处理后会分别生成目标文件.obj
//所有的目标文件通过链接器处理，再加上链接库，就会生成可执行程序
//编译器处理编译，链接器处理链接
//链接器同时也会引入标准C函数库中任何被该程序所用到的函数，而且它可以搜索程序员个人的程序库，
//将其需要的函数也链接到程序中


//编译再细分就有三个阶段：1.预编译(预处理)  2.编译  3.汇编

//预编译把test.c翻译成test.i
//预编译里面有三个操作：1.头文件的包含(#include)   2.注释删除(注释会用空格替换)  3.#define替换
//预编译里的操作都是文本操作


//编译把test.i(C代码)翻译成test.s,也就是翻译成汇编代码

//汇编把test.s翻译成test.o(就是.obj目标文件),
//也就是把汇编代码转换成了二进制指令

//在汇编阶段会形成各自文件的符号表，符号表里有符号和地址

//目标文件经过链接器链接，最终生成可执行文件.exe

//链接会做的两件事：1.合并段表  2.符号表的合并和重定位

//链接期间要进行合并段表和符号表的合并和重定位，如果出问题就会出现链接错误问题

//调试代码的时候调试的是.exe文件


//预编译(预处理)详解


//预定义符号
//预定义符号不是自己定义的，而是语言内置的
//#define不是预定义符号


//__FILE__		//进行编译的源文件
//__LINE__		//文件当前的行号
//__DATE__		//文件被编译的日期
//__TIME__		//文件被编译的时间
//__STDC__		//如果编译器遵循ANSI C，其值为1，否则未定义
//__FUNCTION__	//获取函数名

//预定义符号远不止以上这些



//#include <stdio.h>
//
//int main()
//{
//	printf("%s\n", __FILE__);	//打印出来是文件的绝对路径
//	printf("%d\n", __LINE__);
//	printf("%s\n", __DATE__);
//	printf("%s\n", __TIME__);
//	printf("\n\n");
//
//	//可以用来写日志
//
//	int arr[10] = { 0 };
//	FILE* pf = fopen("text.txt", "w");
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//		fprintf(pf, "file:%s line:%d date:%s time:%s i:%d \n",
//			__FILE__, __LINE__, __DATE__, __TIME__, i);
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//
//
//	return 0;
//}







//预处理指令 - #开头的都叫预处理指令

//#define
//#undef
//#include
//#pragma pack(4)
//#pragma pack()
//#if
//#endif
//#ifdef
//#line



//#define - 定义标识符

//#define后面不要加分号;

//#include <stdio.h>
//
//#define MAX 100
//#define STR "haha"	 //#define还可以定义字符串
//#define reg register //#define还可以定义符号
//#define do_forever for(;;)	//#define还可以定义代码
//
//int main()
//{
//	//在预编译的时候就会把max给替换成MAX的值
//	int max = MAX;
//
//	printf("%d\n", max);
//
//	printf("%s\n", STR);
//
//	reg int a = 10;
//	//相当于register int a = 10;
//
//	do_forever;
//
//	//do_forever  //这样写就会直接结束不会循环
//	//因为for(;;) 相当于
//	// for(;;)
//	//{
//	//	return 0;
//	//}
//
//	return 0;
//}






//#define - 定义宏

//#define机制包括了一个规定，允许把参数替换到文本中，
//这种实现通常称为宏(macro)或者定义宏(define macro)

//下面是宏的申明方式：
//#define name(parament-list)stuff ,其中的parament-list是一个由逗号隔开的符号表，
//它们可能出现在stuff中。
//注意：参数列表的左括号必须与name紧邻。
//如果两者之间有任何空白存在，参数列表就会被解释为stuff的一部分


//#include <stdio.h>
//
//#define SQUARE(x) x*x
//#define TWICE(a) a+a
//
//int main()
//{
//	//演示：SQUARE
//
//	int ret = SQUARE(5);  //SQUARE(5) == 5*5
//
//	printf("%d\n", ret);
//
//
//	//有一个小问题
//	ret = SQUARE(5 + 1); 
//	printf("%d\n", ret);
//	//如果我想计算6的平方，那结果应该是36，但是结果却是11？
//	//因为宏定义不是传参，而是直接替换，实际过程应该是5+1 * 5+1 = 5+5+1=11
//	//因为替换改变了原来想法的运算顺序，那解决办法就是把SQUARE(x) x*x 改成 SQUARE(x) (x)*(x)
//
//
//
//
//	//演示：ADD
//	ret = 10 * TWICE(5);
//	printf("%d\n", ret);
//	//结果是55，因为宏定义会替换,实际运算过程就是10*5+5
//	//如果宏改成TWICE(x) (x)+(x)  ,结果依然是55，
//	//把宏改成TWICE(X) ((x)+(x))  ,这样才是想要的结果
//	//写宏定义的时候不用吝啬使用括号
//
//
//	return 0;
//}

//以后简单的函数都可以用宏定义来实现了



//1.宏定义不能实现递归
//2.宏不会替换字符串里的内容  比如printf("MAX = %d");  里面的MAX不会被替换
//3.宏不会替换宏参数前带#的宏参数





//在宏定义中插入字符串

//#include <stdio.h>
//
//#define print(x) printf("the value of "#x" is %d\n",x)
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	print(a);  //等于printf("the value of "a" is 10\n");
//	print(b);  //等于printf("the value of "b" is 20\n");
//
//	//宏参数前面出现#号是不会替换的，而是转换成对应的字符串
//
//	return 0;
//}






//带副作用的宏参数

//当宏参数在宏的定义中出现超过一次的时候，如果参数带有副作用，那么你在使用这个宏的时候就可能出现
//不可预知的后果。副作用就是表达式求值的时候出现的永久性效果。

//例如：
//x+1  不带副作用
//x++  带有副作用


//MAX宏可以证明具有副作用的参数引起的问题

//如果是函数，不会出现像宏的副作用的问题

//#include <stdio.h>
//
//#define MAX(x,y) (x>y)?(x):(y)
//
//int main()
//{
//	int a = 10;
//	int b = 11;
//
//	int max = MAX(a++, b++);
//	//等于int max = MAX(a++,b++) (a++>b++)?(a++):(b++)
//
//	printf("MAX = %d\n", max);
//	printf("a = %d\n", a);
//	printf("b = %d\n", b);
//
//	return 0;
//}






//宏和函数之间的关系

//#include <stdio.h>
// 
////函数
//int Max(int x, int y)
//{
//	return (x > y ? x : y);
//}
// 
////宏
//#define MAX(x,y) (x>y?x:y)
//
//int main()
//{
//	float a = 3.0f;
//	float b = 4.0f;
//
//	int max1 = 0; 
//	int max2 = 0;
//
//	max1 = MAX(a, b);
//	max2 = Max(a, b);
//
//	printf("max1 = %d\nmax2 = %d\n", max1, max2);
//	//在这个代码下宏比函数要好，如果我传浮点数进去，但是函数的返回类型是int,会造成问题
//	//但是在宏定义下面仅仅只是替换，不会在乎传进去的值是什么类型，可以接收不同的数据,但是不够严谨
//
//
//	return 0;
//}


//为什么不用函数来完成这个任务？原因有二：
//1.用于调用函数和从函数返回的代码可能比实际执行这个小型计算工作所需要的时间更多。
//所以宏比函数在程序的规模和速度方面更胜一筹
//2.更为重要的是函数的参数必须声明为特定的类型。所以函数只能在类型合适的表达式上使用。
//反之这个宏可以适用于整型，长整型，浮点型等。宏是无关类型的

//缺点：
//1.每次使用宏的时候，一份宏定义的代码将插入到程序中。除非宏比较短，否则可能大幅度增加程序的长度。
//因为每调用一次宏，都会对代码进行替换，假如这个宏有100行，调用3次，就是300行，
//但是函数只调用同一份代码

//2.宏是没法调试的，因为调试的是.exe可执行文件，宏在预编译阶段就已经替换了

//3.宏不能递归

//4.宏由于类型无关，也就不够严谨

//5.宏可能会带来运算符优先级的问题，导致过程容易出错





//宏有时候可以做到函数做不到的事情。比如：宏的参数可以出现类型，但是函数做不到
//举例：

//#include <stdio.h>
//
//#define SIZE(type) sizeof(type)
//
//int main()
//{
//	int ret = SIZE(int);  //此时已经被替换成ret = sizeof(int)
//
//	printf("%d\n", ret);
//
//	return 0;
//}



//或者

//#include <stdio.h>
//
//#define MALLOC(num,type) (type*)malloc(num*sizeof(type))
//
//int main()
//{
//	//int* pf = (int*)malloc(10 * sizeof(int));
//	//这是传统的开辟内存方式
//
//	int* pf = MALLOC(10, int);
//	//这样写就方便很多，函数是不能这样实现的，因为函数不能传类型
//
//	return 0;
//}



//宏名一般全部大写，函数一般不全部大写





//#undef - 移除宏

//如果现存的一个名字需要被重新定义，那么它的旧名字首先要被移除

//#include <stdio.h>
//
//int main()
//{
//	int a = MAX;
//#undef MAX
//
//	int b = MAX;
//
//	return 0;
//}







//条件编译

//在编译一个程序的时候我们如果要将一条语句(一组语句)编译或者放弃是很方便的。
//因为我们有条件编译指令

//比如说：调试性的代码，删除可惜，保留又碍事，所以我们可以选择性的编译

//条件编译也是在预编译阶段进行处理


//#include <stdio.h>
//
////#define TEST
//
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = 0;
//
//#ifdef TEST  //意思是如果#define了TEST,那就执行，没定义就不执行
//		printf("%d ", arr[i]);
//#endif
//	}
//	//#ifdef 和 #endif是一对，需要呼应起来
//	return 0;
//}





//多个分支的条件编译

//#if 常量表达式
//#elif 常量表达式
//#else 
//#endif

//#include <stdio.h>
//
//int main()
//{
//#if 1==2
//	printf("haha\n");
//#elif 2=2
//	printf("hehe\n");
//#else
//	printf("嘿嘿\n");
//#endif
//	
//	return 0;
//}




//if !defined 和 ifndef 

//#include <stdio.h>
//
//int main()
//{
//#if defined(TEST)
//	printf("hehe\n");
//#endif
//
//
//#if !defined(TEST)  //如果没有定义TEST的话就执行
//	printf("haha\n");
//#endif
//
//
//
//
//#ifdef(TEST)
//	printf("hehe\n");
//#endif
//
//
//#ifndef(TEST)      //如果没有定义TEST的话就执行
//	printf("haha\n");
//#endif
//
//	return 0;
//}







//文件包含

//我们已经知道，#include指令可以使另外一个文件被编译。就像它实际出现于#include指令一样。
//这种替换的方式很简单：预处理器先删除这条指令，并用包含文件的内容替换。
//这样一个源文件被包含10次，那就实际被编译10次


//#include <stdio.h>
//#include "add.h"

//本地文件""的查找策略：先在源文件所在目录下查找，如果该头文件未找到，编译器就像查找库函数头文件一样在标准位置查找头文件。
//如果都找不到就提示编译错误

//尖括号<>(库函数)的查找策略：查找头文件直接区标准路径下去查找，如果找不到就提示编译错误

//""的范围更大，会在本地目录查找也会在标准路径下去查找
//库函数也可以用""的形式包含，但是这样做效率就比较低,比较慢



//如何防止头文件被重复多次的包含？

//第一种方法
//#ifndef __TEST_H__    如果test.h没有被定义
//#define __TEST_H__    那就定义一个test.h的头文件

//int Add(int x,int y);

//#endif



//第二种方法
//在头文件里加上 #pragma once
//这是比较现代的写法




//用宏的方式实现offsetof

//#include <stdio.h>
//
//#define OFFSETOF(struct_name,member_name) (int)&(((struct_name*)0)->member_name)
////原本是要把结构体指针指向的那个成员的偏移量减去起始位置的偏移量，但是起始位置是0，减去0还是原来的值，
////所以没必要减去了
//
//struct S
//{
//	int c1;
//	char a;
//	double c2;
//};
//
//int main()
//{
//	struct S s;
//
//	printf("%d\n", OFFSETOF(struct S, c1));
//	printf("%d\n", OFFSETOF(struct S, a));
//	printf("%d\n", OFFSETOF(struct S, c2));
//
//	return 0;
//}







