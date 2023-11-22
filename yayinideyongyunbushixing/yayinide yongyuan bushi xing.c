#define _CRT_SECURE_NO_WARNINGS 1



//一
// #include <stdio.h>
// 
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



////二.枚举常量
// 
// #include <stdio.h>
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



//三.常变量，常变量通常要求大写
// #include <stdio.h>
// 
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



//四.长度
// #include <stdio.h>
// 
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



//五.转义字符
// #include <stdio.h>
// 
//int main()
//{
//
//	  \n:换行字符,n就是new的意思...吧,应该是回车的意思
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



//六.算数运算
// #include <stdio.h>
// 
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



//七.计算价格(low版)
// 
// #include <stdio.h>
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
// #include <stdio.h>
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
// 
// #include <stdio.h>
// 
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
// #include <stdio.h>
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
// #include <stdio.h>
// 
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
//	记住这一点，scanf里面用%lf，printf里面用%f;
//	printf("你的身高是%fcm\n", tall);
//
//	return 0;
//
//
//}



//计算时间差1.
// 
// #include <stdio.h>
// 
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
// 
// #include <stdio.h>
// 
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
//}



//计算时间差3.
//
#include <stdio.h>
//
//int main()
//{
//	int hour1 = 0, minute1 = 0;
//
//	int hour2 = 0, minute2 = 0;
//
//	printf("请输入起始时间");
//	scanf("%d %d", &hour1, &minute1);
//
//	printf("请输入结束时间");
//	scanf("%d %d", &hour2, &minute2);
//
//	int time1 = hour2 - hour1;
//
//	int time2 = minute2 - minute1;
//
//	if (time2 < 0) {
//
//		time2=time2 + 60;
//		time1--;
//	}
//	
//
//	printf("相差%d小时 %d分钟", time1, time2);
//
//	return 0;
//}



//复合赋值
// 
// 
//
//  total += (sum + 100) / 2   等于   total = total + (sum + 100) / 2
//
//  total * = sum + 12  等于  total = total * (sum + 12);
//
//  total /= 12 + 6  等于  total / (12 + 6);



//递增递减运算符
//“++”和“--”是两个很特殊的运算符，它们是/*单目运算符*/，这个算子还必须是变量。
//这两个运算符分别叫做递增和递减运算符，他们的作用就是给这个变量+1或-1。
//
// count++  等于  count+-  等于  count=count+1
//
//前缀后缀
//++和--可以放在变量的前面，叫做前缀形式，也可以放在变量的后面，叫做后缀形式。 
//a++的值是 a 加 l 以前的值，而++a 的值是加了 l 以后的值，无论哪个，a 自己的值都加了 l。
//
//eg
// 
// #include <stdio.h>
// 
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
// 
// #include <stdio.h>
// 
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
// 
// #include <stdio.h>
// 
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
// #include <stdio.h>
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
// 
// #include <stdio.h>
// 
//int main()
//{
//	int a = 0;
//
//	printf("请输入一个三位数");
//	scanf("%d", &a);
//
//	printf("%d\n",(a % 10 * 100) + (a % 100 / 10 * 10) + (a / 100));
//
//
//	return 0;
//}


//判断成绩
// 
// #include <stdio.h>
// 
//int main()
//{
//	const int PASS = 60;
//	int score = 0;
//
//	printf("请输入成绩");
//	scanf("%d", &score);
//
//	printf("你输入的成绩是%d\n", score);
//
//	if (score < PASS)
//		printf("很遗憾，这个成绩没有及格");
//
//	else {
//		printf("祝贺你，这个成绩及格了\n");
//		printf("再见\n");
//	}
//
//	return 0;
//}



//if else判断价格
// 
// #include <stdio.h>
//
//int main()
//{
//
//	int bill = 0;
//
//	int price = 0;
//
//	int amount = 0;
//
//	printf("请输入价格和票面");
//	scanf("%d %d", &price, &bill);
//
//	if (bill > price) {
//		amount = bill - price;
//		printf("应找你%d元", amount);
//	}
//	else {
//		printf("你的钱不够，赶紧滚蛋");
//	
//	}
//	return 0;
//}


//比较两个数字大小1.0    (if else)
// 
// #include <stdio.h>
// 
//int main() {
//	int a = 0;
//
//	int b = 0;
//
//	int max = 0;
//
//	printf("请输入两个数");
//	scanf("%d %d", &a, &b);
//
//	if (a > b) {
//		max = a;
//	}
//	else {
//	 	max = b;
//	}
//
//	printf("%d比较大", max);
//
//	return 0;
//
//}



//计算两个数字大小2.0     (if else)
// 
// #include <stdio.h>
// 
//int main() {
//	int a = 0;
//
//	int b = 0;
//
//	printf("请输入两个数");
//	scanf("%d %d", &a, &b);
//	
//	int max = b;
//	if (a > b) {
//		max = a;
//	}
//
//	printf("%d比较大", max);
//
//}



