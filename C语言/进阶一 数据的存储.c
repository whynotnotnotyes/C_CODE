#define _CRT_SECURE_NO_WARNINGS 1



//数据在内存中的存储
//1.数据类型详细介绍
//2.整形在内存中的存储：原码，反码，补码
//3.大小端字节序介绍及判断
//4.浮点型在内存中的存储解析




//数据类型介绍
//C语言类型分为1.内置类型和2.自定义类型(构造类型)
//内置类型有char,short,int,float,double等等...
//


//类型的意义
//1.使用这个类型开辟内存空间的大小(大小决定了使用范围)
//2.如何看待内存空间的视角


//#include <stdio.h>
//
//int main()
//{
//	int a = 10;
//	float f = 10.0;
//	//整型和浮点型在内存中存储不同，整型是以补码存储的
//	return 0;
//}



//整型家族：char,short,int,long

//char分为unsigned char(无符号char) 和 signed char(有符号char)
//unsigned范围为0-255(11111111,最高位为有效位),signed char范围为-128-127(11111111,最高位为符号位)

// char 
//		unsigned char
//		signed char
// short 
//		unsigned short int //这个int可以省略也可以写上,short的全称就是signed short int
//		signed short int
// int  
//		unsigned int
//		signed int
// long
//		unsigned long int
//		signed long int  //long的全称是 signed long int



//浮点型家族
//float  ->单精度浮点数
//double ->双精度浮点数



//构造类型(自定义类型)
//数组类型   数组名去掉就是数组的类型 eg:int arr[10] ,int [10]就是数组类型
//结构体类型 struct (这是结构体关键字,加上结构体标签才是结构体类型)
//枚举类型   enum
//联合类型   union



//指针类型
//int* p;
//char* p1;
//float* p2;
//double* p3;
//void* pv;     void可以用于指针变量。无类型指针



//空类型
//void表示空类型(无类型)
//通常应用于函数的返回类型，函数的参数，指针类型

//#include <stdio.h>
//
//void test(void)  //void可以用于函数的返回类型和函数的参数,貌似是形式参数才能用void,实际参数用不了void
//{
//	printf("hehe\n");
//}
//
//int main()
//{
//	test(100);
//
//	return 0;
//}




//原码，反码，补码
//计算机中的整型(整型 signed,浮点数不是以原反补形式存储的)有三种表示方法，即原码，反码和补码
//三种表示方法均有符号位和数值位两部分，符号位都是用0表示'正'，用1表示'负'
//而数值位三种表示方法各不相同
//其实无符号数也可以说用原反补码存储，因为无符号数是正数，正数原反补码相同
//有符号的正数等于无符号数  +signed = unsigned



//#include <stdio.h>
//
//int main()
//{
//	int a = 20; //4个字节-32个bit
//	//00000000000000000000000000010100 - 原码
//	//00000000000000000000000000010100 - 反码
//	//00000000000000000000000000010100 - 补码
//	
//	int b = -10;
//	//10000000000000000000000000001010 - 原码
//	//11111111111111111111111111110101 - 反码
//	//11111111111111111111111111110110 - 补码
//	//1111 1111 1111 1111 1111 1111 1111 0110 - 补码
//	//0xFFFFFFF6
//
//	return 0;
//}



//对于整数来说：数据存放中其实存放的是补码
//在计算机系统中整数数值一律用补码来表示和存储。原因在于，使用补码，可以将符号位和数值域统一处理;
//同时,加法和减法也可以统一处理(CPU只有加法器)
//此外,补码和原码相互转换,其运算过程是相同的,不需要额外的硬件电路




//什么是大端小端
//大端(存储)模式,是指数据的低位保存在内存的高地址中,而数据的高位,保存在内存的低地址中;
//小端(存储)模式,是指数据的低位保存在内存的低地址中,而数据的高位,保存在内存的高地址中;
//大小端存储是字节的排序方式，不是二进制位排序的方式，所以大端也叫大端字节序存储模式，小端叫小端字节序存储模式

