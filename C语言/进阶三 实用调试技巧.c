#define _CRT_SECURE_NO_WARNINGS 1



//实用调试技巧

//什么是bug？
//调试是什么？有多重要？
//debug和release的介绍
//window环境调试介绍
//一些调试的实例
//如何写好(易于调试)的代码
//编程常见的错误



//调试的基本步骤
//1.发现程序错误的存在
//2.以隔离，消除等方式对错误进行定位
//3.确定错误产生的原因
//4.提出纠正错误的解决办法
//5.对程序错误予以改正，重新测试





//内存空间里有栈区，堆区，静态区
//栈区里面放:局部变量，函数的形式参数，函数调用也在栈区开辟空间
//堆区里面放:动态内存分配，malloc/free，realloc，calloc
//静态区里面放:全局变量，静态变量

//任何一次函数调用都会在内存里的栈区申请一块空间
//函数调用传参是先从右边开始传参  eg: add(a,b) 先把b传参

//函数传参的时候，参数是需要压栈的
//如果传递一个结构体对象的时候，结构体过大，参数压栈的系统开销比较大，所以会导致性能的下降
//所以结构体传参的时候，要传结构体的地址




//思考
//当你说出这种话：没有爱因斯坦，没有柏拉图，没有xxx，亦或者是如果苹果没有砸中牛顿的脑袋的话，现在的生活肯定不会像这样一样 等等类似的话的时候
//其实就已经说出了这种可能性的反面，已经自相矛盾了，即：历史上绝对会有某些时刻是令人可惜的，让人感叹到如果xxx没有死，如果那天是晴天，等等或者是类似的话，
//但事实上是，历史已经发展到现在这个时间了，根本就没有所谓的那种可能性，也就是历史没有如果





//Debug和Release的介绍
//Debug通常称为调试版本，它包含调试信息，并且不作任何优化，便于程序员调试程序
//Release称为发布版本，它往往是进行了各种优化，使得程序在代码大小和运行速度上都是最优解，以便用户很好地使用。
//Release是没有调试的，Debug版本内存占用更大



//断点
//F9 创建断点和取消断点，可以在程序的任意位置设置断点
//这样就可以使得程序在想要的位置随意停止执行，继而一步步执行下去


//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d\n", i);
//	}	
//	
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d\n", 10-i);
//		count++;
//	}
//
//	return 0;
//}



//调用堆栈

//#include <stdio.h>
//
//void test2()
//{
//	return 0;
//}
//
//void test1()
//{
//	test2();
//}
//
//void test()
//{
//	test1();
//}
//
//int main()
//{
//	test();
//
//	return 0;
//}



//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int i = 0;
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9 };
//	
//	printf("%p\n", &i);
//	printf("%p\n", arr);
//	
//
//	for (i = 0; i < 12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	system("pause");
//
//	return 0;
//}

//1.栈区的默认使用：
//先使用高地址的空间
//再使用低地址的空间

//2.数组随着下标的增长
//地址是由低到高变化



//Debug版本下的地址:i在上面，arr在下面
//000000C8DF9DF9D8
//000000C8DF9DF9B4

//Realease版本下的地址:i在下面，arr在上面
//00000090EEAFFE18
//00000090EEAFFE10

//在release版本下系统会自动对代码进行优化，甚至会改变内存分布结构





//#include <stdio.h>
//
//int main()
//{
//	char arr1[] = "#############";
//	char arr2[] = "bit";
//
//	strcpy(arr1, arr2);
//
//	printf("%s\n", arr1);
//
//	return 0;
//}





//模拟实现strcpy


//我写的

//#include <stdio.h>
//
//void mystrcpy(char arr1[], char arr2[],int sz)
//{
//	int i = 0;
//
//	while (i<=sz)
//	{
//		if (arr1 != '\0')
//		{
//			arr1[i] = arr2[i];
//			i++;
//		}
//	}
//
//}
//
//int main()
//{
//	char arr1[] = "##########";
//	char arr2[] = "biteoo";
//
//	int sz = sizeof(arr2) / sizeof(arr2[0]);
//
//	mystrcpy(arr1, arr2,sz);
//
//	printf("%s\n", arr1);
//
//	return 0;
//}





