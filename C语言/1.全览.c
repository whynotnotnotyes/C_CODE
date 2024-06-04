#define _CRT_SECURE_NO_WARNINGS 1



//鹏哥C语言

//1.ctrl+f是搜索
//2.不用一直建立新的源代码，一个源代码就够了，要学新的代码直接把前面的注释就好了
//3.标记好题目，想重温题目就ctrl+f: 题目
//4.自定义函数的调用是调用头文件.h,不是调用函数名.h
//5.如果遇到喷麦的时候，右键点击视频音效，选择 清澈人声




//全览

//2023.10.23开始学


//#include 是包含的意思 #include <stdio.h>就是包含一个stdio.h的头文件
//使用库函数就要引一个头文件

//stdio 是standard input output的缩写,意思是标准输入输出

//<stdio.h>  == standard input output . head

//int main是一个主函数，目的是希望返回一个int类型，return 0就是返回一个0，0就是int类型的数
//C语言都是从main函数开始的
//一个工程只能有一个main函数



//#include <stdio.h>
//
//int main()
//{
//	double a = 5789.539;
//	//小数点后面最少6个小数位
//
//	printf("%lf\n", a);
//
//	//printf print是打印的意思，f是function的缩写，意思是函数，功能
//	//printf是库函数，库函数就是C语言库里面自带的函数，除了自带的函数，自己也可以定义函数
//
//	return 0;
//}



//#include <stdio.h>
//
//int main()
//{
//	char c = 'u';
//
//	int a = 20;
//
//	printf("%c\n", c);
//	// %c是打印字符格式的数据
//	printf("%d\n", a);
//	// %d是打印十进制整型的数据
//
//
//	return 0;
//}



//%d   - 打印整数类型数据（整型 int）
//%c   - 打印字符类型数据		(char)
//%f   - 打印float单精度浮点数类型数据
//%lf  - 打印double双精度浮点数数据类型
//%p   - 以地址的形式打印		
//%x   - 打印16进制数字
//%s   - 打印字符串		(string)




//#include <stdio.h>
//
//int main()
//{
//	double ui = 5.555;
//
//	printf("%lf\n", ui);
//
//	//double printf的时候要用%lf，不用%lf用%f的话就是单精度，也就是float，用%lf就是双精度（double）
//
//	return 0;
//
//}





//#include <stdio.h>
//
//int main()
//{	
//	//sizeof 在内存中占多大的字节
//
//	printf("char的sizeof是%d\n\n", sizeof(char));
//
//	printf("short的sizeof是%d\n\n", sizeof(short));
//
//	printf("int的sizeof是%d\n\n", sizeof(int));
//
//	printf("long的sizeof%d\n\n", sizeof(long));
//    //long占4-8个，反正long所占的字节数要大于等于int
//
//	printf("float的siezof是%d\n\n", sizeof(float));
//
//	printf("double的sizeof是%d\n\n", sizeof(double));
//
//	printf("long long的sizeof是%d\n\n", sizeof(long long));
//
//	
//	return 0;
//
//}






//#include <stdio.h>
//
//int sum2 = 20;
////sum2是全局变量，定义在代码块{}外面的变量称为全局变量
////全局变量是可以作用于整个工程的，全局变量的生命周期是整个工程的生命周期
//
//int main()
//{
//	
//	int sum1 = 10;
//	//sum1是局部变量，定义在代码块内的成为局部变量
//  //大括号内部的是局部变量
//  //局部变量的声明周期是进大括号到出大括号之后
//	printf("%d\n", sum2);
//	//{
//	//	int a = 23;
//	//
//	//}
//	//printf("%d\n", a);
//	//局部变量只在局部起作用，全局变量在全局都起作用(如上所示，会报错)
//  //局部变量与全局变量名字冲突的时候，局部变量优先
//
//	return 0;
//}






//全局变量，外部变量

//#include <stdio.h>
//
//int main()
//{
//
//	//extern 声明，声明一个外部变量
//  //外部变量也是全局变量
//	//全局变量是可以作用于整个工程的，全局变量的生命周期是整个工程的生命周期
//
//	extern int wer;
//
//	printf("wer = %d\n", wer);
//
//	return 0;
//}






