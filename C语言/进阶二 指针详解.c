#define _CRT_SECURE_NO_WARNINGS 1



//指针的进阶
//1.字符指针
//2.指针数组
//3.数组指针
//4.数组传参和指针传参
//5.函数指针
//6.函数指针数组
//7.指向函数指针数组的指针
//8.回调函数
//9.指针和数组面试题的解析



//初级指针:
//1.指针就是个变量，用来存放地址，地址唯一标识一块内存空间
//2.指针的大小是固定的4/8个字节(32位平台/64位平台)
//3.指针是有类型,指针的类型决定了指针的+-整数的步长,指针解引用操作的时候的权限
//4.指针的运算

//#include <stdio.h>
//
//void test(int arr[])
//{
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", sz);
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	test(arr);
//
//	return 0;
//}

//32位平台结果是1,64位平台结果是2





//指针的进阶(路标)
//1.字符指针
//2.指针数组
//3.数组指针
//4.数组传参和指针传参
//5.函数指针
//6.函数指针数组
//7.指向函数指针数组的指针
//8.回调函数
//9.指针和数组面试题的解析


//1.字符指针

//#include <stdio.h>
//
//int main()
//{
//	char arr[] = "abcdef";
//
//	char* pc = arr;
//
//	printf("%s\n", arr);
//	printf("%s\n", pc);
//	//因为把arr存给pc了,所以arr和pc是一回事,这两个相等
//
//	printf("%c\n", *pc);     //注意是%c
//	printf("%c\n", arr[0]);  //注意是%c
//  //这两个相等
// 
//  printf("%c\n", arr[0]+2);
//  printf("%c\n", *parr+2);
//  //这两个相等
//
//	return 0;
//}





//#include <stdio.h>
//
//int main()
//{
//	char* pc = "abcdef";
//	//"abcdef"是一个常量字符串
//	//如果是在32位系统上,这是放不下的,因为"abcdef"加上'\0'有7个字节
//	//然而32位系统指针只能存放4个字节,所以这行代码存储的是第一个元素的地址(a的地址)
//  //这种写法是可以的
//}



//#include <stdio.h>
//
//int main()
//{
//	char* p = "abcdef";
//	*p = 'w';
//	//这种写法和赋值是错误的
//
//	const char* p = "abcdef";
//	//这种写法才是正确的,"abcdef"是常量字符串,既然是常量,就不能更改,const修饰的是*p,p所指向的内容就不能被修改
//	printf("%s\n", p);
//
//	return 0;
//}



//#include <stdio.h>
//
//int main()
//{
//	char* const parr = "abcdef";
//
//	printf("%p\n", parr);
//
//	parr = 'w';
//	//这里不是把w改成是parr的第一个元素，而是把w的地址赋到parr里面，但是const修饰了parr地址，所以地址不能修改，会报错
//
//	printf("%p\n", parr);
//
//	return 0;
//}



//#include <stdio.h>
//
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	const char* p1 = "abcdef";
//	const char* p2 = "abcdef";
//
//	if (arr1 == arr2)
//	{
//		printf("arr1和arr2相同\n");
//	}
//	else
//	{
//		printf("arr1和arr2不同\n");
//	}
//  //为了存储空间所以分别创立了两块空间,所以不同
//	//数组比较相同不相同是比较地址相同不相同(这样的话好像数组和数组之间永远都不会相同)
//
//	if (p1 == p2)
//	{
//		printf("p1和p2相同\n");
//	}
//	else
//	{
//		printf("p1和p2不同\n");
//	}
//
//	return 0;
//}

//为什么p1和p2是相同的?因为两个"abcdef"都是常量表达式(常量字符串),不能更改，而且两个字符串一模一样
//内存为了节省空间,只存储了一份





//指针的进阶(路标)
//1.字符指针
//2.指针数组
//3.数组指针
//4.数组传参和指针传参
//5.函数指针
//6.函数指针数组
//7.指向函数指针数组的指针
//8.回调函数
//9.指针和数组面试题的解析



//2.指针数组
//指针数组是数组,用来存放指针

//#include <stdio.h>
//
//int main()
//{
//	int arr[4] = { 0 }; //整型指针
//	char ch[5] = { 0 }; //字符指针
//
//	int* parr[4]; //存放整型指针的数组-数组指针
//	char* pch[5]; //存放字符指针的数组-数组指针
//}



//指针数组举例1
//#include <stdio.h>
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int* arr[4] = { &a,&b,&c,&d };
//
//	int i = 0;
//
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", *(arr[i]));
//		printf("%p\n", arr[i]);
//	}
//
//	return 0;
//}





//指针数组举例2
//#include <stdio.h>
//
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//
//	int* parr[] = { arr1,arr2,arr3 };
//
//	int i = 0;
//
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", (*parr)[i]+j);
//			printf("%d ", parr[i][j]);
//			printf("%d ", (*parr[i])+j);
//		}
//		printf("\n");
//	}
//	return 0;
//}



//int* arr1[10];  整形指针的数组
//char* arr2[4];  一级字符指针的数组
//char** arr3[5]; 二级字符指针的数组







//数组指针
//数组指针是指针


//#include <stdio.h>
//
//int main()
//{
//	int* p = NULL;   //p是整形指针 - 指向整形 - 可以存放整形的地址
//	char* pc = NULL; //pc是字符型指针 - 指向字符 - 可以存放字符的地址
//	int *arr[10] = { 0 }; //数组指针 - 就是指向数组 - 可以存放数组的地址
//
//	//arr - 首元素地址
//	//&arr - 数组的地址
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//
//	int(*p)[10] = &arr;   //定义变量时*p不是解引用操作,是说明p是一个指针
//	//上面这个意思是: (*p)指向一个数组(10个元素),数组的每个元素是int
//	//数组的地址要存起来
//	//上面这个就是数组指针
//
//	int* p[10] = &arr;   //这是指针数组
//    //[]的优先级比*高
//	return 0;
//}

//数组指针是一个指针，用来存放数组地址的指针




//题目：把char* arr[5]下面那行代码补全成数组指针
//int main()
//{
//	char* arr[5];
//	//pa= &arr;
//	char* (*pa)[5] = &arr;
//	//char* 是pa指向的数组的元素类型是char*
//	//* 说明pa是指针
//	//pa 是指针变量的名字
//	//[5] pa指向的数组是5个元素的
//
//	return 0;
//}





//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int(*pa)[10] = &arr;
//
//	int i = 0;
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", (*pa)[i]);
//		printf("%d ", *(*pa + i));//*pa == arr  *pa找到arr,arr+1是下一个元素的地址,地址解引用就能找到那个元素
//		printf("%d ", *(arr + i));//*pa == arr  这个写法跟上面代码相等
//		printf("%p ", arr+i); //数组名+1是首元素地址+1就是下一个元素的地址(记住哦，是下一个元素的地址)
//		
//		//这三种方法都可以通过数组指针访问数组
//		//但是把arr存到*int里面也可以达到一样的访问效果
//		//数组指针一般要用到二维数组以上才方便一些
//		printf("\n");
//	}
//
//	system("pause");
//
//	return 0;
//}