//关系运算的结果
// 
// #include <stdio.h>
//
//int main()
//{
//	printf("%d\n\n", 5 == 3);
//
//	printf("%d\n\n", 5 > 3);
//
//	printf("%d\n\n", 5 <= 3);
//
//	printf("%d\n\n", 7 >= 3 + 4);
//
//	printf("%d\n\n", 6 > 5 > 4);
//
//
//
//	return 0;
//
//}



//switch case

//#include <stdio.h>

//int main()
//{
//	int type = 0;
//
//	printf("请输入1到4的数字");
//	scanf("%d", &type);
//
//	switch (type) {
//
//	case 1:
//
//	case 2:
//		printf("早上好\n");
//
//	case 3:
//		printf("晚上好\n");
//		break;
//	case 4:
//		printf("再见\n");
//		break;
//	default:
//		printf("你是猪\n");
//		break;
//	}
//
//}



//百分制成绩转换为五分制的成绩   （if else）
//
//#include <stdio.h>

//int main()
//{
//	int sorce = 0;
//
//	printf("请输入一个成绩");
//	scanf("%d", &sorce);
//
//	printf("你的成绩是%d\n\n", sorce);
//
//	if (sorce >= 90) {
//
//		printf("你的成绩是A");
//	}
//	else if (sorce >= 80) {
//		printf("你的成绩是B");
//	}
//	else if (sorce >= 70) {
//		printf("你的成绩是C");
//	}
//	else if (sorce <= 60) {
//		printf("你的成绩不及格");
//	
//	}
//
//	return 0;
//
//}



//百分制成绩转换为五分制的成绩   （switch case）
// 
 //#include <stdio.h>

//int main()
//{
//	int sorce = 0;
//
//	printf("请输入你的成绩\n\n");
//	scanf("%d", &sorce);
//
//	int grade = sorce / 10;
//
//	printf("你的成绩等级是%d\n\n", grade);
//
//	switch (grade) {
//
//	case 10:
//	case 9:
//		printf("你的成绩是A");
//		break;
//	case 8:
//		printf("你的成绩是B");
//		break;
//	case 7:
//		printf("你的成绩是C");
//		break;
//	case 6:
//		printf("你的成绩是D");
//		break;
//	case 5:
//	case 4:
//	case 3:
//	case 2:
//	case 1:
//		printf("不及格");
//		break;
//	default:
//		printf("不在六界之中");
//		break;
//	}
//
//	return 0;
//}



//比较三个数大小
// 
// #include <stdio.h>
// 
//int main()
//{
//	int a = 0;
//
//	int b = 0;
//
//	int c = 0;
//
//	printf("请输入两个数");
//	scanf("%d %d", &a, &b);
//
//	int max = b;
//
//	if (a > b) {
//		max = a;
//	}
//
//	printf("请再输入一个数字");
//	scanf("%d", &c);
//
//	if (max < c) {
//		max = c;
//	}
//
//	printf("%d比较大\n", max);
//
//	return 0;
//}



//比较三个数大小
// 
// #include <stdio.h>
//
//int main() {
//
//	int a, b, c = (0, 0, 0);
//
//	int max = 0;
//	printf("请输入三个数字");
//	scanf("%d %d %d", &a, &b, &c);
//
//	if (a > b) {
//		if (a > c) {
//			max = a;
//		} else {
//			max = c;
//		}
//	}	else {
//		if (b > c) {
//			max = b;
//		}
//		else {
//			max = c;
//		}
//	}
//
//	printf("the max is %d\n", max);
//
//	return 0;
//}


//数数几位数

#include <stdio.h>

//int main()
//{
//	int a = 0;
//
//	int n = 0;
//
//	printf("请输入四位及四位以内的整数");
//	scanf("%d", &a);
//
//	if (a > 999) {
//		n = 4;
//	}
//	else if (a > 99) {
//		n = 3;
//	}
//	else if (a > 9) {
//		n = 2;
//	}
//	else if (a > 0) {
//		n = 1;
//	}
//
//	printf("%d", n);
//
//		return 0;
//
//}



//分段函数
//		f(x)=-1;x<0
//			0;x=0
//			2x;x>0
// 
//#include <stdio.h>
//
//int main() {
//
//	int a = 0;
//	scanf("%d", &a);
//
//	switch (a) {
//		case -1:
//			printf("x<0");
//			break;
//		case 0:
//			printf("x=0");
//			break;
//		default:
//			printf("x>0");
//			break;
//	}
//
//	return 0;
//
//}