//常量
// 
//#include <stdio.h>
//
//int main()
//{
//	const int AB = 3;
//
//	//const是常量（也叫常变量）
//  //一般定义的常量名字需要大写
//	//const int 是const修饰的常变量
//
//	printf("%d\n", AB);
//
//	int n = 10;
//	//n是变量，而且具有常属性，所以是常变量
//
//	const int a[10] = { 0 };
//	//a[10]就可以，因为10是常量,int[n]就不行,因为n是变量
//
//	//数组方括号里面只能用常量
//
//	return 0;
//
//}

//int是变量，不需要初始化，const int是常量，需要初始化
//初始化是指为变量赋予一个初始值的过程





//标识符常量

//#define MAX  10		//#define甚至可以在头文件前面定义
////define 标识符常量  define不是关键字，是预处理指令
////#define 定义常量结尾不用加;
//
//#include <stdio.h>
//int main()
//{
//	int arr[MAX] = {0};
//
//	printf("%d\n", MAX);
//
//	return 0;
//}






//枚举常量 enum

//#include <stdio.h>
//
//enum Color{
//	blue,
//	yellow,
//	red,
//	white,
//	green
//};
//
//enum SEX {
//	MALE,
//	FEMALE,
//	SECRET,
//	HELECREATE
//};
//
//int main()
//{
//	printf("%d\t", MALE);
//	printf("%d\t", FEMALE);
//	printf("%d\t", HELECREATE);
//	printf("%d\n\n\n", SECRET);
//
//	printf("%d\t", blue);
//	printf("%d\t", yellow);
//	printf("%d\t", red);
//	printf("%d\t", white);
//	printf("%d\n\n\n", green);
//
//	//枚举常量可以定义一个新的变量
//	enum Color color = blue;
//	printf("%d\n\n\n", color);
//
//	//枚举常量可以初始化数组
//	int arr[red] = { 4,78 };
//	printf("%d\n", arr[0]);
//
//	return 0;
//}



//#include <stdio.h>
//
//enum Name
//{
//	mike,
//	lucy,
//	zhangsan,
//	lisi
//};
//
//enum Color
//{
//	blue,
//	yellow,
//	green
//};
//
//int main()
//{
//	printf("%d\n", green);
//	printf("%d\n", yellow);
//	printf("%d\n", blue);
//
//	
//	int arr[green] = { 0 };
//	//数组里面只能放常量,green是枚举常量
//	printf("%d\n", sizeof(arr));
//
//
//	enum Name hg = green;
//	printf("%d\n", hg);
//
//	return 0;
//}






//未初始化的字符串数组/字符数组sizeof:
//字符串的sizeof里双引号里显示有多少个，有0或者\0也算上去,sizeof结果要加1，因为要算上\0
//字符的sizeof里大括号里显示有多少个就是多少个，字符结尾没有\0,
//假如遇到\0或者0，也会把\0或者0算上，而且后面会继续数，不会因为0或者\0就停止，结果不用加1


//未初始化的字符串数组/字符数组strlen:
//字符串strlen说简单点就是计算\0前面的元素的个数
//字符strlen说简单点就是计算\0或者0前面的元素的个数


//初始化的字符串数组/字符数组sizeof:
//初始化的字符串数组的sizeof的结果就是数组方框里的值
//初始化的字符数组的sizeof的结果也是数组方框里的值

//初始化的字符串数组/字符数组strlen:
//初始化的字符串数组的sizeof的结果跟未初始化一样
//初始化的字符数组的strlen的结果跟未初始化一样


//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char arr[8] = "abcd0";
//
//	printf("%d\n", sizeof(arr));
//
//	printf("%d\n", strlen(arr));
//
//}






//字符串

//#include <stdio.h>
//
//int main()
//{
//	char arr1[] = "abc";
//	//字符串只能用双引号来定义
//  //字符用大括号定义
//	//int类型用大括号定义
//	//在字符串里，"abc"等于'a','b','c',\0(\0的值等于0)  字符串后面隐藏了一个0，\0是字符串的结束标志
//
//	char arr2[] = { 'a','b','c'};
//	//为什么这里会出现随机数，因为strlen直到找到\0才会停止，但是arr2里面没有\0,字符串数组最后是自带\0的,字符数组没有自带
//	// \0是字符串结束的标志，不算字符串的内容
//
//	char arr3[] = { 'a','b','c','\0','s','b' };
//	// /0后面如果还有数值，将不会输出，因为\0就是结束标志，不会输出后面的数字
//
//
//	printf("%d\n", strlen(arr1));
//	//strlen = string length-计算字符串长度的库函数
//
//	printf("%d\n", strlen(arr2));
//
//	printf("%d\n", strlen(arr3));
//
//	return 0;
// 
//}

