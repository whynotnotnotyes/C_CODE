#define _CRT_SECURE_NO_WARNINGS 1



//C语言进阶第四章：自定义类型

//C语言内置类型：char short int long float double
//C语言自定义类型：结构体，枚举，联合


//结构体：
//结构体类型的声明
//结构体的自引用
//结构体变量的定义和初始化
//结构体内存对齐
//结构体传参
//结构体实现位段(位段的填充&可移植性)



//结构体的声明:
//结构体是一些值的集合，这些值称为成员变量。结构的每个成员可以是不同类型的变量
//(联想):数组是一组相同元素类型的元素的集合

//声明一个学生类型，想通过学生类型来创建学生变量(对象)

//#include <stdio.h>
//
//struct t
//{
//	int abc;
//	char c;
//};
//
//struct stu  //struct-结构体关键字  stu-结构体标签  struct stu-结构体类型
//{
//	struct t T1;      //结构体创建变量有四种方法:s1,s2,s3,s4和T1
//	char name[20];
//	char tele[12];
//	char sex[10];
//	int age;
//	//以上是结构体成员变量
//}s4;
//
//struct stu s3;
//
//int main()
//{
//
//	//通过结构体类型创建结构体变量,由于变量放在main内部，所以是局部变量
//	//如果想创建结构体全局变量，那就放在main外面,也就是结构体类型的最后面，分号前
//	//或者直接在main函数外面声明，不在struct类型上声明
//	//s1,s2,s3,s4都是结构体变量，s1和s2是结构体局部变量,s3和s4是结构体全局变量
//
//	struct stu s1;
//	struct stu s2;
//
//	return 0;
//}







//匿名结构体类型

//#include <stdio.h>
//
//struct     //-当结构体没有标签的时候，这个结构体类型就是匿名结构体类型
//	       //匿名结构体变量创建时可以没有标签，但是在后面必须跟一个名字来创建匿名结构体变量
//{
//	int a;
//	char c;
//}sa;
//
//struct
//{
//	int a;
//    char c;
//}*psa;     //在匿名结构体名前面加*，就是匿名结构体类型指针
//
////上面的两个结构在声明的时候省略掉了结构体标签(tag)
//
//int main()
//{
//	psa = &sa;
//	//这种写法会报错
//	//sa和psa是两个成员完全相同的匿名结构体,但是psa匿名结构体指针放不了sa的地址
//	//原因是因为编译器会认为这是两个完全不同的变量
//
//	return 0;
//}











//结构体的自引用
//这里要搞懂，数据结构里面有

//在结构体中包含一个类型为该结构本身的成员可以吗？
//答案是不可以,这样大小是不能确定的
//正确自引用方式是结构体要能够找到同类型的其他的变量，用指针把它串联起来
//指针指向的内容也许很大，但指针永远只有4/8个字节，所以用指针来串


//#include <stdio.h>
//
//struct Node
//{
//	int data;
//	struct Node n;
//};
//数据结构：数据在内存中存储的结构
//链表:创建了一个int类型的数组:12345,这12345是通过链条连接起来的，1的结点包含了1以及下一个元素(也就是2)的地址
//最后一个元素5的节点包含了5和\0
//如果要创建这样一个链表节点的结构体变量，那一个节点除了包含自身之外，还要包含下一个节点的地址

//struct Node
//{
//	//一个节点存放两个部分，一个部分是数据，一个部分是下一个节点的地址
//	//存放数据的叫做数据域，存放地址的叫做指针域
//	int date;
//	struct Node* next;
// //结构体要找到一个同类型的变量的话，用指针去找
//};
//
//int main()
//{
//	return 0;
//}








//结构体自引用的时候不能省略类型的创建，即使是typedef
//结构体改名 typedef

//#include <stdio.h>
//
//typedef struct Node   
//{
//	int data;
//	struct Node* next;
//
//}Node;  //-用typedef把结构体类型struct Node改名为Node
//
//
////typedef struct
////{
////	int data;
////	Node* next;
////}Node;
////这个匿名结构体代码会报错,代码从上到下运行,Node还没有重命名，结构体就有一个Node了,会报错
////所以重命名的时候结构体标签不能省略掉
//
//int main()
//{
//	struct Node s1;  //-可以正常创建变量
//	Node s2;         //-也可以用typedef的Node来创建变量
//	return 0;
//}





//结构体变量的定义和初始化

