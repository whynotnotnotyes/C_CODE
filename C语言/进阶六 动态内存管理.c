#define _CRT_SECURE_NO_WARNINGS 1



//进阶第五章：动态内存管理

//导航：
//为什么会存在动态内存分配
//动态内存函数的介绍：malloc  free  calloc  realloc
//常见的动态内存错误
//几个经典的笔试题
//柔性数组





//为什么会存在动态内存分配：

//我们已经掌握的内存的使用方式(内存的开辟方式)：

//1.创建一个变量
//int a = 10;  局部变量 - 栈区
//int g_a = 10; 全局变量 - 静态区

//三大区：栈区，堆区，静态区
//栈区里存放：局部变量，函数的形式参数
//堆区：动态内存分配,malloc,free,calloc,realloc
//静态区：全局变量，静态变量


//2.创建一个数组
//int arr[10]
//局部变量的数组放在栈区里，全局变量的数组放在静态区里


//当前这两种方式不能满足我们想创建多大空间就创建多大空间的需求
//所以出现了动态内存分配

//上面两种开辟空间的方式有两个特点：
//1.空间开辟大小是固定的
//2.数组在申明的时候，必须指定数组的长度，它所需要的内存在编译时分配


//但是对于空间的需求，不仅仅是上述的情况。有时候我们需要的空间大小在程序上运行的时候才知道，
//那数组编译时开辟空间的方式就不能满足了。这时候只能试试动态内存开辟了
//动态内存分配是在堆上申请空间的

//之前写的通讯录，一开始就开辟了1000个空间，但如果我只有三个好友，那997个空间就浪费了
//通过学习动态内存分配，可以实现想增加一个单位就增加一个单位，避免浪费提高效率





//动态内存函数

//malloc
//向内存申请空间
//MSDN：void* malloc( size_t size );
//需要引<stdlib.h>的头文件


//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <errno.h>
//
//int main()
//{
//	//malloc向内存申请一块连续可用的空间，并且返回这块空间的起始地址,这就是动态内存开辟
//	int* p = (int*)malloc(10 * sizeof(int));
//	//malloc返回的起始地址类型是void*,开辟的是10个int，就强转int*并用int*接收
//	//返回值的类型是void*,所以malloc函数并不知道开辟空间的类型，具体在使用的时候使用者自己来决定
//
//	//当正常开辟成功会返回开辟空间的起始地址的指针，如果没有足够内存，会返回NULL(空指针),也就是开辟失败了
//	//如果把10*sizeof(int)改成10*INT_MAX,就会报错,因为内存太大了，没有足够的空间开辟
//	//因此malloc函数的返回一定要做检查
//
//	if (p == NULL)
//	{
//		//如果开辟空间失败，打印错误信息
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p+i));
//		}
//	}
//
//	//当动态申请的空间不再使用的时候
//	//就应该还给操作系统
//	//C语言提供了另外一个函数free,专门用来做动态内存的释放和回收的
//	//free()
//
//	free(p);
//	//就算没有free,当代码的生命周期结束的时候，也会返还内存给操作系统
//	//free是主动释放动态内存空间
//	//当p被free释放完了之后，仍然可以通过p找到这块空间，
//	//如果想让p彻底断了的话,free完之后要置空NULL
//	//malloc和free要成对使用，你要有malloc,就得要有free
//
//	return 0;
//
//}

//free函数用来释放动态开辟的内存，free一定是free堆区上的空间
//如果参数ptr指向的空间不是动态开辟的，那free函数的行为是未定义的。像数组这种是不需要free的
//如果参数ptr是NULL指针，则free函数什么事都不会做








//calloc
//作用是开辟空间并且把元素初始化为0
//MSDN：void* calloc(size_t num, size_t size);
//num是几个元素的意思，size是元素的大小，单位是字节
//开辟内存大小的结果是num*size  比如calloc(10,3),就是开辟30个字节

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <errno.h>
//
//int main()
//{
//	//开辟10个int大小的空间
//	//malloc(10*sizeof(int));
//	//calloc(10, sizeof(int));
//	//malloc和calloc的区别：使用上不同，还有就是calloc会初始化空间为0，malloc不会
//	//malloc效率更高一些，因为不用初始化，开辟好空间就把起始地址返回回来了
//
//	int* p = (int*)calloc(10, sizeof(int));
//
//	int i = 0;
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p+i));
//		}
//	}
//
//
//	free(p);
//	p = NULL;
//
//	return 0;
//}