//0x11223344    44是低位,11是高位
//大端存储模式: 11 22 33 44
//小端存储模式: 44 33 22 11
//低地址***************************高地址




//题目:写一段代码,判断当前机器的字节序是什么

//#include <stdio.h>
//
//int check_sys()
//{
//	int a = 1;
//	char* pa = (char*)&a;
//	//这里为什么要解引用*,因为指针类型解引用决定了指针能访问几个字节,char类型指针解引用能访问1个字节
//	//也就是00000001(数据)
//	if (*pa == 1)  //如果解引用第一个字节是1,那内存中存储的就是10 00 00 00(地址),也就是说编译器把低位数据放在了低位的地址
//	{              //如果解引用第一个字节是0,那内存中存储的就是00 00 00 01,也就是说编译器把低位数据放在了高位的地址
//                 //解引用取字节是从左往右取的，也就是从低地址开始取  低地址****************高地址
//                 //char类型从左往右取一个字节，int从左往右取4个字节
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
////int check_sys()
////{
////	int a = 1;
////	return *(char*)&a;
////}
//
//int main()
//{
//
//	if (check_sys()==1)
//	{
//		printf("当前机器是小端存储\n");
//	}
//	else
//	{
//		printf("当前机器是大端存储\n");
//	}
//
//	return 0;
//}

//绝大多数电脑都是小端存储
//C语言并没有明确规定要怎么存储，大端小端是由编译器决定的

//指针类型的意义:
//1.指针类型决定了指针解引用操作能访问几个字节:char* p,*p访问了一个字节;  int* p,*p访问了4个字节
//2.指针类型决定了指针+1,-1,加的或者减的是几个字节;char* p;p+1,跳过一个字符(1个字节);  int* p,p+1,跳过一个整型(4个字节)


//为什么会有大端模式之分呢？这是因为在计算机系统中,我们是以字节为单位的,每个地址单元都对应着一个字节,一个字节为8bit。
//但是在C语言中除了8bit的char之外，还有16bit的short型,32bit的long型(要看具体的编译器),另外，对于位数大于8位或者32位的处理器,
//由于寄存器宽度大于一个字节,那么必然存在着一个如果将多个字节安排的问题,因此就导致了大端存储模式和小端存储模式

//例如一个16bit的short型x，在内存中的地址位0x0010,x的值位0x1122,那么0x11为高字节,0x22为低字节。
//对于大端模式,刚好相反。我们常用的x86结构是小端模式,而KETL C51则为大端模式。很多ARM，DSP都为小端模式
//有些ARM处理器还可以由硬件来选择是大端模式还是小端模式



//题目1.这代码会输出什么

//#include <stdio.h>
// 
//int main()
//{
//	unsigned char a = -1;
//	//无符号位整型提升左边全补0,为什么，因为高位不是符号位，是有效位，所以左边全补0
//	printf("%d\n", a);
//	
//	return 0;
//}
// 
//整型提升进行截断的也是补码



//题目2.这代码会输出什么？

//#include <stdio.h>
//
//int main()
//{
//	char a = -128;  //这里改成128结果也是一样,为什么?因为128就是127+1,127+1在char里面就是-128
//	//10000000 00000000 00000000 10000000 原
//	//11111111 11111111 11111111 01111111 反
//	//11111111 11111111 11111111 10000000 补
//	//10000000
//
//	//%d-打印有符号整型
//	//%u-打印无符号整型
//	//先整型提升，提升前面补什么决定于a是什么类型，a是char类型，所以是有符号的，前面全部补1,
//	//而不是取决于%u，%u打印时才把符号位改为有效位
//	printf("%u\n", a);
//
//	//假如char a = -1再打印%u就是
//
//	return 0;
//}

//转换成无符号数之后,符号位就是有效位了,就不用再转补码了,因为正数(无符号数)原反补相同





//char的范围

//char是一个字节，最小是00000000，最大是11111111
//00000000 -> 0(原码)
//00000001 -> 1
//00000010 -> 2
//00000011 -> 3
//...
//01111111 -> 127
//内存中存储的是补码,而且char是signed char,以上是char范围内的所有正数
//以下是char范围的所有负数

