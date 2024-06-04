#define _CRT_SECURE_NO_WARNINGS 1



//新章节：字符串函数与刨析

//求字符串长度
//strlen

//长度不受限制的字符串函数
//strcpy
//strcat
//strcmp

//长度受限的字符串函数介绍
//strncpy
//strncat
//strncmp

//字符串查找
//strstr
//strtok

//错误信息报告
//strerror

//字符操作

//内存操作函数
//memcpy
//memmove
//memset
//memcmp


//C语言中对字符和字符串的处理很是频繁，但是C语言本身是没有字符串类型的，
//字符串通常放在 常量字符串 中或者 字符数组 中，常量字符串适用于那些对它不做修改的字符串函数
//如果有一个字符串，那么它的末尾要有\0作为结束标志





//strlen
//strlen返回的是unsigned int(无符号整型)的
//字符串已经把\0作为结束标志，strlen的函数返回的是字符串中'\0'前面出现的字符个数(不包含'\0')
//参数指向的字符串必须要以'\0'结束
//注意函数的返回值size_t,是无符号的

//#include <stdio.h>
//#include <string.h>
//
//int my_strlen(const char* arr)
//{
//	int count = 0;
//	while (*arr != '\0')
//	{
//		return 1 + my_strlen(arr + 1);
//	}
//}
//
//int main()
//{
//	if (strlen("abc") - strlen("abcdef") > 0)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//
//
//	if (my_strlen("abc") - my_strlen("abcdef") > 0)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//
//	return 0;
//}



//strlen在MSDN的定义
//size_t strlen( const char *string );
//size_t转到定义就是unsigned int 改名字(typedef)，
//两个unsigned int(无符号数)相减，得到的还是无符号数，既然是无符号数，那就会大于0

//为什么下面那个my_strlen会返回haha呢？因为my_strlen返回的类型是int,如果把my_strlen的返回类型改成size_t，
//返回的就是hehe





//strcpy
//源字符必须以'\0'结束
//会将源字符串中的'\0'拷贝到目标空间
//目标空间必须足够大，以确保能存放源字符串
//目标空间必须可变


//模拟实现strcpy


//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//
//char*  my_strcpy(char* dest, char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	char* ret = dest;
//	//拷贝src指向的字符串到dest指向的空间，包含'\0'
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	
//	//返回目的空间的起始地址
//	return ret;
//
//}
//
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "ABCD";
//	//如果源地址是arr2[] = {'a','b','c'};那这样是错误的，因为源地址没有\0
//
//	//arr1 = arr2;   这种写法是错误的，arr1和arr2都是首元素地址
//
//	my_strcpy(arr1, arr2);
//	
//	printf("%s\n", arr1);
//
//	return 0;
//}


//源地址必须以'\0'结束				  不能是 arr[] = {'a','b','c'};
//会将源字符串中的'\0'拷贝到目标空间
//目标空间必须足够大,以确保能存放字符串  不能是 目的地址 arr1[] = "a"	arr2[] = "abcdef" , 会放不下
//目标空间必须可变                     不能是 常量字符串  char arr = "abcdef"







//strcat  字符追加函数
//源字符串必须以'\0'结束
//目标空间必须有足够大,能容纳下源字符串的内容
//目标空间必须可修改

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char arr1[30] = "abcdef";
//	//char arr1[] = "abcdef";
//	char arr2[] = "ABCDEF";
//	//char arr1[] = "abcdef";为什么这样写会报错,因为字符串数组是根据字符串初始化来确定arr1的大小的，
//	//里面只能放abcdef,再追加一个会越界访问
//	
//	//1.如果要把源地址追加到目的地地址，目的地地址的空间要足够大
//	//2.源地址还需要包含\0
//
//	strcat(arr1, arr2);
//
//	printf("%s\n", arr1);
//
//	return 0;
//}




//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char arr1[] = "hello\0xxxxxxxx";
//	//如果arr1是hello,看不出来\0有没有追加到后面,
//	//hello\0xxxxxxxx,如果\0确实追加了,\0就会改成w,其中一个x会变成\0
//
//	//strcat 源地址和目的地都要有\0
//
//	char arr2[] = "world";
//
//	strcat(arr1, arr2);
//
//	return 0;
//}






//模拟实现strcat