//#include <stdio.h>
//
//void mystrcpy(char* arr1, char* arr2)
//{
//	while (*arr2 != '\0')
//	{
//		*arr1 = *arr2;
//		*arr1++;
//		*arr2++;
//	}
//	*arr1 = *arr2;
//}
//
//int main()
//{
//	char arr1[] = "###############";
//	char arr2[] = "bit";
//
//	mystrcpy(arr1, arr2);
//
//	printf("%s\n", arr1);
//
//	return 0;
//}



//方法3：超级缩略优化版本1.0

//#include <stdio.h>
//
//void mystrcpy(char* arr1, char* arr2)
//{
//	while (*arr1++ = *arr2++ )
//	{
//		;
//	}
//	//当遇到循环出来条件为\0的循环时，可以直接把循环内部的表达式缩略为循环条件，条件为0，循环就退出
//}
//
//int main()
//{
//	char arr1[] = "###############";
//	char arr2[] = "bit";
//
//	mystrcpy(arr1, arr2);
//
//	printf("%s\n", arr1);
//
//	return 0;
//}



//优化版本2.0

//#include <stdio.h>
//
//void mystrcpy(char* arr1, char* arr2)
//{
//	if (arr1 != NULL && arr2 != NULL) //这条判断的作用是防止传入空指针,但是调试时不容易发现错误
//	{
//		while (*arr1++ = *arr2++ )
//		{
//			;
//		}
//      //当遇到循环出来条件为0的循环时，可以直接把循环内部的表达式缩略为循环条件，条件为0，循环就退出
//	}
//}
//
//int main()
//{
//	char arr1[] = "###############";
//	char arr2[] = "bit";
//
//	mystrcpy(arr1, arr2);
//
//	printf("%s\n", arr1);
//
//	return 0;
//}




//优化版本3.0

//#include <stdio.h>
//#include <assert.h>
//
//void mystrcpy(char* arr1, char* arr2)
//{
//	assert(arr1 != NULL);   //断言，需要引<assert.h>的头文件
//	assert(arr2 != NULL);	//当出现错误的时候会报错，而且会提示在多少行
//
//	while (*arr1++ = *arr2++ )
//	{
//		;
//	}
//}
//
//int main()
//{
//	char arr1[] = "###############";
//	char arr2[] = "bit";
//
//	mystrcpy(arr1, arr2);
//
//	printf("%s\n", arr2);
//
//	return 0;
//}





//#include <stdio.h>
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	const int* p = &a;
//	p = &b;
//
//	int c = 25;
//	int* const pa = &b;
//	*pa = 30;
//}

//const放在指针变量的*左边时,修饰的是*p,也就是说:不能通过p来改变*p的值
//const放在指针变量的*右边时,修饰的是指针变量p本身,p的地址不能被改变




//终极优化版本

//#include <stdio.h>
//#include <assert.h>
//
////char *strcpy( char *strDestination, const char *strSource );
////MSDN里对strcpy的描述
//
//char* mystrcpy(char* arr1, const char* arr2)
//{
//	int* ret = arr1; //为什么这里要返回ret？ 因为下面的while循环里面arr1一直在++,如果返回arr1,返回的就是arr1的最后一位的地址
//	
//
//	assert(arr1 != NULL);   //断言，需要引<assert.h>的头文件
//	assert(arr2 != NULL);	//当出现错误的时候会报错，而且会提示在多少行
//
//	//把arr2指向的字符串拷贝到arr1指向的空间,包含'\0'字符
//	while (*arr1++ = *arr2++ )
//	{
//		;
//	}
//
//	return ret;
//}
//
//int main()
//{
//	char arr1[] = "###############";
//	char arr2[] = "bit";
//
//	printf("%s\n", mystrcpy(arr1, arr2));
//
//	return 0;
//}