//10000000 -> -128 (存储的是补码,转成原码就是-128)
//为什么10000000是-128？10000000-1成反码，但是根本减不了，因为是有符号的char，后面全是0
//但110000000补码转成反码是101111111,再转成原码就是110000000
//原码跟补码相同,补码第一个8比特位和原码第一个8比特一样,所以当有符号char遇到10000000,就是转换成-128
//
//10000001 ->-127 
//...
//11111101 ->-3
//11111110 ->-2
//11111111 ->-1

//所以signed char的范围为-128-127


//假若是无符号的char(unsigned char)
//00000000
//00000001
//...
//11111111

//范围就是0-255

//可以想象成一个圆圈,圆圈的开头是0,在127上加1,01111111+1 = 10000000 就会变成-128,再往上加1就会变成-127,一直往后加又会回到0


//同理,也可以分析出int,short,long的类型的范围





//题目3:以下代码会输出什么?

//#include <stdio.h>
//
//int main()
//{
//	int i = -20;
//	unsigned int j = 10;
//
//	printf("%u\n", i+j);
//	return 0;
//}


//当一个有符号数和一个无符号数相加的时候，有符号数会先转换无符号数，再相加
//按照补码的形式进行计算,最后格式化为无符号整数




//题目4:以下代码会输出什么?

//#include <stdio.h>
//
//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//	}
//}

//i永远不可能是负数,因为i是无符号数,不管怎么样都会大于等于0
//如果不是unsigned int 是unsigned char的话,就是9876543210然后从255开始死循环
//因为如果是char的话需要整型提升,unsigned整型提升的话左边全补0，记住，是unsigned整型提升才会全补0
//int本身就是整型，就不用提升了




//题目5:以下代码会输出什么？并说明原因
//#include <stdio.h>
//
//int main()
//{
//	char a[1000];
//
//	int i;
//
//	for (i = 0; i < 999; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d\n", strlen(a));
//
//	return 0;
//}

//strlen到'\0'就会停止运算,'\0'在ASCII表里就是0,strlen就是统计\0之前有多少个元素
//为什么是255？这个数组是char类型,范围是-128到127
//从-1开始,一直减,到-2,-3到-128的时候,再减一就成了127,然后到3,2,1,1再减去1就是0,strlen停止计算
//128+127就是255



//题目6:以下代码会输出什么?

//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	printf("%s\n", a);
//}
//'\0'和0是一样的,ASCII码值都为0。区别在于你要如何打印,用%d打印就是0,用%c打印就是空（即'\0'）
//用%s打印是(NULL)




//题目七:以下代码会输出什么?

//#include <stdio.h>
//
//unsigned char i = 0;
//
//int main()
//{
//	for (i = 0; i <= 127; i++)
//	{
//		printf("hello,world\n");
//	}
//	return 0;
//
//}

//当使用无符号数的时候要小心判断条件,不然容易死循环
//当i==255的时候，i再次++，变成256，
//由于i是unsigned char,把256放进去会截断，变成00000000,满足循环条件，又重新进入到循环
//把<=改成<,就能解决死循环的问题







//浮点型在内存中的存储


//#include <stdio.h>
//
//int main()
//{
//	double d = 1E10; //1.0*10^10
//
//	printf("%lf\n", d);
//
//	return 0;
//}



//整型的范围存储在C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.37.32822\include
//整型范围文件存储在limits.h头文件里,浮点型范围文件存储在float.h头文件里



//#include <stdio.h>
//
//int main()
//{
//	int n = 9;
//	float* pFloat = (float*)&n;
//	printf("n的值为:%d\n", n);
//	printf("*pFloat的值为:%f\n", *pFloat);
//
//	*pFloat = 9.0;
//	printf("num的值为:%d\n", n);
//	printf("*pFloat的值为:%f\n", *pFloat);
//
//	return 0;
//}

//int a = 9;
//char* p = (char*)&a; //取地址a的类型是int*,直接放在char*里面会报错,所以要强制类型转换
//强制类型转换是不会改变值的,除非是精度丢失