//计算多少数位 while 
// 
//#include <stdio.h>
//
//int main() {
//	int x = 0;
//	int n = 0;
//	scanf("%d", &x);
//
//	n++;
//	x /= 10;
////	x/=10 等于x=x/10;
//
//	while (x > 0) {
//		n++;
//		x /= 10;
//		printf("n=%d,x=%d\n", n, x);
//	}
//	
//	printf("%d\n", n);
//
//	return 0;
//}



//计算多少位数，if+while
//#include <stdio.h>
//
//int main() {
//
//	int a = 0;
//
//	int n = 0;
//
//	scanf("%d", &a);
//
//	if (a > 0) {
//
//		while (a > 0) {
//			n++;
//			n /= 10;
//		}
//	}
//	else n = 1;
//
//	printf("%d", n);
//
//	return 0;
//}



//无论条件满不满足，do while都会做一遍，while可能一边都不会做



//if+do while 做成的计算几位数并且可以计算负数的几位数
//#include <stdio.h>
//
//int main() {
//
//	int a = 0;
//	int n = 0;
//	scanf("%d", &a);
//
//	if (a > 0) {
//		do {
//			a /= 10;
//			n++;
//		} while (a > 0);
//
//	}
//	else if (a < 0) {
//		a=a*-1;
//		do {
//			a /= 10;
//			n++;
//		} while (a > 0);
//	}
//
//	printf("%d", n);
//
//	return 0;
//
//}




//猜数游戏
//#include <stdio.h>
//
//int main() {
//
//	srand(time(0));
//
//	int number = rand() % 100 + 1;
//
//	int count = 0;
//
//	int a = 0;
//
//	printf("请输入一个1-100的数字,直到猜中为止");
//	
//	do {
//		scanf("%d", &a);
//
//		if (a > number) {
//		
//			printf("大了");
//			count++;
//		}
//		else if (a < number) {
//			printf("小了");
//			count++;
//		} 
//	} while (a != number);
//
//	printf("恭喜你答对了，你尝试的次数是%d", count);
//
//	return 0;
//
//}





//#include <stdio.h>
//
//int main() {
//
//	int sum = 0;
//	int count = 0;
//	int number = 0;
//
//	do {
//		scanf("%d", &number);
//		if (number != 0) {
//			sum += number;
//			count++;
//		}
//		else
//			sum /= count;
//	} while (number != 0);
//
//	printf("%d %d", sum, count);
//
//	return 0;
//}




//整数求和
//#include <stdio.h>
//
//int main() {
//
//	double sum = 0;
//	double count = 0;
//	double number = 0;
//
//	scanf("%lf", &number);
//	while (number != 0) {
//
//		sum += number;
//		count++;
//
//		scanf("%lf", &number);
//	}
//
//	printf("%f %f", sum / count, count);
//
//	return 0;
//}




//整数逆序
//#include  <stdio.h>
//int main() {
//
//	int a = 0;
//	int digit = 0;
//	int ret = 0;
//
//	scanf("%d", &a);
//
//	while (a > 0) {
//	
//		digit = a % 10;
//
//		ret = ret * 10 + digit;
//      //关键的一步，要除以10
//		a /= 10;
//	}
//
//	printf("%d %d %d", a, digit, ret);
//
//	return 0;
//
//	}





//计算阶乘	while循环
//#include <stdio.h>
//
//int main() {
//		
//	int n = 0;
//
//	scanf("%d", &n);
//
//	int fact = 1;
//
//	int i = 1;
//
//	while (i<=n) {
//
//		fact *= i;
//
//		i++;
//	}
//
//	printf("%d", fact);
//
//	return 0;
//
//}




//计算阶乘	for循环

//#include <stdio.h>
//
//int main() {
//
//	int n = 0;
//
//	int fact = 1;
//
//	int i = 1;
//
//	scanf("%d", &n);
//
//	for (i = 1; i <= n; i++) {
//
//		fact *= i;
//	}
//
//	printf("%d的阶乘是%d", n,fact);
//
//	return 0;
//
//}



//计算数
// 
//#include <stdio.h>
//
//int main() {
//
//	int i = 1;
//
//	int sum = 0;
//	//for括号里的前两个i可以改成任何正整数，从而计算第一个i到最后一个i的逐加值
//	for (i = 1; i <=10; i++) {
//
//		sum += i;
//	}
//
//	printf("%d", sum);
//	
//	return 0;
//}




//#include <stdio.h>
//
//int main() {
//
//	int a = 0;
//	
//	for (a = 0; a < 6; a++) 
//
//		printf("aaaaa\n");
//		printf("bbbbb\n");
//
//	return 0;
//}




//一百以内能够被3整除的整数的和	（for循环）