//常见的coding技巧
//1.使用assert
//2.尽量使用const
//3.养成良好的编码风格
//4.添加必要的注释
//5.避免编码的陷阱

//卧槽一万行代码了，我无敌了




//模拟实现strlen

//#include <stdio.h>
//#include <assert.h>
//
//int mystrlen(char* str)
//{
//	assert(str != NULL);
//
//	int count = 0;
//
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//
//	return count;
//}
//
//int main()
//{
//	char arr[] = "abcdefg";
//
//	int len = mystrlen(arr);
//
//	printf("strlen = %d\n", len);
//
//	return 0;
//}




//C语言实用调试技巧章节作业


//C程序常见的错误分类包含编译错误，链接错误，运行时错误
//不包含栈溢出，栈溢出不是分类，是某一种错误


//ctrl+F5是开始执行不调试，F5是启动调试
//F10是逐过程调试，遇到函数不进入函数
//F11是逐语句调试，可以观察调式的每个细节
//F9是设置断点和取消断点


//Debug被称为调试版本，程序调试找bug的版本
//Release被称为发布版本，测试人员测试的就是Release版本
//Debug版本包含调试信息,不做优化,所以Debug的文件会比Release大
//Release版本不可以调试



//const int *p 和 int const *p等价





//题目：调整奇数偶数顺序
//调整数组把奇数全部都位于偶数前面

//#include <stdio.h>
//
//void order(int* arr,int sz)
//{
//	int i = 0;
//
//	for (i = 0; i < sz-1; i++)
//	{
//		int j = 0;
//		int tmp = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] % 2 == 0 && arr[j + 1] % 2 == 1)
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
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	order(arr,sz);
//
//	int i = 0;
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	printf("\n");
//
//	return 0;
//}




//一个数的原码是这个数直接转换成二进制

//大小端字节序指的是数据在电脑上存储的字节顺序




//题目：下面代码输出结果是什么

//#include <stdio.h>
//
//int main()
//{
//	unsigned char a = 200;
//	unsigned char b = 100;
//	unsigned char c = 0;
//
//	c = a + b;
//	printf("%d %d\n", a + b, c);
//
//	return 0;
//}

//第一个%d,a+b先整型提升，再相加,但是a+b并没有存放到一个变量里

//c的值最大为255，a+b等于300，强行放进去必然会截断，精度丢失
//c=a+b  两个char类型变量相加，需要先整型提升,放进c里面再截断





//题目:在32位大端模式处理器上变量b等于多少？

//#include <stdio.h>
//
//int main()
//{
//	unsigned int a = 0x1234;
//	unsigned char b = *(unsigned char*)&a;
//
//	return 0;
//}

//&a转换成unsigned char*,值不发生变化
//a是int类型, 0x1234全称是0x00 00 12 34 ,在大端存储模式里是是0x00 00 12 34
//再解引用，char*指针解引用访问一个字节，也就是0x00，放进b里面
//最后输出0x00






//没做的题
//p46作业讲解2调整奇偶顺序	p47作业讲解3		p48作业讲解4


//当使用free释放掉一个指针内容后,指针变量的值应该被置为NULL

//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int a = 10;
//	//申请空间
//	int* p = (int*)malloc(10 * sizeof(int));
//	//使用空间
//	//***
//	//释放空间
//	free(p);
//	p = NULL;	//当使用free释放掉一个指针内容后, 指针变量的值应该被置为NULL
//
//	return 0;
//}


//32位系统下任何类型指针的长度都是4个字节

//指针的数据类型声明的是指针实际指向内容的数据类型

//野指针是指未分配或者已经释放的内存地址





//下面关于数组指针的描述正确的是:()
//A.数组指针是一种数组
//B.数组指针是一种存放数组的指针
//C.数组指针是一种指针
//D.指针数组是一种指向数组的指针




//答案是C，D那里是指针数组，要看清楚，不是数组指针啊喂！！！





//下面哪个是数组指针()
//A.int** arr[10]
//B.int(*arr[10])
//C.char*(*arr)[10]
//D.char(*)arr[10]