//根据国际标准IEEE(电气和电子工程协会)754,任意一个二进制浮点数v可以表示成下面的形式:
//(-1)*S*M*2^E
//(-1)^S表示符号位,当S=0时,v为正数，当S=1时，v为负数
//M表示有效数字，大于等于1，小于2 (1<=M<2)
//2^E表示指数位

//9.0在内存中的存储是:
//1001.0
//(-1)*0 * 1.001 * 2^3
//(-1)*S * M     * 2^E



//根据以上公式,浮点数存储只需要存储S,M,E就行了，根据S,M,E就能还原出原来的浮点数

//IEEE 754规定:对于32位的浮点数(float),最高的1位是符号位,接着的8位是指数E，剩下的23位为有效数字M
//  0(1)EEEEEEEEMMMMMMMMMMMMMMMMMMMMMMM (单精度浮点数的模型)
//(1bit)  (8it)         (23bit)

//IEEE 754规定:对于64位的浮点数(double),最高位的1位是符号位S，接着的11位是指数E，剩下的52位为有效数字M
//  0(1)EEEEEEEEEEEMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM (双精度浮点数的模型)
//(1bit)   (11bit)                  (52bit)
//E是无符号数,里面存的都是正数

//对于M的规定,因为M只能是>=1 <2的数字,所以永远是1.xxxxx...,但是把1给存储进去的话,就会丢失一个比特位,因为M前面永远是1
//所以规定M的1不用存进去,会去掉1,需要的时候再补上1,这样有助于提升精度



//0.5在内存中的存储是:
//0.5
//0.1  0.5十进制在二进制中就是表达为0.1，为什么呢？因为0.1等于1* 2^-1(1乘以2的负一次方)，就像11等于1乘以2的0次方加上1乘以2的1次方
//(-1)*0 * 1.0 * 2^-1
//(-1)*S * M   * 2^E
//S - 0
//M - 1.0
//E - -1
//E有可能是负数,首先,E为一个无符号整数(unsigned int),
//这意味着,如果E为8位,它的取值范围为0-255；如果E为11位，它的取值范围为0-2047，
//但是我们知道，科学计数法中的E是可以出现负数的，在8比特位的E中最大存储的负数是-127，在11比特位的E中最大存储的负数是-1023
//所以在IEEE754规定，存入内存时E的真实值必须再加上一个中间数,加上中间数的值并非真实值，减去中间数后才是真实值
//对于8位的E，这个中间数是127，对于11位的E，这个中间数是1023
//比如2^10的E是10，所以保存成32位浮点数(float)时，必须保存成10+127=137，即10001001
//关于中间数,正数和负数都要加中间数


//对于浮点数在内存中的存储,我们先把一个十进制的浮点数转成二进制的浮点数然后转换成科学计数法的方式,就有了S,E,M




//浮点数转换成二进制：

//小数怎么转换成二进制？
//例:0.125十进制转成二进制
//0.125*2 = 0.25  -> 0 (整数部分取出来)
//0.25*2  = 0.5   -> 0
//0.5*2   = 1     -> 1
//直到乘到完全等于1为止,所以0.125转成二进制数就是0.001

//例子:0.31转成二进制
//0.31*2 = 0.62  -> 0
//0.62*2 = 1.24  -> 1
//0.24*2 = 0.48  -> 0
//0.48*2 = 0.96  -> 0
//0.96*2 = 1.92  -> 1
//...永远都不能使其乘以2完全等于1,假若是32位就精确到32位
//0.31二进制数就是0.01001...
//浮点数的精度就是由其尾数决定的

//二进制0.01就是2的负二次方,0.0001就是2的负4次方

//x的-y次方就是 1/x的y次方
//例子:2^-3就是(1/2)^3  = 1/2*1/2*1/2


//浮点数在内存中的具体存储步骤

//例子：5.5存到内存里

//1.先把5.5化为二进制：101.1
//2.再通过二进制化为标准形式V：(-1)*0 * 1.011 * 2^2
//3.再在E的基础上加上中间数127(1023):也就是127+2 = 129
//4.最后以0100 0000 1011 0000 0000 0000 0000 0000存入内存中
//转化成十六进制就是0x40b00000,在调试中打开内存确实是0x40b00000


