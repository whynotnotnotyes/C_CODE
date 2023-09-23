#define _CRT_SECURE_NO_WARNINGS 1



#include <stdio.h>

//一
//int main()
//{
//
//	int MAX = 100000;
//
//	int a = MAX;
//
//	printf("a = %c", a);
//
//	return 0;
//
//}
//
//
////二.枚举常量
//enum sex
//{
//	male = 3,
//	female,
//	secret
//
//};
//
//
//int main()
//{
//	printf("%d\n", female);
//	printf("%d\n", male);
//	printf("%d\n", secret);
//
//
//}
//
//
//三.常变量，常变量通常要求大写
//int main() 
//{
//	const int A = 12;
//
//
//	printf("%d\n", a);
//
//	return 0;
//
//
//}
//
// 
//
//四.长度
//int main()
//
//{
//
//	/*char arr1[] = "abc";
//
//	char arr2[] = { 'a','b','c','\0'};
//
//	printf("% s\n", arr1);
//
//	printf("%s\n", arr2);
//
//	
//
//	printf("%d\n", strlen(arr1));
//
//	printf("%d\n", strlen(arr2));*/
//
//	int a = 199999;
//
//	int len = strlen("a");
//
//	printf("%d\n", len);
//
//	printf("%d\n", strlen(a));
//
//	strlen:你输入是什么，它就会输出多少位的数，而不是输出那个变量所包含的大小，比如strlen（a），输出的就是1，strlen（inta），输出的就是4；
//	 
//	int len = strlen("arr1");
//
//	printf("%d\n", len);
//
//	
//	char a = 'n';
//
//	printf("%s\n", a);
//
//
// 
//五.转义字符
//int main()
//{
//
//	  \n:换行字符,n就是new的意思...吧
//	printf("%d\n", 100);
//	printf("%c\n", 'm');
//	printf("%s\n", "abcde");
//
//	  \:转义字符;
//	printf("%c\n\n", '\'');
//	printf("%s\n\n", "'");
//	/*printf("\test\test\test  \n");
//	printf("\\test\\test\\test   \n\n");*/
//
//
//	  \t：水平制表符,相当于大空格;
//	printf("张三\t\t李四\n");
//
//
//	   \a:警告字符，输入后电脑会响一下；
//	printf("\a");
//
//
//	  \v：垂直制表符
//	printf("\vop\vop\vop");
//
//
//
//
//	return 0;
//
//}
//
//
//
//六.简单计算
// 
//int main()
//{
//
//		printf双引号原封不动输出东西，但是加了关键字，比如%d，就会把逗号后面的值赋给%d;
//	乘
//	/*printf("%d\n\n", 8 * 7);
//	printf("7*8=%d\n\n", 8 * 7);*/
//
//	除
//	/*printf("8/2=%d\n\n", 8 / 2);*/
//
//	加减
//	/*printf("7+2-9=%d\n\n", 7 + 2 - 9);*/
//
//	取余
//	/*printf("7%2=%d", 7 % 2);*/
//
//}
//
//
//
//七.计算价格(low版)
//
//int main()
//{
//	int price = 0;
//
//	printf("请输入金额（元）:");
//   
//  &price：&是取地址符
//	scanf("%d", &price);
//
//	int change = 100 - price;
//
//	printf(("应找你%d元\n"), change);
//
//	return 0;
//
//}



//八.定义多个变量,每个变量都要单独赋值，不能一个值定义全部变量
//
//int main()
//{
//	int a = 0, b = 100, c = 9;
//
//	printf("%d\n\n%d\n\n%d\n\n", a, b, c);
//
//	return 0;
//}




////计算价格（medi版本）
//int main()
//
//{
//	int price = 0;
//
//	int amount = 0;
//
//	printf("请输入价格");
//
//	scanf("%d", &price);
//
//	printf("请输入顾客给你多少钱");
//
//	scanf("%d", &amount);
//
//	int yingzhao = amount - price;
//
//	printf("应找给你%d元", yingzhao);
//
//	return 0;
//}



//计算价格（mide版本2）
//
//int main()
//{
//
//	int price = 0;
//
//    int amount = 0;
//
//	printf("请输入价格和票面");
//
//	scanf("%d %d", &price, &amount);
//
//	int yingzhao = amount - price;
//
//	printf("应该找你%d元", yingzhao);
//
//	return 0;
//
//
//
//}



//int main()
//{
//	int a = 0;
//
//	int b = 0;
//
//	printf("请输入价格和票面");
//
//	scanf("%d %d", &a, &b);
//
//	printf("%d-%d=%d", b, a, b - a);
//
//	return 0;
//
//
//}



//计算身高（英尺转厘米）
//int main()
//{
//	const  double a = 0.3048;
//
//	double b = 0;
//
//	double c = 0;
//
//	printf("请输入身高几尺几寸\n");
//
//	scanf("%lf %lf", &b, &c);
//
//	double  tall = (b + c / 12) * a;
//
//	//记住这一点，scanf里面用%lf，printf里面用%f;
//	printf("你的身高是%fcm\n", tall);
//
//	return 0;
//
//
//}



