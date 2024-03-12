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
//	char arr1[] = "abc";
//
//	char arr2[] = { 'a','b','c','\0'};
//
//	printf("% s\n", arr1);
//
//	printf("%s\n", arr2);
//
//  //strlen有有效长度和实际长度，有效长度就是有多少就数多少，实际长度就是有效长度加一，后面有\0
//  //strlen返回的是\0
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
//	//strlen:你输入是什么，它就会输出多少位的数，而不是输出那个变量所包含的大小，比如strlen（a），输出的就是1，strlen（inta），输出的就是4；
//
//	int len = strlen("arr1");
//
//	printf("%d\n", len);
//
//	char a = 'n';
//
//	printf("%s\n", a);
//}






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
//数组本身就是地址，所以scanf不用取地址&

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
//	int b[5] = { 4,5,6,7,8 };
//
//	int i = 0;
//
//	int sz = sizeof(a) / sizeof(a[0]);
//
//	for (i = 0; i < sz; i++) {
//		b[i] = a[i];
//	}
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", b[i]);
//	}
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















//详细


//1.分支(选择结构)和循环(循环结构)

//C语言是一门 结构化 的程序设计语言
// 1.顺序结构
// 2.选择结构
// 3.循环结构


//分支语句:if	switch
//循环语句:while   do while   for


//什么是语句？
//C语言中由一个分号;隔开的就是一条语句
//单独的一个 ; 也是语句，是空语句



//if单分支

//#include <stdio.h>
//
//int main()
//{
//	int age = 18;
//	
//
//	if (age < 18)
//	{
//		printf("未成年");
//	}
//	else
//		printf("成年");
//
//	return 0;
//}



//if多分支

//#include <stdio.h>
//
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//
//	if (age < 18)
//	{
//		printf("未成年\n");
//	}
//	else if (age >= 18 && age <= 28) {
//
//		//if(18<=age<=28)   如果是这样写，年龄是18以下都会输出 青年
//		//因为执行顺序是age等于10(假设10),10小于18,不成立，于是变成0(假),0再跟28比较,成立，输出1	
//
//		printf("青年\n");
//	}
//	else if (age >= 28 && age <= 48) {
//		printf("中年\n");
//	}
//	else if (age >= 48 && age <= 98) {
//		printf("老年\n");
//	}
//	else
//		printf("老头老太\n");
//
//	return 0;
//}




//上面的代码也可以这样写
//#include <stdio.h>

//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//
//	if (age < 18)
//	{
//		printf("未成年\n");
//	}
//	else
//	{
//		if (age >= 18 && age <= 28) {
//			printf("青年\n");
//		}
//		else if (age >= 28 && age <= 48) {
//			printf("中年\n");
//		}
//		else if (age >= 48 && age <= 98) {
//			printf("老年\n");
//		}
//		else
//			printf("老头老太\n");
//	}
//
//}



//题目：以下代码会输出什么？

//#include <stdio.h>
//
//int main()
//{
//	int a = 7;
//
// 
//	if (a > 10)
//		printf("ee\n");
//	else if (a >= 7)
//		printf("hello\n");
//	else if (a <= 7)
//		printf("hehe\n");
//
//	return 0;
//}

//虽然7既大于等于7 又小于等于7 ，但是if只会输出执行判断成功后的代码，下面的代码虽然符合条件但也不执行了;









//题目：以下这串代码会出现hehe还是haha？

//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//
//	int b = 2;
//
//	if (a == 1)
//		if (b == 2)
//			printf("hehe");
//		else
//			printf("haha");
//
//	return 0;
//}

//以上这串代码既不会输出"hehe"也不会输出"haha",因为如果没有大括号罩住，else就会离它最近的if与之匹配
//也就是if(b==2),而if(b==2)又在if(a==1)的嵌套中,a初始化为0，所以没有进入if(a==1)
// 自然也没有执行下面的else语句，输出空







//题目：if易错点 1

//以下代码会不会打印 呵呵？

//#include <stdio.h>
//
//int main()
//{
//	int a = 4;
//
//	if (a = 5)
//	{
//		printf("呵呵");
//	}
//
//	return 0;
//	
//}


//会打印 呵呵 ，因为if(a=5)中的等号是赋值,相当于把5赋给了a,所以会打印 呵呵,
//  == 才是等于









//题目：判断一个数是否为奇数

//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//
//	if (a%2!=0)
//		printf("这个数是奇数\n");
//	else
//		printf("这个数不是奇数\n");
//
//	return 0;
//}






//输出100以内的奇数

//方法1
//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//
//	for (a = 0; a <= 100; a++)
//	{
//		if (a % 2 != 0)
//			printf("%d\n", a);
//	}
//
//	return 0;
//}





//方法二
//#include <stdio.h>
//
//int main()
//{
//	int a = 1;
//
//	while (a < 100)
//	{
//		printf("%d\n", a);
//		a += 2;
//	}
//
//	return 0;
//}








//  Switch语句
//  switch语句也是一种分支语句，常常用于多分枝的情况
//  switch语句里没有continue,continue是循环里才有的


//输入数字,输出星期几

//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//
//	scanf("%d", &a);
//
//	//if (a == 1)
//	//	printf("星期一");
//	//else
//	//	if (a == 2)
//	//		printf("星期二");
//	//else
//	//	if (a == 3)
//	//		printf("星期三");
//	//else
//	//	if (a == 4)
//	//		printf("星期四");
//	//else
//	//	if (a == 5)
//	//		printf("星期五");
//
//
//	switch (a)
//	{
//	case 1+0:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期天\n");
//		break;
//	}
//
//	return 0;
//}



//#include <stdio.h>
//int main()
//{
//	switch (只能是整型表达式,可以写1+5,不能是float,double,char...)
//	{
//		语句项;
//		case :(只能是整型常量表达式)
//      char也是整型常量，因为char存储的是ASCII值，也就是整型常量
//		break; 在switch语句中,我们没法直接实现分支,搭配break使用才能实现真正的分支
//		//break的作用是跳出循环(while,for,do while)和switch
//	}
//
//}



//#include <stdio.h>
//
//int main()
//{
//	int input = 0;
//	scanf("%d", &input);
//
//	switch (input+1) //switch只能整型表达式
//	{
//	case 2:
//		printf("hehe");
//		break;
//	case 6:
//		printf("6");
//		break;
//	case 'A':   //case只能整型常量表达式
//		printf("牛逼");
//		break;
//	}
//
//	return 0;
//}



//工作日/休息日 1.

//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//
//	scanf("%d", &a);
//
//	switch (a >= 1 && a <= 7)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//		printf("休息日\n");
//		break;
//	case 7:
//		printf("休息日\n");
//		break;
//	}
//	return 0;
//}



//工作日/休息日 2.

//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//
//	switch (a)
//	{
//	case 1:
//		if (a == 1)
//			printf("星期一");
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	default:	//default也可以放前面
//		printf("没有这个星期\n");
//		break;
//	}
//}





//最后的 n 和 m分别是多少？

//#include <stdio.h>
//
//int main()
//{
//	int n = 1;
//	int m = 2;
//
//	switch (n)
//	{
//	case 1:m++;
//	case 2:n++;
//	case 3:
//		switch (n)
//		{
//			//switch支持嵌套使用
//		case 1:n++;
//		case 2:m++; n++; break;
//		}
//	case 4:m++;
//		break;
//	default:
//		break;
//	}
//
//	printf("n=%d\nm=%d", n, m);
//
//}






//#include <stdio.h>

//int main()
//{
//
//	if (-1)	//if括号里判断真还是假，真就输出，假就结束,在计算机里面,非0就是真，0就是假 
//		printf("hehe\n");
//
//	return 0;
//}





//continue 只能在循环体里面使用
//continue作用是结束这一轮循环,回到上面

//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	
//	while (a < 10) {
//		a++;
//		if(a==5)
//			continue;
//		printf("%d\n", a);
//		
//	}
//
//	return 0;
//}


//break是跳过所有循环，直接终止循环
//continue是跳过本轮循环，continue后面的代码不会执行，回到循环最开始
//break和continue都是只跳过循环，不跳过判断(if)






//getchar()
//getchar()的作用是键盘输入一个字符，然后接收这个字符，有点像scanf，都是输入函数
//getchar只能读取一个字符
//putchar的作用是把接收到的字符返还,相当于printf,都是输出函数


//#include <stdio.h>
//
//int main()
//{
//	int ch = getchar();
//
//	printf("%s\n", ch);
//
//	putchar(ch);
//
//	return 0;
//}








//#include <stdio.h>
//
//int main()
//{
//	int ch = 0;
//
//	while ((ch = getchar()) != EOF)
//		putchar(ch);
//
//	return 0;
//}


//点击EOF,鼠标右击，选择转到定义，可以看到EOF的值是-1
//EOF是end of file的缩写，它的值是-1
//ctrl+z可以退出
//ctrl+c直接退出






//#include <stdio.h>
//
//int main()
//{
//	int ret = 0;
//	int ch = 0;
//
//	char password[20] = { 0 };
//	//存储密码等 用数组
//	printf("请输入密码\n");
//
//	scanf("%s", &password);//输入密码,并存放在psaaword数组中,注意是%s字符串,123在%d里面是一百二十三,在%s里面是字符一二三
//	//scanf只会获取空格前面的函数
//
//	while ((ch = getchar()) != '\n')
//	{	
//		;
//	}
//	
//
//	printf("请确认密码(Y/N)");
//
//	//getchar();  //（这行代码要删掉才能出正确运行结果）
//	//输入缓冲区，在输入东西但还没有存放之前就是在输入缓冲区里面，当按了回车，回车前面的东西被存放了，输入缓冲区就还剩下一个
//	//  '\n'，此时\n又被 ret = getchar()读走，所以在if判断里是else,要解决只需在前面放一个getchar()把\n读走即可
//
//	//getchar只能读取一个字符
//
//	ret = getchar();
//
//	if (ret == 'Y')  //注意是字符'Y'
//		printf("已确认");
//	else
//		printf("取消确认");
//
//	return 0;
//}





//#include <stdio.h>
//
//int main()
//{
//	int ch = 0;
//	
//	while ((ch = getchar())!=EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		else
//			printf("ee");
//		putchar(ch);
//	}
//
//	return 0;
//}

//之所以能输出4等任何数字，是因为putchar每次只能输出单个字符，输出的数字其实是字符

//if(ch<'0' || ch>'9')continue 表达的是 如果 ch小于字符0 或者 ch大于字符9,就continue

//如果输入一个数字789,getchar一次只会读取一个字符，先读取字符7,字符7在字符0和字符9之间，不在if(ch<'0' || ch'9')之间
//，所以else,输出ee,但这个循环还没有结束，回到上面，继续读取8（注意getchar读取的都是字符，所以是字符8）
//循环一轮继续读取9，就这样经过三轮循环输出 ee7ee8ee9






//for循环

//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//
//	for (a = 1; a <= 10; a++)  //a = 1是初始化;a<=10是判断进入到循环的条件;a++是每一轮循环的调整
//	{	
//		if (a == 5)
//			continue;
//		
//		printf("%d\n", a);
//	}
//	return 0;
//}






// for死循环
//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//
//	for (i = 0; i < 10; i++)
//	{
//		if (i = 5) {
//			printf("haha\n");
//		}
//		printf("hehe\n");
//	}
//
//	return 0;
//}





//建议for语句的循环控制变量的取值采用"前闭后开的写法"(只是建议，具体情况具体分析)