//#include <stdio.h>
//#include <assert.h>
//
//char* my_strcat(char* dest,const char* src)	//目的地址需要改变，源地址不需要改变，所以源地址加上const
//{
//	assert(dest);
//	assert(src);
//
//	char* ret = *dest;
//
//	while ((*dest) != '\0')
//	{
//		dest++;
//	}
//
//	while (*src)
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//
//	//while (*dest++ = *src++)
//	//{
//	//	;
//	//}
//
//	*dest = *src;
//
//	return ret;
//}
//
//int main()
//{
//	char arr1[30] = "abcdef";
//	char arr2[] = "ABCDEF";
//
//	my_strcat(arr1, arr2);
//
//	printf("%s\n", arr1);
//
//	return 0;
//}








//strcmp
//字符串比较函数
//int strcmp( const char *string1, const char *string2 );


//#include <stdio.h>
//
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "as";
//
//	int ret = strcmp(arr1, arr2);
//	//比较两个字符串，第一个比第二个大，返回正数，等于返回0，第一个比第二个小返回负数(不同编译器不一样,但是返回原理一样)
//	//比较的是首个不同字符的Ascii码值
//	//第一个字符双方都是a,相等，看不出大小，继续比第二个字符
//	//a的ASCII值小于s,所以第一个字符串小于第二个字符串
//
//	if (strcmp(arr1, arr2) > 0)
//	{
//		printf("arr1>arr2\n\n");
//	}
//	else if (strcmp(arr1, arr2) == 0)
//	{
//		printf("arr1==arr2\n\n");
//	}
//	else
//	{
//		printf("arr1<arr2\n\n");
//	}
//
//
//	printf("%d\n", ret);
//
//	return 0;
//}








//模拟实现strcmp

//#include <stdio.h>
//#include <assert.h>
//
//int my_strcmp(const char* arr1,const char* arr2)  //我们只是比较，不修改，所以用const修饰
//{
//	assert(arr1 && arr2);
//
//	while (*arr1 == *arr2)
//	{
//		if (*arr1 == '\0')  //这一句的意思是*arr1==*arr2 并且 *arr1=='\0',那就说明此时arr2也等于'\0'，这两个字符串完全相等
//		{
//			return 0;
//		}
//		arr1++;
//		arr2++;
//	}
//
//	if (*arr1 > *arr2)
//	{
//		return 1;
//	}
//	else if (*arr1 < *arr2)
//	{
//		return -1;
//	}
//
//	//如果不返回固定的1或者-1,可以用下面的这个return,arr1大于arr2,相减一定返回正数,arr1小于arr2,相减一定返回负数
//	//return *arr1 - *arr2;
//}
//
//int main()
//{
//	char arr1[] = "abcdefg";
//	char arr2[] = "abc";
//
//	if (my_strcmp(arr1, arr2) > 0)
//	{
//		printf("arr1>arr2\n\n");
//	}
//	else if (my_strcmp(arr1, arr2) == 0)
//	{
//		printf("arr1==arr2\n\n");
//	}
//	else if(my_strcmp(arr1, arr2)<0)
//	{
//		printf("arr1<arr2\n\n");
//	}
//
//	return 0;
//}



//以上函数都是长度不受限制的字符串函数,都是以\0为结束标志
//所以相对不够安全,举个例子

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char arr1[5] = "abc";
//	char arr2[] = "hello,world";
//
//	strcpy(arr1, arr2);
//
//	printf("%s\n", arr1);
//
//	return 0;
//}

//这样会报错，因为arr1只能存放5个元素,强行把arr2 11个元素放进去而且是以\0结尾，会放不下







//下面介绍受长度限制的字符串库函数


//strncpy

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char arr1[10] = "abcdefg";
//	char arr2[] = "hello";
//
//	strncpy(arr1, arr2,4);
//	//strncpy不会把\0拷贝过去，是根据size_t拷贝,size_t是多少就拷贝多少个字节
//
//	printf("%s\n\n", arr1);
//
//
//	char arr3[10] = "abcdefgh";
//	char arr4[] = "abc";
//	
//	strncpy(arr3, arr4,6);
//	//这种情况源地址根本没有6个字节，不够的话就会自动补成\0,而不是把\0复制过去
//	//6-3 = 3,后面追加3个\0补全
//
//	printf("%s\n\n", arr3);
//
//	return 0;
//}