//#include <stdio.h>
//
//void print1(int* arr,int x,int y)
//{
//	int i = 0;
//	int j = 0;
//
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i]+j);
//		}
//		printf("\n");
//	}
//}
//
//void print2(int (*pa)[5],int x,int y)
//{
//	int i = 0;
//
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", *(*(pa + i) + j));
//		}
//		printf("%d\n");
//	}
//}
//
//int main()
//{
//
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//
//	print1(arr,3,5);
//	//数组是首元素的地址,要探讨二维数组的首元素,首先要把二维数组看成一维数组,二维数组的首元素其实是二维数组的第一行
//	//也就是{1,2,3,4,5}
//
//	print2(arr,3,5);
//	//既然传过去的是整个一维数组的地址,那接收就要用数组指针来接收
//
//	return 0;
//}







//#include <stdio.h>
//
//void print1(int (*pa)[5], int x, int y)
//{
//	int i = 0;
//
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", *(*(pa+i)+j));
//			printf("%d ", (*(pa + i))[j]);
//			printf("%d ", pa[i][j]);
//			printf("%d ", *(pa[i]+j));
//			//以上三种都可以打印
//			printf("\n");
//		}
//		printf("\n");
//	}
//}
//
// 
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//
//	print1(arr, 3, 5);
//
//	return 0;
//}







//#include <stdio.h>
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//
//	int i = 0;
//	int *p = arr;
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//		printf("%d ", *(arr + i));
//		printf("%d ", *(p + i));
//		printf("%d ", p[i]);
//		//arr[i] == p[i] == *(arr+i) == *(p+i) 
//		printf("\n");
//	}
//
//	return 0;
//}




//int arr[5]			//arr是一个包含5个int类型元素的数组
//int *parr1[10]		//[]的优先级比*高，数组有10个元素,每个元素的类型是int*,parr1是指针数组
//int (*parr2)[10]      //*parr是数组指针，该指针指向了一个数组，数组有10个元素，每个元素的类型是int,parr2是数组指针
//int (*parr3[10])[5]   //parr3首先和[]结合，parr3是一个数组,该数组有10个元素，每个元素是一个数组指针
                        //该数组指针指向的数组有5个元素，每个元素是int

//int (*parr3[10])[5]	//是一个数组指针，有十个元素，每个元素的类型是数组指针，每个数组指针指向的数组有5个，类型是int  




//思考
//你好，我觉得你讲的有道理，我感觉我也是讨好型人格，下面是我自己的思考:
//
//我好像总是伪装成弱者，把自己姿态摆得很低，诱惑着别人来欺负我，然后等别人真的来欺负我的时候，我被欺负到实在受不了时，我就顺理成章的可以反击别人
//达到我内心想要释放暴力的真实目的，因为我不敢去直接诉诸暴力，这是社会，法律所不允许的，所以为了达到释放暴力的目的，
//我一次又一次的伪装成弱者，期待着"猎物"上钩。
//从直接的释放暴力转换成间接的释放暴力，这样貌似会导致更多的压抑，更多的压抑又会导致更加暴力的暴力释放
//
//所以, 讨好型人格有没有可能其实是一种潜在的施暴狂呢 ?
//只不过这个施暴不是直接的，而是间接的施暴，这是我对自己的一点反思，我跟别人相处时会无意识喜欢讨好别人，但内心知道这不是真心盼着对方好，只是一种 诱惑
//但我知道自己其实并不是弱者
//所以不要把自己摆在一个弱者的地位，因为你根本不是弱者

//不然为什么要讨好一个人呢？甚至这个人是陌生人







//#include <stdio.h>
//
//int main()
//{
//	//指针
//	int* p1;  //指向整形的指针-整形指针
//	char* p2; //指向字符的指针-字符指针
//
//	//字符指针
//	char ch = 'w';
//	char* p = &ch;
//	const char* p2 = "abcdefg";
//
//	//指针数组 - 数组 - 存放指针的数组
//	int* arr[10];
//	char* ch[5];
//
//	//数组指针 -指向数组
//	int arr2[5]; //数组
//	int(*pa)[5] = &arr2; //取出数组的地址,pa就是一个数组指针
//	//把名字去掉，剩下的就是元素类型，pa的元素类型是int(*)[5]
//
//	return 0;
//}






//数组参数   指针参数



//一维数组，指针数组 函数传参
//#include <stdio.h>
//
//void test(int arr1[])
//{
//
//}
//
//void test(int arr1[10])  //对于这种在[]里写值的形参也是可以的，但这里写不写都行
//{
//
//}
//
//void test(int* arr1)
//{
//
//}
////以上三种数组传参写法都可以
//
//void test2(int* arr2[20])  //这样写是可以的([]里面的数组大小是可以省略的)
//{
//
//}
//
//void test2(int** arr2)
//{
//
//}
////以上两种指针数组传参都可以
//
//int main()
//{
//	int arr1[10] = { 0 };
//
//	int* arr2[20] = { 0 };
//
//	//一维数组传参
//	test(arr1);
//
//	test2(arr2);
//
//	return 0;
//}
//参数部分可以写成数组也可以写成指针




//二维数组函数传参

//#include <stdio.h>
//#include <stdlib.h>
//
//void test(int arr[3][5])
//{
//
//}
//
//void test1(int arr[][5])	//数组传参可以省略行不能省略列
//{
//
//}
//
//void test2(int(*arr)[5])
//{
//
//}
////以上三种二维数组传参都可以
//
//void test3(int** arr)	//这种方法是不行的，因为二级指针存放的是一级指针变量的地址，而我传过来的是数组的地址
//{
//
//}
//
//int main()
//{
//	int arr[3][5] = { 0 };
//
//	test(arr);
//	test1(arr);
//	test2(arr);
//	test3(arr);
//
//	system("pause");
//
//	return 0;
//}




//指针传参

//#include <stdio.h>
//#include <stdlib.h>
//
//void test(int* arr, int sz)  //传过去的是指针，接收的也是指针
//{
//	int i = 0;
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//
//	int* pa = arr;
//	
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	test(pa, sz);
//
//	system("pause");
//
//	return 0;
//}





//当函数参数为一级指针的时候，可以传什么参数进去？

//#include <stdio.h>
//
//void test1(int* p)
//{
//	;
//}
//
//void test2(char* p)
//{
//
//}
//
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//
//	test1(pa);
//	test1(&a);
//
//
//	char b = 20;
//	char* pb = &b;
//
//	test2(pb);
//	test2(&b);
//
//	return 0;
//}

//当函数形参为一级指针时，可以传地址，也可以传指针变量






//二级指针传参

//#include <stdio.h>
//
//void test(int** ptr)
//{
//
//}
//
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;
//
//	test(pa);
//	test(ppa);
//
//	int* arr[10];
//	test(arr);
//
//	return 0;
//}