//#include <stdio.h>
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	int i = 0;
//
//	for (i = 0; i < 10; i++)
//		//10次循环
//		//10次打印
//		//10个元素
//		printf("%d\t", arr[i]);
//
//	return 0;
//}





//无限循环

//#include <stdio.h>
//
//int main()
//{
//	for (;;)
//		//for循环的初始化,判断,调整 都可以省略
//		//但是:for循环的 判断部分 如果被省略，那判断条件就是:恒为真,那就会无限循环
//	{
//		printf("hehe");
//	}
//
//	return 0;
//}




//题目:会打印几个呵呵？

//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	int i = 0;
//
//	for (a=0; a < 10; a++)
//	{	
//		for (; i < 10; i++)
//		{		
//			printf("hehe\n");
//		}
//	}
//
//	return 0;
//}

//以上会打印10个hehe
//因为i没有初始化，所以i到10的时候i一直都是10（调试出真相）



//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	int i = 0;
//
//	for (a = 0; a < 10; a++)
//	{	
//		for (i=0; i < 10; i++)
//		{
//			printf("hehe\n");
//		}
//	}
//
//	return 0;
//}

//以上会打印100次




//#include <stdio.h>
//
//int main()
//{
//	int x, y;
//
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//	{
//		printf("hehe\n");
//	}
//
//	return 0;
//}





//题目：以下代码循环几次？

//#include <stdio.h>
//
//int main()
//{
//	int x, y;
//
//	for (x = 0, y = 0; y = 0; x++, y++)
//	{
//		printf("hehe");
//	}
//
//	return 0;
//}

//以上代码一次都不循环,因为for里面判断y=0是把0赋给y,for循环里判断是判断真假,真就执行,假就不执行,0就是假，非0就是真，0赋给y使得判断为0
//自然就不执行了
//一个等号是赋值，而不是判断




//死循环
//#include <stdio.h>
//
//int main()
//{
//	int a = 1;
//
//	do {
//		
//		if (a == 5)
//			continue;
//		printf("%d\n", a);
//		a++;
//	} while (a < 11);
//
//	return 0;
//	
//}








//计算n的阶乘

//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	int i = 1;
//	int b = 2;
//	
//	scanf("%d", &a);
//
//	for (i = 1; b <= a; b++)
//	{
//		i *= b;
//	}
//
//	printf("%d\n", i);
//
//	return 0;
//}







//题目1：计算1！+ 2! + 3! + 4! + 5!...10!

//正常效率

//#include <stdio.h>
//
//int main()
//{
//	int i =1;
//
//	int sum = 0;
//
//	int n = 1;
//
//	for (n = 1; n <= 10; n++)
//	{	
//		int ret = 1;
//
//		for (i = 1; i <= n; i++)
//		{	
//			ret *= i;
//		}
//
//		sum += ret;
//	}
//
//	printf("%d\n", sum);
//
//	return 0;
//}




//高效率

//#include <stdio.h>
//
//int main()
//{
//	int i = 1;
//	int sum = 0;
//	int ret = 1;
//
//	for (i = 1; i<=10; i++)
//	{
//		ret *= i;
//
//		sum += ret;
//	}
//
//	printf("%d\n", sum);
//
//	return 0;
//}


//计算3的阶乘只需在2的阶乘基础上乘以3就是3的阶乘，计算10的阶乘只需要在9的阶乘基础上乘以10就是10的阶乘







//题目2：在一个有序数组中查找具体的某个数字。
// 编写一个功能:在V[0]-[1]-V[2]...V[n-1]的数组中查找k的下标；

//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	int n = 9;
//	int v[10] = {1,2,3,4,5,6,7,8,9,10};
//
//	int sz = sizeof(v) / sizeof(v[0]);
//
//	for (i = 0; i < sz; i++)
//	{
//		if (v[i] == n)
//		{
//			printf("找到了,下标是%d\n", i);
//			break;
//		}
//		
//	}
//
//	if (i == sz)	//如果i遍历了整个数组的元素(sz就是数组元素个数)都没有找到
//					//为什么i==sz而不是i==sz-1，i小于sz，sz是10，i不就最多只能到9吗？
//					//因为上面for循环i成了9结束后还要i++一次，所以i遍历结束后是10
//		printf("找不到\n");
//	
//	return 0;
//
//}

//这种方法适用于数组元素个数小的数组，遇到数组元素多的数组就会浪费很多时间,因为这样要一个一个的查找数字
//可以用算法减少时间,比如下面的二分查找算法





//拆半查找算法/二分查找算法

//#include <stdio.h>
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	int left = 0;
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	int right = sz - 1;
//	
//	int k = 5;
//
//	while (left <= right)
//	{
//
//		int mid = (left + right) / 2;
//
//		if (arr[mid] > k)
//		{	//除以2的是下标，也就是0-9
			//除的时候已经做了第一次判断了,比如9除以2得4,要找得是7，4小于元素7,然后继续
//			right = mid-1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid+1;
//		}
//		else
//		{
//			printf("找到了,下标是%d\n", mid);
//			break;
//		}
//	}
//
//	if (left > right)
//		printf("找不到");
//
//	return 0;
//}







//题目3：编写题目,演示多个字符从两端移动,向中间汇聚
 
//整型数组不用考虑下标\0结束符的问题，但字符串数组需要考虑sizeof元素个数加1
//整型数组计算元素个数可以用sizeof
//字符数组计算元素个数（元素长度）可以用strlen
//字符型数组赋值号右边可以用""也可以用{}，看你要存什么

//#include <stdio.h>
//#include <string.h>
//#include <windows.h>
//#include <stdlib.h>
//
//int main()
//{
//	char arr1[] = "welcome to bit!!!";
//	char arr2[] = "                 ";
//
//	int left = 0;
//	int right = strlen(arr2)-1;
//
//	printf("%d\n", right);
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//
//		printf("%s\n", arr2);
//		//字符串数组可以直接输出，比如上面的arr2，不用写成arr[]..
//
//		Sleep(1000);
//		//意思是休息1秒，单位是毫秒，1000毫秒等于1秒，使用这个库函数要引一个<windows.h>的头文件,S是大写
//
//		system("cls");
//		//执行系统命令的一个库函数，需要引一个<stdlib.h>的头文件
//
//		left++;
//		right--;
//	}
//
//	printf("%s\n", arr2);
//
//	return 0;
//}





//题目4：编写代码实现,模拟用户登录情景,并且只能登录三次
// (只允许输入三次密码如果密码正确则提示登录成功，如果三次均输入错误，则退出程序)



//#include <stdio.h>
//
//
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//
//	for (i = 0; i < 3; i++) {
//		printf("请输入密码:>");
//		scanf("%s", &password);
//
//		//strcmp的作用是把两个字符串传给strcmp,然后比较两个字符是否相等，是库函数，要引一个<string.h>的头文件 
//		//如果第一个字符串大于第二个字符串，返回正数(1)，如果小于第二个字符串返回负数(-1),如果两个字符串相等,返回0;
//
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else
//			printf("密码错误\n");
//	
//	}
//
//	if (i == 3)
//		printf("三次密码均输入错误\n");
//
//	return 0;
//
//}




//题目:输入三个数，输出最大值

//解法 1:
//#include <stdio.h>
//
//int main()
//{
//	int a, b, c = 0; 0; 0;
//
//	scanf("%d %d %d", &a, &b, &c);
//
//	int max = 0;
//
//	if (a > b) {
//		if (a > c) {
//			max = a;
//		}
//		else
//			max = c;
//	}
//	else if (b > a) {
//		if (b > c) {
//			max = b;
//		}
//		else
//			max = c;
//	}
//
//	printf("最大的数字是%d\n", max);
//
//	return 0;
//
//}



//解法 2:
//#include <stdio.h>
//
//int main()
//{
//	int max = 0;
//	int a = 0;
//
//	for (a = 0; a != EOF; )
//	{
//		scanf("%d", &a);
//
//		if (a > max)
//			max = a;
//	}
//
//	printf("最大的数字是%d\n", max);
//
//	return 0;
//}




//题目：打印1-100的3的倍数

//#include <stdio.h>
//
//int main()
//{
//	int a = 3;
//
//	while (a < 100)
//	{
//		if (a % 3 == 0) {
//			printf("%d\n", a);
//		}
//		a++;
//	}
//	return 0;
//}




//题目：输入3个数，从大到小输出;

//#include <stdio.h>
//
//int main()
//{
//	int a, b, c = 0; 0; 0;
//
//	scanf("%d %d %d", &a, &b, &c);
//
//	int tmp;
//
//	if (a < b)
//	{
//		tmp = b;
//		b = a;
//		a = tmp;
//	}
//	if (b < c)
//	{
//		tmp = c;
//		c = b;
//		b = tmp;
//	}
//	if (a < b)
//	{
//		tmp = b;
//		b = a;
//		a = tmp;
//	}
//	
//	printf("%d>%d>%d\n", a, b, c);
//
//	return 0;
//}

//解析：三个数字按大小排序，照常按照abc等级排列就好了，a是最大，b是第二，c是最后
// 如果b>a，那么就把a和b的值对调，因为a最大,b第二
// 然后a和b比(现在的b是原先的c)，如果b比a大，a和b的值就对调，这样原先的a就变成b了，然而原先的a和b比过，是要比b大的
// 所以现在的c还要和b比一下大小;





//题目：给定两个数，求两个数的最大公约数

//#include <stdio.h>
//
//int main()
//{
//	int a, b = 0; 0;
//	scanf("%d %d", &a, &b);
//
//	int c = 0;
//
//	while (c=a%b) //这里不用写c=a%b!=0，因为a%b是非0进入循环，如果a%b是0,那就if判断条件是0，不进入循环了
//	{
//		//编程出现的问题:我把b=c放在前面，a = b放在后面
//		//导致c的值赋给b了，然后又把b的值赋给a了，相当于把c的值又赋给b又赋给a了，所以程序一轮就执行完了
//		a = b;
//		b = c;
//		
//		//c = a % b;这条可以省略，因为while循环里面每一轮都已经执行这条了
//	}
//
//	printf("最大公约数为%d\n", b);
//
//	return 0;
//}


//以上用的是辗转相除法



//解法2:

//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//
//	scanf("%d %d", &a, &b);
//
//	int min = b;
//	if (a < b)
//	{
//		min = a;
//	}
//
//	int i = 0;
//
//	for (i = 1; i <= main; i++)
//	{
//		if (a % i == 0 && b % i == 0)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}





//题目：打印1000年-2000的闰年
//闰年：1.能被4整除并且不能被100整除的年份  或
//      2.能被400整除是闰年

//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//
//	int count = 0;
//
//	for (i = 1000; i <= 2000; i++)
//	{
//		if ((i % 4 == 0 && i % 100 != 0) || (i%400==0))
//		{
//			printf("%d\n", i);
//			count++;
//		}
//	}
//
//	printf("以上是1000年到2000年的闰年\n总共有%d个闰年\n", count);
//
//	return 0;
//}






//题目：打印100-200的素数

//解法1：

//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	int ret = 0;
//	int count = 0;
//
//	for (i = 100; i <= 200; i++) {
//		for (ret = 2; ret < i; ret++) {
//			if (i % ret == 0) 
//			{
//				break;
//				//这个break是跳出最近的循环，而不是if，break的作用是跳出循环，而不是跳出判断
//			}
//			if (ret == (i-1))
//			{
//				printf("%d\n", ret);
//				count++;
//			}
//		}
//	}
//	
//	printf("总共%d个素数\n", count);
//
//	return 0;
//}

//以上方法叫试除法


