#define _CRT_SECURE_NO_WARNINGS 1



//新章节：文件操作

//什么是文件
//文件名
//文件类型
//文件缓冲区
//文件指针
//文件的打开与关闭
//文件的顺序读写
//文件的随机读写
//文件结束的判定




//什么是文件
//磁盘上的文件就是文件
//但是在程序设计中，我们一般谈的文件有两种：程序文件，数据文件

//程序文件：包括源程序文件(后缀为.c),目标文件(window环境后缀为.obj)，可执行程序(windows环境后缀为.exe)
//程序文件可以操作数据文件

//数据文件：文件的内容不一定是程序,而是程序运行时读写的数据，
//比如程序运行需要从中读取数据的文件，或者输出内容的文件


//本章节讨论的是数据文件
//在以前各章所处理数据的输入输出都是以终端为对象的，即从终端的键盘输入数据，运行结果显示到显示屏上。
//其实有时候我们会把信息输出到磁盘上，当需要的时候再从磁盘上把数据读取到内存中使用，这里处理的就是磁盘上的文件






//文件名
//一个文件要有一个唯一的文件标识，以便用户识别和引用。
//文件名包含三个部分：文件路径+文件名主干+文件后缀
//例如：c:\code\test.txt
//为了方便起见，文件标示常被称为文件名
//c:\code是路径	test是文件名主干	txt是文件后缀,不是文件类型






//文件类型
//根据数据的组织形式，数据文件被分为文本文件或者二进制文件
//数据在内存中以二进制的形式存储，如果不加转换的输出到外存，就是二进制文件
//如果要求在外存上以ASCII码的形式存储，则需要在存储前转换。以ASCII字符的形式存储的文件就是文本文件
//看得懂的是文本文件，看不懂的，随机值随机码的文件是二进制文件
//也就是说最原始的，未经过处理的就是二进制文件，而经过ASCII转换处理的就是文本文件

//一个数据在内存中是怎么存储的呢？
//字符一律以ASCII存储，数值型数据既可以用ASCII形式存储，也可以使用二进制形式存储
//如有整数10000，如果以ASCII码的形式输出到磁盘，则磁盘中占用5个字节(每个字符一个字节)：10000
//而二进制形式输出,则在磁盘上只占2个字节：0x10 27 00 00


//10000在内存中的存储形式：
//10000的二进制是：00000000 00000000 00100111 00010000，直接存到内存里面，就是二进制形式存储

//把10000的每一位都转换成ASCII值存到内存里面，就是00110001 00110000 00110000 00110000 00110000,
//这种就是用ASCII码值存储                       1(49)     0(50)       0        0         0



//测试代码
//#include <stdio.h>
//
//int main()
//{
//	int a = 10000;
//
//	FILE* pf = fopen("test.txt", "wb"); 
//	//fopen：打开文件   test.txt:打开一个test.txt的文件
//	//w :write写入   b:binary 二进制   wb:以二进制的形式去写入这个文件
//	//当这个文件不存在的时候,fopen会创建这个文件
//
//	fwrite(&a, 4, 1, pf); //以二进制的形式写到文件中
//	//&a:写文件，写a的内容进去，&a表示数据来源于a这个地址处
//	//4：4是写4个字节的意思
//	//1：写一个这样子的数据，写一个4个字节的数据
//	//pf：放到pf维护的文件里去
//
//	fclose(pf);
//	//当文件被写入后，就可以关闭这个文件了
//
//	pf = NULL;
//	//关闭完之后pf被置为空指针
//
//	return 0;
//}

//用记事本或者notepad++打开创建好的test.txt会发现根本看不懂里面的内容，
//原因是因为我们是以二进制写进去这个文件的，但记事本和notepad++都是文本编辑器，看不懂

//但是vs可以看得懂，源文件→添加→现有项→右击添加的test.txt→打开方式→选择二进制编辑器

//打开之后是10 27 00 00,由于是小端放到内存里倒着读是00 00 27 10，转成十进制就是10000
//打印出来的二进制和内存中存储的是相反的

//一万存到文本的形式就是10000，存到二进制里就是10 27 00 00







//文件缓存区


//ANISC标准采用"缓冲文件系统"处理的数据文件的，所谓缓冲文件系统是指系统自动地
//在内存中为程序中每一个正在使用的文件开辟一块"文件缓冲区"。
//从内存向磁盘输出数据会先送到内存中的缓冲区，装满缓冲区后才一起送到磁盘上。
//如果从磁盘向计算机读入数据，则从磁盘文件中读取数据输入到内存缓冲区(充满缓冲区)，
//然后再从缓冲区逐个的将数据送到程序数据区(程序变量)等。
//缓冲区的大小根据C编译系统决定的