//strncpy在MSDN的解释,count是拷贝多少个字节的意思，单位是字节
//char *strncpy( char *strDest, const char *strSource, size_t count );

//strcpy在MSDN的解释
//char *strcpy( char *strDestination, const char *strSource );

//strncpy只会拷贝源地址的所有内容到目的地址，如果目的地址的内容大于源地址，大于的那部分内容不会被strncpy改变






//模拟实现strncpy

//#include <stdio.h>
//
//char* my_strncpy(char* str1, char* str2, int k)
//{
//	char* ret = str1;
//	int count = 0;
//
//	while (count < k)
//	{
//		if (*str2 == '\0')
//		{
//			*str1 = '\0';
//		}
//		else
//		{
//			*str1 = *str2;
//		}
//
//		str1++;
//		str2++;
//		count++;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[10] = "abcdefghi";
//	char arr2[] = "ABCDE";
//
//	my_strncpy(arr1, arr2, 10);
//
//	printf("%s\n", arr1);
//
//	return 0;
//}







//strncat  字符串追加函数

//MSDN里strncat的解释
//char *strncat( char *strDest, const char *strSource, size_t count );

//模拟实现strncat

//#include <stdio.h>
//#include <assert.h>
//
//char* my_strncat(char* arr1, char* arr2, int k)
//{
//	assert(arr1 && arr2);
//
//	char* ret = arr1;
//
//	char* tmp = arr2;
//
//	while (*arr1 != '\0')
//	{
//		arr1++;
//	}
//
//	int count = 0;
//	while (k--)
//	{
//       *arr1 = *tmp;
//
//		arr1++;
//		tmp++;
//		count++;
//	}
//	*arr1 = '\0';
//
//	return ret;
//}
//
//int main()
//{
//	char arr1[30] = "abcdef\0xxxxxxxxxxx";
//	char arr2[30] = "ABCDEF";
//
//	my_strncat(arr2, arr2, 6);
//	//strncat得把\0追加过去,当想要追加的数大于源地址大小时，后面只会补一个\0，strncpy会补全\0
//
//	printf("%s\n", arr2);
//
//	return 0;
//}









//字符串比较函数
//strncmp
//strncmp在MSDN里的解释
//int strncmp( const char *string1, const char *string2, size_t count );


//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	const char* arr1 = "abcdef";
//	const char* arr2 = "abzdef";
//
//	int ret = strncmp(arr1, arr2, 3);
//
//	printf("%d\n", ret);
//
//	return 0;
//}






//模拟实现strncmp

//#include <stdio.h>
//
//int my_strncmp(char* arr1, char* arr2, int k)
//{
//	int count = 0;
//
//	while (count < k)
//	{
//		if (*arr1 > *arr2)
//		{
//			return 1;
//		}
//		else if (*arr1 < *arr2)
//		{
//			return -1;
//		}
//
//		arr1++;
//		arr2++;
//		count++;
//	}
//
//	return 0;
//}
//
//int main()
//{
//	const char* arr1 = "abcdefg";
//	const char* arr2 = "abcdzfg";
//
//	int ret = my_strncmp(arr1, arr2, 5);
//
//	printf("%d\n", ret);
//
//	return 0;
//}






//strstr-查找子字符串函数
//strstr只会返回两种情况: NULL空指针 和 地址
//找到了子串返回查找的子串的首元素地址，没找到返回NULL

//在MSDN文档里NULL表示空指针
//NUL/Null都表示 \0

//NULL - 空指针
//NUL/Null - \0

//MSDN里strstr的解释：
//char* strstr(const char* string, const char* strCharSet);

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char arr1[] = "abcdefhi";
//	char arr2[] = "def";
//
//	char* ret = strstr(arr1, arr2);
//
//	if (ret == NULL)
//	{
//		printf("没找到\n");
//	}
//	else
//	{
//		printf("%s\n",ret);
//		//传回来的是子串首元素的地址,也就是d,打印的是defhi,因为没有遇到\0就会一直打印
//		//如果被查找字符串是abcdefdef,要查找的字符串是def，这里有两份def,返回的是第一份子串的地址,
//		//也就是会打印defdef
//	}
//
//	return 0;
//}




//模拟实现my_strstr

//空字符串" "里面只有一个元素,那就是 '\0'