//解法2:
//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//
//	int i = 0;
//
//	int tmp = 0;
//
//	for (n = 100; n <= 200; n++)
//	{
//		int count = 0;
//		for (i = 2; i < n; i++)
//		{
//			count++;
//
//			if (n % i == 0)
//			{
//				break;
//			}
//
//			if (count == n - 2)
//			{
//				printf("%d\n", n);
//				tmp++;
//			}
//		}
//	}
//	
//	printf("总共%d个素数\n", tmp);
//
//	return 0;
//}
 
 


//解法3：

//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//	int i = 0;
//	int ret = 0;
//	int count = 0;
//
//  //偶数绝对不可能是素数，所以可以不从100开始，从101开始，每次加2，奇数加2还是等于奇数
// 
//	for (i = 101; i <= 200; i+=2) {
//		//sqrt是一个数学库函数，作用是开平方，要引一个<math.h>的头文件,sqrt是库函数
//      //下面for()里面的ret<=sqrt(i)也可以写成i/2，因为一个数一半一定大于这个数的开平方
//		for (ret = 2; ret <= sqrt(i); ret++) {
//			if (i % ret == 0)
//			{
//				break;
//			}
//		}
//			if (ret > sqrt(i))
//			{
//				printf("%d\n", i);
//				count++;
//			}
//	}
//
//	printf("总共%d个素数\n", count);
//	return 0;
//}

//要求一个数是否是素数，还可以被这个数的2-开平方的数 所除，如果2-开平方的数都除完没有剩下，余数都不为0，那么这个数就是素数




//sqrt演示

//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//	int a = 103;
//
//	double b = sqrt(a);
//
//	printf("%f\n", b);
//
//	return 0;
//}





//题目：输出1-100整数以内所有含有9数字的个数

//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//
//	for (i = 0; i < 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			printf("%d\n", i);
//			count++;
//		}
//
//		if (i / 10 == 9)
//		{
//			printf("%d\n", i);
//			count++;
//		}
//	}
//
//	printf("1-100内含9的数字的个数是%d\n", count);
//
//	return 0;
//}





//题目：分数求和
//计算1/1 - 1/2 + 1/3 - 1/4 + 1/5......+ 1/99 - 1/100的值，打印出结果

//#include <stdio.h>
//
//int main()
//{
//	double i = 1.0;
//	//在C语言中，整型常量会被编译器隐式转换成双精度浮点数,用double最好后面加.0
//	double sum = 0.0;
//	int flag = 1;
//
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag * 1 / i;
//		//要想得到小数，除号两边有一边必须为浮点数
//		flag = -flag;
//	}
//
//	printf("%lf\n", sum);
//
//	return 0;
//}








//题目：求10个整数的最大值

//#include <stdio.h>
//
//int main()
//{
//	//这个程序有问题，只能求整数的最大值，因为所有数要和max比较，max是0，当负数跟max比较时，max还是0
//	int arr[] = {1,2,3,4,5,6,77,88,9,10};
//
//	int max = 0;
//
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//	}
//
//	printf("%d\n", max);
//
//	return 0;
//}



//#include <stdio.h>
//
//int main()
//{
//	int arr[] = { -6,-2,-3,-4,-5 };
//
//	int i = 0;
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	int max = arr[0];
//
//	for (i = 1; i < sz; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//	}
//
//	printf("%d\n", max);
//
//	return 0;
//}





//题目：打印9*9乘法口诀打印

//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//
//	for (i = 1; i < 9; i++)
//	{
//		int j = 0;
//		for (j = 1; j <=i; j++)
//		{
//			printf("%d*%d=%-3d", i, j, i * j);
//			//%2d是右对齐，打印两位的意思，没有两位会空格补齐
//			//%-2d是向左对齐打印两位,不够两位会把空格填充在右边
//		}
//
//		printf("\n");
//	}
//	return 0;
//}






//题目，猜数游戏

//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
////void是返回值类型，表示这个函数不返回值，menu是这个函数的名称，随意取的
//void menu(){
//  printf("这是个猜数游戏 随机1-100的值\n");
//	printf("**************************\n");
//	printf("******1.开始   0.退出******\n");
//	printf("**************************\n");
//}
//
//void game()
//{
//
//	//拿时间戳来设置随机数的生成起始点
//	//要生成一个随机数，需要用到生成随机库函数rand,调用rand前面要使用srand(),srand()里存的参数是unsigned int
//	// ,调用时间戳time()来生成随机数起始点，时间戳time()的类型是long，所以要强制转换成unsigned int
//	//time()是时间戳的库函数，要引一个time.h的头文件
//	//时间戳是均匀变化的
//
//	int ret = 0;
//
//	//srand((unsigned int)time(NULL));   //time函数，参数给空指针
//	//srand生成随机数的起点，只要在代码里面调用一次就行了，不要频繁的设置生成随机数的起点，所以放在主函数里面;
//	
//	ret = rand()%100+1; //生成随机数,要引一个<stdlib.h>的头文件
//	//为什么要+1，因为rand最大是6位数，模上100就剩下两位数，范围是0-99，
//	// 要实现生成1-100的随机数，就要+1
//
//	int a = 0;
//	int count = 0;;
//
//	while (1)
//	{
//		printf("请猜数字:>");
//
//		scanf("%d", &a);
//
//		if (a > ret)
//		{
//			printf("大了\n");
//		}
//		else if (a < ret)
//		{
//			printf("小了\n");
//		}
//		else if (a == ret)
//		{
//			printf("恭喜你，猜对啦!\n");
//			break;
//		}
//		count++;
//	}
//	printf("找的次数是%d\n", count);
//}
//
//int main()
//{
//	int input = 0;
//
//	srand((unsigned int)time(NULL));   //time函数，参数给空指针
//	//srand生成随机数的起点，只要在代码里面调用一次就行了，不要频繁的设置生成随机数的起点，所以放在主函数里面;
//	
//	do {
//		menu();
//		printf("请选择\n\n");
//		scanf("%d", &input);
//		
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 2:
//			printf("退出游戏\n\n");
//			break;
//		default:
//			printf("选择错误\n\n");
//			break;
//		}
//	
//	}while (input);
//
//	return 0;
//}





// goto语句

//C语言中提供了可以滥用的goto语句和标记跳转的标号
//从理论上goto是没有必要的，实践中没有goto也可以很好的写出代码
//但是在某些场合下goto语句还是用得着的，最常见的用法就是终止程序在某些深度嵌套的结构的处理过程
// 例如一次跳出两层或多层循环
//这种情况使用break是达不到的

//#include <stdio.h>
//
//int main()
//{
//	printf("hello\n");
//
//again:	//这里可以不用是again，任何都可以，只要不是关键字
//	printf("hi\n");
//
//	goto again;
//
//	return 0;
//
//}





//关机程序

//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//
//int main()
//{
//	char input[20] = { 0 };
//
//	system("shutdown -s -t 120");
//
//again:
//
//	printf("请注意，你的电脑将在2分钟后关机，如果输入：我是猪，就取消关机\n请输入:>");
//
//	scanf("%s", &input);
//
//	if (strcmp(input, "我是猪") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//
//	return 0;
//}





//goto语句一般不用，上面的代码完全可以用循环写

//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//int main()
//{
//	char input[20] = {0};
//
//	printf("2分钟之后你的电脑将会关机\n请输入:我是猪 取消关机:>\n");
//
//	system("shutdown -s -t 120");
//
//	while (1)
//	{
//		scanf("%s", &input);
//
//		if (strcmp(input,"我是猪") == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//
//	}
//	return 0;
//}











//函数
//在计算机中，函数是一个大型程序中的某部分代码，有一个或者多个语句块组成
//它负责完成某项特定任务，而且相较于其他代码，具备相对的独立性

//一般会有输入参数并有返回值，提供对过程的封装和细节的隐藏
//这些代码通常被集成为软件库

//常用的函数的头文件：
//io函数		<stdio.h>
//字符串操作函数	<string.h>
//内存操作函数   memset
//时间/日期函数	<time.h>
//数学函数		<math.h>



//加法函数

//#include <stdio.h>
//
//int ADD(x, y)
//{
//	int z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	int sum = ADD(a, b);
//              //a, b这两个参数被称为输入参数
//
//	printf("%d\n", sum);
//
//	return 0;
//
//}




//把数组a内容放到数组b   1.

//#include <stdio.h>
//
//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//
//	int b[5] = { 4,5,6,7,8 };
//
//	int i = 0;
//
//	int sz = sizeof(a) / sizeof(a[0]);
//
//	for (i = 0; i < sz; i++) {
//		b[i] = a[i];
//	}
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", b[i]);
//	}
//
//	return 0;
//}




//题目：把数组a内容拷贝到数组b  2.

//#include <stdio.h>
//
//int main()
//{
//	char arr1[] = "bit";
//	char arr2[10] = "#######";
//  //如果源地址的字符多于目的地字符，就会溢出
//
//	strcpy(arr2, arr1);
//	//strcpy：作用是把一个字符串拷贝到字符串
//	//char*strcpy(char * destination(目的地址),const char * source(源头));
//	//这个strcpy会把字符串里面的\0也拷贝进去，F10监视窗口可以看见
//	
//	printf("%s\n", arr2);
//  //为什么不打印bit######？因为打印的时候到\0就停止打印了
//  //但凡用到字符串的地方，\0都是字符串的结束标志
//
//	return 0;
//}




//memset : 设置内存
//要引的头文件是:<memory.h> or <string.h>

//menset(void*ptr , int value , size_num);
//ptr:指针指向的那个要填充的内存块
//value:要设置的那个值
//num:要被设置的字符的个数


//#include <stdio.h>
//#include <memory.h>
//
//int main()
//{
//	char arr[] = "love you";
//	memset(arr, 'x', 4);
//  //如果要设置的值的字符多于目的地地址字符，就会溢出
//
//	printf("%s\n", arr);
//
//	return 0;
//}





//自定义函数的组成
//ret_type fun_name(part1, *);
//{
//	statement;
//}
//
//ret_type:函数类型
//fun_name:函数名
//part1:函数参数
//statement:语句项
//大括号里的是函数体：交代的是函数的实现







//题目：写一个函数，找出两个整数的较大值

//#include <stdio.h>
//
//int get_max(x, y)
//{
//
//	return x > y ? x : y;
//
//	//if (x > y)
//	//	return x;
//
//	//if (y > x)
//	//	return y;
//}
//
//int main()
//{
//	int a = 20;
//	int b = 30;
//
//	int max = get_max(a, b);
//
//	printf("较大值是%d\n\n", max);
//
//	int max1 = get_max(999, 123);
//	//调用函数也可以直接比较
//
//	printf("较大值是%d\n", max1);
//	
//
//	return 0;
//}





//题目：写一个函数，交换两个变量

//#include <stdio.h>

//// 这个函数不能交换两个变量，因为实参转给形参，x和y是两个新变量了，相当于是a和b的临时拷贝
//// 函数的形参和实参分别占用不同的内存块，对形参的修改是不会改变实参的
////void swap1(x, y)
////{
////	int tmp = 0;
////	tmp = x;
////	x = y;
////	y = tmp;
////}
//
//void swap2(int* x,int* y)  //形式参数（形参）
//{
//	int tmp = 0;
//	tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//
//int get_max(x, y)
//{
//	if (x > y)
//		return x;
//	
//	if (y > x)
//		return y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 12;
//	int c = 15;
//	int max = 0;
//
//	//函数的使用就是函数的调用
//	//函数的调用有 传值调用 和 传址调用
//	swap1(a, b);
//	//传值调用：函数的形参和实参分别占用不同的内存块，对形参的修改是不会改变实参的
//
//	swap2(&a, &b);
//	//传址调用：传址调用是把函数外部创建变量的内存地址传递给函数参数的一种调用函数的方式
//  //这种传参方式可以让函数和函数外边的变量建立起真正的联系，也就是函数内部可以直接操作
//
//	printf("a=%d b=%d\n\n", a, b);
//  //swap(a,b);  //实参 实参可以传变量
//  //swap2(&a, &b); //实参 实参可以传地址
//  //swap(300,100); 实参可以传常量
//  //swap(300+1,100); 实参可以传表达式
//    max = get_max(a,get_max(b,c)); //实参可以传函数
//
//	printf("a=%d\n\n", max);
//	printf("max=%d\n",get_max(a,get_max(b,c))); //库函数也可以调用自定义函数
//
//	return 0;
//
//}