//#include <stdio.h>
//
//int main() {
//
//	int i = 3;
//
//	int sum = 0;
//
//	for (i = 3; i <= 12; ++i) {
//	
//		if (i % 3 == 0) {
//			sum+=i;
//		}
//	}
//
//	printf("%d", sum);
//
//	return 0;
//
//}



//1-100之间的奇数之和 和 偶数和	（for循环）
// 
//#include <stdio.h>
//
//int main(){
//
//	int i = 1;
//
//	int sum = 0;
//
//	for (i = 1; i < 100; i += 2) {
//	
//		sum +=i ;
//	}
//
//	printf("100以内的奇数和是%d\n\n", sum);
//
//	int a = 2;
//
//	int sum2 = 0;
//
//	for (a = 2; a <=100; a += 2) {
//	
//		sum2 += a;
//	}
//
//	printf("100以内的偶数和是%d", sum2);
//
//	return 0;
//}




//100以内的奇数的个数是多少  （for循环）
// 
//#include <stdio.h>
//
//int main() {
//
//	int a = 1;
//
//	int count = 0;
//
//	for (a = 1; a < 100; a += 2) {
//	
//		count+=1;
//	}
//
//	printf("100以内的奇数的个数是%d", count);
//
//	return 0;
//
//}



//一百以内的奇数和的平均数
//#include <stdio.h>
//
//int main() {
//
//	int x = 1;
//
//	int sum1 = 0;
//
//	for (x = 1; x < 100; x += 2) {
//	
//		sum1 += x;
//	}
//
//	printf("奇数和为%d\n\n\n", sum1);
//
//
//	int sum2 = 0;
//
//	for (x = 1; x < 100; x += 2) {
//		
//		sum2++;
//	
//	}
//
//	printf("一百以内的奇的个数为%d\n\n\n", sum2);
//
//	int avg = sum1 / sum2;
//
//	printf("一百以内的奇数和的平均数为%d\n\n\n", avg);
//
//	
//	return 0;
//}



//固定次数用for，起点和终点的值都是明确的，用for最合适
//先执行一次用do while
//其他情况用while



//输入一个数，判断这个数是否是素数

//#include <stdio.h>
//
//int main() {
//
//	int a;
//
//	int i;
//
//	scanf("%d", &a);
//
//	int isprime = 1;
//
//	for (i = 2; i < a; i++) {
//	
//		if (a % i == 0) {
//			isprime = 0;
//			break;
//		}
//	}
//	//	=是赋值	==是等于
//	if (isprime == 0) {
//	
//		printf("不是素数");
//	}
//	else printf("是素数");
//
//	return 0;
//}





//一百以内的素数
 
//#include <stdio.h>
//
//int main() {
//
//	int x;
//
//	for (x = 2; x < 100; x++) {
//
//		int i;
//
//		int isprime = 1;
//
//		for (i = 2; i < x; i++) {
//
//			if (x % i == 0) {
//				isprime = 0;
//				break;
//
//			}
//
//		}
//		if (isprime == 1) {
//
//			printf("%d\n", x);
//		}
//
//	}
//
//
//	return 0;
//}




//输出前50个素数		while

//#include <stdio.h>
//
//int main() {
//
//	int x = 2;
//
//	int count = 0;
//
//	while (count < 50) {
//
//		int i;
//
//		int isprime = 1;
//
//		for (i = 2; i < x; i++) {
//
//			if (x % i == 0) {
//				isprime = 0;
//				break;
//
//			}
//
//		}
//		if (isprime == 1) {
//
//			printf("%d\n", x);
//			count++;
//		}
//		x++;
//
//	}
//
//	return 0;
//}




//输出前50个素数		for

//#include <stdio.h>
//
//int main() {
//
//	int x;
//
//	int i;
//
//	int count = 0;
//
//	int isprime = 1;
//
//	for (x = 2; count < 50; x++) {
//
//		for (i = 2; i < x; i++) {
//		
//			if (x % i == 0) {
//
//				isprime = 0;
//				break;
//			}
//			else isprime = 1;
//
//			}
//
//		if (isprime == 1) {
//			printf("%d\n\n", x);
//			count++;
//		}
//	}
//
//	return 0;
//}




//如何用1角，2角和5角的硬币凑出10元以下的金额	break
//exit==0		exit==1		跳出循环

//#include <stdio.h>
//
//int main() {
//
//	int x=0;
//
//	scanf("%d", &x);
//
//	int one, two, five;
//
//	int exit = 0;
//
//	for (one = 1; one < x * 10; one++) {
//		for (two = 1; two < x * 10 / 2; two++) {
//			for (five = 1; five < x * 10 / 5; five++) {
//				if (one + two * 2 + five * 5 == x * 10) {
//					printf("可以用%d个1角加%d个两角加%d个5角得到%d元\n\n", one, two, five,x);
//					exit = 1;
//				}
//				if (exit == 1) {
//					break;
//				}
//			}
//			if (exit == 1) {
//				break;
//			}
//		}
//		if (exit == 1) {
//			break;
//		}
//		return 0;
//	}
// 
//}