//#include <stdio.h>
//#include <assert.h>
//
//char* my_strstr(const char* p1,const char* p2)
//{
//	assert(p1 && p2);
//
//	char* s1 = (char*)p1;
//	char* s2 = (char*)p2;
//	char* cur = (char*)p1;
//
//	//若p2传过来的是空字符串" ",里面只有一个元素,是 \0,那就返回p1的地址,返回什么看你自己怎么写
//	//写成printf("传过来的是空字符串\n") 也可以
//	if (*p2 == '\0')
//	{
//		return (char*)p1;  //为什么要强制类型转换,因为p1是const char*类型,返回类型是char类型,会有差异
//	}
//
//	while (*cur)
//	{
//		s1 = cur;
//		s2 = (char*)p2;
//
//		while ((*s1 != '\0') && (*s2 != '\0') && (*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')   //如果*s2=='\0',这里其实已经蕴含了几种条件,那就是1.s2已经查找完；2. s1和s2同时一一对应并且s2查找完
//		{
//			return cur;	//找到子串
//		}
//		cur++;
//	}
//	return NULL; //没找到子串
//}
//
//int main()
//{
//	const char* arr1 = "abbbcdr\0ef";
//	const char* arr2 = "bbc";
//
//	char* ret = my_strstr(arr1, arr2);
//
//	if (ret == NULL)
//	{
//		printf("没找到\n\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//
//	return 0;
//}


//这代码的精髓在于cur的设置,每次只过一个元素，从这个元素开始查找，找不到再过下一个元素









//strtok - 字符串分割函数

//strtok在MSDN里的解释:
//char* strtok(char* str, const char* sep);
//sep参数是个字符串，定义了用作分隔符的字符集合


//第一个参数指定一个字符串，它包含了0个或者多个由sep字符串中一个或者多个分隔符分割的标记
//strtok函数找到str中的下一个标记,并将用\0结尾，返回一个指向这个标记的指针(注：strtok函数
// 会改变被操作的字符串，所以在使用strtok函数切分的字符串一般都是临时拷贝的内容并且可修改)
//strtok函数的第一个参数不为NUL，函数将找到str中第一个标记,strtok函数将保存它在字符串中的位置
//strtok函数的第一个参数为NULL，函数将在同一个字符串中被保存的位置开始，查找下一个标记
//如果字符串中不存在更多的标记，则返回NULL指针


//char arr[] = "edu@bit.tech";
//char* p = "@.";
//strtok(arr,p);

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char arr[] = "edu@bit.tech";
//	char* p = "*";
//	
//	char buf[255] = { 0 };
//	strcpy(buf, arr);
//	//为什么要再搞一个变量呢？因为strtok会真实改变arr的内容，所以搞一个拷贝
//
//
//	char* ret = strtok(buf, p);
//	printf("%s\n", ret);
//
//	ret = strtok(NULL, p);
//	printf("%s\n", ret);
//
//	ret = strtok(NULL, p);
//	printf("%s\n", ret);
//	//strtok第一个参数不为NULL的情况,strtok将找到分隔符，并把分隔符改成\0(真正的改变),然后返回最开头那个字符的地址:edu
//	//再次调用的时候，str就不是arr了,改成NULL，即可再次往后使用
//	//如果字符串中不存在更多的标记，就会返回NULL
//	//strtok一次只能切一段
//
//	return 0;
//}




//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char arr[] = "www.baidu.com@.@edu";
//
//	char* p = "@.";
//
//	char* ret = NULL;
//
//	for (ret = strtok(arr, p); ret != NULL; ret = strtok(NULL, p))
//	{
//		printf("%s\n", ret);
//	}
//
//	return 0;
//}

//把分割符号改成\0之后，后面参数不用给arr给NULL就行
//这个函数是怎么从第一个分割往后找的呢?可以推测有一个静态变量











//strerror - 错误报告函数(错误信息函数)
//MSDN：char *strerror( int errnum );

//这些都是错误码 , 每一个错误码对应一个错误信息
//0 - No error
//1 - Operation not permitted
//2 - No such file or directory
//3 - No such process

//#include <stdio.h>
//#include <string.h>
//#include <errno.h>
//int main()
//{
//	//char* str = strerror(3);  - 这只是演示正常不这么用
//
//	//应该是这样用的
//	char* str = strerror(errno);
//	//errno 是一个全局的错误码的变量
//	//当C语言的库函数在执行过程中，发生了错误,就会把对应的错误码，赋值到errno中
//	//此时strerror再根据错误码转换成错误信息
// 
//  //errno需要引<errno.h>的头文件
//
//	printf("%s\n", str);
//
//	return 0;
//}