//实际参数(实参)：真实传给函数的参数，叫实参。实参可以说：常量，变量，表达式，函数等。
//无论实参是何种类型的量，在进行函数调用时，它们都必须有确定的值，以便把这些值传给形参

//形式参数（形参）：形式参数是指函数名后括号中的变量，因为形式参数只有在函数被调用的过程中才实例化（分配内存单元）
//所以叫做形式参数。形式参数当函数调用完成之后就自动销毁了。因此形式参数只在函数中有效

//形参是实参的一份临时拷贝，传数组的时候电脑不会这么傻把全部传过去，因为如果一个数组有一万个元素
//相当于把存储空间涨了一倍，所以为了避免空间浪费，只是传过去数组首元素的第一个地址






//题目：写一个函数判断一个数是不是素数

//#include <stdio.h>
//
//int is_prime(int n)
//{
//	int i = 0;
//
//	for (i = 2; i < n; i++)
//	{
//		if (n % i == 0)
//		{
//			return 0;
//		}
//		else if (i == (n - 1))
//			return 1;
//	}
//
//}
//
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//
//	if (is_prime(i) == 1)
//	{
//		printf("这个数是素数\n");
//	}
//	else
//		printf("这个数不是素数\n");
//
//	return 0;
//}






//题目：写一个打印100-200之间的素数的函数

//#include <stdio.h>
//#include <math.h>
//
//int is_prime(int n)
//{
//	int j = 0;
//
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//		{
//			return 0;
//			//为什么这里只能写return 0,不能写break,因为break跳出for循环后，就return 1了;
//			//break只跳出for循环
//			//return会直接跳出函数
//		}
//	}
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//		{
//			printf("%d\n", i);
//			count++;
//		}
//	}
//
//	printf("总共%d个素数\n", count);
//
//	return 0;
//}





//题目：写一个函数判断一年是不是闰年

//#include <stdio.h>
//
//int year(int a)
//{
//	if ((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//		
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//
//	if (year(a) == 1)
//	{
//		printf("这年是闰年\n");
//	}
//	else if (year(a) == 0)
//	{
//		printf("这年不是闰年\n");
//	}
//
//	return 0;
//}





//题目:写一个函数，输出1000-2000年之间的闰年

//#include <stdio.h>
//
//int year(int x)
//{
//	if ((x % 4 == 0 && x % 100 != 0) || (x % 400 == 0))
//	{
//		return 1;
//	}
//	else
//		return 0;
//}
//
//int main()
//{
//	int i = 0;
//
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (year(i) == 1)
//		{
//			printf("%d\t", i);
//		}
//	}
//
//}





//题目：写一个函数，实现一个整形有序数组的二分查找

//#include <stdio.h>
////					既然传过来的是地址，那int arr[]就是指针变量
//int binary_search(int arr[], int k, int sz)
//{
////int sz = sizeof(arr) / sizeof(arr[0]);
////指针变量在32位系统是4个字节，在64位系统上是8个字节，sz=8/4=2
// 
//	int left = 0;
//	int right = sz - 1;
//	
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//			return mid;
//	}
//	return -1;
//
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	int k = 7;
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	int ret = binary_search(arr, k, sz);
//	//数组在传参的时候仅仅只是传过去数组第一个元素的地址
// 
//	if (ret == -1)
//	{
//		printf("找不到指定数字\n");
//	}
//	else
//		printf("找到了,下标是%d\n", ret);
//
//	return 0;
//}




//题目：写一个函数，每调用一次这个函数，就会把num的值增加1

//#include <stdio.h>
//
////用不上返回值，所以用void
//
//void diaoyong(int* p)
//{
//	(*p)++;
//	//++的优先级别比*高，所以解引用操作符*要加括号，不然就是先p++再*
//}
//
//int main()
//{
//	int num = 1;
//
//	diaoyong(&num);
//	printf("num=%d\n", num);
//
//	diaoyong(&num);
//	printf("num=%d\n", num);
//
//	diaoyong(&num);
//	printf("num=%d\n", num);
//
//	diaoyong(&num);
//	printf("num=%d\n", num);
//
//	return 0;
//
//}








//函数的嵌套调用和链式访问

//函数和函数之间可以有机的组合的


//函数的嵌套调用

//#include <stdio.h>
//
//void new_line()
//{
//	printf("加油黄冠\n");
//}
//
//void three_line()
//{
//	int i = 0;
//
//	for (i = 0; i < 3; i++)
//	{
//		new_line();
//	}
//}
//int main()
//{
//	three_line();
//
//	return 0;
//}




//函数链式访问

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	// 1.
//	int len = 0;
//
//	len = strlen("abc");
//
//	printf("%d\n", len);
//
//	// 2.
//	printf("%d\n", strlen("abc"));
//
//	return 0;
//}


//printf链式访问

//#include <stdio.h>
//
//int main()
//{
//	printf("%d", printf("%d\n", printf("%d\n", 43)));
//	//每一个printf函数返回的都是打印的字符的个数
// 
//  printf("%d\n",printf("%d\n",printf("%d\n",4567)));
//  //转义字符'\n'也是一位数
//
//	return 0;
//}








//函数的声明与定义

//函数声明：
		//1.告诉编译器有一个函数叫什么，参数是什么，返回类型是什么。但具体是不是存在，无关紧要
		//2.函数的声明一般出现在函数的使用之前。要满足先声明后使用
		//3.函数的声明一般要放在头文件中
//函数的定义：
		//  函数的定义是指函数的具体实现，交待函数的功能实现



//在工作中，函数的定义和声明和源文件一般不在同一个源文件中

//#include <stdio.h>
//
////函数的声明
//int sum(int x, int y);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = add(a, b);
//
//	printf("sum=%d\n", sum);
//
//	return 0;
//}
//
////函数的定义
//int add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//
//	return z;
//}



//工作情况：
//函数的声明放在.h文件中，函数的定义放在.c文件中
//库函数头文件用<.h>  ,  自己写的函数的头文件用".h"

//#include <stdio.h>
//#include "add.h"
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//		
//	sum = add(a, b);
//
//	printf("sum=%d\n", sum);
//
//	return 0;
//}






//二分查找函数(工作模式)

//#include <stdio.h>
//#include "add.h"
//
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	int k = 7;
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	int ret = binary_search(arr, k, sz);
//
//	if (ret == -1)
//	{
//		printf("你查找的数不存在");
//	}
//	else
//		printf("找到了,下标是%d\n", ret);
//
//	return 0;
//	
//}




//猜数游戏函数(工作模式)
// 
//#include <stdio.h>
//#include "add.h"
//#include <time.h>
//#include <stdlib.h>
//
//int main()
//{
//	int input = 0;
//	
//	srand((unsigned int)time(NULL));  //time函数，参数给空指针
//
//	do {
//		menu();
//
//		scanf("%d", &input);
//
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	}while (input);
//
//	return 0;
//}





//#ifndef __ADD_H__
// 如果函数未定义
//#define __ADD_H__
// 那就定义一个函数
//#endif
//结束

//如果函数已经定义，那就不再定义，为了防止重复定义


//#include <stdio.h>
//#include "add.h"
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = ADD(a, b);
//
//	printf("%d\n", sum);
//
//	return 0;
//}







//递归

// 什么是递归：
// 程序调用自身的编程技巧称为递归(recursion).递归做为一种算法在程序设计语言中广泛应用。
// 一个过程或函数在其定义或说明中有直接或间接调用自身的一种方法，它通常把一个大型复杂的问题
// 层层转化为一个与原问题相似的规模较小的问题来求解，递归策略只需要少量的程序就可以描述出解题过程所需要的多次重复计算
// 大大减少了程序的代码量，递归的主要思考方式在于：把大事化小

//一个函数可以调用别的函数，一个函数调用自己就是递归

//递归常见的错误:Stack overflow  栈溢出

//#include <stdio.h>
//
//int main()
//{
//	printf("hehe\n");
//
//	main();
//
//}




//递归实现 正序输出无符号整型变量  eg:输入1234 输出1 2 3 4

//#include <stdio.h>
//
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//
//	scanf("%d", &num);
//
//	print(num);
//
//	return 0;
//}

//递归的两个必要条件
//1.存在限制条件，当满足这个限制条件的时候，递归便不再继续
//2.每次递归调用之后越来越接近这个限制条件




//题目:编写函数不允许创建临时变量，求字符串长度
//临时变量是一种只在调用期间有效，且具有常性的变量

//strlen的实现原理(我猜的)


//以下是允许创建临时变量的情况

//#include <stdio.h>
//#include <string.h>
//
//int my_strlen(char* str)
//{
//	int count = 0;
//
//	while (*str != '\0')
//	{
//		count++;
//		str++; //数组开辟的是连续的空间，str存放第一个字符的地址，str++就是地址向后延续，就是第二个字符的地址
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "bite";
//
//	int len = my_strlen(&arr);  //arr是数组，数组传参，传过去的不是整个数组，而是首元素的地址
//
//	printf("%d\n", len);
//
//	return 0;
//}




//以下是不允许创建临时变量的情况
//#include <stdio.h>
//#include <string.h>
//
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//		//为什么不是*str+1而是str+1，因为*str就是b，而str是str的地址
//		//为什么str是str的地址，因为main主函数传上来的就是数组的地址
//	}
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[] = "bite";
//
//	int len = my_strlen(&arr);  //arr是数组，数组传参，传过去的不是整个数组，是首元素的地址
//
//	printf("%d\n", len);
//
//	return 0;
//}






//递归实现阶乘

//#include <stdio.h>
//
//int fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * fac(n - 1);
//	  //当n=1的时候，return的1是整个fac(n-1)的结果 
//}
////5 *
////4 *
////3 *
////2 *
////1 *
//int main()
//{
//	int n = 0;
//	int ret = 0;
//
//	scanf("%d", &n);
//
//	ret = fac(n);
//
//	printf("%d\n", ret);
//
//}




//题目：求出第n个斐波那契数
//用递归和循环都可以解决，但是循环更适合这个代码

//1.循环解法

//#include <stdio.h>
//
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;//为什么c是1，因为如果n=1，就不会进入循环，就会返回c，c是0的话就错了
//
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//
//		n--;
//	}
//	
//	return c;
//
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	int ret = fib(n);
//
//	printf("ret=%d\n", ret);
//
//	return 0;
//}




//2.递归解法

//#include <stdio.h>
//
//int fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return fib(n - 1) + fib(n - 2);
//
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	int ret = fib(n);
//
//	printf("ret=%d\n", ret);
//
//	return 0;
//}


//写代码用循环解决还是递归解决都行，递归效率高代码简单，但是会栈溢出

//#include <stdio.h>
//
//void test(int n)
//{
//	if (n < 10000)
//		test(n + 1);
//}
//
//int main()
//{
//	test(1);
//	return 0;
//}