//二级指针传参可以把一级指针传过去(一级指针传过去二级指针接收)，也可以把二级指针传过去
//也可以把指针数组传过去，指针数组本质上还是数组





//函数指针

//数组指针 - 是指向数组的指针
//函数指针 - 是指向函数的指针

//#include <stdio.h>
//
//int add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	int ret = add(a, b);
//
//	printf("%p\n", &add);
//	printf("%p\n\n", add);
//	//这两个输出结果相同
//	//&函数名 和 函数名 都是函数的地址
//  //函数名就是函数的地址
//
//	int (*p)(int, int) = add;
//	//函数指针
//	//(int,int)可以,(int x,int y)也可以，不过x,y可以省略
//
//	printf("%d\n", (*p)(2, 3));
// 
//	printf("%p\n", (*p));
//	printf("%p\n", p);
//  
//
//	return 0;
//}

//函数指针是用来存放函数地址的指针

//函数名地址==&函数名地址==函数指针地址==*函数指针地址




//#include <stdio.h>
//
//void print(char* str)
//{
//	printf("%s\n", str);
//}
//
//int main()
//{
//	void (*pa)(char*) = print;
//
//	(*pa)("hello,bite");
//
//	return 0;
//}




//代码1
//(*(void(*)())0();


//void(*)()是一个函数类型,是一个函数指针类型
//类型括号括起来后面加0，就是想要把0强制类型转换，把整形转换成函数指针类型
//意味着想把0当成是某函数的地址
//然后外面还有一个解引用操作符*，意味着通过这个函数的地址找到这个函数，函数的返回类型是void,参数是无参
//解引用之后，后面还有一个括号，说明在调用这个函数，最后面那个括号不需要传参，因为0也是无参
//这段代码其实是函数调用





//代码2
//void (*signal(int,void(*)(int)))(int)

//signal(int,void(*)(int))
//int是整形变量，void(*)(int)是函数指针
//signal是函数,但是()里没有传参,这是一次函数声明

//去掉函数名就是函数的类型
//void(*)(int)  
//其实整段代码就是函数指针,(*)是指针,()是函数,函数的参数是int是参数，返回类型是void

//signal(int,void(*)(int))
//函数名是signal,函数参数是int和函数指针类型,剩下的void(*)(int)就是返回类型
//signal的第二个参数是函数指针，signal的返回类型也是函数指针

//不能这样写 void(*)(int) signal(int,void(*)int)
//因为函数指针的*要放在名字旁边

//signal是一个函数声明
//signal函数的参数有两个，第一个是int,第二个是函数指针，该函数指针指向的函数的参数是int,返回类型是void
//signal函数的返回类型也是一个函数指针：该函数指针指向的函数的参数是int,返回类型是void


//这个函数太过于复杂了,其实可以简化，那就是typedef

//void(*signal(int, void(*)(int)))(int);
//
//typedef void(* pfun_t)(int);   //函数指针改名，新名字是放在*右边的
// 
//pfun_t signal(int, pfun_t);





//#include <stdio.h>
//
//int add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int (*padd)(int, int) = add;
//
//	printf("%d\n", add(3, 5));
//	printf("%d\n", (&add)(3, 5));
//	printf("%d\n", padd(3, 5));
//	printf("%d\n", (padd)(3, 5));
//	printf("%d\n", (*padd)(3, 5));
//	printf("%d\n", (**padd)(3, 5));
//	printf("%d\n\n", (***padd)(3, 5));
//
//	//当一个指针是函数指针时，调用这个函数指针解引用*和不解引用都行，但最好加上*，容易看出来是函数指针
//    //如果没加上的话也要分辨出来
// 
//	//add == padd == *padd
// 
//   	  printf("%p\n", add);
//  	  printf("%p\n", &add);
//      printf("%p\n", padd);
//      printf("%p\n", *padd);
//      printf("%p\n", **padd);
//	
//	//printf("%d\n", &add(3, 5));
//	//&的优先级比()低，函数调用之后返回一个常量
//	//字符常量通常是存储在只读内存区域中，不能直接修改，因此不能取得其地址。所以会报错
//
//	//printf("%d\n", *padd(3, 5));
//	//*的优先级比()低，函数调用之后返回一个常量，再解引用就会报错 
//
//	return 0;
//}
//函数名就是函数的地址











//函数指针数组 
//存放函数指针的数组


//#include <stdio.h>
//#include <stdlib.h>
//
//int add(int x, int y)
//{
//	return x + y;
//}
//
//int sub(int x, int y)
//{
//	return x - y;
//}
//
//int mul(int x, int y)
//{
//	return x * y;
//}
//
//int chu(int x, int y)
//{
//	return x / y;
//}
//
//int main()
//{
//	int (*pa[4])(int, int) = { add,sub,mul,chu };
//
//	int i = 0;
//
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", pa[i](3, 5));
//	}
//
//	system("pause");
//
//	return 0;
//}





//char* mystrcpy(char* dest,const char* src);

//题目1:写一个函数指针pf,能够指向mystrcpy
//函数指针:char* (*pf)(char*,const char*) = mystrcpy;

//题目:写一个函数指针数组pfarr,能够存放mystrcpy函数的地址 
//函数指针数组:char* (*pfarr[4])(char*,const char*) = {mystrcpy};






//函数指针数组的用途:转移表
//例子：计算器

//#include <stdio.h>
// 
//void menu()
//{
//	printf("*****************************\n");
//	printf("********1.add	2.sub********\n");
//	printf("********3.mul   4.chu********\n");
//	printf("**          0.exit         **\n");
//	printf("*****************************\n");
//}
//
//int add(int x, int y)
//{
//	return x + y;
//}
//
//int sub(int x, int y)
//{
//	return x - y;
//}
//
//int mul(int x, int y)
//{
//	return x * y;
//}
//
//int chu(int x, int y)
//{
//	return x / y;
//}
// 
//
//int main()
//{
//	int input = 0;
//
//	int x = 0;
//	int y = 0;
//	
//	do
//	{
//		menu();
//
//		printf("请选择算法\n");
//		scanf("%d", &input);
//
//		switch (input)
//		{
//		case 1:
//			printf("请输入两个数\n");
//			scanf("%d %d", &x, &y);
//			printf("add = %d\n\n\n", add(x, y));
//			break;		
//		case 2:
//			printf("请输入两个数\n");
//			scanf("%d &d", &x,&y);
//			printf("sub = %d\n\n\n", sub(x, y));
//			break;		
//		case 3:
//			printf("请输入两个数\n");
//			scanf("%d %d", &x, &y);
//			printf("mul = %d\n\n\n", mul(x, y));
//			break;		
//		case 4:
//			printf("请输入两个数\n");
//			scanf("%d %d", &x, &y);
//			printf("chu = %d\n\n\n", chu(x, y));
//			break;
//		case 0 :
//			break;
//		default:
//			break;
//		}
//
//	} while (input);
//
//	return 0;
//}