//#include <stdio.h>
//
//struct t
//{
//	int abc;
//    char c;
//};
//
//struct s
//{
//	char c;
//	struct t T1;
//	int a;
//	double d;
//	char arr[20];
//};
//
//int main()
//{
//	struct s s1 = { 'c',{10,'b'},200,3.14,"lily"};
//	//给结构体每个成员一个值就是结构体初始化
//
//	printf("%c\n%d\n%lf\n%s\n\n", s1.c, s1.a, s1.d, s1.arr);
//	//要把结构体每个成员拿出来就涉及到结构体成员的访问
//
//	//打印结构体里面的结构体
//	printf("%d\n%c\n\n", s1.T1.abc, s1.T1.c);
//
//	//通过访问指针打印结构体
//	struct s* s2 = &s1;
//	printf("%c\n", s2->c);
//	printf("%c\n\n", (*s2).c);
//
//	//通过指针打印结构体里的结构体
//	printf("%d\n%c\n", s2->T1.abc, s2->T1.c);
//	//s2->T1是通过结构体指针访问这个成员，这个成员又是结构体，就用.来访问
//	//结构体指针访问用->		结构体访问用.
//
//	return 0;
//}









//结构体内存对齐


//以下代码输出是多少

//#include <stdio.h>
//
//struct s1
//{
//	char c1;
//	int a;
//	char c2;
//};
//
//struct s2
//{
//	char c1;
//	char c2;
//	int a;
//};
//
//int main()
//{
//	struct s1 S1 = { 0 };
//	struct s2 S2 = { 0 };
//
//	printf("%d\n", sizeof(S1));
//	printf("%d\n", sizeof(S2));
//
//	return 0;
//}

//如何计算结构体大小？
// 1.第一个成员在与结构体变量偏移量为0的地址处
// 2.其他成员变量要对齐到某个数字(对齐数)的整数倍的地址处
//对齐数 = 编译器默认的一个对齐数  与 该成员大小的较小值
//VS中默认的值为8		在gcc编译器里成员的大小就是对齐数
//
// 3.结构体总大小为最大对齐数(每个成员变量都有一个对齐数)的整数倍
// 4.如果嵌套了结构体的情况，嵌套的结构体对齐到自己的最大对齐数的整数倍处,
// 结构体的整体大小就是所有最大对齐数(含嵌套结构体的对齐数)的整数倍

// 结构体内部内存，按照最大的类型进行运算
// 结算的时候必须是最大类型的整数倍，不足整数倍的则补足至整数倍。




//作业：下面代码输出多少？

//#include <stdio.h>
//
//struct s3
//{
//	double b;
//	char c;
//	int a;
//};
//
//struct s4
//{
//	char c1;
//	struct s3 S33;
//	double d;
//};
//
//int main()
//{
//	struct s3 S3 = { 3.14,'c',10 };
//	printf("%d\n", sizeof(S3));
//
//
//	struct s4 S4 = { 'c',{3.14,'c',10},9.6 };
//	printf("%d\n", sizeof(S4));
//	// 4.如果嵌套了结构体的情况，嵌套的结构体对齐到自己的最大对齐数的整数倍处,
//	// 结构体的整体大小就是所有最大对齐数(含嵌套结构体的对齐数)的整数倍
//  //char c1一个字节，struct s3 16个字节，s3里面的最大对齐数是8,8+16 = 24
//  //24再加上8就是32
//
//	return 0;
//}



//为什么会存在内存对齐
//1.平台原因(移植原因):不是所有的硬件平台都能访问任意地址上的任意数据的；
// 某些硬件平台只能在某些地址处取某些特定类型的数据，否则抛出硬件异常
//2.性能原因：数据结构(尤其是栈)应该尽可能地在自然边界上对齐。
// 原因在于，为了访问未对齐的内存，处理器需要作两次内存访问；而对齐的内存访问仅需要一次访问


//总的来说：结构体的内存对齐是拿 空间 来换 时间 的做法





//那在设计结构体的时候，我们既要满足对齐，又要节省空间，如何做到：
//办法就是：让占用空间小的成员尽量集中在一起


//例如：
//struct s1
//{
//	char c1;
//	int i;
//	char c2;
//};
//
//struct s2
//{
//	char c1;
//	char c2;
//	int i;
//};

//s1和s2类型成员一模一样，但是s1和s2所占空间的大小却不一样,s1的空间要更小








//修改默认对齐数
//#pragma pack这个预处理指令，可以改变我们的默认对齐数

//#include <stdio.h>
//
//#pragma pack(4)  //设置默认对齐数为4
//
//struct s
//{
//	char c1;
//	double b;
//};
//
////#pragma pack()  //取消设置的默认对齐数
//
//int main()
//{
//	struct s s1;
//
//	printf("%d\n", sizeof(s1));
//	//如果默认对齐数是8，那么结果就是16
//	//默认对齐数是1，结果就是9
//
//    
//
//	printf("%d\n", sizeof(s1));
//
//	return 0;
//}