//strlen返回的是整型

//字符串的结束标志: \0
//'\0'-转义字符-0
// 0 是数字0 
// '0'和字符0的值一样，都是48
// '0'是字符0
//  \0是转义字符，对应的ASCII表是0,数字0就是ASCII表的0,字符0('0')对应的ASCII是48
//
//  字符0-9都是字符.a/A -z/Z也都是字符

//EOF - end of file -文件结束标志 - 值是-1

// char可以定义字符也可以定义字符串""





//转义字符

//#include <stdio.h>
//#include <string.h>
////要使用strlen库函数就要引一个叫做<string.h>的文件
//int main()
//{
//	
//	printf("%d\n", strlen("c:\test\32\test.c"));
//	//输出13，分别是 c : \t e s t \32 \t e s t . c
//    // \加上一位数到三位数，就是表示一个八进制数字
//	//strlen就是计算字符串的函数，所以计算字符串时strlen("")括号里必须要有双引号
//
//	printf("%c\n",'\x61');
//	// \xdd表示一个两位数的16进制的数字
//
//	printf("%c\n",'\132');
//	printf("%d\n\n", '\132');
//
//    printf("\"孙悟空\"\n\n");
//
//	printf("abc\r\rfg\n\n");
//
//	printf("\"艾伦\"\n\n");
//
//	return 0;
//}



//转义字符
//   \\（双斜杠）用于表示一个反斜杠，防止它被解释为一个转义序列符
//   \t 水平制表符
//	 \v垂直制表符
//   \n 换行
// 	 \r回车
//   \a蜂鸣，警告音
//   转义字符是一个字符
//   \加上一位数到三位数，就是表示一个八进制数字
//	 \xdd表示一个两位数的16进制的数字
//	 \~是按位取反的意思
//	 (类型)强制转换类型





/*C语言注释

*/
//





//if语句
//#include <stdio.h>
//
//int main()
//{
//	int input = 0;
//
//	printf("你要好好学习吗(1/0)>:");
//	scanf("%d", &input);
//
//	if (input == 1) {
//		printf("年薪百万\n");
//	}
//	else
//	{
//		printf("我自己会捡垃圾吃的\n");
//	}
//
//	return 0;
//}





//while语句
//#include <stdio.h>
//
//int main()
//{
//
//	int count = 0;
//
//	while (count < 20000) {
//		count++;
//		printf("%d\n", count);
//	}
//
//	
//	printf("好工作");
//
//	return 0;
//
//
//}



//自定义函数
//C语言函数分为自定义函数和库函数

//#include <stdio.h>
//
//int ADD(int x,int y)
//{
//	int z = x + y;
//
//	return z;
//	
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int b = 0;
//	scanf("%d", &b);
//
//	int sum = ADD(a, b);
//
//	printf("%d\n", sum);
//
//	return 0;
//
//}






//数组

//#include <stdio.h>
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };	//定义一个存放10个整数数字的数组
//
//	int b = 0;
//
//	//遍历数组
//	//单纯输出printf arr[x]的话是输出数组下标对应的那一个元素，只有循环输出，才能输出数组的所有元素，这叫做遍历数组
//	for (b = 0; b < 10; b++) {
//		printf("%d\t", arr[b]);
//		if (b == 9) {
//			printf("\n\n");
//		}
//	}
//
//
//	printf("%d\n", arr[4]); //下标的方式访问数组元素
//
//	//float arr2[5];
//	//char ch[20];
//
//
//	return 0;
//
//
//}

// 数组初始化后可以不指定大小
// 数组每个元素的类型是int的类型,并不是arr[]是int类型,arr[]有自己的一个类型