//题目:5.5转成二进制数和科学计数法
//5.5
//101.1  二进制
//(-1)*0 * 1.011 * 2^2
//   S       M      E
//S = 0
//M = 1.011
//E = 2

//浮点型真实存储在内存里是:
//0 2 
//0 2+127
//0 129 (129需要转换成二进制补码)
//0 10000001 011 (M在float类型中占23位，需要补齐)
//0 10000001 01100000000000000000000
//01000000101100000000000000000000

//要验算的话可以在内存中查看,但内存中显示的是16进制,所以要把二进制转成16进制然后再看内存中有没有转对
//0100 0000 1011 0000 0000 0000 0000 0000 (4个二进制位是一个16进制位)
//0x40B00000


//#include <stdio.h>
//
//int main()
//{
//	float a = 5.5;
//	return 0;
//}

//以上这些知识是浮点数类型放进去的情况,浮点数取出来又是另外一种情况





//指数E从内存中取出来还可以再分成三种情况:

//1. E不全为0或不全为1:
//这时，浮点数就采用下面的规则表示，即指数E的计算值减去127(或1023)，得到真实值，再将有效数字M前面加上第一位的1.
//比如:0.5(1/2)的二进制形式为0.1，由于规定正数部分必须为1，即将小数点右移1位，
//即为1.0*2^(-1),其阶码为-1+127=126,表示为01111110，而尾数1.0去掉正数部分为0，补齐0到23位
//00000000000000000000000，则其二进制表示形式为：
//0 01111110 00000000000000000000000


//2. E为全0的情况：
//这时，浮点数的指数E等于1-127(或者1-1023)即为真实值,有效数字M不再加上第一位的1,而是还原为0.xxxxxxxx的小数，
//这样做是为了表示+-,以及接近于0的很小的数字
//0 00000000 01100000000000000000000
//表示为+/- 0.011 * 2^-126
//E全为0说明E真实值(没加上127时的值)是-127,2^E,也就是2^-127,算下来是很小的数字,几乎为0


//3. E全为1的情况
//这时,如果有效数字M全为0，表示+-无穷大(正负取决于符号位S)
//0 11111111 01100000000000000000000
//E+127=255
//E = 128
//1.xxx * 2^128
//表示正负无穷大的数字


//#include <stdio.h>
//
//int main()
//{
//	float a = 1000000000000000000000000000000000000000000000000000000000000000000000.0;
//
//	printf("%f", a);
//
//	return 0;
//}
//输出结果是inf,意思是无穷大



//#include <stdio.h>
//
//int main()
//{
//	int n = 9;  //9的补码是00000000000000000000000000001001
//	float* pFloat = (float*)&n;
//	printf("n的值为:%d\n", n); 
//	printf("*pFloat的值为:%f\n", *pFloat);   //E全为0，无穷小
//	//打印出来
//	//0 00000000 00000000000000000001001
//	//E为全0,表示为(-1)*0 * 0.00000000000000000001001 * 2^-126
//	//无限接近于0,所以会输出0
//
//
//	*pFloat = 9.0;
//	//9.0是浮点数,所以是浮点数存储
//	//(-1)*0 * 1.001 * 2^3
//	//01000001000100000000000000000000
//	//这里存的是这个码
//	//下面打印%d,打印的是原码
//	printf("num的值为:%d\n", n);
//	printf("*pFloat的值为:%f\n", *pFloat);
//
//	return 0;
//}



//整型放进去和取出来 和 浮点数放进去和取出来不一样,
//应该整型值放进去整型取出来,浮点数存进去浮点数取出来



//题目：这段代码有什么问题？

//#include <stdio.h>
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//
//	if (num > 600)
//	{
//		printf("%d\n", 1.5 * num - 650);
//	}
//	else
//	{
//		printf("%d\n", num * 2);
//	}
//
//	return 0;
//}