//以上写法太过于冗余，可以采用函数指针数组的方法简化





//#include <stdio.h>
//#include <stdlib.h>
//
//void menu()
//{
//	printf("*****************************\n");
//	printf("********1.add	2.sub********\n");
//	printf("********3.mul   4.chu********\n");
//	printf("**          0.exit         **\n");
//	printf("*****************************\n");
//}
//
//int add(int x, int y)
//{
//	return x + y;
//}
//
//int sub(int x, int y)
//{
//	return x - y;
//}
//
//int mul(int x, int y)
//{
//	return x * y;
//}
//
//int chu(int x, int y)
//{
//	return x / y;
//}
//
//int main()
//{
//	int input = 0;
//
//	int x = 0;
//	int y = 0;
//
//	int (*parr[])(int, int) = { 0,add,sub,mul,chu }; //为什么第一个元素要是0？因为不是0的话，选择1其实是数组的第二个元素，也就是sub,要考虑到使用者不是程序员
//	int sz = sizeof(parr) / sizeof(parr[0]);
//
//	do
//	{
//		menu();
//		printf("请选择:>\n");
//		scanf("%d", &input);
//
//		if (input >= 1 && input <= sz)
//		{
//			printf("请输入两个数\n");
//			scanf("%d %d", &x, &y);
//
//			printf("%d\n\n\n", parr[input](x, y));
//		}
//		else
//		{
//			printf("退出\n");
//			break;
//		}
//
//	} while (input);
//
//	system("pause");
//
//	return 0;
//}

//通过下标找到这个元素，再用这个元素找到所指向的函数，我们经常把这样一种函数指针数组叫做 转移表






//回调函数
//回调函数就是一个通过函数指针调用的函数。如果你把函数的指针(地址)作为参数传递给另一个函数，
//当这个指针被用来调用其所指向的函数时，我们就说这是回调函数。
//回调函数不是由该函数的实现方直接调用，而是在特定的事件或条件发生时由另外的一方调用的，
//用于对该事件或条件进行响应


//用回调函数对上面的冗余代码进行改造

//#include <stdio.h>
//
//void menu()
//{
//	printf("*****************************\n");
//	printf("********1.add	2.sub********\n");
//	printf("********3.mul   4.chu********\n");
//	printf("**          0.exit         **\n");
//	printf("*****************************\n");
//}
//
//int add(int x, int y)
//{
//	return x + y;
//}
//
//int sub(int x, int y)
//{
//	return x - y;
//}
//
//int mul(int x, int y)
//{
//	return x * y;
//}
//
//int chu(int x, int y)
//{
//	return x / y;
//}
//
//void calc(int (*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//
//	printf("请输入两个数\n");
//	scanf("%d %d", &x, &y);
//	printf("add = %d\n\n\n", pf(x, y));
//}
//
//int main()
//{
//	int input = 0;
//	
//	do
//	{
//		menu();
//
//		printf("请选择算法\n");
//		scanf("%d", &input);
//
//		switch (input)
//		{
//		case 1:
//			calc(add);
//			break;		
//		case 2:
//			calc(sub);
//			break;		
//		case 3:
//			calc(mul);
//			break;		
//		case 4:
//			calc(chu);
//			break;
//		case 0 :
//			break;
//		default:
//			break;
//		}
//
//	} while (input);
//
//	return 0;
//}




//指向函数指针数组的指针
//指向函数指针数组的指针是一个 指针 指向一个 数组，数组的元素都是函数指针

//#include <stdio.h>
//
//int add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int (*pfarr[4])(int, int) = { &add };
//	//pfarr是一个函数指针数组
//	//pfarr是一个数组，数组元素有4个，每个元素类型是int (*)(int, int) （函数指针）
//
//	int (*(*ppfarr)[4])(int, int) = &pfarr;
//	//指向函数指针数组的指针
//	//ppfarr是一个数组指针，指针指向的数组有4个元素
//	//指向的数组的每个元素的类型是一个函数指针int(*)(int,int)
//
//	return 0;
//}




//回调函数
//回调函数就是一个通过函数指针调用的函数。如果你把函数的指针(地址)作为参数传递给另一个函数，
//当这个指针被用来调用其所指向的函数时，我们就说这是回调函数。
//回调函数不是由该函数的实现方直接调用，而是在特定的事件或条件发生时由另外的一方调用的，
//用于对该事件或条件进行响应

//例子:

//#include <stdio.h>
//
//void print(char* str)   //为什么传过来的是"bit",接收却是指针？因为"bit"是常量字符串，传过去的第一个元素的地址，既然是地址，就应该用指针接收
//						//“bit”是常量字符串，是const char类型
//{
//	printf("%s\n", str);
//}
//
//void test(void (*p)(char*))
//{
//	printf("test\n");
//	p("bit");
//}
//
//int main()
//{
//	test(print);
//
//	return 0;
//}





//#include <stdio.h>
//
//int add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	//指针数组
//	int* arr[10];
//
//	//数组指针
//	int(*pa)[10] = &arr;
//
//	//函数指针
//	int (*padd)(int, int) = &add;
//
//	//函数指针的数组
//	int (*parr[10])(int, int) = { padd };  //这里记住数组初始化要大括号哦{}
//
//	//指向函数指针数组的指针
//	int (*(*pparr)[10])(int, int) = parr;
//
//	return 0;
//}










//冒泡排序

//#include <stdio.h>
//
//void bubble_sort(int* arr, int sz)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz-1; i++)  //为什么这里是sz-1，因为i=0,10-1=9,i<9等于0到8，也就是9趟
//	{
//		
//		int tmp = 0;
//
//		for (j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	bubble_sort(arr, sz);
//
//	int i = 0;
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//
//	return 0;
//}

//冒泡排序的缺点就是只能排序整形的数组，浮点型什么的都不管用






//qsort - 快速排序(quick sort)

//qsort有4个参数
//void qsort( void *base,     - (目标数组的起始位置)数组首元素地址
//			  size_t num,     - 元素的个数 - sz
//            size_t width,   - 元素的大小(单位是字节) - szieof[0]
//            int (*compare )(const void *elem1, const void *elem2 ) );
//									      elem1和elem2是你要比较的两个元素的地址


//void*就是无类型指针，可以接收任意类型的指针类型地址，比如整型，字符，结构体
//#include <stdio.h>
//
//int main()
//{
//	int a = 10;
//	void* pa = &a;
//
//	//*pa = 0;		非法的间接寻址,这样写会报错，因为*解引用指针类型会决定访问几个字节
//	//				但是void是无类型指针，编译器不知道访问几个字节，会报错
//	//              对于void*类型的指针，不能进行解引用操作(非要解引用的话可以强制类型转换)
//	//              也不能进行+-整数的操作，比如pa++,pa+2,pa--
//	return 0;
//}



//qsort排序整数

//#include <stdio.h>
//
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
////关于compare要求
////Return  Value Description
////< 0     elem1 less than elem2
////  0     elem1 equivalent to elem2
////> 0     elem1 greater than elem2
//
//int main()
//{
//	int arr[10] = { 9,7,8,6,5,4,3,2,1,0 };
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//
//	int i = 0;
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//
//	return 0;
//}