////移位操作符
////移（二进制）位操作符
//#include <stdio.h>
//
//int main()
//{
//	// <<左移
//	// >>右移
//
//	int a = 1;
//
//	int b = a << 2;
//
//	printf("%d\n", b);
//
//	printf("%d\n", a);
//
//	int c = a >> 1;
//
//	printf("%d\n", c);
//
//	return 0;
//}









//复合赋值

// a=a+10 等于 a+=10
// a=a-10 等于 a-=10
// a=a*10 等于 a*=10
// a=a/10 等于 a/=10
// a=a%10 等于 a%=10
// a>>=b等于a=b>>    a<<=b等于a=b<<








//单目操作符
  //	！逻辑反操作
  //    - 负值
  //    + 正值
  //	& 取地址
  //	sizeof 操作数的变量/类型长度（以字节为单位）
  //    ~ 对一个数的二进制按位取反

//双目操作符
//三目操作符

//#include <stdio.h>
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	a + b;  // +就是双目操作符，双目操作符操作两个值
//
//	//C语言中我们表示真假，0表示假，非0表示真
//
//	printf("%d\n", a);
//	printf("%d\n", !a);
//	// !就是单目操作符，单目操作符只操作一个值
//
//
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof a);
//	printf("%d\n", sizeof(int));
//	//sizeof 后面跟变量名加不加括号都可以，后面跟变量必须加括号
//	//printf("%d\n", sizeof int);
//
//	return 0;
//
//}






//sizeof

//#include <stdio.h>

//int main()
//{
//	int arr[10] = {0,1,2};  //10个整型元素的数组
//	
//	printf("数组的大小是%d字节\n", sizeof(arr));
//	//  10个整型(int)元素,一个就是4个字节，10个就是40字节
//
//	//计算数组的元素个数=	数组总大小（字节）{sizeof(数组名字)}/每个元素的大小（字节）{sizeof(arr[0])}
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	printf("元素的个数是%d个\n", sz);
//
//}







//自定义函数求两个数最大值

//#include <stdio.h>
//
//int MAX(a, b)
//{
//	int max0 = 0;
//	if (a > b) {
//		max0 = a;
//	}
//	else
//		max0 = b;
//
//	return max0;
//}
//
//int main()
//{
//	printf("请输入两个整数\n");
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//
//	printf("%d比较大\n", MAX(a, b));
//
//	return 0;
//}







// \~ 按位取反

//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//
//	int b = ~a;
//
//	printf("%d\n", b);
//
//	return 0;
//
//}

//计算机里存储的二进制都是补码，打印输出的都是原码；
//原码符号位不变，其余取反得到反码，反码加1得到补码
//补码减1得到反码，反码取反得到原码







//#include <stdio.h>
//
//int main()
//{
//	int a = 10;
//	int b = a++;
//
//	int c = 10;
//	int d = ++c;
//
//	printf("a++=%d\t++a=%d\ta=%d\n\n", b,d,a);
//
//
//	int e = 10;
//	int f = e--;
// 
//	int g = 10;
//	int h = --g;
//
//	printf("e--=%d\t--e=%d\te=%d\n", f, h,e);
//
//	return 0;
//
//}

//	a++是先把a的值赋给b,再++；
//	++a是把a加1的值赋给b;





// (类型)强制转换
//#include <stdio.h>
//
//int main()
//{
//	int a = (int)3.9999;
//
//	printf("%d\n", a);
//
//	return 0;
//
//}


//#include <stdio.h>
//
//int main()
//{
//
//	int a = 10;
//
//	double b = (double)a;
//
//	printf("%lf", b);
//
//	return 0;
//
//}







//(2进制)位操作
// &按位与
// |按位或
// ^按位异或   对应的二进制相同则为0，相异则为1  (异或的话前面补全的0不用进行异或)

//#include <stdio.h>
//
//int main()
//{
//	int a = 3;    
//	int b = 5;    
//
//	int c = a & b;
//	int d = a | b;
//	int e = a ^ b;
//
//	printf("与运算=%d\n", c);
//
//	printf("或运算=%d\n", d);
//
//	printf("异或运算=%d\n", e);   
//
//	return 0;
//
//}



//逻辑与&&(十进制)
//逻辑或||(十进制)

//可以用来判断0/非0