//并不是说递归满足两个必要条件就不会栈溢出了，比如以上代码










//数组

//数组是一组相同类型元素的集合。
//数组的创建方式: type_t  arr_name  [const_n]
               //type_t 是指数组的元素类型
			   // arr_name是指数组的元素名
			   //const_n是一个常量表达式，用来指定数组的大小


//#include <stdio.h>
//
//int main()
//{
//	int arr[10] = { 1,2,3 };
//	//整型数组不完全初始化，剩下的元素默认初始化为0
//
//	char arr2[5] = { 'a','b','c' };
//	//以上是字符数组，剩下元素默认初始化为\0
//
//	char arr3[5] = { 'a',98 };
//	//98会变成b,因为这是字符数组，98在ASCII码表里面对应的字符是b,就会解析成b
//
//	char arr4[7] = "abc";
//	//以上是字符串数组，abc后面还有一个\0
//
//	char arr5[] = "abcdefg";
//	//不指定大小，g后面还会有一个'\0'
//
//	char arr6[3] = { 1,2,3};
//	
//	printf("%d\t%d\t%d\t%d\t%d\t%d\n\n\n", strlen(arr),strlen(arr2),strlen(arr3),strlen(arr4),strlen(arr5),strlen(arr6));
//
//
//	//arr6是字符数组，而strlen以字符串结束，而字符数组后面没有\0，所以是个随机值
//
//	printf("%d\t%d\t%d\t%d\t%d\t%d\n", sizeof(arr), sizeof(arr2), sizeof(arr3), sizeof(arr4), sizeof(arr5), sizeof(arr6));
//
//	return 0;
//}

//总之不管怎么样，字符串数组后面都会有一个'\0'，因为这是判断数组结束的标志
//整型数组后面没有\0，未完全初始化整型数组后面默认为0
//字符数组和整型数组后面都没有\0





//sizeof和strlen没有什么关系

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr[] = "abcdef";
//
//	char arr1[] = { 'a','b','c', 'd','e','f'};
//
//	printf("%d\n", strlen(arr1));
//
//	printf("%d\n", sizeof(arr));
//	//sizeof是计算arr所占空间的大小，单位是字节,\0也会占空间，所以\0也算进空间
//	printf("%d\n", strlen(arr));
//	//strlen是计算字符串数组的长度，到\0就停止，所以\0不算进长度
//
//	return 0;
//}


//sizeof和strlen没有什么关联
//strlen是求字符串长度的-只能针对字符串求长度 - 库函数 - 得引头文件
//sizeof是计算变量，数组，类型的大小-单位是字节-操作符(像加减乘除就是操作符，不是函数，不用引头文件)



//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char arr[] = "abc";
//	//未初始化和完全初始化都是4个元素，但是未初始化监视窗口会显示\0
//	char arr1[3] = "abc";
//
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(arr1));
//
//	printf("%d\n", strlen(arr));
//	printf("%d\n", strlen(arr1));
// 
//}






//题目：以下sizeof和strlen各是多少？
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//
//	printf("%d\n", sizeof(arr1));
//	//arr1是字符串数组，字符串以\0结尾，所以字符串后面都会有\0，所以占据4个空间，每个空间是1(char)
//	printf("%d\n", sizeof(arr2));
//	//arr2是字符数组，字符不是以\0结尾，多少个就是多少个
//
//	printf("%d\n", strlen(arr1));
//	//arr1是字符串数组,计算字符串到\0结束，所以是3
//	printf("%d\n", strlen(arr2));
//	//arr2是字符数组，而strlen以字符串结束，而字符数组后面没有\0，所以是个随机值
//
//	return 0;
//}




//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char arr[] = "abcdef";
//
//	int i = 0;
//
//	int len = strlen(arr);
//
//	for (i = 0; i < len; i++)
//	{   //strlen返回的是一个无符号整型(unsigned int)，所以要强制转换成int:i<(int)strlen(arr);但一般不这么写
//		printf("%c ", arr[i]);
//	}
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//sizeof可以求字符串数组也可以求整型数组
//	printf("%d\n", sz);
//	//结果是7,因为有一个\0
//
//	return 0;
//}





//一维数组在内存中的存储

//#include <stdio.h>
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6 };
//
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d ] = %p\n", i, &arr[i]);
//	}
//
//	return 0;
//}

//以下是输出的结果,得出的结论：
//数组是连续存放的,根据类型分配相同大小的空间
//下标为0就是低地址，往上就是高地址

//& arr[0] = 00000051003CFBD8
//& arr[1] = 00000051003CFBDC
//& arr[2] = 00000051003CFBE0
//& arr[3] = 00000051003CFBE4
//& arr[4] = 00000051003CFBE8
//& arr[5] = 00000051003CFBEC





//二维数组的创建

//#include <stdio.h>
//
//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5},{6,7,5}};
//
//	return 0;
//}
 
////二维数组未完全初始化，默认值也是0
//二维数组行的下标可以省略，不能省略列






//遍历二维数组
//二维数组依然是通过下标来访问

//#include <stdio.h>
//
//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5,6} };
//
//	int i = 0;
//
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}






//二维数组在内存中的存储

//#include <stdio.h>
//
//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5} };
//
//	int i = 0;
//
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
//		}
//	}
//
//	return 0;
//
//}

//三行的二维数组是由三行一维数组组成的
//多维数组是一维数组的数组

//以上代码的输出结果

//& arr[0][0] = 0000002DDFD2F818
//& arr[0][1] = 0000002DDFD2F81C
//& arr[0][2] = 0000002DDFD2F820
//& arr[0][3] = 0000002DDFD2F824
//& arr[1][0] = 0000002DDFD2F828
//& arr[1][1] = 0000002DDFD2F82C
//& arr[1][2] = 0000002DDFD2F830
//& arr[1][3] = 0000002DDFD2F834
//& arr[2][0] = 0000002DDFD2F838
//& arr[2][1] = 0000002DDFD2F83C
//& arr[2][2] = 0000002DDFD2F840
//& arr[2][3] = 0000002DDFD2F844

//结论：二维数组和一维数组在内存存储中一样，也是连续存储的






 







//冒泡排序

//#include <stdio.h>
//
//void bubble_sort(int arr[], int sz) //int arr[]就是指针变量，写成int* arr一样可以
//                                    //int* 是对某个整形取地址，int arr[]是系统默认取数组首元素地址
//{
//	int i = 0;
//
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		int flag = 1;  //提升效率
//
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int arr[10] = { 9,8,6,7,3,4,5,0,2,1 };
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	bubble_sort(arr,sz);//形参是实参的一份临时拷贝，传数组的时候电脑不会这么傻把全部传过去，因为如果一个数组有一万个元素
//                      //相当于把存储空间涨了一倍，所以为了避免空间浪费，只是传过去数组首元素的第一个地址
//                      //因为数组是连续存储的，数组第一个元素+1就是第二个元素
//
//	int  i = 0;
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

//10个元素就是9趟，9个元素就是8趟

//第一趟排序
//9对对比

//第二趟排序，不用排最后一位，因为已经和所有数对比过，是最大了，所以跳出循环的条件是sz - 1 - i，i此时是0
//10 - 1 - 0 = 9   ， i每一趟加1，每一趟减去已经排序好了的数

//...以此类推






//数组名

//#include <stdio.h>
//
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//
//	printf("%p\n", arr);
//	printf("%p\n\n", arr + 1);
// 
//	printf("%p\n", &arr[0]); //数组名就是首元素的地址
//	printf("%p\n\n", &arr[0] + 1);
//
//	printf("%d\n\n", *arr); //数组名解引用操作就是数组的第一个元素
// 
//	printf("%p\n",&arr);//这里&arr取了所有元素的地址，是连续的，后面给省略了
//	printf("%d\n", sizeof(&arr + 5)); 
//	printf("%p\n\n", &arr + 1);
//	
//
//	printf("%d\n", sizeof(*arr));
//	printf("%d\n\n", sizeof(arr));
// 
//	return 0;
//}

//数组名就是首元素的地址,但是有两种例外：
// 1.sizeof（数组名）中的数组名是整个数组的元素的内存空间，单位是字节
// 2.&arr,取地址时取出来的是整个数组的地址
//除了以上两种情况，其余所有情况(arr)数组名都是第一个元素的地址

//数组名解引用操作就是数组的第一个元素









//三子棋

//#include <stdio.h>
//#include "add.h"
//#include <stdlib.h>
//#include <time.h>
//
//void menu()
//{
//	printf("******************************\n");
//	printf("******* 1.play  2.exit *******\n");
//	printf("******************************\n");
//}
////游戏的整个算法实现
//void game()
//{	//数组-存放走出的棋盘信息
//	char board[ROW][COL] = { 0 };
//
//	int ret = 0;
//
//	//初始化棋盘,初始化后数组里放的都是空格
//	InitBoard(board, ROW, COL);
//
//	//打印棋盘
//	DisplayBoard(board,ROW,COL);
//
//	while (1)
//	{
//		//玩家走棋
//		PlayerMove(board, ROW, COL);
//		DisplayBoard(board,ROW,COL);
//		system("cls");
//
//		//判断玩家是否赢	         返回四个结果：1.玩家赢 2.电脑赢 3.都没赢继续下 4.平局
//		ret = IsWin(board,ROW,COL);
//
//
//		//电脑走棋
//		ComputerMove(board, ROW, COL);
//		DisplayBoard(board, ROW, COL);
//
//		//判断电脑是否赢
//		ret = IsWin(board,ROW,COL);
//
//		if (ret != 'C')
//		{
//			break;
//		}
//	}
//	if (ret == '*')
//	{
//		printf("你赢了!\n\n");
//	}
//	else if (ret == '#')
//	{
//		printf("电脑赢了\n\n");
//	}
//	else if (ret == 'Q')
//	{
//		printf("平局\n");
//	}
//}
//
//void test()
//{
//	srand((unsigned int)time(NULL));
//
//	int input = 0;
//
//	do {
//		menu();
//		printf("请输入:>\n");
//
//		scanf("%d", &input);
//
//		switch (input)
//		{
//			case 1:
//				game();
//				break;
//			case 0:
//				printf("退出游戏\n");
//				break;
//			default:
//				printf("选择错误，重新选择\n");
//				break;
//		}
//	} while (input);
//}
//
//int main()
//{
//	test();
//
//	return 0;
//}










//扫雷

//#include <stdio.h>
//#include "add.h"
//#include <stdlib.h>
//#include <time.h>
//
//
//void menu()
//{
//	printf("**********************************\n");
//	printf("************  1.play  ************\n");
//	printf("************  2.exit  ************\n");
//	printf("**********************************\n\n");
//}
//
//void game()
//{
//	//雷的信息存储
//	//1.布置好的雷的信息
//	char mine[ROWS][COLS] = { 0 };  //11*11  
//	//2.排查出的雷的信息
//	char show[ROWS][COLS] = { 0 };
//	//为什么排查出的雷的信息也要设置成11*11，因为不设置相同的化就会坐标不同步
//
//	//初始化棋盘
//	InitBoard(mine, ROWS, COLS, '0');
//	InitBoard(show, ROWS, COLS, '*');
//
//	//共两个数组，所以初始化两个数组
//
//	//打印棋盘
//  //DisplayBoard(mine, ROW, COL);
//	DisplayBoard(show, ROW, COL);
//
//	//布置雷
//	SetMine(mine, ROW, COL);
//	//DisplayBoard(mine, ROW, COL);
//
//	//扫雷
//	FindMine(mine, show, ROW, COL);
//}
//
//void test()
//{
//	int input = 0;
//
//	srand((unsigned int)time(NULL));
//
//	do {
//
//		menu();
//
//		printf("请选择:>(1/0)\n");
//		
//		scanf("%d", &input);
//
//		switch (input)
//		{
//			case 1:
//				game();
//				break;
//			case 0:
//				printf("退出游戏");
//				break;
//			default:
//				printf("选择错误，请重新输入");
//				break;
//		}
//	} while (input);
//}
//
//int main()
//{
//	test();
//
//	return 0;
//}