//qsort排序浮点数

//#include <stdio.h>
//
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(float*)e1 - *(float*)e2;
//	
//	//*if(*(float*)e1 == *(float*)e2)
//	//		return 0;
//	//else if(*(float*)e1 > *(float*)e2))
//	//		return 1;
//	//else
//	//		return -1;
//}
//
//int main()
//{
//	float arr[3] = { 9.0,8.9,3.2 };
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//
//	int i = 0;
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%f\n", arr[i]);
//	}
//
//	return 0;
//}






//结构体qsort排序

//#include <stdio.h>
//
//struct stu
//{
//	char name[20];
//	int age;
//};
//
//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
//	//这里结构体不用解引用, ->可以直接指向那个值
//}
//
//int cmp_stu_by_name(const void* e1, const void* e2)
//{
//	//比较名字就是比较字符串
//	//字符串比较不能直接用><=来比较,应该用strcmp函数，需要引<string.h>的头文件
//	//第一个字符串大于第二个字符串，返回1，等于返回0，小于返回-1
//	//strcmp比较字符串的Ascii码，第一个字母相同，再比较第二个，以此类推，直到遇到俩不相同的字母，前者大于后者返回正数，反之返回负数
//	//比较的是首个不同字符的Ascii码值,也就是比z l w
//	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
//}
//
//int main()
//{
//	struct stu s1[3] = { {"zhangsan",20},{"lisi",23},{"wangwu",34} };
//
//	int sz = sizeof(s1) / sizeof(s1[0]);
//
//	qsort(s1, sz, sizeof(s1[0]), cmp_stu_by_name);
//	//这里的sizeof计算的大小是大于等于age和name的，后面结构体会讲这个
//
//	int i = 0;
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\t", (s1[i]).age);
//	}
//
//	return 0;
//}



//qsort排的是数组

//void qsort(void* base,
//		   size_t num, 
//	       size_t width,
//	       int(* compare)(const void* elem1, const void* elem2));

//第一个参数：待排序数组的首元素地址
//第二个参数：待排序数组的元素个数
//第三个参数：待排序数组的每个元素的大小-(单位是字节)
//第四个参数：是函数指针，比较两个元素的所用函数的地址-这个函数使用者自己实现
//           函数指针的两个参数是：带比较的两个元素的地址

//为什么是这4个参数？ 有了首元素地址就能找到这个数组，传过去数组的元素个数就知道这数组有多少个元素，
//再加上每个元素的大小，这样整个数组的的信息就全了






//改造冒泡排序，使得所有数据类型都得以排序

//#include <stdio.h>
//
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
//void swap(char* buf1, char* buf2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	//进行交换的时候，要解引用，解引用只会访问一个字节，因为是char类型,
//	//所以要交换两个未知大小的变量，就得for循环宽度大小次数
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//
//void bubble_sort(void* base, int sz, int width,int(*cmp)(void*e1,void*e2)) 
////					   为了保证能接收任何类型的数据，用void*base
////                     但由于传进来的类型是void*,不能解引用，不知道具体大小，所以要传元素个数sz和元素大小width
////                     为什么cmp用int来接收，因为还是按照大于返回1，等于返回0，小于返回-1的理念来设计这个比较函数
////                     实现bubble_sort函数的程序员，不知道未来排序的数据类型，所以接收比较函数用两个void*
//{
//	int i = 0;
//
//	for (i = 0; i < sz; i++)
//	{
//		int j = 0;
//
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
//			{
//				//char*强制类型转换就只能访问一个字节，一个字节在乘以一个字节的大小(宽度width),就能访问任何数据的一个大小了
//				//交换
//				swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//			}
//
//		}
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//
//	int i = 0;
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//
//	return 0;
//}








//题目:sizeof整形数组


//数组名是首元素地址
//除了以下两种情况，其余所有情况数组名都是首元素地址
//1.sizeof(数组名) - 数组名表示整个数组
//2.&数组名 - 数组名表示整个数组

//#include <stdio.h>
//int main()
//{
//	int a[] = { 1,2,3,4 };
//	printf("%d\n", sizeof(a));		//这是第一种情况，sizeof(数组名)，所以结果是整个数组的大小
//	printf("%d\n", sizeof(a+0));    //这种情况不是以上两种情况，所以数组名是首元素的地址，首元素地址+0还是首元素地址，地址的大小就是4/8字节
//	printf("%d\n", sizeof(*a));		//数组名是首元素地址，*a就会解引用找到那个首元素，sizoef(*a)就是4
//	printf("%d\n", sizeof(a+1));	//这种情况不是以上两种情况，数组名是首元素地址，a+1就是数组的第二个元素的地址，地址的大小就是4/8个字节
//	printf("%d\n", sizeof(a[1]));   //第二个元素的大小
//	printf("%d\n", sizeof(&a));		//&a取出的是数组的地址，但是数组的地址也是地址，地址的大小就是4/8个字节
//	printf("%d\n", sizeof(*&a));	//int类型的地址解引用访问4个字节，char类型的地址解引用访问1个字节，数组类型的地址解引用访问一个数组大小的字节
//									//*和&抵消了，其实计算的是sizoef(a)
//									//&a数组的地址，数组的地址解引用访问的数组，sizeof计算的就是数组的大小单位是字节
//	printf("%d\n", sizeof(&a+1));	//取地址取的是整个数组的地址，&a+1还虽然地址跳过整个数组，但还是地址，大小就是4/8
//	printf("%d\n", sizeof(&a[0]));	//&a[0]是第一个元素的地址
//	printf("%d\n", sizeof(&a[0]+1));//取地址a第一个元素地址，再+1就是第二个元素的地址，既然是地址，结果就是4/8
//
//	return 0;
//}



//题目：sizeof字符数组

//#include <stdio.h>
//
//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//
//	printf("%d\n", sizeof(arr));	  //sizeof计算的是整个数组的大小，6*1 = 6bite
//	printf("%d\n", sizeof(arr+0));    //arr是首元素的地址，arr+0还是首元素地址，既然是地址，就占4/8个字节
//	printf("%d\n", sizeof(*arr));	  //arr是首元素的地址，*arr就是首元素解引用
//	printf("%d\n", sizeof(arr[1]));
//	printf("%d\n", sizeof(&arr));     //&arr是取的整个数组的地址，既然是地址，那就是4/8个字节
//	printf("%d\n", sizeof(&arr+1));   //&arr+1是跳过整个数组后的地址，既然是地址，地址大小就是4/8个字节
//	printf("%d\n", sizeof(&arr[0]+1));
//
//	return 0;
//}