//#include <stdio.h>
//   
//  //逻辑与&&
//int main()
//{
//	int a = 3;
//
//	int b = 5;
//
//	int c = a && b;
//
//	printf("%d\n", c);
//
//	return 0;
//
//}


//逻辑或||
//int main()
//{
//	int a = 0;
//
//	int b = 5;
//
//	int c = a || b;
//
//	printf("%d\n", c);
//
//	return 0;
//
//}







//三目运算符(条件运算符)

//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	
//	int b = 0;
//
//	scanf("%d %d", &a,&b);
//
//	int max = 0;
//
//	max = (a > b ? a : b);
//	//括号里符号的意思:如果a>b,就执行a,如果a不大于b,就执行b
//
//	printf("%d\n", max);
//
//	return 0;
//
//}






//下标引用操作符[]   函数调用操作符()

//#include <stdio.h>
//
//int Add(int x, int y)
//{
//	int a = 0;
//	int b = 0;
//	int z = x + y;
//
//	return z;
//}
//
//int main()
//{
//	int arr[10] = { 0 };  //- []方括号就是下标引用操作符
//	
//	int a = 10;
//	int b = 5;
//
//	int sum = Add(a, b);  //- ()圆括号就是函数调用操作符
//
//	printf("%d\n", sum);
//
//	return 0;
//
//}







//     11111111 11111111 11111111 11111111 为什么是2^32-1
//		下面的回答是错的，正确回答是：总共2^32，但是还有一种全为0的情况，这种情况不算，所以是2^32-1
// 
//     因为直接算，就要2的零次方乘以1 加上 2的一次方乘以1 加上2的二次方乘以1 加上...2的31次方乘以1 这样很难表达
//     所以32个1再加上一个 1 然后再减掉一个 1，先加上一个一，变成：1 00000000 00000000 00000000 00000000 就是2的32次方，
//     然后再减回一个1，就是原来的数（32个1），方便表达，就是2^32-1(以上是错误的回答，但是暂时不想删掉)



// [1][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][]   计算机存储里最高位1表示负数
// [0][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][]   计算机存储里最高位0表示正数
// 只要是整数，内存中存储的都是二进制的补码，正数的原码反码补码都相同


// 计算14+(-21)
// 14是正数，转成二进制即可(正数二进制(原码)等于反码补码)     -21是负数，需要转成补码
// 14转成补码是  00001110
//-21转成补码是  11101011          
// 进行计算      11111001  两个补码相加得到14+(-21)的补码，补码减一再取反得到原码
// 补码减一      10000111  得到原码(二进制),换算成十进制等于 -7

//计算机计算加法减法都是加法
//比如14-21等于14+（-21）
//   14-（-21）等于14+21
//本质上都是加法
// 计算都是补码进行计算





//  关键字：auto    
//
//#include <stdio.h>
//
//int main()
//{
//	auto int a = 3;
//	// int a 被称为局部变量也被成为自动变量
//	// 从进入到代码块(大括号)开始，到出代码块，就自动销毁，所以称为自动变量
//
//	printf("%d\n", a);
//
//	return 0;
//}






// 关键字：register

//#include <stdio.h>
//
//int main()
//{
//	register int a = 10;  //建议把a定义为寄存器变量，编译器不一定会遵循,只是个标记,由编译器决定是否遵循
//
//	return 0;
//}





//关键字：signed(有符号整型)  unsigned(无符号整型)

//#include <stdio.h>
//
//int main()
//{
//	signed int a = 1;
//	//signed 定义的变量是有符号的(正负)
//
//	// signed int = int ;int 就是signed int的缩写；
//
//	unsigned int b = -1;
//	// unsigned是无符号的,定义的是正数
//
//	printf("a=%d\tb=%d", a, b);
//
//	return 0;
//}






//类型定义 （类型重定义）
//#include <stdio.h>
//
//int main()
//{
//	typedef unsigned int u_int;
//	//typedef相当于重新定义一个变量名
//	unsigned int a = 10;
//
//	u_int b = 10;
//
//	if (a == b) {
//		printf("相等\n");
//	}
//
//	return 0;
//}









//static 是一个静态的局部变量,可以使局部变量的生命周期延长