//任何的程序显示到屏幕上都会有一个输入缓冲区或输出缓冲区







//文件指针


//缓冲文件系统中，关键的概念是"文件类型指针",简称"文件指针"。
//每个被使用的文件都在内存中开辟了一个相应的文件信息区，用来存放文件的相关信息
//如文件的名字，文件状态及文件当前的位置等
//这些信息是保存在一个结构体变量中的。该结构类型是有系统声明的，取名为FILE


//当你想要在读取test.txt，就会在内存中开辟一块空间，叫文件信息区，里面存放test.txt的相关信息，
//里面存放的信息保存在一个结构体变量中，该结构体类型由系统来声明，取名为FILE，
//用FILE创建一个变量名为FILE f时，f就能与一个文件相关联

//FILE其实是一个结构体重命名

//    typedef struct _iobuf
//{
//	void* _Placeholder;
//	} FILE;

//_iobuf又是：

//struct _iobuf
//{
//	char* _ptr;
//	int _cnt;
//	char* _base;
//	int _flag;
//	int _file;
//	int _charbuf;
//	int _bufsiz;
//	char* _tmpfname;
//};


//当你对任何一个文件进行操作的时候，比如打开一个文件的时候，写文件，读文件的时候等，
//系统会根据文件的情况自动创建一个FILE结构的变量，并且填充其中的信息，
//这些文件信息区跟一个文件对应起来

//不同编译器的FILE类型包含的内容不完全相同，但是大同小异

//一般都是通过FILE*的指针来维护这个FILE结构体的变量




//文件的打开与关闭

//在编写程序的时候，在打开文件的同时，都会返回一个FILE*的指针变量指向该文件，也相当于建立了指针和文件的关系

//ANSIC规定使用fopen(const char* filename,const char* mode);
//int fclose(FILE* stream);


//mode(打开方式)如下：

//文件使用方式：		含义：										如果指定文件不存在：
//"r"(只读)			为了输入数据，打开一个已经存在的文本文件		出错
//"w"(只写)			为了输出数据，打开一个文本文件					建立一个新的
//"a"(追加)			向文本文件尾添加数据							出错
//"rb"(只读)			为了输入数据，打开一个二进制文件				出错
//"wb"(只写)			为了输出数据，打开一个二进制文件				建立一个新的文件



//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <errno.h>
//
//int main()
//{
//	
//	//相对路径-相对于当前位置在哪个底下
//	//FILE* ps = fopen("test.txt", "r");
//
//	//绝对路径-绝对路径要给两个\\，因为一个\遇到特殊字符就会被识别成转义字符，比如\t,\n
//	//FILE* ps = fopen("E:/Chengxu\\C++\\魔怔人学c++之你好你是艾伦的妈妈吗\\yayinideyongyunbushixing\\test.txt", "r");
//	
//	//如果要打开上一个路径的文件，可以用绝对路径，在用相对路径的时候要用.. 当前路径就用.
//	//FILE* ps = fopen("..//test.txt", "r");
//	//两个右斜杠\\是为了防止转义，用一个左斜杠也可以达到同样的效果
//
//	//当前路径的上一个路径的上一个路径
//	//FILE* ps = fopen("..\\..\test.txt", "w");
//
//	return 0;
//}





//#include <stdio.h>
//
//int main()
//{
//	//FILE打开失败就会返回空指针,所以file*和动态内存一样要做返回值判断
//
//	FILE* ps = fopen("test.txt", "r");
//
//	if (ps = NULL)
//	{
//		printf("打开失败\n");
//		return 0;
//	}
//
//	//打开成功
//	//读文件
//	//关闭文件
//	fclose(ps);
//	ps = NULL;
//
//	//fclose就是关闭文件，并且把资源释放掉，但是不会把ps置空，所以关闭完要手动置空，和free一样
//
//
//	FILE* pf = fopen("test.txt", "w");
//	//如果是用写(w)的形式打开，就算有这个文件，也会创建一个新文件覆盖，旧文件有内容，写了之后再打开就是空的
//
//	return 0;
//}






//文件的顺序读写


//功能		    	函数名			适用于
//字符输入函数		fgetc			所有输入流 
//字符输出函数		fputc			所有输出流
//文本行输入函数		fgets			所有输入流	
//文本行输出函数		fputs			所有输出流
//格式化输入函数		fscanf			所有输入流
//格式化输出函数		fprintf			所有输出流
//二进制输入			fread			文件
//二进制输出			fwrite			文件