//题目：strlen字符数组

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f'};
//
//	printf("%d\n", strlen(arr));			//1.随机值
//	printf("%d\n", strlen(arr+0));			//2.arr是首元素地址，+0还是首元素地址，结果和1一样是随机值
//	//printf("%d\n", strlen(*arr));			//3.strlen只能接收地址,*arr就是解引用第一个元素，也就是a,a在ASCII码表里是97，strlen 97会报错error
//	//printf("%d\n", strlen(arr[1]));		//4.arr[1]就是数组第二个元素，就是b,在ASCII表里是98，传98过去也会报错
//	printf("%d\n", strlen(&arr));			//5.取的是整个数组的地址，但数组下标还是0，从第一个元素开始找'\0'，数组里没有'\0',继续往后找，所以是随机值
//											//1,2,5虽然都是随机值，但它们的值都是一样的
//	printf("%d\n", strlen(&arr+1));			//6. 6虽然是随机值，但6和1，2，5的值一定相差sz(元素个数)
//	printf("%d\n", strlen(&arr[0] + 1));	//7. 7虽然也是随机值，但一定比1，2，5相差1
//
//	return 0;
//}



//题目：sizeof字符串数组

//#include <stdio.h>
//
//int main()
//{
//	char arr[] = "abcdef";
//
//	printf("%d\n", sizeof(arr));		//字符串数组初始化会把'\0'放进去
//	printf("%d\n", sizeof(arr+0));
//	printf("%d\n", sizeof(*arr));
//	printf("%d\n", sizeof(arr[1]));
//	printf("%d\n", sizeof(&arr));
//	printf("%d\n", sizeof(&arr+1));
//	printf("%d\n", sizeof(&arr[0]+1));
//
//	return 0;
//}



//题目：strlen字符串

//#include <stdio.h>
//
//int main()
//{
//	char arr[] = "abcdef";
//
//	printf("%d\n", strlen(arr));
//	printf("%d\n", strlen(arr+0));
//	//printf("%d\n", strlen(*arr));			  //会报错，strlen接受的是地址，*arr传过去的是'a',编译器以为'a'是地址，就当成地址进行strlen计算,'a'在ASCII表里是97
//	//printf("%d\n", strlen(arr[1]));		  //error
//	printf("%d\n", strlen(&arr));			  //&arr的类型是char (*p)[7] = &arr,但strlen的参数类型是const char*,这两个类型不兼容,有可能会报错，但vs2022居然没报错
//											  //&arr是整个数组的地址，但计算还是从0下标开始算
//	printf("%d\n", strlen(&arr+1));			  //&arr+1是跳过一整个数组，数组后面是未知，所以是随机数
//	printf("%d\n", strlen(&arr[0]+1));	      //数组下标0+1就是第二个元素'b'，从b开始数到\0刚好5个元素
//
//	return 0;
//}





//sizeof指针

//#include <stdio.h>
//
//int main()
//{
//	char* p = "abcdef";
//
//	printf("%d\n", sizeof(p));		//p存放的是常量字符串"abcdef"第一个元素的地址 4/8
//	printf("%d\n", sizeof(p+1));	//p存放的是第一个元素的地址，p+1就是常量字符串的第二个元素的地址
//									//int arr[10]	arr[0]== *(arr+0)== *(p+0) == 'a'
//	printf("%d\n", sizeof(*p));	
//	printf("%d\n", sizeof(p[0]));
//	printf("%d\n", sizeof(&p));
//	printf("%d\n", sizeof(&p+1));
//	printf("%d\n", sizeof(&p[0] + 1));  //p[0]得到的是a,&a是a的地址,a的地址+1就是a后面那个元素的地址，也就是'b'的地址
//
//	return 0;
//}





//#include <stdio.h>
//
//int main()
//{
//	char* p = "abcdef";
//
//	printf("%d\n", strlen(p));		//p是首元素地址，从p开始往后找，直到找到\0为止
//	printf("%d\n", strlen(p+1));
//	//printf("%d\n", strlen(*p));	//error,strlen里面只能放地址，只要不是地址就会报错
//	//printf("%d\n", strlen(p[0])); //同上
//	printf("%d\n", strlen(&p));		//是随机值，取到p的地址(也就是a的地址)之后往后数
//									//一直往后数数到\0为止,由于地址是不可预测的，不知道什么时候才会取到\0
//									//所以是随机值
//									//假设a的地址是0x0012ff44，由于是小端存储,内存中显示是44 ff 21 00
//	                                //直到找到\0为止,strlen(a)就是3
//									//p是一个指针，存放的是地址,&p就是取整个指针变量p的地址，是地址的地址
//	                                //strlen(p)的话是常量字符串首元素的地址，strlen(&p)是p的地址
//	printf("%d\n", strlen(&p+1));	//同上
//	printf("%d\n", strlen(&p[0] + 1));
//
//	return 0;
//}




//#include <stdio.h>
//
//int main()
//{
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));			//整个数组
//	printf("%d\n", sizeof(a[0][0]));	//第一行第一个元素
//	printf("%d\n", sizeof(a[0]));		//a[0]相当于第一行作为一维数组的数组名，数组名单独放在sizeof()内，符合两条情况之外中的一条，计算的是第一行的大小
//	printf("%d\n", sizeof(a[0]+1));     //a[0]如果单独放在sizeof()里就是二维数组第一个元素,但如果a[0]放在表达式里a[0]+1，那么a[0]就是二维数组第一个元素的第一个元素的地址
//	                                    //a[0][0]==a[0]+0
//	                                    //a[0]是第一行的数组名,数组名此时是首元素的地址,a[0]其实就是第一行第一个元素的地址
//	                                    //所以a[0]+1就是第一行第二个元素的地址,地址大小是4/8个字节
//	printf("%d\n", sizeof(*(a[0]+1)));
//	printf("%d\n", sizeof(a+1));        //除两种特殊情况之外，数组名都是首元素地址，二维数组的首元素地址+1是第二行的地址
//	printf("%d\n", sizeof(*(a+1)));     //sizeof(*(a+1)) == sizeof(a[1]),第二行数组的大小，单位是字节
//	printf("%d\n", sizeof(&a[0]+1));    //a[0]是第一行的数组名,数组名取地址取出的是第一行的地址，第一行地址+1就是第二行地址,sizeof(&a[0]+1) == sizeof(a+1)  
//	printf("%d\n", sizeof(*(&a[0] + 1)));
//	printf("%d\n", sizeof(*a));			//a是首元素地址，是第一行的地址
//	printf("%d\n", sizeof(a[3]));		//sizeof内部的表达式是不参与真实运算的，只是根据类型计算大小，a[3]是一个包含4个整形的一维数组，所以答案是16
//
//	return 0;
//}


//总结
//1.sizeof(数组名),这里的数组名表示整个数组,计算的是整个数组的大小
//2.&数组名，这里的&数组名不管是单独出现还是在括号里表达式里，都是取整个数组地址,这里的数组名表示整个数组，取出的是整个数组的地址
//3.除了sizeof(数组名)和sizeof(&arr),其余所有数组名都是首元素的地址,而二维数组的首元素地址是一维数组
//二维数组中的arr[i]表示数组名,二维数组sizeof(arr[i])就是计算二维数组中第n行的总大小