//如何用1角，2角和5角的硬币凑出10元以下的金额	goto out

//#include <stdio.h>
//
//int main() {
//
//	int x = 0;
//
//	scanf("%d", &x);
//
//	int one, two, five;
//
//	int exit = 0;
//
//	for (one = 1; one < x * 10; one++) {
//		for (two = 1; two < x * 10 / 2; two++) {
//			for (five = 1; five < x * 10 / 5; five++) {
//				if (one + two * 2 + five * 5 == x * 10) {
//					printf("可以用%d个1角加%d个两角加%d个5角得到%d元\n\n", one, two, five, x);
//					exit = 1;
//					goto out;
//				}
//			}
//		}
//	}
//out:
//	return 0;
//
//}




//前n项和  等差数列

//#include <stdio.h>
//
//int main() {
//
//	int n = 0;
//
//	int i = 1;
//
//	double sum = 0;
//	
//	scanf("%d", &n);
//
//	for (i = 1; i < n; i++) {
//		sum += 1.0 / i;
//	
//	}
//
//	printf("f%d=%f", n, sum);
//
//	return 0;
//}






//求前n项和，加一个减一个，等差数列

//#include <stdio.h>
//
//int main() {
//
//	int n = 0;
//
//	int i = 1;
//
//	double sum = 0.0;
//
//	scanf("%d", &n);
//
//	double sign = 1;
//
//	for (i = 1; i <=n; i++) {
//			
//		sum += sign/i;
//		sign = -sign;
//	}
//
//	printf("%f", sum);
//
//	return 0;
//}






//整数分解		wk’45

#include <stdio.h>

//int main() {
//
//	int x;
//	scanf("%d", &x);
//
//	int mask = 1;
//
//	int t = x;
//	
//	while (t > 9) {
//		t /= 10;
//		mask *= 10;
//	}
//
//	printf("x=%d,mask=%d\n", x, mask);
//	do {
//		int d = x / mask;
//		printf("%d", d);
//		if (mask > 9) {
//			printf(" ");
//		}
//
//		x %= mask;
//		mask /= 10;
//	} while (mask > 0);
//
//	printf("\n");
//
//	return 0;
//}





//求最大公约数
//#include <stdio.h>
//
//int main() {
//
//	int a = 0;
//
//	int b = 0;
//
//	scanf("%d", &a);
//
//	scanf("%d", &b);
//
//	int t = 0;
//
//	while (b > 0) {
//		t = a % b;
//		a = b;
//		b = t;
//	}
//
//	printf("最大公约数是%d\n", a);
//
//	return 0;
//}





//输入一个小于6的整数A，考虑从A开始的连续4个数字。请输入所有由它们组成的无重复数字的3位数 eg:A=1  1,2,3,4  输出123,124,234,231..

//#include <stdio.h>
//
//int main() {
//		
//	int a = 0;
//
//	scanf("%d", &a);
//
//	int i, j, k;
//	int cnt = 0;
//
//	i = a;
//	while (i <= a + 3) {
//		j = a;
//		while (j <= a + 3) {
//			k = a;
//			while (k < a + 3) {
//				if (i != j) {
//					if (i != k) {
//						if (j != k) {
//							cnt++;
//							printf("%d%d%d", i, j, k);
//							if (cnt == 6) {
//								printf("\n");
//								cnt = 0;
//							}
//							else {
//								printf(" ");
//							}
//						}
//					}
//				}
//				k++;
//			}
//			j++;
//		}
//		i++;
//	
//	}
//	return 0;
//
//}





//打印九九乘法表

//#include <stdio.h>
//
//int main() {
//
//	int a = 1;
//
//	int count = 1;
//
//	for (count = 1; count <9; count++) {
//		int sum = a * count;
//		printf("%d*%d=%d\n  ", a, count, sum);
//		for (a = 1; a < 9; a++) {
//			int sum = a * count;
//			printf("%d*%d=%d  ", a, count, sum);
//
//		}
//	}
//
//	return 0;
//}



////各个类型占据多大的空间	sizeof


//#include <stdio.h>
//
//int main() {
//
//	int a;
//	a = 6;
//
//	printf("sizeof(char)=%d\n", sizeof(char));
//
//	printf("sizeof(int)=%d\n", sizeof(int));
//
//	printf("sizeof(a)=%d\n", sizeof(a));
//
//	printf("sizeof(double)=%d\n", sizeof(double));
//
//	printf("sizeof(char)=%d\n", sizeof(char));
//
//	printf("sizeof(long double)=%d\n", sizeof(long double));
//
//	printf("sizeof(long long)=%d\n", sizeof(long long));
// 
// printf("sizeof(long)=%d\n\n", sizeof(long));
//
//	char n = 255;
//	printf("%d\n", n);
//
//	int o = 255;
//	printf("%d\n", o);
//
//	unsigned char c = 255;
//	printf("%d\n", c);
//
//	char t = 127;
//	t = t + 1;
//	printf("%d\n", t);
//
//	return 0;
//}