//操作符详解


//	分类：



//算术操作符 + = * / 加减乘除

//#include <stdio.h>
//
//int main()
//{
//	int a = 5 / 2;	//除得到商数
//	int b = 5 % 2;	//模得到余数,对于取模，左操作数和右操作数都必须是 整型 ,不然会报错
//
//	double c = 5 / 2.0;  //要想得到正确的浮点数结果，除数和被除数需要有一边是浮点数,用整型会丢失精度
//
//	printf("5/2 = %d\n", a);
//	printf("5%%2 = %d\n\n", b);
//
//	printf("5/2.0 = %lf\n", c);
//}








//移位操作符：通常是算术移位，而不是逻辑移位

//算术右移 >>：右移补码右边丢弃，左边补原符号位（正数补0，负数补1）
//逻辑右移：右移补码右边丢弃，左边补0

//移位是对补码进行移位

//移位操作符和位操作符只能应用于整数，不能用浮点数
//移位操作符,位操作符,按位取反,运算,隐式类型转换，都是用补码进行计算，只不过正数的补码原码反码相同

//#include <stdio.h>
//
//int main()
//{
//	int a = 16;
//	int b = a >> 1;
//	//算数右移一位相当于原数除以2，算数左移移位相当于原数乘以2
//
//	printf("a>>1 = %d\n\n", b);
//	//移位操作符是算术移位，a得补码向右移动一位，右边丢弃一位，最左边补上一个原来的符号位;
//	//                     如果是向左移动一位，左边丢弃一位，最右边补0
//
//
//
//	//整数的二进制表示有三种：原码，反码，补码
//	//存储到内存的是补码
//	//正数的原码，反码，补码相同
//	//负数在内存中存得是补码，显示是原码
//
//	//如何证明负数在内存中存的是补码？
//	//按f10，点击调试，找到内存，点开，搜索框取地址c:&c,会看到8个f,f是16进制，转换成二进制是4个1，8个f就是32
//
//	int c = -16;
//
//	int d = c >> 1;
//	//原码：10000000 000000000 00000000 00010000
//	//反码：11111111  11111111 11111111 11101111
//	//补码：11111111  11111111 11111111 11110000
//
//	//补码右移一位：   11111111 11111111 11111111 1111000
//	//左边补原符号位：11111111 11111111 11111111 11111000
//
//	//补码减一得反码:11111111 11111111 11111111 11110111
//	//反码取反得原码：10000000 00000000 00000000 00001000
//
//	//转成二进制得-8
//
//	printf("c>>1 = %d\n", d);
//
//	return 0;
//}
//警告：对于移位操作符，不要移动负数位，这个是标准未定义的
//例如： int num = 10;
//       num >> -1;








//		位操作符
//      移位操作符和位操作符只能应用于整数，不能用浮点数

//      移位操作符,位操作符,按位取反,运算,隐式类型转换，都是用补码进行计算，只不过正数的补码原码反码相同
		
//#include <stdio.h>
//
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a & b; //按位或 对应二进制相同为一
//	//00000011
//	//00000101
//	//00000001
//
//	int d = a | b; //按位与 对应二进制有一为一
//	//00000011
//	//00000101
//	//00000111
//
//	int e = a ^ b; //按位异或 对应二进制相同为零，不相同为一
//	//00000011
//	//00000101
//	//00000110
//
//	//位操作都是二进制补码进行 与运算/或运算/异或运算
//
//	printf("a&b = %d\n\n", c);
//	printf("a|b = %d\n\n", d);
//	printf("a^b = %d\n\n", e);
//
//	return 0;
//}






//题目：交换两个变量,要求不创建临时变量


//#include <stdio.h>
//
//int main()
//{
//	int a = 3;
//	int b = 5;
//
//	a = a + b; //8
//	b = a - b; //3
//	a = a - b; //5
//
//	printf("a = %d\tb = %d", a, b);
//
//	return 0;
//}
//加减法
//有缺陷：若两个数字都非常大，接近int类型的极限，加起来就会溢出，得到的值就不是真实相加的值,有精度缺失



//#include <stdio.h>
//int main()
//{
//	int a = 3;
//	int b = 5;
//
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//
//	//int o = 3;
//	//int c = a ^ o;
//
//	//printf("c = %d\n", c);
//
//	printf("a = %d\tb = %d\n", a, b);
//
//	return 0;
//}

// a与b异或得到c,c再异或b会得到a,c异或b(原先的a)会得到a(原先的b)
// 有点像a和b相加得到c, c-a=b, c-b = a

//按位异或法
//任何两个数如果不用第三个变量来交换变量，可以通过异或三次来交换；
//异或算法不会造成数溢出,因为两个数只会计算是否相同相异，不会进位

//缺点：执行效率低,不如三个变量交换快，可读性也低








//题目：编写代码实现：求一个整数存储在内存中的二进制中1的个数

//方法1.
//#include <stdio.h>
//
//int main()
//{
//	int num = 5;
//	int count = 0;
//	
//	while (num)
//	{
//		if (num % 2 == 1)
//		{
//			count++;	
//		}
//		num = num / 2;	//注意这一点！！ 不是num/2,是num=num/2,num/2的值要存储在一个变量里面
//	}
//	printf("二进制中1的个数 = %d\n", count);
//
//	return 0;
//}
// 
//缺陷，对负数不管用




//方法2

//#include <stdio.h>
//
//int main()
//{
//	int num = 0;
//
//	printf("请输入数字");
//	scanf("%d", &num);
//
//	int i = 0;
//	int count = 0;
//
//	//每一个整型都是32位，如果一个整型数与1做&与运算，整型数最右边的值和1与运算结果为1，说明这个整型数最右边的二进制数是1
//	//00000000 00000000 00000000 00000101
//	//00000000 00000000 00000000 00000001
//	//让每一位都与1做与运算,等于1的位就计数count++,就可以得到一个整型数二进制中1的个数
//
//	for (i = 0; i < 32; i++)
//	{
//		if (num & (1 << i))
//		{
//			count++;
//		}
//	}
//
//	printf("二进制中1的个数是 = %d\n", count);
//
//	return 0;
//}








//赋值操作符

//#include <stdio.h>
//
//int main()
//{
//
//	//创建变量叫初始化
//	int i = 10;
//
//	//给创建的变量一个值叫赋值
//	i = 20;
//
//	//连续赋值
//	int a = 10;
//	int x = 5;
//	int y = 20;
//
//	a = x = y + 1;
//	printf("%d\n", a);
//
//	return 0;
//}



//复合赋值符
//+=
//-=
//*=
///=
//%=

//>>=
//<<=

//&=
//|=
//^=





//单目操作符



// ！ 逻辑反操作

//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	printf("%d\n", !a);
//	//单目操作符: !,作用是 逻辑反操作，如上代码，10为非0为真，反操作就是假(0)
//
//
//	if (a) //假如a为真
//	{
//		printf("hehe\n");
//	}
//
//	if (!a) //假如a为假
//	{
//		printf("haha\n");
//	}	
//	
//	return 0;
//}


//负值  -

//#include <stdio.h>
//
//int main()
//{
//	int a = 10;
//
//	a = -a;
//
//	return 0;
//}



//&  取地址操作符

//#include <stdio.h>
//
//int main()
//{
//	int a = 10;
//
//	int* pa = &a;   //取的地址只能由指针变量存放
//
//	int ret = *pa;  //*pa的*是解引用操作符，作用是通过pa存放的地址，找到所指向的对象,*pa就是a
//
//	printf("ret=%d\n", ret);
//
//	return 0;
//}




//sizeof  计算变量所占空间的大小

//#include <stdio.h>
//
//int main()
//{
//	int a = 10;
//	char c = 'r';
//	char* p = &c;
//	int arr[10] = { 0 };
//
//	//sizeof 计算 变量 所占空间的大小,单位是字节
//	printf("%d\n", sizeof(a));
//	printf("%d\n\n", sizeof(int));
//
//	printf("%d\n", sizeof(c));
//	printf("%d\n\n", sizeof(char));
//
//	printf("%d\n", sizeof(p));
//	printf("%d\n\n", sizeof(char*));
//
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(int [10]));
//	printf("%d\n\n", sizeof(int [5]));
//
//	//数组的类型就是 数组前面的类型+[]
//
//	short s = 0;
//	int b = 10;
//
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(s = a + 5));	//把长整型放进短整型，结果由短整型决定
//	printf("%d\n", s);					//s还是0,因为sizeof里的运算不是真实发生并且真实赋值的
//	
//
//	return 0;
//}





//	~按位取反

//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	//补码:00000000 00000000 00000000 00000000
//	//取反:11111111 11111111 11111111 11111111	//补码取反包括符号位也要取反
//	//因为取反后的依然是补码，所以打印出来还是要转换成原码
//	//反码:11111111 11111111 11111111 11111110   //因为取反后符号位是负数，取反后再转反码符号位不变
//	//原码:10000000 00000000 00000000 00000001
//
//	printf("%d\n", ~a);
//
//	return 0;
//}
//按位取反也是补码进行取反






//题目，把一个数二进制位任意一位改成1

//#include <stdio.h>
//
//int main()
//{
//	int a = 11;
//
//	a = a | (1 << 2);	//想要修改二进制的哪位，就修改2
//	//00000000 00000000 00000000 00001011	a
//	//00000000 00000000 00000000 00000100	1<<2
//
//
//	//以上代码是15，如果想还原成11该怎么做呢？
//	//00000000 00000000 00000000 00001111	// 15
//	//11111111 11111111 11111111 11111011	//上面代码与这行代码进行与运算,就能还原，但是怎么得到这行代码呢？
//	//00000000 00000000 00000000 00001011	// 11
//
//	//00000000 00000000 00000000 00000100	//只需要把这行代码按位取反，再和15的二进制或运算，就能还原成11了
//
//	a = a & (~(1 << 2));
//
//	//a = a ^ (1 << 2);		这种也可以还原
//
//
//	printf("%d\n", a);
//
//	return 0;
//}





//++ --   前置++ --，后置++ --

//#include <stdio.h>
//
//int main()
//{
//	int a = 10;
//	printf("++a = %d\n", ++a);
//	printf("a++ = %d\n", a++);
//	//谁离等号进，谁先进行
//
//	int b = 10;
//	int c = ++b;
//	printf("%d\n", c);
//	
//	return 0;
//}





// (类型)	强制类型转换

//#include <stdio.h>
//
//int main()
//{
//	int a = (int)3.14;
//
//	printf("%d\n", a);
//
//	return 0;
//}








//题目：说出以下四个printf输出的都是什么

//#include <stdio.h>
//
//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));	//(3)
//}
//
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));		//(4)
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//
//	printf("%d\n", sizeof(arr));	//(1)
//	printf("%d\n", sizeof(ch));		//(2)
//
//	test1(arr);
//	test2(ch);
//
//	return 0;
//}


//为什么（3）和（4）输出都是8 ？因为函数传过去的是数组首元素的地址，既然是地址，接收的类型就是指针变量
//指针变量在32位系统上面是4字节，在64位系统上面是8字节