//指针笔试题目:

//指针笔试题1

//#include <stdio.h>
//
//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));
//	return 0;
//}

//&a是取a的整个地址,+1就是跳过一个数组类型,由于此时a的类型是数组指针类型
//所以把a给强制类型转化成int*类型再放到*ptr里，ptr存放的就是a数组+1的地址,再-1就是5




//指针笔试题2：
//题目：已知结构体test类型的变量大小是20个字节

//#include <stdio.h>
//
//struct test
//{
//	int Num;
//	char *pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}* p;
//
//int main()
//{
//	p = (struct test*)0x100000;
//	printf("%p\n", p + 0x1);					//p+1,p是结构体变量,+1就是加20个字节,0x100000(16进制)+20(10进制)就是0x100014
//	printf("%p\n", (unsigned long)p + 0x1);     //强转成长整型，+1就是跳过4个字节，就是+1，结果就是0x100001
//	printf("%p\n", (unsigned int*)p + 0x1);		//强转成int*,指针+-整数取决于指针类型，int*+1就是+4
//	printf("%p\n", (unsigned int)p + 0x1);		
//
//	return 0;
//}

//第二个printf,强转成整形，加多少就是多少
//第三个printf,强转成指针，指针+-整数取决于指针类型





//指针笔试题3：
//题目：输出结果是什么

//#include <stdio.h>
//
//struct test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
//
//int main()
//{
//	p = (struct test*)0x100000;
//
//	printf("%p\n", (unsigned int*)p + 0x1);
//
//	return 0;
//}





//指针笔试题4：

//#include <stdio.h>
//
//int main()
//{
//	int a[4] = { 1,2,3,4 };
//	int *ptr1 = (int *)(&a + 1);
//	int *ptr2 = (int *)((int)a + 1);
//
//	printf("%x,%x", ptr1[-1], *ptr2);
//
//	return 0;
//}

//内存中最小的单位是字节，每个字节都占据一个地址，两个相邻的地址差一个字节，所以地址+1就是向后偏移一个字节

//ptr2的输出
//数组的声明是从左到右，地址逐渐增大,数组左边是低地址，右边是高地址
//由于机器是小端存储模式,存储的地址就是 01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00
//ptr2 , 假设a的地址是0x00 00 00 05,强制转换成int就是5，5+1就是6,地址+1就是加一个字节
//6再强制类型转换成int*(地址),就是0x 00 00 00 06 , a和a+1差了一个字节，此时ptr2的位置在
//01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00
//  ^
//ptr2是整形指针，解引用访问四个字节，也就是：
//00 00 00 02
//倒着读就是0x 02 00 00 00，也就是2


//ptr1输出
//prt[-1] == *(ptr + -1) == *(ptr-1)  ptr1的位置在
//01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00
//                                              ^
//ptr是整形指针，ptr-1解引用就是向前挪动4个字节
//01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00
//                                    ^
//从这个位置解引用，访问4个字节，也就是04 00 00 00
//由于是小端存储，还原回来就得倒着读就是0x 00 00 00 04 就是 4






//指针笔试题5：

//#include <stdio.h>
//
//int main()
//{
//	int a[3][2] = { (0,1),(2,3),(4,5) };
//
//	int* p;
//	p = a[0];
//
//	printf("%d\n",p[1]);
//
//	return 0;
//}

//数组里面是逗号表达式,三个逗号表达式结果是1,3,5 ;这个数组开辟了6块空间,但只初始化了3块空间(1,3,5),
//剩下的没有初始化就为0，相当于a[3][2] = {{1,3},{5,0},{0,0}}

//a[0]就是第一行的数组名,数组名就是首元素地址,放进p，打印p[0]，p[0]就是等于p+0括号括起来解引用 == *(p+0)





//指针笔试题6:

//#include <stdio.h>
//
//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p , %d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//
//	return 0;
//}

//先找到a[4][2],比较简单
//[][][][][] [][][][][] [][][][][] [][][][][] [][][][][]
//[4][2]就是第五行第三个元素
//[][][][][] [][][][][] [][][][][] [][][][][] [][][*][][]
//   a[0]       a[1]       a[2]       a[3]        a[4]



//然后找p[4][2]在哪
//p = a,把a的首元素地址放到P里面,也就是二维数组a[5][5]的第一行a[5]
//p指向的位置是
//[][][][][] [][][][][] [][][][][] [][][][][] [][][][][]
//^
// 
//因为p是指向整形数组的指针,数组指针类型是int(*)[4]，+1就是跳过4个字节
//如果数组指针类型是int(*)[5],那就是跳过5个字节,相当于+1跳过一个数组指针类型
//p[4]的位置是
//[][][][][] [][][][][] [][][][][] [][][][][] [][][][][]
//       ^        ^        ^        ^
//      p[1]     p[2]     p[3]     p[4]
//      p+1      p+2      p+3      p+4   

//p[4][2] 等价于 p先加上一个4再解引用,再+2整体括起来再解引用 == *(*(p+4)+2)
//p+4跳过4个数组指针类型(也就是加一个数组)，解引用后得到的是数组的首元素地址(这个位置的数组名),再+2就是加两个int
//p[4][2]的位置是:
//[][][][][] [][][][][] [][][][][] [][][][*][] [][][][][]
//                                       ^

//a[4][2]的位置是:
//[][][][][] [][][][][] [][][][][] [][][][][] [][][*][][]
//                                                 ^

//&p[4][2] - &a[4][2]   
//指针与指针相减，得到的是指针与指针之间的元素个数
// 打印%p：得-4，-4打印%p就是打印补码的直接值,-4转成补码是11111111 11111111 11111111 11111100
//打印%d就是直接打印出来,打印%p就是打印地址，地址是无符号数，打印出来是0xFFFFFFFC





//指针笔试题7：

//#include <stdio.h>
//
//int main()
//{
//	int arr[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	int* ptr1 = (int*)(&arr + 1);
//	int* ptr2 = (int*)(*(arr + 1));
//
//	printf("%d %d\n", *(ptr1 - 1), *(ptr2 - 1));
//
//	return 0;
//}

//*(ptr+1) == *(arr+1) == arr[1] ==ptr[1]
//虽然是写成数组的形式，但是编译器依然会把ptr[1]转换成ptr+1的形式进行计算

//首先二维数组里没有大括号区分，但是会自动存储进二维数组里面
//相当于arr[2][5] = {{1,2,3,4,5},{6,7,8,9,10}};

//ptr1 取地址arr加一(&arr+1)取的是整个地址，类型是数组指针类型，放到int*里面会警告,所以强制类型转换成int*放到int*里,
//此时取地址加一就是加整个地址,此时ptr1的位置为:
//[1][2][3][4][5] [6][7][8][9][10]
//                               ^
//ptr1-1，由于是整形指针，所以-1减去一个整形