//利用 “越界” 计算int变量的最大值

//#include <stdio.h>
//
//int main() {
//
//	int a = 0;
//
//	int b = 0;
//
//	while (++a > 0) {
//		printf("int数据类型最大数是:%d\n", a - 1);
//		b++;
//	}
//
//	while ((a = a / 10)!=0) {
//		b++;
//	}
//
//	printf("int数据类型最大的数位是:%d", b);
//
//	return 0;
//
//}





/*float的scanf用% f ，printf用 %f ， %e（科学计数法）
double的scanf用 %lf ，printf用 %f ， %e（科学计数法）	*/

//#include <stdio.h>

//int main() {
//	double ff = 1234.56789;
//	printf("%e\n,%f", ff, ff);
//
//	return 0;
//
//}




//#include <stdio.h>
//
//int main() {
//
//	printf("%.3f\n", -0.0049);
//
//	printf("%.30f\n", -0.0049);
//
//	printf("%.3f\n", -0.00049);
//
//	return 0;
//
//}




//printf输出inf表示超过范围的浮点数： +-(正负)无穷大
//printf输出nan表示不存在的浮点数





//%c可以直接输出字符

//#include <stdio.h>
//
//int main() {
//
//	char a = '1';
//
//	char c = 1;
//
//	if (a == c) {
//		printf("相等");
//	
//	}
//	else printf("a=%d,c=%d 百分号d\n\n", a, c);
//
//	printf("a=%c,c=%d 百分号c\n\n", a, c);
//
//
//
//	if (49 == '1') {
//		printf("OK");
//	}
//
//	return 0;
//
//}




//		\t：制表位
//#include <stdio.h>
//
//int main() {
//
//	printf("1234\t1213\n123\t\n12\r\t1");
//
//	return 0;
//
//}




//bool

//#include <stdio.h>
//#include <stdbool.h>
//
//int main() {
//	bool b = 6 > 5;
//
//	printf("%d\n", b);
//
//	return 0;
//
//}



//逻辑运算
//	！：逻辑非	！a    不等于a，ture就是1，false就是0
//	&&：逻辑与	a&&b   a和b同时为真，就是真，有一假就是假的
//	||：逻辑或	a||b   a和b有真为真，两假都假

//如何表达数学中的区间：比如 x属于4到6之间
//x>4&&x<6

//如何判断一个字符c是否是大写字母
//c>='A'&&c<'Z'
//c>'a'&&c<'z'




//自定义函数求素数和

//#include <stdio.h>
//
//int isprime(int i)
//{
//	int ret = 1;
//
//	int k;
//
//	for (k = 2; k < i - 1; k++) {
//		if (i % k == 0) {
//			ret = 0;
//			break;
//		}
//	}
//
//
//}
//
//int main() {
//
//	int m, n;
//
//	int sum = 0;
//
//	int cnt = 0;
//
//	int i;
//
//	scanf("%d %d", &m, &n);
//
//	if (m == 1) m = 2;
//
//	for (i = m; i <= n; i++) {
//		if (isprime(i)) {
//			sum += i;
//			cnt++;
//		}
//	}
//
//	printf("%d个素数 素数和是%d\n", cnt, sum);
//		
//}





//求1到10，20到30，35到45的三个和(弱智版)

//#include <stdio.h>
//
//int main() {
//	int a = 1;
//	int a1 = 0;
//
//	int b = 20;
//	int b1 = 0;
//
//	int c = 35;
//	int c1 = 0;
//
//	for (a = 1; a <= 10; a++) {
//		a1 += a;
//		printf("1-10的加数和是%d\n", a1);
//	}
//
//
//	for (b = 1; b <= 30; b++) {
//		b1 += b;
//		printf("20-30的加数和是%d\n", b1);
//	}
//
//	for (c = 35; c <= 45; c++) {
//		c1 += c;
//		printf("35-45的加数和是%d\n", c1);
//	}
//
//	int sum = a1 + b1 + c1;
//
//	printf("%d", sum);
//
//	return 0;
//
//}





//求1到10，20到30，35到45的三个和(求和函数)

//void函数名（参数表） void是没有返回值的函数
//不能使用带值的return
//可以没有return
//调用的时候不能做返回值的赋值