//	关系操作符
//  >
//  >=
//  <
//  <=
//  !=
//  ==






//	逻辑操作符

// &&逻辑与		需要和按位与区分，逻辑与关注的是这个数本身是真还是假
// ||逻辑或

// 1 && 3 = 1
// 1 || 3 = 1




//题目1：程序输出的结果是什么？

//#include <stdio.h>
//
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//
//	i = a++ && ++b && d++;
//
//	printf("i = %d\n",i);
//	printf(" a=%d\n b=%d\n c=%d\n d=%d\n",a,b,c,d);
//	//逻辑与只要左边算得为0，右边都不再进行运算，总体结果为假（0）
//
//	return 0;
//}




//题目2

//#include <stdio.h>
//
//int main()
//{
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//
//	i = a++ && ++b && d++;
//
//	printf(" a=%d\n b=%d\n c=%d\n d=%d\n", a, b, c, d);
//
//	return 0;
//}


//题目3

//#include <stdio.h>
//
//int main()
//{
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//
//	i = a++ || ++b || d++;
//	// 逻辑或，只要前面为真，后面都不进行运算，不管后面真假，总体结果都为真
//
//	printf(" a=%d\n b=%d\n c=%d\n d=%d\n", a, b, c, d);
//
//	return 0;
//}




//题目4

//#include <stdio.h>
//
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//
//	i = a++ || ++b || d++;
//
//	printf("%d\n", i);  
//	printf(" a=%d\n b=%d\n c=%d\n d=%d\n", a, b, c, d);  
//}







//	条件操作符(三目操作符)

//exp1 ? exp2 : exp3

//如果表达式1为真，表达式2要算，表达式2的结果是整个表达式的结果
//如果表达式1为假，表达式3要算，表达式3的结果是整个表达式的结果


//题目，把以下代码改写成三目操作符（条件操作符）的形式

//#include <stdio.h>
//
//int main()
//{
//	if (a > 5)
//	{
//		b = 3;
//	}
//	else
//	{
//		b = -1;
//	}
//}



//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//
//	b = (a > 5 ? 3 : -1);
//
//	printf("%d\n", b);
//
//	return 0;
//}




//用条件操作符（三目操作符）求a与b的较大值

//#include <stdio.h>
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	printf("%d\n", a > b ? a : b);
//
//	return 0;
//}





//	逗号操作符

//逗号表达式，就是用逗号隔开的多个表达式。逗号表达式，从左向右依次执行。
// 整个表达式的结果是最后一个表达式的结果

//exp1,exp2,exp3,...expN

//#include <stdio.h>
//
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);
//	//表达式里面的运算都是真实运算并且真实赋值的
//
//	printf("%d\n", a);
//	printf("%d\n", c);
//
//	return 0;
//}







//#include <stdio.h>
//
//int main()
//{
//	int a = 2;
//	int b = 2;
//	int c = 3;
//	int d = 4;
//
//	if (a = b + 1, c = a / 2, d > 0)
//	{
//		printf("哈哈哈\n");
//	}
//
//	printf("a=%d\n", a);
//	printf("b=%d\n", b);
//	printf("c=%d\n", c);
//
//	return 0;
//}



//用逗号表达式改写
//#include <stdio.h>
//
//int main()
//{
//	a = get_val();
//	count_val(a);
//
//	while (a > 0)
//	{
//		a = get_val();
//		count_val(a);
//	}
//}



//用逗号表达式改写上面代码
//#include <stdio.h>
//
//int main()
//{
//	while (a = get_val(), count_val(a), a > 0)
//	{
//
//	}
//}





//	下标引用，函数调用和结构成员


//下标引用操作符
//#include <stdio.h>
//
//int main()
//{
//	int arr[4] = { 0 };
//	//操作数:一个数组名+一个索引值
//	//例如 1+2，+号就有两个操作数，分别是1和2
//	//[]也有两个操作数，分别是数组名(arr) 和 []里的下标(4) 
//  //所以下标引用操作符也是双目操作符
//
//}



//函数调用

//#include <stdio.h>
//
////         这对圆括号不是函数调用操作符，是定义函数的语法规则
//int get_max(int a, int b)
//{
//	if (a > b)
//	{
//		return a;
//	}
//	else if (b > a)
//	{
//		return b;
//	}
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//调用函数的时候的()就是函数调用操作符
//	int max = get_max(a, b);
//	//这里的函数调用操作符有三个操作数(三目操作符)
//	//分别是函数名（get_max）,a,b
//
//	return 0;
//}






//访问结构成员

//#include <stdio.h>
//
////struct student也是一个类型， 类型的作用是创建变量
////创建一个结构体类型-struct student
//struct student
//{
//	//成员变量
//	char name[20];
//	int age;
//	char id[20];
//};
//
//
//int main()
//{
//	//使用struct student这个类型创建了一个对象- s1,并初始化
//	struct student s1 = { "黄冠",21,"202205010311" };
//
//	//访问方式1.
//	printf("s1.name = %s\n", s1.name);
//	printf("s1.age = %d\n", s1.age);
//	printf("s1.id = %s\n\n", s1.id);
//	// 结构体变量.成员名
//
//
//
//	//访问方式2.
//	struct student* ps = &s1;
//
//	printf("&ps = %p\n", &ps);
//	printf("s1.name = %s\n", (*ps).name);
//	//	*ps解引用操作，指向的就是s1,
//	printf("s1.age = %d\n", (*ps).age);
//	printf("s1.id = %d\n\n", (*ps).id);
//
//	//既然s1是变量，那就一定会占据一定的内存空间，而且一定有地址
//	//地址只能用指针变量存储，结构体的指针变量的类型就是struct+结构体名
//	//但第二种方式略显啰嗦，C语言还提供了第三种方式
//
//
//
//	//访问方式3.
//	printf("s1.name = %s\n", ps->name);
//	printf("s1.age = %d\n", ps->age);
//	printf("s1.id = %d\n", ps->id);
//	//->:结构体指针指向操作符
//	//结构体指针->成员名
//	//->就是指向对象的内部
//
//	return 0;
//}






//表达式求值
//表达式求值的顺序一部分是由操作符的优先级和结合性决定的
//同样，有些表达式的操作数在求值的过程中可能需要转换为其他类型

//隐式类型转换
//c的整型算数运算总是至少以缺省整型类型的精度来决定的。
//为了获得这个精度，表达式中的字符和短整型操作数在使用之前被转换为普通整型，这种转换称为整型提升

//整型提升的意义：
//表达式的整型运算要在CPU的相应运算器内执行，CPU内整型运算器(ALU)的操作数的字节长度
//一般就是int的字节长度，同时也是CPU的通用寄存器的长度。只要进行运算的类型小于int类型,都会进行整型提升

//因此，即便两个char类型的相加，在CPU执行时实际上也要先转换为CPU内部整型操作数的标准长度。

//通用CPU是难以直接实现两个8比特字节直接相加运算(虽然机器指令中可能有这种字节相加指令)。
//所以，表达式中各种长度可能小于int长度的整型值，都必须先转换为int或unsigned int,然后才能送入CPU去执行计算




//隐式类型转换
//#include <stdio.h>
//
//int main()
//{
//	char a = 3;
//	//00000000 00000000 00000000 00000011
//	//把一个整型数字'3'放进字符类型char里面，会造成二进制截断，取最低位，结果为:
//	//00000011
//	
//	char b = 127;
//	//00000000 00000000 00000000 01111111
//	//01111111
//
//	//如何进行整型提升
//	//整型提升是按照变量的数据类型的符号位来提升的，符号位为0，左边全部补0，左边符号位为1，全部补1,补满32位
//	//提升完之后变成整型，整型进行加减乘除
//	char c = a + b;
//	//b和c要加的话，首先a和b的值被提升为普通整型，然后再执行加法运算。
//	//00000000 00000000 00000000 00000011
//	//00000000 00000000 00000000 01111111
//	//00000000 00000000 00000000 10000010
//	//加法运算完成之后，因为c是char类型，结果将被截断，然后再存储于a中
//	
//	//c = 10000010
//	
//	printf("%d\n", c);
//	//但由于要打印的是%d,c是char类型的,所以还要进行一次整型提升
//	//10000010 整型提升
//	//11111111 11111111 11111111 10000010（补码）
//	//11111111 11111111 11111111 10000001（反码）
//	//10000000 00000000 00000000 01111110（补码）
//
//	return 0;
//}





//#include <stdio.h>
//
//int main()
//{
//	char a = -1;
//	//10000000 00000000 00000000 00000001 (变量a的二进制（原码）)
//	//11111111 11111111 11111111 11111110
//	//11111111 11111111 11111111 11111111(补码)
//	//11111111(补码最低位截断) 存到 char a里面
//	//%d 整型提升 11111111 11111111 11111111 11111111(补码)
//	//			 11111111 11111111 11111111 11111110(反码)
//	//           10000000 00000000 00000000 00000001(原码)
//
//	printf("%d\n", a);
//
//	return 0;
//}





// 0x后面跟的是16进制的整型

// 0xb6放进char: 10110110 
//				 11111111 11111111 11111111 10110110
//				 11111111 11111111 11111111 10110101
//				 10000000 00000000 00000000 01001010  2+8+64 = -74

// 0xb6放进int:	10110110 2+4+16+32+128 = 182

//#include <stdio.h>
//
//int main()
//{
//	int a = 0xb6;
//	char b = 0xb6;
//	
//	printf("int a = %d\n", a);
//	printf("char b = %d\n", b);
//
//	return 0;
//}



//如何证明隐式提升真实存在
//题目：结果会打印什么

//#include <stdio.h>
//
//int main()
//{
//	char a = 0xb6;
//	short b = 0xb600;
//	int c = 0xb6000000;
//
//	if (a == 0xb6)
//	{
//		printf("a");
//	}
//
//	if (b == 0xb600)
//	{
//		printf("b");
//	}
//
//	if (c == 0xb6000000)
//	{
//		printf("c");
//	}
//
//	return 0;
//}

//为什么c可以打印，因为c是整型，不用整型提升
//为什么a,b不会打印，因为a,b都不是整型，和整型a进行比较时(比较也算是一种运算)会整型提升，提升后与0xb6就不同了



//题目

//#include <stdio.h>
//
//int main()
//{
//	char c = 1;
//
//	//%u 无符号整型输出格式 unsigned int
//	printf("%u\n", sizeof(c));
//
//	printf("%u\n", sizeof(+c));
//	// +c(正c),进行了整型提升
//
//	printf("%u\n", sizeof(!c));
//	//!c就是0，0放进去就会截断，还是char
//
//	return 0;
//}





//算术转换（算术转换也是一种隐式类型转换）

//如果某个操作符的各个操作数属于不同的类型，那么除非其中一个操作数转换为另一个操作数的类型
//否则操作就无法进行。下面的层次体系称为 寻常算数转换

//int 与比int高的类型进行运算的时候，称为算术转换

// long doeble
// double
// float
// unsigned long int
// long int
// unsigned int
// int


//如果某个操作数的类型在上面这个列表排名较低，
//那么首先要转换为另一个操作数的类型后执行运算

//警告：但是算术转换要合理，要不然会有一些潜在问题

//float f = 3.14
//int num = f;  //隐式转换，会有精度丢失





//操作符的属性
//复杂表达式的求值有三个影响的因素
//1.操作符的优先级
//2.操作符的结合性
//3.是否控制求值顺序

//两个相邻的操作符先执行哪个？取决于他们的优先级。
//如果两者的优先级相同，取决于他们的结合性