//char*(*arr)[10]	arr是一个数组指针，指向的数组有10个元素，每个元素是char*类型





//include <stdio.h>
//
//int main()
//{
//	int main[10] = { 0 };
//	return 0;
//}

//下面选项哪个是错误的？

//A.数组名arr和&arr是一样的
//B.sizeof(arr),arr表示整个数组
//C.&arr,arr表示整个数组
//D.除了sizeof(arr)和&arr中的数组名,其他地方出现的数组名arr，都是数组首元素的地址



//答案是A
//arr是首元素地址，&arr是取整个数组的地址






//下面三行代码分别是什么东西

//int* fun(int a,int b)
//int (*fun)(int a,int b)
//(int*) fun(int a,int b)




//第一个是函数声明，第二个是函数指针，第三个也是函数声明(一个fun的函数，返回类型是int*)




//题目:描述下面的代码

//int(*(*F)(int,int))(int)

//int(*F)(int,int)



//第一个代码是一个函数指针，指向的函数有两个int形参并且返回一个函数指针,
//返回类型的指针指向一个有一个int形参并且返回int的函数
//int(*		(F*)(int,int)	)(int)

//第二个代码是一个函数指针，指向的函数有两个int形参,返回类型是int




//题目：声明一个指向含有10个元素的数组的指针，其中每个元素是一个函数指针，
//该函数的返回值是int，参数是int*





//答案:int (*(*pa)[10])(int*);



//回调函数就是一个通过函数指针调用的函数

//回调函数一般通过函数指针实现

//回调函数一般不是函数的实现调用，而是再特定的场景下，由另外一方调用

//回调函数是调用函数指针指向的那个函数



//多选题
//下面test函数声明正确的是()
//char* arr[5] = { "hello","bit" };
//test(arr);
//
//A.void test(char* arr);
//B.void test(char** arr);
//B.void test(char arr[5]);
//B.void test(char* arr[5]);



//答案是B,D
//函数传的是数组，参数可以写成数组，也可以写成指针
//写成指针就是，arr是首元素地址,首元素类型是char*,所以传过去用char**接收
//写成数组就是char* arr[5]





//下面代码中print_arr函数参数设计哪个是正确的？()
//int arr[3][5] = { 1,2,3,4,5,6,7,8,9,10 };
//print_arr(arr, 3, 5);
//
//A.void print_arr(int arr[][], int row, int col);
//B.void print_arr(int* arr, int row, int col);
//B.void print_arr(int (*arr)[5], int row, int col);
//B.void print_arr(int (*arr)[3], int row, int col);


//A不行，行和列都没有指定
//B不行，写指针形式，传二维数组首元素地址，B却是一级指针
//C写成数组形式是对的选C
//D里[3]的意思是数组内有3个元素，但是数组有5个元素





//编程题:
//实现一个函数，可以左旋字符串中的k个字符
//例如：
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB
//ABCD左旋三个字符得到DABC

//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//
//void left_move(char arr[], int k)
//{
//	assert(arr);
//
//	int i = 0;
//	int len = strlen(arr);
//
//	for (i = 0; i < k; i++)
//	{
//		int j = 0;
//		char tmp = *arr;
//		for (j = 0; j < len-1; j++)
//		{
//			
//			arr[j] = arr[j]+1;
//		}
//		arr[len-1]= tmp;
//	}
//}
//
//int main()
//{
//	char arr[] = "abcdefg";	//这里一定要是arr[]而不是arr，不然就是把常量字符串放进arr里面,常量字符串不能修改
//
//	printf("你要右旋几个字符:>\n");
//	int k = 0;
//	scanf("%d", &k);
//
//	left_move(arr, k);
//
//	printf("%s\n", arr);
//
//	return 0;
//
//}




//以上代码 函数参数用指针来写