//结构体在对齐方式不合适的时候，可以自己更改默认对齐数







//offsetof - 作用是 计算结构体成员相对于起始位置的偏移量
//offsetof是一个宏，不是函数
//用offsetof要引头文件<stddef.h>

//在MSDN的定义：size_t offsetof( structName, memberName );
//第一个参数是结构体类型名(不是变量名)，第二个参数是成员名,返回的是偏移量

//#include <stdio.h>
//#include <stddef.h>
//
//struct s
//{
//	char c;
//	int i;
//	double d;
//};
//
//int main()
//{
//	printf("%d\n", offsetof(struct s, c));
//	printf("%d\n", offsetof(struct s, i));
//	printf("%d\n", offsetof(struct s, d));
//
//	return 0;
//}








//结构体传参

//#include <stdio.h>
//
//struct S
//{
//	int a;
//	char c;
//	double d;
//};
//
//void Init(struct S* s)
//{
//	s->a = 10;
//	s->c = 'b';
//	s->d = 3.14;
//}
//
//void print1(struct S* s)
//{
//	printf("%d\n", s->a);
//	printf("%c\n", s->c);
//	printf("%lf\n", s->d);
//}
//
//void print2(struct S tmp)
//{
//	printf("%d\n", tmp.a);
//	printf("%c\n", tmp.c);
//	printf("%lf\n", tmp.d);
//}
//
//int main()
//{
//	struct S s;
// 
//	//赋值
//	Init(&s);
//
//	//结构体传址 打印
//	print1(&s);
//
//	//结构体传值 打印
//	print2(s);
//
//	return 0;
//}

//结构体传参，要传结构体的地址










//位段
//位段的声明和结构体是类似的，有两个不同:
//1.位段的成员必须是int , unsigned int 或 signed int (其实char也可以)
//当成员都是int的时候，会一次开辟4个字节，当成员都是char的时候，一次开辟一个字节
//2.位段的成员名后边有一个冒号和一个数字


//位段的位是二进制位
//1.位段的成员可以说int ,unsigned int,signed int或者是char(属于整型家族)类型
//2.位段的空间上是按照需要以4个字节(int)或者1个字节(char)的方式来开辟的
//3.位段涉及很多不确定因素,位段是不跨平台的，注重可移植的程序应该避免使用位段
//4.定义位段不能大于32


//#include <stdio.h>
//
//struct s
//{
//	int a : 2;   //意思是这个int变量最多只用两个比特,节省空间，如果这个变量最多只需要两个比特，那就不需要32个比特了
//	int b : 5;	 //意思是这个int变量最多只用5个比特
//	int c : 10;
//	int d : 30;
//};
//
//int main()
//{
//	struct s s1;
//	printf("%d\n", sizeof(s1));
//
//	return 0; 
//}

//为什么sizeof(s1)是8个字节？位段是这样分配的
//位段的成员都是一样的，int分配4个字节先，也就是8个比特，2个比特加上5个比特加上10个比特等于17个比特
//剩下15个比特，放不下最后30个比特，那这15个比特就全部作废，另外再申请一个int类型的内存，也就是4个字节
//加上上面4个字节就是8个字节
//即使把这15个字节给放进第一个四字节里，还是剩下15个比特,还是得开辟一块空间，但是编译器选择浪费这15个比特重新开辟一块空间存放

//正常创建4个int变量需要16个字节，现在只需要8个字节，位段的存在就是为了节省空间





//#include <stdio.h>
//
//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//
//int main()
//{
//	struct S s = { 0 };
//
//	s.a = 10;
//	s.b = 12;
//	s.c = 3;
//	s.d = 4;
//
//	return 0;
//}

//上面代码会先开辟一块char，8个比特,a占3比特,b占4比特,剩下一个字节不够放，再开辟一块空间，c占5个比特,
//剩下的不够放d,再开辟一块char空间,总共3块char空间
//00000000 00000000 00000000
//10的二进制为1010  12的二进制为1100  3的二进制为011   4的二进制为100
//因为a只开辟了3个比特，所以只能截断存放，存放010，所有存进去就是：
//01100010
//c开辟了5个比特，但是c只有三位数，就会用0补齐
//00000011
//第三个字节是00000100 
//全貌就是:01100010 00000011 00000100
//再内存中是16进制存储的,每四个比特一个16进制数
//0110 0010 0000 0011 0000 0100 (从每一块内存右边往左读)
//内存中就是0x620304





