#define _CRT_SECURE_NO_WARNINGS 1



//初识结构体
//1.结构体类型的声明
//2.结构体初始化
//3.结构体成员访问
//4.结构体传参



//1.结构体的声明
//结构是一些值的集合，这些值称为成员变量，结构的每个成员可以是不同类型的变量


//#include <stdio.h>
//
////struct-结构体关键字		stu-结构体标签(想起什么起什么)		struct stu-结构体类型
////struct stu是一个结构体类型，没有占内存空间，和int，char等价
//
//struct stu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}s2,s3; //结尾需要有分号,这里的s2,s3和s1一样,都是结构体变量,只不过s1是局部的结构体变量，s2,s3是全局的结构体变量
//		//但这个创建结构体变量的方法不推荐使用，因为要尽量少的去使用全局变量
//int main()
//{
//	struct stu s1;
//	//当这时拿struct stu这个结构体类型来创建一个s1这个变量的时候，这时候才占据空间,在此之前不会创建空间
//	return 0;
//}





//#include <stdio.h>
//
//typedef struct stu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}stu; //这是对类型重定义产生的结构体类型 typedef
//
//int main()
//{
//	//stu s1;
//	//struct stu s2;
//	//这两种都可以定义变量
//    //以上两种是结构体变量
// 
//	stu s1 = {"张三",20,"1824928888","男"};  //结构体初始化
//	struct stu s1 = { "里斯",21,"1123389898","男" };
//
//	printf("%s %d %s %s\n", s1.name, s1.age, s1.tele, s1.sex);
//
//}





//结构成员的类型
//结构的成员可以是标量(普通的变量),数组，指针，甚至是其他结构体


//#include <stdio.h>
//
//struct s
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//
//struct t
//{
//	char ch[10];
//	struct s ds;	//结构体里面可以放结构体
//	char* pc;
//};
//
//int main()	
//{	
//	char arr[] = "hello orld!";
//	struct t s1 = { "黄冠",{10,'m',"12389765",3.14},arr };
//
//	printf("%d\n", s1.ds.a); 
//	printf("%lf\n", s1.ds.d); 
//	printf("%s\n", s1.pc);
//
//	return 0;
//}




//结构体成员的访问

//#include <stdio.h>
//
//typedef struct stu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}stu;
//
//void print1(stu tmp)
//{
//	printf("%s\n", tmp.name);
//	printf("%d\n", tmp.age);
//	printf("%s\n", tmp.tele);
//	printf("%s\n\n\n", tmp.sex);
//}
//
//void print2(stu* tmp2)
//{
//	printf("%s\n", (*tmp2).name);
//	printf("%d\n", (*tmp2).age);
//	printf("%s\n", (*tmp2).tele);
//	printf("%s\n\n\n", (*tmp2).sex);
//}
//
//void print3(stu* tmp3)
//{
//	printf("%s\n", tmp3->name);
//	printf("%d\n", tmp3->age);
//	printf("%s\n", tmp3->tele);
//	printf("%s\n\n\n", tmp3->sex);
//}
//
//int main()
//{
//	stu s = { "张三",20,"123234873","男" };
//
//	print1(s);  //函数可以传结构体变量
//
//	print2(&s);
//
//	print3(&s);
//	//优先选择print3(传结构体的地址)，因为传址过去不用再临时拷贝一份实参，就不会造成资源浪费
//
//	return 0;
//}

//函数传参的时候，参数是需要压栈的
//如果传递一个结构体对象的时候，结构体过大，参数压栈的系统开销比较大，所以会导致性能的下降
//所以结构体传参的时候，要传结构体的地址





//结构体章节作业：



//#include <stdio.h>
//
//struct student
//{
//	int num;
//	char name[32];
//	float score;
//}stu;

//struct是结构体类型的关键字
//struct student是用户定义的结构体类型
//num,score都是结构体成员名
//stu是用户定义的结构体变量名





//编程题：喝汽水问题
//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以有多少瓶汽水


//#include <stdio.h>
//
//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//
//	int count = money;
//	int empty = 0;
//
//	int ret = 0;
//	while (count > 0)
//	{
//		if (count % 2 == 0)
//		{
//			ret += count / 2;
//			count /= 2;
//		}
//		else if (count % 2 == 1)
//		{
//			ret += count / 2;
//			empty++;
//			count /= 2;
//		}
//
//		if (empty / 2 == 1)
//		{
//			ret++;
//		}
//	}
//
//	printf("%d\n", ret+money);
//
//	return 0;
//}




//鹏哥写的
//#include <stdio.h>
//
//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	scanf("%d", &money);
//
//	//买回来的汽水喝掉
//	total = money;
//	empty = money;
//	//换回来的汽水
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("total = %d\n", total);
//
//	return 0;
//}