//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//
//void left_move(char arr[], int k)
//{
//	assert(arr != NULL);
//
//	int i = 0;
//	int len = strlen(arr);
//
//	for (i = 0; i < k; i++)
//	{
//		int j = 0;
//		char tmp = *arr;
//		for (j = 0; j < len-1; j++)
//		{
//			*(arr + j) = *(arr + j + 1);
//		}
//		*(arr + len - 1) = tmp;
//	}
//}
//
//int main()
//{
//	char arr[] = "abcdefg";	//这里一定要是arr[]而不是arr，不然就是把常量字符串放进arr里面,常量字符串不能修改
//
//	printf("你要右旋几个字符:>\n");
//	int k = 0;
//	scanf("%d", &k);
//
//	left_move(arr, k);
//
//	printf("%s\n", arr);
//
//	return 0;
//
//}


//以上办法叫做暴力求解法,还有更优的办法
//三部翻转法
//abcdef	翻转几个字符就切开几个字符
//ab cdef
//ba fedc	切开的两部分都再次进行翻转
//cdefab	



//#include <stdio.h>
//#include <assert.h>
//
//void reverse(char* left,char* right)
//{
//	assert(left);	//只要形参是指针变量，下面都要加上assert保证其传参具有有效性
//	assert(right);
//
//	while (left < right)
//	{
//		int tmp = *left;
//		*left = *right;
//		*right = tmp;
//
//		left++;
//		right--;
//
//	}
//}
//
//void left_move(char* arr, int k)
//{
//	assert(arr);
//	assert(k <= 6);
//	int len = strlen(arr);
//	reverse(arr,arr+k-1);
//	reverse(arr+k,arr+len-1);
//	reverse(arr,arr+len-1);
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	
//	left_move(arr, 4);
//
//	printf("%s\n", arr);
//
//	return 0;
//}





//题目：写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串
//例如：给定 s1=AABCD 和s2=BCDAA,返回1
//给定 s1=abcd 和 s2=ACBD,返回0

//#include <stdio.h>
//#include <assert.h>
//#include <string.h>
//
//void reverse(char* left,char* right)
//{
//	assert(left);
//	assert(right);
//
//	while (left < right)
//	{
//		int tmp = *left;
//		*left = *right;
//		*right = tmp;
//
//		left++;
//		right--;
//	}
//}
//
//void left_move(char* arr, int k)
//{
//	assert(arr);
//	assert(k <= 6);
//	int len = strlen(arr);
//	reverse(arr,arr+k-1);
//	reverse(arr+k,arr+len-1);
//	reverse(arr,arr+len-1);
//}
//
//int my_assert(char* s1, char* s2)
//{
//	assert(s1);
//	assert(s2);
//
//	int i = 0;
//	int len = strlen(s1);
//
//	for (i = 0; i < len; i++)
//	{
//		left_move(s1, 1);	//这里为什么是1而不是i，每次调用left_move函数，s1都会改变,
//		//因为如果是i的话，i=1，旋转一个字符，s1是ABCDA,再调用一次，i=2，s1变成了CDAAB
//		//不符合我们想要左旋一次然后对比s2的目的
//
//		if (strcmp(s1,s2)==0)
//		{
//			return 1;
//		}
//	}
//  return 0;
//}
//
//int main()
//{
//	char s1[] = "AABCD";
//	char s2[] = "BCDAA";
//
//	int i = 0;
//
//	int ret = my_assert(s1, s2);
//	
//	if (ret == 1)
//	{
//		printf("Yes\n");
//	}
//
//	return 0;
//}


//设计思路：s1字符串5个字符，就左旋5次，每次左旋逐渐递增一个元素
//如果有一次左旋s1等于s2，就说明s1和s1具有旋转关系(用strcmp比较)
//为什么不能用s1==s2呢？因为s1,s2是数组首元素地址,两个数组的首元素地址是不可能相等的







//第二种方法
//例如：s1 = "abcdef",再加上一个"abcdef"就是"abcdefabcdef",这个字符串里包含了所有旋转的可能性