//1.5为double类型，C语言自动转换不同类型的行为称之为隐式类型转换
//转换的基本原则是：低精度向高精度类型转换，此时整个表达式的结果就转化为double类型
//double有8个字节，而%d是打印有符号十进制整数的，此时必然会发生截断，
//截断意味着数据就会丢失，那么结果就一定会出问题
//所以遇到浮点型数据一定要想到用浮点型来接收或者将它强转为整型。



//题目：打印结果是什么？为什么是这样的结果

//#include <stdio.h>
//
//int main()
//{
//	int num = 0;
//
//	while (scanf("%d", &num))
//	{
//		printf("%lf\n", num);
//	}
//
//	return 0;
//}



//为什么总是输出0.000000？

//假设我们的整数为int型的最大正整数0xFFFFFFFF，那么在以% lf打印时，我们转化为double型此时变为了0x00000000FFFFFFFF
//那么你想想我们的符号位(S)占一个，11个阶数(E)， 52个尾数(M)，那么你想想我的阶数E是不是为全0呢？
//这里用十六进制是用来表示的，一个16进制位表示4个二进制位(4个比特)，
//既然为全0，那么你想想我们在浮点型数据在内存中的存储那里是不是讲到过E为全0的话，此时还原回来为一个很小的数V = (-1) ^ 0 * 2 ^ -1022 * M；
//这就是为什么总是打印出0的原因了
//如果是long long的话那么就有可能不是0，因为long long占8个字节，完全能使E不为全0



//为什么会出现双精度和单精度呢?

//原因就是它根本不是一个准确的数字，浮点数在内存中存储并不想我们想的那样是完整存储的，
//在十进制转化成为二进制，是有可能有精度损失的,注意这里的损失，不是一味的减少了，还有可能增多
//浮点数本身存储的时候，在计算不尽的时候，会“四舍五入”或者其他策略，
//这里在我们我们讲第一个话题浮点数如何转为二进制的时候我们就知道有些数字可能是无限位数的


//浮点数的比较

//#include <stdio.h>
//
//int main()
//{
//	double x = 1.0;
//	double y = 0.1;
//
//	if ((x-0.9)==y)
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


// 浮点型数据并不能表示一个完整的数，所以它们也是不会相等的



//#include <stdio.h>
//
//int main()
//{
//	double x = 1.0;
//	double y = 0.1;
//
//	printf("%.50f\n", x - 0.9);
//	printf("%.50f\n", y);
//
//}


//第一个输出是: 0.09999999999999997779553950749686919152736663818359
//第二个输出是：0.10000000000000000555111512312578270211815834045410
//两个数不相等

//浮点数本身有精度损失，进而导致各种结果可能有细微的差别，而对于我们的计算机来说细微的差别也是不相等的。
//结论：浮点数在进行比较的时候，绝对不能直接使用 == 来进行比较





//如何将浮点数与“零值”进行比较？


//方法一：

//#include <stdio.h>
//#include <math.h>
//
//#define EPSILON 0.0000000000001 //自定义的精度
//int main()
//{
//	double x = 1.0;
//	double y = 0.1;
//
//	//if (((x - 0.9) - y) > - EPSILON && ((x - 0.9) - y) < EPSILON)
//	if (fabs((x - 0.9) - y) < EPSILON)//简洁版，fabs用来求浮点数的绝对值，要引用math.h这个头文件
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


//建议：
//1.做题的时候尽量使用double而不是float

//2.平时我们见到的小数默认是double型

//3.遇到计算什么平均数以及计算出小数把它存在一个浮点型变量里面一定要保证表达式中有浮点型数据的出现，
//例如要乘以个1.0

//#include <stdio.h>
//
//int main()
//{
//	int num = 10;
//	double avg = num / 3;
//	printf("%lf\n", avg);
//
//	return 0;
//}
//为了避免出现精度丢失我们要保证浮点型数据的出现，此时我们就乘以1.0，既不会改变原来的数据也保证了小数的出现


//#include <stdio.h>
//
//int main()
//{
//	int num = 10;
//	double avg = 1.0*num / 3;
//	printf("%lf\n", avg);
//
//	return 0;
//}