//ptr2 arr是首元素地址,二维数组首元素地址是第一行，加一是跳过一行，此时ptr2的地址是
//[1][2][3][4][5] [6][7][8][9][10]
//                ^
//*(arr+1) == arr[1] 等于arr的数组名 等于第二行首元素的地址
//*(arr+1)其实不需要强转成(int*)，因为*(arr+1)是6，6的地址类型本身就是int*
//ptr2-1，由于是整形指针，所以-1减去一个整形







//指针笔试题8：
//
//#include <stdio.h>
//
//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//
//	char** pa = a;
//
//	pa++;
//
//	printf("%s\n", *pa);
//
//	return 0;
//}


//char* p = "abcdef";	p指针存储的是常量字符串abcdef里a的地址

//同理，a[]里存储的是首元素的地址,也就是work的地址，

//int *pa+1 等于pa跳过一个int类型的地址,
//char**pa+1等于pa跳过一个char*类型的地址

//a[]里有三个常量字符串,每个常量字符串都是以首元素地址存储的
//a[]里存的就是'w','a','a'的地址，存进去的类型是char*

//pa++就是跳过一个char*，也就是at




//笔试题目9 ：

//#include <stdio.h>
//
//int main()
//{
//	char* c[] = { "ENTER","NEW","POINT","FIRST" };
//	char**cp[] = { c + 3,c + 2,c + 1,c };
//	char***cpp = cp;
//
//	printf("%s\n", **++cpp);
//	printf("%s\n", *--*++cpp+3);
//	printf("%s\n", *cpp[-2]+3);
//	printf("%s\n", cpp[-1][-1]+1);
//
//	return 0;
//}


//内存图
//cpp			cp			c
//char***		c+3			"ENTER"
//				c+2			"NEW"
//				c+1			"POINT"
//				c			"FIRST"



//#include <stdio.h>
//
//int main()
//{
//	int a = 10;
//	printf("%d\n", ++a);
//	printf("%d\n", a + 10);
//	printf("%d\n\n", a + 10);
//
//	printf("%d\n", sizeof(a++));
//	printf("%d\n", a);
//
//	return 0;
//}
//printf里面的++a或者a++都是进行实际运算的,但是a+10不是实际运算
//sizeof里的运算不是实际运算的，不管是a++/++a还是 a+10









//初级指针章节作业：




//#include <stdio.h>
//
//int main()
//{
//	unsigned long pulArray[] = { 6,7,8,9,10 };
//	unsigned long* pulPtr;
//
//	pulPtr = pulArray;
//	*(pulPtr + 3) += 3;
//
//	printf("%d,%d\n", *pulPtr, *(pulPtr + 3));
//
//	return 0;
//}


//pulPtr存放pulArray首元素地址，也就是6
//*（pulPtr+3)+=3  就是 *(pulPtr+3) = *(pulPtr+3)+3 ,就是把解引用pulPtr+3的那个元素加三再赋回给*(pulPtr+3)
//也就是把9+3的值赋给*(pulPtr+3)也就是第四个元素9 ，第四个元素最后等于12






//二级指针也是指针，是用来存放一级指针的地址的，不是用来存放数组的地址的,而且不会比一级指针更大,大小是4/8个字节

//指针减去指针得到的是指针和指针之间的元素个数

//指针可以比较大小





//写一个函数，能够逆序字符串的内容

//#include <stdio.h>
//#include <string.h>
//
//void test(char* arr, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//
//	while (left <= right)
//	{
//		char tmp = arr[left];
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
//	char arr[256] = { 0 };
//	scanf("%s", arr);
//
//	int sz = strlen(arr);
//
//	test(arr, sz);
//
//	printf("%s\n", arr);
//
//	return 0;
//}


//字符串求元素个数可以用strlen,遇到\0停止,sizeof的话会把\0也算进去,原本6个元素，sizeof输出是7
//字符数组可以用sizeof,不能用strlen,字符数组



//上面代码用指针实现

//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//
//void test(char arr[])
//{
//	assert(arr!=NULL);
//	//也可以assert(arr),意思是一样的，我猜的
//
//	char* left = arr;
//	int len = strlen(arr);
//	char* right = left + len-1;
//
//	while (left <= right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[254] = { 0 };
//
//	//scanf("%s", arr);
//	//如果传"hello bit"过去，只会输出olleh,因为scanf遇到空格就不会读取了
//	//所以可以用gets,gets就是读取一行的意思
//
//	gets(arr);
//
//	test(arr);
//
//	printf("%s\n", arr);
//
//	return 0;
//}





//编程题：计算求和

//题目内容 求Sn = a+aa+aaa+aaaa+aaaaa的前五项之和,其中a是一个数字
//例如：2+22+222+2222+22222

//#include <stdio.h>
//
//int test(int* pa,int sum)
//{
//	int count = 0;
//	int digital = 1;
//	int base = *pa;
//
//	while (count < 4)
//	{
//
//		digital *= 10;
//		*pa += (base * digital);
//		sum += *pa;
//		count++;
//	}
//	return sum;
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//
//	int sum = a;
//
//	int ret = test(&a,sum);
//
//	printf("%d\n", ret);
//
//	return 0;
//}



//鹏哥写的
//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d %d", &a, &n);
//
//	int ret = 0;
//	int sum = 0;
//	int i = 0;
//
//	for (i = 0; i < n; i++)
//	{
//		ret = ret * 10 + a;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}









//题目：求0-100000的所有水仙花数(自幂数)
//水仙花数：这个数是几位数，n就是几,每一位的n次方之和等于这个数，这个数就是水仙花数
//eg:153   1^3 + 5^3 + 3^3 = 153

//#include <stdio.h>
//
//int num_t(int i)
//{
//	int count = 0;
//	while (i > 0)
//	{
//		i /= 10;
//		count++;
//	}
//	return count;
//}
//
//int mul(int n, int num)
//{
//	int l = 0;
//	int result = 1;
//	for (l = 0; l < num; l++)
//	{
//		result *= n;
//	}
//	return result;
//}
//
//int main()
//{
//	int i = 0;
//
//	for (i = 0; i < 100000; i++)
//	{
//		int sum = 0;
//		int num = num_t(i);	  //这个函数的作用是求这个数是几位数
//
//
//		int j = 0;			//这里的作用是把每一位给取出来,如752,把7 5 2分别取出来
//		int ret = i;
//		for (j = 0; j < num; j++)
//		{
//			int n = ret % 10;
//			ret /= 10;
//
//			int p = mul(n, num);
//			sum += p;
//
//		}
//		if (sum == i)
//		{
//			printf("%d\n", sum);
//		}
//	}
//
//	return 0;
//}




//pow( 3,5 )， pow是一个数学函数,可以计算次方，要引<math.h>的头文件,例子是3的5次方的意思
//如果是pow(5,3),那就是5的3次方
//pow返回的是一个double型的数字,所以应该用double接收,或者强制类型转换

//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//	int a = 5;
//
//	int ret = pow(a, 3);
//
//	printf("%d\n", ret);
//
//	return 0;
//}