//#include <stdio.h>
//#include <string.h>
//
//int is_left_move(char* str1, char* str2)
//{
//	//这里是判断两个字符串长度是否相同,比如abc和ab,ab并不是abc的翻转,但是abc还是包含ab,会造成误判
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	if (len1 != len2)
//	{
//		return 0;
//	}
//
//
//	//1.再str1字符串中追加一个str1的字符c
//	//strncat在MSDN里的解释：char *strncat( char *strDest, const char *strSource, size_t count );
//	//strcat在MSDN里的解释:char *strcat( char *strDestination, const char *strSource );
//	//strncat比strcat多了个count,说明strnact是靠字符串元素个数来决定停止的
//	strncat(str1, str1,len1);
//
//
//	//2.判断str2指向的字符串是否是str1指向的字符串的子串
//	//strstr-找子串的函数
//	char* ret = strstr(str1, str2);	//在str1里面找有没有str2的子串,找到了返回str2的地址(字符地址)，找不到返回空指针NULL
//
//	if (ret == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		return 1;
//	}
//}
//
//int main()
//{
//	char arr1[30] = "abcdef";	//给30是为了有足够的空间追加一个字符串
//	char arr2[] = "cdefab";
//
//	int ret = is_left_move(arr1, arr2);
//
//	if (ret == 1)
//	{
//		printf("YES\n");
//	}
//	else
//	{
//		printf("NO\n");
//	}
//
//	return 0;
//}




//库函数strcat 把一个字符串追加到另外一个字符串后面,但是不能追加自己,要引<string.h>的头文件

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char arr1[30] = "abc";		//记得这里的[]要给一个数字有足够的空间来追加
//	char arr2[] = "def";
//
//	strcat(arr1, arr1);
//
//	printf("%s\n", arr1);
//
//	return 0;
//}

//strcat原理:abc\0  def\0,把d放到\0的位置,e放在\0后面的位置,f放在再后面的位置,最后把def\0的\0放到最后
//为什么strcat不能追加自己,比如abc\0,把a放到\0位置,把b放到\0后面位置，把c放到后两个位置，此时\0已经被a给占了
//此时字符串就没有\0了,追加就不会停止,直到遇到\0
//自己追加自己可以用strncat








//题目：杨氏矩阵
//题目内容：
//有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，
//请编写程序在这样的矩阵中查找某个数字是否存在
//要求：事件复杂度小于O(N);
//矩阵(数组)的全部元素是N个，每查找一个元素需要O*N个单位时间,
//假如要查找10，10如果是最后一个元素,遍历去找的话，找的时间就等于O(N)了



//#include <stdio.h>
//
//int FindNum(int arr[3][3], int *row, int *col, int k)
//{
//	int x = 0;
//	int y = *col - 1;
//
//	while (x <= (*row)-1 && y >= 0)
//	{
//		if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else
//		{
//			*row = x;
//			*col = y;
//			return 1;
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int arr[3][3] = { {1,2,3},{3,4,5},{4,5,6} };
//
//	int k = 5;
//
//	int row = 3;
//	int col = 3;
//
//	int ret = FindNum(arr, &row, &col, k);	//把行和列传址过去，方便返回下标,如果在函数里printf不够简洁
//											//当未来想要带回几个值但是一个return无法搞定的时候，可以传址
//
//	if (ret == 1)
//	{
//		printf("找到了\n");
//		printf("下标是%d,%d", row, col);
//	}
//	else
//	{
//		printf("没找到\n");
//	}
//
//	return 0;
//}


//设计思路：从最右上角或者最右下角元素开始查找
//如果最右上角元素小于k,说明那一行都没有k,因为这个矩阵是左右递增的,k比那一行最大的数都大，左边肯定没有,
//因此这一行都去掉,x++,x++后第一行就不能访问了,
//如果最右上角元素大于k,说明那一列都没有k,因为这个矩阵是上下递增的,这一列这个数是这一列最小的，最小的数都要比k大，下面的数就没必要找了
//因此这一列去掉，y--,y--后那一列就不能访问了

//直到找到一个数，既不大于也不小于，那就是等于了，相当于找到这个数k了