//strerror的作用就是转换我们的错误码，把错误码翻译成错误信息,并返回它的地址




//#include <stdio.h>
//#include <errno.h>
//#include <string.h>
//
//int main()
//{
//	//C语言里可以打开文件，用fopen函数.fopen("文件名","r"),r的意思是读文件
//	//fopen会返回一个FILE*的指针
//	//如果这个函数调用失败了，会返回一个空指针NULL放到pf里面
//	//但是打开文件失败有很多种原因：文件不存在，打开权限不够等等原因,
//	//想知道具体原因的话就得strerror(errno)
//	FILE* pf = fopen("test.txt", "r");
//
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		printf("open file success\n");
//	}
//
//	return 0;
//}



//以上函数叫做字符串函数



//字符分类函数 
//用字符分类函数需要引 <ctype.h>的头文件
//常见的字符分类函数：tolower(转小写函数)  toupper(转大写函数)

//#include <stdio.h>
//#include <ctype.h>
//
//int main()
//{
//	char ch = tolower('Q');
//	char ui = toupper('m');
//
//	putch(ch);
//	printf("\n");
//	putch(ui);
//
//	return 0;
//}





//把一个大写字符串全部改成小写

//#include <stdio.h>
//#include <ctype.h>
//
//int main()
//{
//	char arr[] = "I AM A STUDENT";
//
//	int i = 0;
//
//	while (arr[i])
//	{
//		arr[i] = tolower(arr[i]);
//		//修改的值要放回arr里面
//		i++;
//	}
//
//	printf("%s\n", arr);
//
//	return 0;
//}










//内存函数
//memcpy  - 内存拷贝函数
//memmove - 内存移动函数
//memcmp  - 内存比较函数
//memset

//上面学的都是字符串函数，操作对象是字符串，这些函数或多或少都要和\0打交道
//对整型数组，字符串数组，结构体都用不了

//#include <stdio.h>
//
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 0 };
//
//	strcpy(arr2, arr1);
//
//	return 0;
//}

//arr是int型数组，在内存中的存储是：
//01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00 00 05 00 00 00 00
//strcpy会一个字符一个字符去拷贝，先拷贝第一个字符01，01后面是00，strcpy遇到\0停止，于是就停止了
//所以strcpy只能拷贝字符串，有局限性,对于这种问题，就有内存操作函数的出现







//memcpy - 内存拷贝函数
//只要是内存中存放的数据，都能拷贝


//既然是要能拷贝所有类型的内存，就不能像strcpy那样，函数参数是char*,
//而是用一种通用型的指针来接收，void*

//void *memcpy( void *dest, const void *src, size_t count );
//count是要从源地址拷贝多少个字节到目的地地址的意思,类型是unsigned

//#include <stdio.h>
//
//struct s
//{
//	char name[20];
//	int age;
//};
//
//int main()
//{
//	//拷贝整型数组
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[5] = { 0 };    //目的地地址的数组要确定大小不然会报错
//
//	memcpy(arr2, arr1, sizeof(arr1));
//
//	int i = 0;
//
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d\n", arr2[i]);
//	}
//	printf("\n");
//
//
//	//拷贝结构体变量
//	struct s arr3[] = { {"张三",20},{"李四",30} };
//	struct s arr4[3] = { 0 };
//
//	memcpy(arr4, arr3, sizeof(arr3));
//
//	return 0;
//}




//模拟实现memcpy