//#include <stdio.h>
//
//void sum(int begin, int end)
//{
//	int i;
//	int sum = 0;
//	for (i = begin; i <= end; i++) {
//		sum += i;
//	}
//	printf("%d到%d的和是%d\n\n", begin, end,sum);
//}
//
//int main() {
//	sum(1, 10);
//	sum(20, 30);
//	sum(35, 45);
//
//	return 0;
//
//}


//函数原型
//自定义可以放后面，但是要把自定义函数开头的代码放在前面
//函数头，以分号“；”结尾，就构成了函数的原型；
//函数原型的目的是告诉编译器这个函数长什么样子
	//名称；参数（数量及类型）；返回类型


//#include <stdio.h>
//
//void sum(int begin, int end);		//声明（声明 不是函数）
//
//int main() {
//	sum(1, 10);
//	sum(20, 30);
//	sum(35, 45);
//
//	return 0;
//}
//
//
//void sum(int begin, int end)	//定义
//{
//	int i;
//	int sum = 0;
//	for (i = begin; i <= end; i++) {
//		sum += 1;
//	}
//	printf("%d到%d的和是%d\n", begin, end, sum);
//}





//简单函数
//#include <stdio.h>
//
//void cheer() {
//
//	printf("cheer\n");
//
//}
//
//int main() {
//	
//	cheer();
//
//	return 0;
//
//}





//从函数中返回

//#include <stdio.h>
//
//int max(int a, int b) {
//	int ret;
//
//	if (a > b) {
//		ret = 0;
//	}
//	else {
//		ret = 1;
//	}
//}
//
//int main() {
//	int a, b, c;
//	a = 5;
//	b = 6;
//	c = max(10, 12);
//	c = max(a, b);
//	c = max(c, 23);
//	printf("%d\n", max(a, b));
//
//	return 0;
//}




//自建函数交换a和b

//#include <stdio.h>
//
//void swap(int a, int b)
//{
//	int t = a;
//
//	a = b;
//
//	b = t;
//}
//
//int main(){
//	int a = 5;
//
//	int b = 6;
//
//	swap(a, b);
//
//	printf("a=%d b=%d", a,b);
//
//	return 0;
//
//}








//数组

//#include <stdio.h>
//
//int main(void)
//{
//	int a[5] = { 1,2,3,4,5 };
//
//	int i;
//
//	for (i = 0; i < 5; i++) {
//		printf("%d\n", a[i]);
//	}
//
//	printf("%d\n", a[100]);
//
//	return 0;
//}





//完全初始化：	int a[5]={1,2,3,4,};

//不完全初始化： int a[5]={1,2,3};

//不初始化:		int a[5];  不初始化，所有元素都是垃圾值

//清零	：int a[5]={0};





//如果要把a数组中的值全部复制给b数组

//错误的写法：
	//b=a;
//正确的写法：
	//for(i=0;i<5;i++)
		//b[i] = a[i];

//#include <stdio.h>
//
//
//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//
//	int b[5];
//
//	int i = 0;
//
//	for (i = 0; i < 5; i++) {
//		b[i] = a[i];
//	}
//
//	printf("%d", b[4]);
//
//	return 0;
//}





//把一个数组元素给全部倒过来

//#include <stdio.h>
//
//int main() {
//	int a[8] = { 1,2,3,4,5,6,7,8 };
//
//	int i, j;
//	int t;
//
//	i = 0;
//	j = 7;
//
//	while (i < j) {
//		t = a[i];
//		a[i] = a[j];
//		a[j] = t;
//
//		i++;
//		--j;
//	}
//
//	for (i = 0; i < 7; ++i) {
//		printf("%d\n", a[i]);
//	}
//
//	return 0;
//}





//数组初始化

//int a[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12}

//int a[3][4] = {
//			{1, 2, 3, 4}
//			{5, 6, 7, 8}
//  		{9, 10,11,12}
// };



//输出数组
#include <stdio.h>
//
//int main() {
//	
//	int a[3][4] = {
//		{1, 2, 3, 4},
//		{5, 6, 7, 8},
//		{9, 10, 11, 12}
//	};
//
//	int i;
//	int j;
//	for (i = 0; i < 3; i++) {
//		for (j = 0; j < 4; j++)
//			printf("%d\t", a[i][j]);
//		printf("\n");
//	}
//
//
//	return 0;
//}
//






//写一个程序计算用户输入的数字的平均数，并且输出所有大于平均数的数字

//#include <stdio.h>
//
//int main() {
//
//	int x;
//	double sum = 0;
//	int count = 0;
//	int number[100];
//
//	scanf("%d", &x);
//
//	while (x!= -1) {
//		number[count] = x;
//		sum += x;
//		count++;
//		scanf("%d", &x);
//	}
//
//	if (count > 0) {
//		printf("%f\n", sum / count);
//		int i=0;
//		if (number[i] > sum / count) {
//			printf("%d\n", number[i]);
//		}
//	}
//
//	return 0;
//
//}


