//字符输出函数   

// fputc   c就是char的意思

//MSDN：int fputc(int c, FILE* stream);

//写文件 - 一次写一个字符

//#include <stdio.h>
//#include <errno.h>
//#include <stdlib.h>
//
//int main()
//{
//	FILE* pfWrite = fopen("test.txt", "w"); 
//
//	if (pfWrite == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//
//
//
//	//fputc(写文件)在MSDN的解释：
//	//int fputc(int c, FILE * stream);
//	
// 
//	//写文件
//	fputc('b', pfWrite);
//	fputc('i', pfWrite);
//	fputc('t', pfWrite);
//    //文件输出流，向文件里写东西
//
//
//	//关闭文件
//	fclose(pfWrite);
//	pfWrite = NULL;
//
//	return 0;
//}



//字符输入函数

//读文件 - fgetc 一次读一个字符
//MSDN：int fgetc( FILE *stream );

//#include <stdio.h>
//#include <errno.h>
//#include <stdlib.h>
//
//int main()
//{
//	FILE* pfRead = fopen("test.txt", "r"); 
//
//	if (pfRead == NULL)
//	{
//		printf("%s\n",strerror(errno));
//		return 0;
//	}
//
//	//读文件
//	printf("%c", fgetc(pfRead));  //fgetc一次只读一个字符
//	printf("%c", fgetc(pfRead));
//	printf("%c", fgetc(pfRead));
//  //文件输入流，向文件里读东西
//
//	//关闭文件
//	fclose(pfRead);
//	pfRead = NULL;
//
//	return 0;
//}



//从键盘上输入
//输出到屏幕
//键盘&屏幕都是外部设备

//键盘-标准输入设备 - stdin
//屏幕-标准输出设备 - stdout
//这两个是一个程序默认打开的两个流设备

//一个程序运行默认打开三个流
//stdin-标准输入
//stdout-标准输出
//stderr
//这三个流都是FILE*类型的 

//这里的流是指指针，当从程序文件输出到磁盘的时候，这个指针叫输出流，反之叫输入流


//#include <stdio.h>
//
//int main()
//{
//	int ch = fgetc(stdin);
//
//	fputc(ch, stdout);
//
//	return 0;
//}

//fgetc适用于所有输入流，fputc适用于所有输出流，包括stdin(标准输入)和stdout(标准输出)
//所有输出流的意思是既可以操作文件也可以操作屏幕








//文本行输入输出函数 fgets/fputs    s就是string的意思


//读文件

//fgets - 文本行输入函数

//MSDN:char *fgets( char *string, int n, FILE *stream );
//char* string：数据的存储位置，从流里面读取的信息放在这里
//int n：要读取多少个字符(最多读取多少个字符)
//FILE* stream：从流里面读

//#include <stdio.h>
//
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//
//	if (pf == NULL)
//	{
//		printf("打开失败\n");
//		return 0;
//	}
//
//	char buf[1024] = { 0 };
//
//	//读文件 - 文本行输入函数
//	fgets(buf, 1024, pf);
//	printf("%s", buf);
//	//为什么会有换行？因为原文件test.txt就有换行符，fgets一次打印一行，换行符也会打印过去
//
//	fgets(buf, 1024, pf);
//	//puts也能够实习和printf一样的打印效果
//	//puts在MSDN的解释：int puts( const char *string );
//	puts(buf);
//
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}




//写文件 - fputs

//fputs  - 文本行输出函数
//fputs在MSDN的解释：int fputs( const char *string, FILE *stream );
//意思是写一个字符串到流里面去

//#include <stdio.h>
//
//int main()
//{
//	FILE* pf = fopen("test.txt", "w"); //要用w，因为要写入
//
//	//写文件   
//	fputs("hello ", pf);
//	fputs("world", pf);
//	
//
//	return 0;
//}





//所有输出流的意思是既可以操作文件也可以操作屏幕

//#include <stdio.h>
//
//int main()
//{
//	//从键盘读取一行文本信息
//	char buf[1024] = { 0 };
//
//	fgets(buf, 1024, stdin); //从标准输入流读取
//	fputs(buf, stdout);  //输出到标准输出流
//
//	//上面代码等价于
//	gets(buf);
//	puts(buf);
//
//	//gets和fgets的区别就是fgets可以用n来限制，不容易让数组越界
//
//	return 0;
//}





//以上都是对字符串进行操作的，格式化输入输出函数可以把任何类型的数据都写进去


//格式化输入输出函数	 fprintf/fscanf