//位段的跨平台问题
//1.int位段被当成有符号数是不确定的(最高位是有符号位还是无符号位在C语言里是不确定的)
//2.位段中最大的数目不能确定(16位系统最大16,32位系统最大32,写成27，在16位机器会出问题)
//3.位段中的成员在内存中从左向右分配还是从右向左分配尚未定义
//4.当一个结构包含两个位段，第二个位段成员比较大，无码容纳与第一个位段剩余的位时，
//舍弃剩余的位还是利用，这是不确定的

//总结：跟结构体相比，位段可以达到同样的效果，可以很好的节省空间，但是有跨平台的问题存在
//如果一个代码注重可移植性，应该避免使用位段










//枚举：
//枚举顾名思义就是一一列举，把可能的值一一列举

//枚举的大小都是4个字节(位段也是)

//枚举类型的定义

//枚举类型
//#include <stdio.h>
//
//enum Sex
//{
//	MALE,	//枚举类型成员用逗号,隔开
//	FEMALE,
//	SECRET  //最后一个成员不需要逗号
//};
//
//enum Color
//{
//	red = 2, //枚举变量的值是可以修改的
//	yellow = 4,
//	blue = 8,
//	green    //成员如果没有修改默认值，成员的值是上一个成员的值+1
//	//枚举常量是常量，赋值不是改变值，只是赋一个初始值，赋完值之后就不能改了,因为是常量
//};
//
//int main()
//{
//	enum Sex s = MALE;  //enum Sex只能赋枚举类型的值，也就是说只能用MALE,FEMALE,SECRET  
//	s = FEMALE;
//
//	printf("%d %d %d\n", MALE, FEMALE, SECRET); //打印出来的是默认值
//
//	printf("%d %d %d %d\n", red, yellow, blue,green);//打印修改默认值后的枚举变量
//
//
//	enum Color s1 = 5;   //这样赋值可以通过但是有问题，因为5是int类型,s1是enum Color类型,类型不兼容
//	//所以这里不建议这样赋值
//
//	printf("%d %d %d %d\n", red, yellow, blue, green);
//
//	return 0;
//}







//枚举的优点
//1.增加代码的可读性和可维护性
//2.和#define定义的标识符比较枚举有类型检查,更加严谨，#define和enum的区别是#define定义的red没有类型，
// 只是一个符号,但是enum Color的red有类型，那就是枚举类型
//3.防止命名污染(封装)
//4.便于调试
//5.使用方便，一次可以定义多个常量

//enum和#define相比

//#include <stdio.h>
//
//#define red 1
//#define yellow 4
//#define blue 6
//
//enum Color
//{
//	red,
//	yellow,
//	blue
//};
////C语言运行过程:C语言的源代码-预编译-编译-链接-可执行程序
////#define和enum的区别是#define定义的red没有类型，只是一个符号,但是enum Color的red有类型，那就是枚举类型
//
//int main()
//{
//	return 0;
//}


//枚举的大小

//#include <stdio.h>
//
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//}s1;
//
//int main()
//{
//	enum Sex s = MALE; //这里赋值只能赋值枚举里的成员，枚举里的成员又是int类型,打印sizoef就是4个字节
//
//	printf("%d\n", sizeof(s));
//	printf("%d\n", sizeof(s1));
//
//	return 0;
//}






//联合
//联合也叫联合体，共用体

//联合类型的定义
//联合也是一种特殊的自定义类型，这种类型定义的变量也包含一系列的成员，
// 特征是这些成员共用同一块空间(所以也叫共用体)

//#include <stdio.h>
//
//union S
//{
//	char c;
//	int i;
//	double b;
//	double o;
//};
//
//int main()
//{
//	union S s;
//
//	printf("%d\n\n", sizeof(s));
//
//	printf("%p\n", &s);
//
//	printf("%p\n", &(s.c));
//	printf("%p\n", &(s.i));
//
//	s.i = 0x55;
//
//	printf("%p\n", &(s.i));
//	printf("%p\n", &(s.c));
//
//	return 0;
//}

//联合体的特点
//联合体的成员是共用同一块内存空间的，这样一个联合变量的大小,至少是最大成员的大小
//因为联合至少得有能力保存最大的那个成员

//这些成员不能同时使用,改变一个成员，另外的也会改变






//判断机器大小字节序


//方法1：指针访问

//1的1616进制是0x00 00 00 01
//低地址------------------高地址
//小端存储就是: 0x01 00 00 00
//大端存储就是: 0x00 00 00 01