//鹏哥C语言

//2023.10.23开始学


//#include 是包含的意思 #include <stdio.h>就是包含一个stdio.h的文件
//使用库函数就要引一个头文件

//stdio 是standard input output的缩写,意思是标准输入输出

//#include <stdio.h>

//int main是一个主函数，目的是希望返回一个int类型，return 0就是返回一个0，0就是int类型的数,C语言都是从main函数开始的
//一个工程只能有一个main函数

//int main()
//{
//	double a = 5789.539;
//	//小数点后面最少6个小数位
//
//	printf("%f\n", a);
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



//%d   - 打印整数类型数据（整型）
//%c   - 打印字符类型数据		(char)
//%f   - 打印float小数类型数据
//%lf  - 打印double小数数据类型
//%p   - 以地址的形式打印		
//%x   - 打印16进制数字
//%s   - 打印字符串		(string)

 



//#include <stdio.h>
//
//int main()
//{
//	double ui = 5.555;
//
//	printf("%lf\nn", ui);
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
//
//int main()
//{
//	
//
//
//	int sum1 = 10;
//	//sum1是局部变量，定义在代码块内的成为局部变量
//  //大括号内部的是局部变量
//	
//
//	//{
//		//int a = 23;
//	
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
//	const int AB = 19;
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
//
//	//数组方括号里面只能用常量
//
//	return 0;
//
//}




//标识符常量

//#include <stdio.h>
//
//#define MAX  10
////define 标识符常量
//
//int main()
//{
//	int arr[MAX] = {0};
//
//	printf("%d\n", MAX);
//
//	return 0;
//}






//枚举常量 enum
// 
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
//
//};
//
//int main()
//{
//	printf("%d\n\n", MALE);
//	printf("%d\n\n", FEMALE);
//	printf("%d\n\n", HELECREATE);
//	printf("%d\n\n\n", SECRET);
//
//	printf("%d\n\n", blue);
//	printf("%d\n\n", yellow);
//  printf("%d\n\n", red);
//	printf("%d\n\n", white);
//	printf("%d\n\n", green);
//
//
//	enum Color color = blue;
//
//	printf("%d\n", color);
//
//
//	return 0;
//}






//字符串

//#include <stdio.h>
//
//int main()
//{
//	char arr1[] = "abc";
//
//	//"abc"等于'a','b','c',\0(\0的值等于0)  字符串后面隐藏了一个0，\0是字符串的结束标志
//
//	char arr2[] = { 'a','b','c','\0'};
//	//这后面放的其实不是0，是\0，加0也可以，加\0也可以
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
//
//}

//字符串的结束标志:'\0
//'\0'-转义字符-0
// 0 是数字0
// '0'和字符0的值一样，都是0
// '0'是字符0
//  \0是转义字符，对应的ASCII表是0,数字0就是ASCII表的0,字符0('0')对应的ASCII是48
// 
//  0-9都是字符.a/A -z/Z也都是字符

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
//		//string就是计算字符串的函数，所以strlen("")括号里必须要有双引号
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
//	printf("\"艾伦\"\n");
//
//	return 0;
//
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
	//
	/星
*/





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
//
//}






//sizeof

//#include <stdio.h>

//int main()
//{
//	
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
//原码取反得到反码，反码加1得到补码
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
#include <stdio.h>

//int main()
//{
//	int a = (int)3.9999;
//
//	printf("%d\n", a);
//
//	return 0;
//
//}






//(2进制)位操作
// &按位与
// |按位或
// ^按位异或   对应的二进制相同则为0，相异则为1

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
//     因为直接算，就要2的零次方乘以1 加上 2的一次方乘以1 加上2的二次方乘以1 加上...2的31次方乘以1 这样很难表达
//     所以32个1再加上一个 1 然后再减掉一个 1，先加上一个一，变成：1 00000000 00000000 00000000 00000000 就是2的32次方，
//     然后再减回一个1，就是原来的数（32个1），方便表达，就是2^32-1



// [1][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][]   计算机存储里最高位1表示负数
// [0][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][]   计算机存储里最高位0表示正数
// 只要是整数，内存中存储的都是二进制的补码，正数的原码反码补码都相同


// 计算14+(-21)
// 14是正数，转成二进制即可(正数二进制等于反码补码)     -21是负数，需要转成补码
// 14转成补码是  00001110
//-21转成补码是  11101011          
// 进行计算      11111001  两个补码相加得到14+(-21)的补码，补码减一再取反得到原码
// 补码减一      10000111  得到原码(二进制),换算成十进制等于 -7








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






#include <stdio.h>

int main()
{
	int a = 10;

	printf("%p\n", &a);

	int* p = &a;

	printf("%p\n", p);

	return 0;
}