//计算时间差1.
//int main()
//{
//
//	int hour1 = 0, min1 = 0;
//
//	int hour2 = 0, min2 = 0;
//
//	printf("请输入两个时间");
//
//	scanf("%d %d", &hour1,&min1);
//
//	scanf("%d %d", &hour2, &min2);
//	//  小时*60，换算进制；
//
//	int time = (hour2*60+min2)-(hour1*60+min1);
//
//	printf("时间相差%d分钟", time);
//
//	return 0;
//
//
//}



//计算时间差2.
//int main()
//{	
//	int hour1 = 0, min1 = 0;
//
//	int hour2 = 0, min2 = 0;
//
//	printf("请输入两个时间");
//
//	scanf("%d %d", &hour1, &min1);
//
//	scanf("%d %d", &hour2, &min2);
//
//	int time1 = hour1 * 60 + min1;
//
//	int time2 = hour2 * 60 + min2;
//
//	int t = time2 - time1;
//
//	printf("%d时%d分", t / 60, t % 60);
//
//	return 0;
//
//
//
//}



//复合赋值

  //total += (sum + 100) / 2   等于   total = total + (sum + 100) / 2

  //total * = sum + 12  等于  total = total * (sum + 12);

  //total /= 12 + 6  等于  total / (12 + 6);



//递增递减运算符
//“++”和“--”是两个很特殊的运算符，它们是/*单目运算符*/，这个算子还必须是变量。
//这两个运算符分别叫做递增和递减运算符，他们的作用就是给这个变量+1或-1。

// count++  等于  count+-  等于  count=count+1

//前缀后缀
//++和--可以放在变量的前面，叫做前缀形式，也可以放在变量的后面，叫做后缀形式。 
//a++的值是 a 加 l 以前的值，而++a 的值是加了 l 以后的值，无论哪个，a 自己的值都加了 l。

//eg
//int main()
//{
//	int a = 10;
//
//	
//
//	printf("a++ = %d\n", a++);
//	printf("a=%d\n", a);
//
//	printf("++a = %d\n", ++a);
//	printf("a=%d\n\n", a);
//
//	int b = 10;
//	printf("b--=%d\n", b--);
//	printf("b=%d\n", b);
//
//	printf("--b=%d\n", --b);
//	printf("b=%d\n", b);
//
//	return 0;
//
//}


//对于a++和++a的理解。正常情况是a++是a之前的值，++a是a结束的值，我是怎么理解顺序的呢？a++  a在前，所以a是之前的值，++a   a在后，所以是a之后的值；
//假如a++是之后的值，a--是a之前的值呢？我又要怎么理解呢？同样的，a后面++了，加了东西，所以a++是a后面的值，既然a++是之后的值，那么++a就是之前的值了，
//所以，对于这个前缀后缀顺序的调换并不影响我们怎么理解，或者说的是这种形式的变换并不影响理解和判断，真正影响我们认知的，也就是我们真正认识事物的不是形式，不是经验，
//而是先天综合判断



//交换变量
//int main()
//{
//
//	int a = 6;
//
//	int b = 5;
//
//	int c = 0;
//
//	c = a;  //此时c=6；
//
//	a = b;  //此时a=5；
//
//	b = c;  //此时b=6；
//
//	printf("a=%d b=%d\n", a, b);
//
//	return 0;
//
//
//
//}



//算平均数
//int main()
//{
//	int a = 0;
//
//	int b = 0;
//
//	printf("请输入两个整数");
//
//	scanf("%d %d", &a, &b);
//
//	double c = (a + b) / 2;
//
//	printf("整数%d和%d的平均数为%f", a,b,c);
//
//	return 0;
//
//
//}



//计算银行复利
//
//int main()
//{
//	int money = 0;
//
//	printf("请输入要存储的金额");
//	scanf("%d",&money);
//
//	double lixi = money * (1 + 0.03) * (1+0.03) * (1+0.03);
//
//	printf("%f", lixi);
//
//	return 0;
//
//
//
//}



//输入起始时间和流逝分钟数，计算终止时间
//int main()
//{
//	int a = 0;
//	int b = 0;
//
//	printf("请输入起始时间和流逝时间");
//	scanf("%d %d",&a,&b);
//
//	int time1 = a / 100 * 60;
//
//	int time2 = a % 100;
//
//	int time3 = (time1 + time2 + b) / 60;
//
//	int time4 = (time1 + time2 + b) % 60;
//
//	printf("%d\:%d", time3, time4);
//
//	return 0;
//
//}



//逆序三位数
int main()
{
	int a = 0;

	printf("请输入一个三位数");
	scanf("%d", &a);

	printf("%d\n",(a % 10 * 100) + (a % 100 / 10 * 10) + (a / 100));


	return 0;
}