//               int printf(const char* format[, argument]...);
//int fprintf(FILE* stream, const char* format[, argument]...);
//printf针对标准输出流，fprintf既可以针对标准输出流也可以针对文件流


//格式化输出函数  fprintf

//#include <stdio.h>
//
//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//
//int main()
//{
//	struct S s = { 100,3.14f,"bit" };   //3.14f是表示这个浮点数是float类型的，不加f就是默认double类型
//
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//
//	//格式化的形式写文件
//	fprintf(pf,"%d  %f  %s",s.n,s.score,s.arr);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}




//格式化输入函数   fscanf

//               int scanf(const char* format[, argument]...);
//int fscanf(FILE* stream, const char* format[, argument]...);



//#include <stdio.h>
//
//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//
//int main()
//{
//	struct S s = {0}; 
//
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//
//	fscanf(pf, "%d %f %s", &(s.n), &(s.score), s.arr);
//	printf("%d %f %s", s.n, s.score, s.arr);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//c语言偏向底层，我们得把自己想象成内存...
//输入输出是站在内存的角度，而不是在文件（硬盘）角度的
//就相当于函数，输入，就是把信息输入到程序中，输出，就是从程序中弄出来
//可以这样理解 fprintf：是指从程序中输出到文件中去，fscanf：从文件中输入到程序中来
//输入是往文件读数据，输出是往文件写数据


//对应标准输入输出流

//#include <stdio.h>
//
//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//
//int main()
//{
//	struct S s = { 0 };
//
//	fscanf(stdin, "%d %f %s", &(s.n), &(s.score), s.arr);
//	fprintf(stdout,"%d %2f %s", s.n, s.score, s.arr);  //%2f就是小数点后面打印两位的意思
//
//	return 0;
//}

//这里功能就跟scanf和printf的功能一样了，这里指出输入的地方从键盘输入，输出的地方是屏幕上




//对比一组函数
//scanf/fscanf/sscanf
//printf/fprintf/sprintf

//scanf/printf   是针对标准输入流/标准输出流的 格式化输入/输出语句
//fscanf/fprintf 是针对所有输入流/所有输出流的 格式化输入/输出语句

//sfcanf/fprintf其实是包含了scanf/printf的功能的


//sscanf是从字符串中读取格式化的数据
//sprintf是把格式化数据输出成(存储到)字符串

//#include <stdio.h>
//
//struct S
//{
//	int n;
//	float score;
//	char arr[20];
//};
//
//int main()
//{
//	struct S s = { 100,3.14f,"abcdef" };
//	struct S tmp = { 0 };
//	char buf[1024] = { 0 };
//
//	//把格式化的数据转换成字符串存储到buf
//	sprintf(buf, "%d %f %s", s.n, s.score, s.arr);
//
//	//printf("%s\n",buf);
//	//从buf中读取格式化数据到tmp中
//	sscanf(buf, "%d %f %s", &(tmp.n), &(tmp.score), &tmp.arr);
//
//	printf("%d %f %s\n", tmp.n, tmp.score, tmp.arr);
//
//	return 0;
//}






//二进制输入输出函数  fread/fwrite 
//适用于文件流

//fwrite - 二进制输出文件
//MSDN：size_t fwrite( const void *buffer, size_t size, size_t count, FILE *stream );

//#include <stdio.h>
//
//struct S 
//{
//	char name[1024];
//	int age;
//	float score;
//};
//
//#include <stdio.h>
//
//int main()
//{
//	struct S s = { "张三",20,55.6 };
//
//	struct S tmp = { 0 };
//
//	FILE* pf = fopen("test.txt", "wb");
//	
//	if (pf == NULL)
//	{
//		return 0;
//	}
//
//	//二进制的形式写文件
//	fwrite(&s, sizeof(struct S), 1, pf);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}



//fread - 二进制输入文件
//MSDN：size_t fread( void *buffer, size_t size, size_t count, FILE *stream );
//从stream里读count个大小为size的数据最后放到buffer里面去

//#include <stdio.h>
//
//struct S
//{
//	char name[20];
//	int age;
//	double score;
//};
//
//int main()
//{
//	struct S tmp = {0};
//
//	FILE* pf = fopen("test.txt", "rb");
//
//	if (pf == NULL)
//	{
//		return 0;
//	}
//
//	fread(&tmp, sizeof(struct S), 1, pf);
//
//	printf("%s %d %lf\n", tmp.name, tmp.age, tmp.score);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}




//通讯录(动态，文件版)