//#include <stdio.h>
//#include <assert.h>
//
//void* my_memcpy(void* p2, const void* p1, int sz)
//{
//	assert(p2 != NULL);
//	assert(p1 != NULL);
//
//	void* ret = p2;
//
//	int i = 0;
//
//	for (i = 0; i < sz; i++)
//	{
//		*(char*)p2 = *(char*)p1;
//		++(char*)p1;
//		++(char*)p2;
//		//优先级：后置++ ＞ 强制类型转换 ＞ 前置++ ，所以用前置++
//	}
//
//	return ret;
//}
//
//struct s
//{
//	char name[20];
//	int age;
//};
//
//int main()
//{
//	//打印整型数组
//	int arr1[] = { 1,2,3,4,5 };
//
//	int arr2[10] = { 0 };
//
//	int sz = sizeof(arr1);
//
//	my_memcpy(arr2, arr1, sz);
//
//	int i = 0;
//
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	printf("\n\n");
//
//
//	//打印结构体
//	struct s s1[2] = { {"lisi",30},{"zhangsan",29} };
//
//	struct s s2[2] = { 0 };
//
//	my_memcpy(s2, s1, sizeof(s1));
//
//	printf("%s\n", s2[0].name);
//	printf("%d\n\n", s2[0].age);
//	
//
//
//	
//	//把arr3的12345拷贝到arr3的34567
//	int arr3[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* arr4 = arr3 + 2;
//
//	my_memcpy(arr4, arr3, 20);
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr3[i]);
//	}
//	printf("\n\n");
//	//这种办法是做不到的，当你要拷贝一个数组到同一个数组时，数组的内容已经改变了，拷贝的结果也不会是预期所想
//	//有一个专门的函数负责这种内存重叠拷贝的情况，那就是memmove
//  //当然上面说的做不到只是自己实现的函数做不到,库函数memcpy是可以超额完成任务做到的
//  //C语言标准:
//  //memcpy只要处理 不重叠的内存拷贝就可以 - 60 -100
//  //memmove 处理重叠内存的拷贝 -100
//
//	return 0;
//}






//memmove 
//memmove在MSDN的声明:
//void *memmove( void *dest, const void *src, size_t count );
//和memcpy一样

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	memmove(arr+2, arr, 20);
//
//	int i = 0;
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//
//
//
//	return 0;
//}






//模拟实现memmove

//#include <stdio.h>
//#include <assert.h>
//
//void* my_memmove(void* dest, void* src, size_t count)
//{
//	assert(dest != NULL && src != NULL);
//
//	void* ret = dest;
//
//	
//	if (src > dest)  //从前往后拷贝
//	{
//		while (count--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	else if (src < dest)  //从后向前拷贝
//	{
//		while (count--)  //这里count传过来是20，减减进入循环之后就是19，dest和src加上19个字节之后，再解引用，就访问第20个字节
//		{
//			*((char*)dest+count) = *((char*)src+count);
//			//强制转换成char*类型,加上19就是加上19个char,大括号括起来再解引用
//		}
//	}
//
//	return ret;
//}
//
//int main()
//{
//	int arr[15] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	my_memmove(arr + 5, arr + 7, 20);
//
//	int i = 0;
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	printf("\n\n");
//
//	return 0;
//}


//memcpy和memmove的差别就是memmove函数处理的源内存块和目标内存块是可以重叠的
//如果源地址和目标地址出现重叠,就得使用memmove函数处理








//memcmp
//memcmp在C语言里的解释:
//int memcmp( const void *buf1, const void *buf2, size_t count );


//#include <stdio.h>
//
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6 };
//	int arr2[] = { 1,2,3,5,5,6 };
//
//	int ret = memcmp(arr1, arr2,13);  //13是要比较13个字节的意思
//	//第一个大于第二个返回1
//	//第一个小于第二个返回-1
//	//第一个等于第二个返回0
//
//	printf("%d\n", ret);
//
//	return 0;
//}



//模拟实现 memcmp

//#include <stdio.h>
//
//int my_memcmp(void* p1, void* p2, size_t k)
//{
//	while (k--)
//	{
//		if (*(char*)p1 > *(char*)p2)
//		{
//			return 1;
//		}
//		else if (*(char*)p1 < *(char*)p2)
//		{
//			return -1;
//		}
//
//		++(char*)p1;
//		++(char*)p2;
//	}
//	return 0;
//}
//
//int main()
//{
//	int arr1[] = { 1,2,3,8,5 };
//	int arr2[] = { 1,2,3,5,6 };
//
//	int ret = my_memcmp(arr1, arr2, 16);
//
//	printf("%d\n", ret);
//
//	return 0;
//}





//memset - 内存设置
//MSDN：void *memset( void *dest, int c, size_t count );

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char arr[10] = "0";
//
//	memset(arr, '#', 9);
//
//	printf("%s\n", arr);
//
//	int arr1[10] = { 0 };
//
//	memset(arr1, '1', 10);
//	//这里的10把前10个字节变成1，而不是把10个元素都变成1
//	//如果要把每个元素都初始化为1，那就要设定成40
//
//	return 0;
//}