//realloc
//MSDN：void *realloc( void *ptr, size_t size );
//ptr是要调整的内存地址
//size是调整之后新的大小
//返回值为调整之后的内存起始位置
//这个函数调整原内存空间大小的基础上，还会将原来内存中的数据移动到新的空间
//realloc在调整内存空间时存在两种情况：
//情况1：原空间后面有足够大的空间
//情况2：原空间后面没有足够大的空间

//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//#include <errno.h>
//
//int main()
//{
//	int* p = (int*)calloc(20,1);
//
//
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 5; i++)
//		{
//			*(p + i) = i;
//		}
//
//		for (i = 0; i < 5; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	printf("\n");
//	//在使用malloc开辟的20个字节空间
//	//假设这里，20个自己二不能满足我们的使用了
//	//希望我们能够有40个字节的空间
//	//这里就可以使用realloc来调整动态开辟的内存
//
//
//	//当用realloc在栈区中追加一定的字节时，有两种情况：
//	// 1.一种情况是malloc/calloc开辟的字节空间，后面还有足够的空间可以追加,因为内存里面的数据是连续存储的，
//	//如果往一个已经开辟好的空间追加,就要考虑后面空间够不够的情况,够就往后追加,并且返回原来的地址
//
//	//2.如果后面空间不够，强行追加字节，就会造成非法访问的情况，所以realloc会重新开辟一块空间，并且把原来的
//	//元素内容给拷贝到新空间里面，既然开辟了新的空间，那就会返还新的内存空间的地址回来,原内存空间就释放掉了
//
//
//	int* p2 = realloc(p, 40);
//	//这里不能写成int* p = realloc(p,40),因为如果往后追加空间不够，就会创建新空间，原内存空间p会被释放
//	//所以不能写p
//	//如果realloc开辟失败了，就会返回NULL，并且原空间开辟的内存会被释放掉
//  //realloc不管是开辟成功还是开辟失败，原空间都会被释放掉
//
//	//所以为了防止追加失败，原内存还被释放掉的情况出现
//	//就要这样写，当开辟不成功时，NULL就会赋给p2,开辟成功了，再把p2赋回给p
//	if (p2 != NULL)
//	{
//		p = p2;  //这里p,p2只是一个指针，大小只占4/8字节，不会太大
//
//		int i = 0;
//		for (i = 5; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	free(p);
//	p = NULL;
//
//	return 0;
//}


//realloc函数的出现让动态内存管理更加灵活
//有时我们会发现过去申请的空间太小了，有时候我们又会觉得申请的空间太大了，那为了合理的使用内存，
//我们一定会对内存的大小做灵活的调整。那realloc函数就可以做到对动态开辟内存大小的调整。









//常见的动态内存错误


//1.对NULL指针的解引用操作

//#include <stdio.h>
//
//int main()
//{
//	int* p = (int*)malloc(20);
//	//万一malloc失败了，p就被赋值为NULL空指针，所以malloc一定要进行返回值的判断
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 0;
//	}
//}



//2.对动态开辟空间的越界访问

//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int* p = (int*)malloc(20);
//
//	if (p == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		int i = 0;
//
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//	}
//
//	free(p);
//	p = NULL;
//	//free一定是free堆区上的空间
//
//	return 0;
//}




//realloc也可以单独使用开辟内存

//int* p = realloc(NULL, 40);   //这种写法等价于mallic(40)
//但是第一个参数要给NULL;
//单独使用realloc开辟的空间也是未初始化的

//#include <stdio.h>
//#include <stdlib.h>
//#include <errno.h>
//
//int main()
//{
//	int* p = realloc(NULL, 40);
//
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//
//	int i = 0;
//	
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//
//	free(p);
//	p = NULL;
//
//	return 0;
//}


//3.对非动态开辟内存使用free释放

//void test()
//{
//	int a = 10;
//	int* p = &a;
//	free(p);
//}



//4.使用free释放一块动态开辟内存的一部分

//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int* p = (int*)malloc(40);
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*p++ = i;
//	}
//
//	free(p);
//	p = NULL;
//	//为什么会报错？因为p++，p已经改变了，后面的内存不是动态开辟的，
//	//经过一轮循环，p已经指到最后去了，free应该是释放动态内存p开辟的起始位置
//
//
//	return 0;
//}



//5.对同一块动态内存的多次释放