//#include <stdio.h>
//
//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d\n", a);
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//
//	//extern int g_val;
//
//	//printf("%d\n", g_val);
//	//以上会报错 因为static修饰的全局变量只能在static所在的源文件里面使用
//
//	return 0;
//}





//声明外部函数
//static修饰外部函数

//#include <stdio.h>
//
//int main()
//{
//	extern int APP(int a, int b);
//	//static修饰函数,改变了函数的链接属性
//	//函数是具有外部链接属性的，static修饰后就变成内部链接属性了，只能在定义函数的源文件里面使用
//
//	int a = 10;
//	int b = 50;
//	int sum = APP(a, b);
//
//	printf("%d\n", sum);
//
//	return 0;
//}


// 1.static修饰局部变量     2.static修饰全局变量     3.C语言修饰自定义函数







//define定义宏
//#include <stdio.h>
//
//#define MAX(x,y) (x>b?x:y)
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	
//
//	int max = MAX(a, b);
//
//	printf("%d\n", max);
//
//	return 0;
//}






// 指针变量
// 指针要么是4个字节要么是8个字节(32位系统是4字节,64位系统是8字节)
// 指针是个变量，用来存放地址


//#include <stdio.h>
//
//int main()
//{
//	int a = 10;
//
//	//& 取地址符
//
//	printf("%p\n", &a);
//
//	int* p = &a;
//
//	*p = 20;
//
//	//变量类型+ *是存放地址的，也就是指针变量
//
//	printf("%p\n", p);
//
//	//&是取地址符，int*是存地址，*p是解引用操作符,也叫间接访问操作符
// 
//	return 0;
//
//}


//int* 是指针变量	int是整型变量
//int*是用来说明p是指针变量的，*p的*是解引用操作符






//例：double
//#include <stdio.h>
//
//int main()
//{
//	double a = 1.5;
//
//	double* p = &a;
//
//	printf("%p\n", p);
//
//	printf("%lf\n", a);
//
//	*p = 2.3;
//
//	printf("%lf\n", *p);
//
//	printf("%lf\n", a);
//
//	return 0;
//
//}







//#include <stdio.h>
//
//int main()
//{
//	char a = 'b';
//
//	char* pc = &a;
//
//	*pc = 'a';
//
//	printf("%c\n", a);
//
//	printf("pc的字节大小是%d\n", sizeof(pc));
//
//	return 0;
//	
//}



//指针在32位平台上是4个字节大小，在64位平台上是8个字节大小
//指针为什么是4/8个字节，因为指针存放的是地址，地址是由一个32位/64位的二进制数组成的，32位/64位转换成字节就是4/8个字节








////结构体    结构体是我们自己创造出来的类型，用来描述复杂对象
// 
//#include <stdio.h>
//#include <string.h>
//
//struct Book
//{
//	char name[30];
//	int price;
//	char author[30];
//
//};
//
//int main()
//{
//	//  b1:利用结构体类型——创建一个该类型的结构体变量
//	struct Book b1 = { "C语言程序设计",50,"黄冠"};
//					
//
//	//利用指针打印出书名和价格
//	struct Book* pb=&b1;
//	
//	printf("%s\n",(*pb).name);
//	printf("%d\n", (*pb).price);
//	printf("%s\n\n", (*pb).author);
//	//*和.都是运算符有优先级，.的优先级非常高，考虑顺序,加括号确保先*再.
//
//	printf("%s\n", pb->name);
//	printf("%d\n", pb->price);
//	printf("%s\n\n", pb->author);
//	//没星号是因为要找地址才能找到它的name，带星号的指针只是值
//	
//
//
//	printf("书名:%s\n价格:%d元\n作者:%s\n\n", b1.name, b1.price, b1.author);
// 
//	b1.price = 45;//修改后的价格 整型变量可以直接赋值 字符型变量要用strcopy
// 
//    printf("修改后的价格%d\n",b1.price);
//
//	strcpy(b1.name, "c语言"); 
//    //strcopy 全称string copy- 字符串拷贝 - 是库函数，因此应该在前面加上头文件 - #include <string.h>
//	//strcopy就是字符串更改的方式
//
//	return 0;
//
//}

//     . 结构体变量.成员
//    -> 结构体指针->成员