//#include <stdio.h>
//
//int main()
//{
//	int a = 1;   //0x00 00 00 01 访问是从右到左(有待商榷)
//
//	
//	if (*(char*)&a==1)
//	{
//		printf("小端存储\n");
//	}
//
//	return 0;
//}




//方法2：联合体的方式求解

//#include <stdio.h>
//
//int check_sys()
//{
//	union un
//	{
//		char c;
//		int i;
//	}u;
//
//	u.i = 1;
//
//	if (u.c == 1)
//	{
//		return 1;
//	}
//	//联合体是空间重叠的，给i赋值1，然后看c的值是多少,如果i是小端存储，那就是0x01000000,大端就是0x00000001
//	//小端c里面放的就是1,大端c里面放的就是0
//}
//
//int main()
//{
//	int ret = check_sys();
//
//	if (ret == 1)
//	{
//		printf("小端存储\n");
//	}
//	else
//	{
//		printf("大端存储\n");
//	}
//
//	return 0;
//}



//虽然是共用一块内存，但是成员大小是不一样的
//比如0x11223344,存到联合体里面就是0x44332211(小端)
//char c里面只会存储一个字节，就是44，i是int类型的就会存储44332211
//所以改变联合体的一个成员，其他成员也会跟着变
//union un
//{
//	char c;
//	int i;
//};








//联合大小的计算

//1.联合的大小至少是最大成员的大小
//2.当最大成员大小不是最大对齐数的整数倍的时候，就要对齐到最大对齐数的整数倍

//#include <stdio.h>
//
//union un
//{
//	//char arr[5]; //数组的元素类型是什么，就拿这个类型大小来算对齐数,arr类型是char,大小是1，
//  //跟默认对齐数8比，较小，1就是对齐数
//	//写了arr[5],相当于写了5个char:char c1,char c2,char c3,char c4,char c5
//	int i;  //默认对齐数8，i大小是4,4较小，4就是默认对齐数
//
//  //char arr[5]总共5个字节,这个联合体(共用体)至少5个字节，但是联合体大小必须是联合体最大对齐数的整数倍，
//  //最大对齐数是4，5不是4的整数倍，那就补齐到4的整数倍，那就是8
//
//};
//
//int main()
//{
//	union un u;
//
//	printf("%d\n", sizeof(u));
//
//	return 0;
//}


//结构体存在对齐，联合体存在对齐,位段不存在对齐，因为要节省空间,枚举也没有对齐








//结构体进阶 章节作业



//1.当A=2，B=3时，pointer分配多少个字节的空间？

//#include <stdio.h>
//
//#define MAX_SIZE A+B
//
//struct _Record_Struct
//{
//	unsigned char Env_Alarm_ID : 4;
//	unsigned char Paral : 2;
//	unsigned char state : ;
//	unsigned char avail : 1;
//}*Env_Alarm_Record;
//
//int main()
//{
//	struct _Record_Struct* pointer = (struct _Record_Secord_Struct*)malloc
//	(sizeof(struct _Record_Struct) * MAX_SIZE);
//
//	return 0;
//}




//答案是9
//解析：unsigned char state : ;  没有定义大小，那就占一整个开辟的空间，也就是占1个字节







//2.结果是多少？

//#include <stdio.h>
//
//union Un
//{
//	short s[7];
//	int n;
//};
//
//int main()
//{
//	printf("%d\n", sizeof(union Un));
//
//	return 0;
//}





//小项目：通讯录

//#include <stdio.h>
//#include "add.h"
//
//void menu()
//{
//	printf("****************************************\n");
//	printf("**********1.add      2.del    **********\n");
//	printf("**********3.search   4.modify **********\n");
//	printf("**********5.show     6.sort   **********\n");
//	printf("**********0.exit              **********\n");
//	printf("****************************************\n");
//}
//
//int main()
//{
//	int input = 0;
//
//
//	//创建通讯录
//	struct Contact con;
//	//con就是通讯录，里边包含了1000的元素的数和size
//
//
//	//初始化通讯录
//	InitContact(&con);
//
//	do
//	{
//		menu();
//
//		printf("请选择:>\n");
//		scanf("%d", &input);
//
//		switch (input)
//		{
//		case ADD:
//			AddContact(&con);
//			break;
//		case DEL:
//			DelContact(&con);
//			break;
//		case SEARCH:
//			SearchContact(&con);
//			break;
//		case MODIFY:
//			ModifyContact(&con);
//			break;
//		case SHOW:
//			ShowContact(&con);
//			break;
//		case SORT:
//			break;
//		case EXIT:
//			printf("退出通讯录\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}