//#include <stdio.h>
//#include "add.h"
//
//void menu()
//{
//	printf("****************************************\n");
//	printf("**********1.add      2.del    **********\n");
//	printf("**********3.search   4.modify **********\n");
//	printf("**********5.show     6.sort   **********\n");
//	printf("**********7.save     0.exit   **********\n");
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
//			//销毁通讯录
//			SaveContact(&con); //退出前保存
//			DestroyContact(&con);
//			printf("退出通讯录\n");
//			break;
//		case SAVE:
//			SaveContact(&con);
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}







//文件的随机读写

//fseek 

//移动文件指针到指定的位置
//根据文件指针的位置和偏移量来定位文件指针
//MSDN：int fseek( FILE *stream, long offset, int origin );
//stream - 要操作的文件
//offset - 偏移量   偏移量为2，起始指针向右移动两个位置，偏移量为-2，起始指针向左移动两个位置
//origin - 文件指针当前位置,有三个选项：SEEK_CUR(文件当前位置) SEEK_END(文件的末尾位置) SEEK_SET(文件的起始位置)

//文件打开指针默认指向第一位，如果想要访问其他地方，就可以用fseek


//#include <stdio.h>
//#include <errno.h>
//
//int main()
//{
//	//做这个实验时test.txt里应该放的是"abcdef";
//	FILE* pf = fopen("test.txt", "r");
//
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//
//	//打开文件成功第一步定位文件指针
//	//1.定位文件指针
//	fseek(pf, 2, SEEK_CUR);
//	//SEEK_CUR(文件当前位置)
//	//SEEK_END(文件的末尾位置) 例子是abcdef,末尾位置是在f的后面，如果要偏移到e，就需要写-2
//	//SEEK_SET(文件的起始位置) 
//
//	//2.读取文件
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0; 
//}







//ftell
//返回文件指针相对于起始位置的偏移量
//MSDN：long ftell( FILE *stream );

//rewind
//MSDN：long ftell( FILE *stream );
//让文件指针的位置回到文件的起始位置


//#include <stdio.h>
//#include <errno.h>
//
//int main()
//{
//	//这个实验需要把test.txt里内容设置为abcdef
//	FILE* pf = fopen("test.txt", "r");
//
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//
//	//1.定位文件指针
//	fseek(pf, -2, SEEK_END);
//
//	int ret = ftell(pf);
//	printf("%d\n", ret);
//
//	fgetc(pf);
//	int pos = ftell(pf);  //ftell:返回文件指针相对于起始位置的偏移量
//	printf("%d\n", pos);
//	//当fgetc的时候，就会读取一个，每读一次文件指针向后偏移一个
//
//	char ch = 0;
//	rewind(pf);  //rewind:让文件指针的位置回到文件的起始位置
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	//释放空间
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}




//perror
//错误码信息函数

//#include <stdio.h>
//
//int main()
//{
//	FILE* pf = fopen("test222.txt", "r");
//
//	if (pf == NULL)
//	{
//		perror("Open test222.txt");
//		//perror跟strerror作用一样，都是打印错误信息，但是perror不用引头文件，也不用errno接收错误码
//		//perror的作用范围还比strerror要广，perror可以自定义输出，并且会在后面添加冒号和空格,可以替代strerror
//		return 0;
//	}
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}






//feof - 文件结束判定

//在文件读取过程中，不能用feof函数的返回值直接用来判断文件的是否结束。
//而是应用于当文件读取结束的时候，判断是读取失败结束，还是遇到文件尾结束。

//1.文本文件读取是否结束，判断返回值是否为EOF(fgetc),或者NULL(fgets)
//例如：
//		fgetc判断是否为EOF
//		fgets判断返回值是否为NULL

//2.二进制文件的读取结束判断，判断返回值是否小于实际要读的个数
//例如：
//		fread判断返回值是否小于实际要读的个数


//#include <stdio.h>
//
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//
//	if (pf == NULL)
//	{
//		perror("open file test2.txt");
//		return 0;
//	}
//
//	//读文件
//	int ch = 0;
//	while ((ch = fgetc(pf)) != EOF)
//	{
//		putchar(ch);
//	}
//
//	//文件结束后，找结束的原因，是因为文件运行正常结束，还是遇到错误结束的
//	if (ferror(pf))
//	{
//		printf("error\n");
//	}
//	else if (feof(pf))
//	{
//		printf("end of file\n");
//	}
//	//ferror遇到文件结束或文件读取错误都会返回真，再用feof进一步判断是正常结束还是遇到了读取错误
//	//ferror返回值为0，表示没有出错，非零为错
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}