//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int* p = (int*)malloc(40);
//
//	if (p == NULL)
//	{
//		return 0;
//	}
//
//	free(p);
//	//...
//	//p = NULL;
//
//	free(p);
//
//	return 0;
//}

//当动态内存空间被释放掉之后，那块空间就不是动态内存了，再free释放掉就会报错
//为了防止这种情况发生，free完了之后要及时置空NULL
//因为p置成NULL了之后，不小心再free也没事，free(NULL)不会进行任何的释放操作





//6.动态开辟内存忘记释放(内存泄露)

//#include <stdio.h>
//#include <stdlib.h>
//
//void test()
//{
//	int* p = (int*)malloc(100);
//	if (NULL!= p)
//	{
//		*p = 20;
//	}
//}
//
//int main()
//{
//	test();
//	//当test调用结束，你想要主动释放都释放不了，因为malloc是在函数里面开辟的，当函数调用结束时
//	//p是临时变量，出了函数p就销毁，就不知道p的地址在哪了，到时候想释放也释放不了
//	//解决办法有两种，1.在函数内部用完就释放   2.把p的地址返回去再释放
//	return 0;
//}

//malloc会开辟内存，一直开辟不释放内存就会爆满





//总结：忘记释放不再使用的动态开辟的空间会造成内存泄露。
//动态开辟的空间一定要释放，并且正确的释放









//动态内存经典笔试题



//笔试题1：下面代码有什么问题

//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello,world");
//	printf(str);  //这种写法没问题，等价于printf("%s",str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//1.运行代码程序会出现崩溃的现象
//2.程序存在内存泄露的问题
//str以值传递的形式给p
//p是GetMemory函数的形参，只能函数内部有效
//等GetMemory函数返回之后，动态开辟内存尚未释放
//并且无法找到，所以会造成内存泄露




//把上面代码改成正确的代码:


//方法1:

//#include <stdio.h>
//#include <stdlib.h>
//
//void GetMemory(char** p)  //2.str本身是指针，把指针的地址传过来，那就要用二级指针接收
//{
//	*p = (char*)malloc(100);   函数结束后只是p销毁了，p所指向的空间是不会销毁的
//	//3.把这个二级指针解引用才能找到p所指向的内容str
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);  //1.把传值改成传址
//	strcpy(str, "hello,world");
//	printf(str);  
//
//	//4.开辟动态内存空间之后要释放
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}



//方法2：

//#include <stdio.h>
//#include <stdlib.h>
//
//char* GetMemory(char* p)
//{
//	p = (char*)malloc(100); 
//	return p;
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory(str);
//	strcpy(str, "hello,world");
//	printf(str);  //这种写法没问题，等价于printf("%s",str);
//
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}









//笔试题2：下面代码会输出什么结果
//返回栈空间地址的问题

//char* GetMemory(void)
//{
//	char p[] = "hello world"; //栈区
//	//static char p[] = "hello world";  //静态区
//	return p;
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}


//p是局部变量，在栈区上开辟的空间，当出了函数，这块空间就销毁了，接下来是谁在用这块内存是未知的，
//如果访问就是非法访问，打印出来就是随机值,在char p[]上加上static就能成功运行







//#include <stdio.h>
//
//int* test()
//{
//	int* ptr = malloc(100);
//	return ptr;
//}
//
//int main()
//{
//	int* p = test();
//
//	return 0;
//}

//这样写也没问题，malloc开辟的空间不会随着栈区的销毁而销毁，malloc没有free就不会释放
//因为malloc是在堆区上开辟空间的，把开辟空间的地址返回去就没事
//但是ptr会被销毁掉,ptr所指向的100个字节的空间没有销毁
//100个字节的空间的地址通过ptr返回最终放到p里面去了





//笔试题3：下面代码有什么问题

//#include <stdio.h>
//#include <stdlib.h>
//
//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}


//没有free,存在内存泄露






//笔试题4：以下代码输出什么

//#include <stdio.h>
//#include <stdlib.h>
//
//void Test(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str); //free释放str指向的空间后，并不会把str置为NULL；
//	//当free(str)之后，没有置空，str就会变成野指针
//
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}
//
//int main()
//{
//	Test();
//
//	return 0;
//}

//申请的动态内存提前释放了，释放后的空间再次被访问就会出现非法访问









//c/c++程序的内存开辟