//优先级
//结合性

//优先级
//#include <stdio.h>
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = a + b * 3;
//	//操作符*先算，这就是操作符的优先性
//
//	return 0；
//}


//结合性
//#include <stdio.h>
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = a + b + 30;
//	//操作符相同，但是+号的操作符是从左到右开始算的，a+b先算，算完再+30，这就是操作符的结合性
//	
//	//结合性分为L-R(从左到右结合),R-L(从右到左结合),和N/A(无结合性)比如函数调用操作符:()
//	//逻辑与&&	逻辑或||		条件操作符?:		逗号操作符, 都具有控制求值顺序的功能
//	//控制求值顺序的意思是一部分表达式运算，一部分表达式不运算
//	
//
//	return 0；
//}





//非法表达式1.
//#include <stdio.h>
//
//int main()
//{
//	int ret = a * b + c * d + e * f;
//	//如果a,b,c,d,e,f分别都是表达式，那这样写可能就会得到错误的结果
//	return 0;
//}




//非法表达式2..
//#include <stdio.h>
//
//int main()
//{
//	int c = 1;
//	c = c + --c;
//	//这段表达式是有歧义的,我们只知道--的优先级高于+,不知道它准备之前是给--c赋值先，还是c赋值先，C赋值先C等于1，1+0=1
//	//--c赋值先，c就等于0，在赋值给前面那个C也是0，0+0=0,一个表达式两种结果。
//	
//	printf("%d\n", c);
//
//	return 0;
//}





//非法表达式3.
//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//
//	i = i-- - i++ * (i = -3) * i++ + ++i;
//	printf("i=%d\n", i);
//
//	return 0;
//}

//非法表达式，不同编译器算出的结果都不一样，所以避免写这样的代码
//要写出通过操作符的属性确定唯一的计算路径的表达式，否则代码就是错误的




//非法表达式4.
//#include <stdio.h>
//
//int fun()
//{
//	static int count = 1;
//	return ++count;
//}
//
//int main()
//{
//	int answer = 0;
//
//	answer = fun() - fun() * fun();
//	//我们没有办法知道是什么顺序，是第一个fun()函数先进行，还是后面的fun()先进行
//	printf("%d\n", answer);
//
//	return 0;
//}




//非法表达式5.
//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	int ret = (++i) + (++i) + (++i);
//	printf("%d\n", ret);
//	printf("%d\n", i);
//
//	return 0;
//}










//初识指针

//在计算机中，指针（pointer）是编程语言中的对象，
//利用地址，它的值直接指向(pointers to)存在电脑存储器中另一一个地方的值。
//由于通过地址能找到所需的变量单元，可以说:地址指向该变量单元。因此，将地址形象化为“指针”。
//意思是通过它能找到以为它为地址的内存单元


//指针是个变量，存放内存单元的地址(编号)
//一个内存单元大小是一个字节

//#include <stdio.h>
//
//int main()
//{
//	int a = 10;  	//在内存中开辟一块空间
//	int* p = &a;	//这里我们对变量啊，取出它的地址，可以使用&操作符
//					//将a的地址存放在p变量中，p就是一个指针变量
//	return 0;
//}

//存放在指针中的值都被当成地址处理



//在32位的机器上，地址是32个0或者1组成的二进制序列，那地址就得用4个字节的空间来存储，
//所以一个指针变量的大小应该就是4个字节

//那如果在64位机器上，如果有64根地址线，那一个指针变量大小是8个字节，
//才能存放一个地址

//指针是用来存放地址的，地址是唯一标示一块地址空间的
//指针的大小在32位平台是4个字节，在64位平台上是8个字节





//指针类型


//指针类型的两个意义1.
//#include <stdio.h>
//
//int main()
//{
//	int a = 0x11223344;
//	//int* pa = &a;
//	//*pa = 123;
//
//	char* pc = &a;
//	*pc = 0;
//	//当打开调试->窗口->内存的时候,一步一步调试，到*pc = 0的时候，只有第一个字节变成0
//	//如果是*pc是int*指针类型，四个字节都会变成0
//
//	//printf("%p\n", pa);
//	//printf("%p\n", pc);
//
//	return 0;
//}

//总结：指针类型决定了指针进行解引用操作的时候，能够访问空间的大小
//int*p    *p能够访问4个字节
//char*p	 *p能够访问1个字节
//double*p *p能够访问8个字节



//指针类型的两个意义2.
//指针的步长
//指针的加减

//#include <stdio.h>
//
//int main()
//{
//	int a = 0x11223344;
//
//	int* pa = &a;
//
//	printf("%p\n", pa);
//	printf("%p\n\n", pa+1);
//
//	char* pc = &a;
//
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);
//
//	return 0;
//}

//总结：指针的类型决定了指针向前或者向后走一步有多大距离



//上面的应用
//#include <stdio.h>
//
//int main()
//{
//	int arr[10] = { 0 };
//
//	int i = 0;
//
//	int* pa = &arr;
//	//如果这里改成(char* pa)的话,到最后只会改动10个字节，只会把前10个字节给赋值，
//	//而数组arr有40个字节
//
//	for (i = 0; i < 10; i++)
//	{
//		*(pa+i) = 1;
//	}
//
//	printf("%d\n", arr[9]);
//
//	return 0;
//}

//总结:指针的类型决定了对指针解引用操作时有多大的权限(能操作几个字节)
//比如:char*的指针解引用就只能访问一个字节,而int*的指针的解引用就能访问四个字节




//野指针
//野指针就是指针指向的位置是不可知的(随机的，不正确的，没有明确限制的)


//野指针成因1：指针未初始化
//#include <stdio.h>
//
//int main()
//{
//	int a; //局部变量不初始化，默认是随机值
//	int* p; //局部的指针变量，就被初始化为随机值
//	*p = 20;
//
//	return 0;
//}


//野指针成因2：指针越界访问

//#include <stdio.h>

//int main()
//{
//	int arr[10] = 0;
//
//	int* p = arr;
//
//	int i = 0;
//
//	for (i = 0; i < 12; i++)
//	{
//		p++;
//		//当指针指向的范围超过数组arr的范围时，p就是野指针
//	}
//
//	return 0;
//}



//野指针成因3：指针指向的空间释放

//#include <stdio.h>
//
//int* test()
//{
//	int a = 10;
//	return &a;
//}
//
//int main()
//{
//	int* p = test();
//
//	*p = 20;
//
//	return 0;
//}


//当a局部变量在函数创建，中开辟了一块内存空间时
//出函数后局部变量销毁了，地址还是会传出去，但是成野指针了


//如何规避野指针
//1.指针初始化
//2.小心指针越界
//3.指针指向空间释放及时置NULL(空)
//4.指针使用之前检查有效性





//#include <stdio.h>
//
//int main()
//{
//	int* pa = NULL;
//	//如果不知道给指针赋什么值，就给NULL，变成空指针
//	//NULL-用来初始化指针的，给指针赋值
//}



//#include <stdio.h>
//
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//
//	pa = NULL;
//	//指针指向空间释放及时置NULL(空)
//
//	*pa = 35;
//	//置于空指针后不能访问,会报错
//
//	return 0;
//
//}



//指针运算
//指针+-整数
//指针-指针
//指针的关系运算



//指针+-整数

//#include <stdio.h>
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	int i = 0;
//
//	int* p = &arr[9];
//	//具体到数组某一个前面要加&，不然就是数组第一个元素，但是这里又是arr[9]，冲突了
//
//
//	//for (i = 0; i < 5; i++)
//	//{
//	//	printf("%d\t", *p);
//	//	p+=2;//指针加
//	//}
//
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d\n", *p);
//		p -= 2; //指针减
//	}
//
//	return 0;
//}



//#include <stdio.h>
//
//int main()
//{
//	#define N_VALUES 5
//	float values[N_VALUES];
//
//	float* vp;
//
//	for (vp = &values[0]; vp < &values[N_VALUES];)  //指针是可以比较大小的
//	{
//		*vp++;
//		//这里是vp先++，再解引用，++的操作符比*高
//	}
//
//	return 0;
//}




//指针-指针

//#include <stdio.h>
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	printf("%d\n", &arr[9] - &arr[0]);
//	printf("%d\n", &arr[0] - &arr[9]);
//
//	return 0;
//}
//指针减去指针得到的是指针与指针之间的差值(大地址-小地址)
//小地址减去大地址的结果的绝对值是指针与指针之间的插值
//当一个指针减去另一个指针，两个指针一定要指向同一块内存空间，比如两个指针相减，需要这两个指针都是同一个数组




//用数组相加减模拟实现strlen的功能

//#include <stdio.h>
//
//int mystrlen(char* arr)
//{
//	char* start = arr;
//	char* end = arr;
//
//	while (*end != '\0')
//	{
//		end++;
//	}
//
//	return end - start;
//}
//
//int main()
//{
//	char arr[] = "bit";
//
//	int len = mystrlen(arr);
//
//	printf("%d\n", len);
//
//	return 0;
//}




//指针的关系运算(指针比较大小)

//#include <stdio.h>
//
//int main()
//{
//	#define N_VALUES 5
//
//	float values[N_VALUES];
//	float* vp;
//	
//	//第一种写法
//	for (vp = &values[N_VALUES]; vp > &values[0];)
//	{
//		*--vp = 0;
//	}
//
//
//	//第二种写法
//	//for (vp = &values[N_VALUES]; vp >= &values[0]; vp--)
//	//{
//	//	*vp = 0;
//	//}
//
//	
//}

//实际在绝大部分的编译器上是可以顺利完成任务的，然而我们还是应该避免这样写，因为标准并不保证它可行

//标准规定：
//允许指向数组元素的指针与指向数组最后一个元素后面的那个内存位置的指针比较
//但是不允许与指向第一个元素之前的那个内存位置进行比较






//指针和数组


//数组名
//#include <stdio.h>
//
//int main()
//{
//	int arr[10] = { 0 };
//
//	printf("%p\n", arr);
//	printf("%p\n\n", arr+1);
//
//	printf("%p\n", &arr[0]);
//	printf("%p\n\n", &arr[0] + 1);
//
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//
//	//除了sizeof和&arr之外，其余所有数组名都是数组的第一个元素的地址
//	return 0;
//}



//#include <stdio.h>
//
//int main()
//{
//	int arr[10] = { 0 };
//
//	int i = 0;
//
//	int* p = arr;
//
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", arr[i]);
//		printf("%d\n\n", *(p + i));
//	}
//}






//二级指针

//#include <stdio.h>
//
//int main()
//{
//	int a = 10;		//a的类型是int
//
//	int * pa = &a;	//pa的类型是int*
//	//这样写也是可以的,中间空开一格，有一颗*代表pa是指针变量，这个指针变量所指向的类型是int类型
//
//	int* * ppa = &pa;  //这就是二级指针  ppa的类型是int**
//	//ppa是指针变量，ppa所指向的类型是指针变量
//
//	**ppa = 20;
//	printf("%d\n", **ppa);
//	
//	//通过ppa找到a
//
//	return 0;
//}




//指针数组
//数组指针


//指针数组
//指针数组用来存放指针

//#include <stdio.h>
//
//int main()
//{
//	int a = 10, b = 15, c = 20;
//
//	int* arr[3] = { &a,&b,&c };
//
//	int i = 0;
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d\n", *(arr[i]));
//	}
//
//	return 0;
//}




//知识点
//return只能返回一个数

//函数可以嵌套调用，不能嵌套定义

//函数的定义不一定要放在函数的前面，可以后面定义，前面声明

//函数必须保证先声明后使用