//内存中有内核空间，栈区，内存映射段，堆区，静态区(数据段)，代码段
//内核空间是给操作系统使用的，剩下的内存留给用户使用

//局部变量在栈上开辟空间，动态内存在堆上开辟空间，静态变量和全局变量在静态区开辟空间
//char* arr[] = "abcdef"   常量字符串放在代码段里，代码段里的数据是不能改的


//C/C++程序内存分配的几个区域：
//1.栈区(stack):在执行函数时，函数内局部变量的存储单元都可以在栈上创建，
//函数执行结束时这些存储单元自动被释放。栈内存分配运算内置于处理器的指令集中，效率很高，
//但是分配的内存容量有限。栈区主存放为函数而分配的局部变量.函数参数.返回数据.返回地址等

//2.堆区(heap):一般由程序员分配释放，若程序员不释放，程序结束时可能由OS(操作系统)回收。
//分配方式类似于链表

//3.数据段(静态区)(static)：存放全局变量，静态数据。程序结束后由系统释放。

//4.代码段：存放函数体(类成员函数和全局函数)的二进制代码。



//实际上普通的局部变量是在栈区分配空间的，栈区的特点是在上面创建的变量出了作用域就销毁。
//但是被static修饰的变量存放在数据段(静态区)，数据段的特点是在上面创建的变量，直到程序结束时才销毁，
//所以生命周期变长










//柔性数组(flexible array)
//C99中，结构中最后一个元素允许是未知大小的数组，这就叫做[柔性数组]成员
//结构体中柔性数组成员前面必须至少一个其他成员

//#include <stdio.h>
//#include <stdlib.h>
//
//struct S
//{
//	int n;
//	int arr[]; //是数组的最后一个元素，而且是未指定大小，未知大小的，这是其中一种写法，另一种是arr[0],一样的
//	//这种就叫做柔性数组成员,为什么叫柔性数组呢，因为数组的大小是可以调整的
//};
//
//int main()
//{
//	struct S s = { 0 };
//	
//	printf("%d\n", sizeof(s));
//	//在计算结构体大小的时候，不计算柔性数组成员的大小;
//
//	//如何调整柔性数组的大小？
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 5 * sizeof(int));
//
//	ps->n = 100;
//
//	//给柔性数组赋值
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;
//	}
//
//	//如果柔性数组不够大，那就扩大
//	struct S* ptr = (struct S*)realloc(ps, 44);
//
//	//由于用了realloc,就需要返回值判断
//	if (ptr != NULL)
//	{
//		ps = ptr;
//	}
//
//	//给扩大后的柔性数组赋值
//	for (i = 5; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//
//	//打印扩大后而且赋值后的柔性数组
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//
//	//malloc开辟的空间以后可以用realloc调整，所以这个数组是可变的
//
//	free(ps);
//
//	return 0;
//}




//用指针来模拟柔性数组：

//#include <stdio.h>
//#include <stdlib.h>
//
//struct S
//{
//	int n;
//	int* arr;
//};
//
//int main()
//{
//	struct S* ps = (struct S*)malloc(sizeof(struct S));
//  //结构体在定义的时候不会分配内存，在创建变量的时候才会分配空间
// 
//	ps->arr = (struct S*)malloc(5 * sizeof(int));
//
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;
//	}
//
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	printf("\n");
//
//
//
//	//调整数组大小
//	int* ptr = (int*)realloc(ps->arr, 40);
//	
//	if (ptr != NULL)
//	{
//		ps->arr = ptr;
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//
//
//	//释放内存
//	free(ps->arr);
//	ps->arr = NULL;
//	free(ps);
//	ps = NULL;
//	//先释放ptr再释放ps,不然先释放ps的话就找不到ps-arr了，ps->arr就释放不了造成内存泄露
//
//	return 0;
//}


//以上两种写法都能做到n后面有一块空间是可大可小的，区别在于第一种写法n和arr是连续存储的，
//第二种写法是用指针指向另一块空间,当内存是连续存放时，访问效率会更高
// 
// 存储结构：寄存器，cache(高速缓存),内存，硬盘,越往上速度越快，但是空间会越小
// 
//第一种只malloc了一次，结尾只用释放一次内存，第二种malloc了两次，需要释放两次,容易造成错误
//第二种情况开辟了两块空间，malloc用的越频繁，内存碎片出现的概率会越大
//第一种实现方式相对于第二种内存碎片要更少

//柔性数组的好处：1.方便内存释放，2.这样有利于访问速度



