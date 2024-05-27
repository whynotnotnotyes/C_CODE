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


//思考
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
//#include <string.h>
//
//int main()
//{
//	char ch = getchar();
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
//	unsigned int num = -1;
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
//缺陷，对负数不管用,要想不改变大框架写出正确代码，把int改成unsigned就行




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
//	int* p = &a;	//这里我们对变量a，取出它的地址，可以使用&操作符
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
//指针是个变量,既然是个变量,就一定会有类型

//指针类型的两个意义1.
//#include <stdio.h>
//
//int main()
//{
//	int a = 0x11223344;
//  //一个16进制数就是4个bit，两个16进制数等于8bite，也就是一个字节
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
//int类型+1地址+4
//char类型+1地址+1





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
//	//如果不知道给指针赋什么值，就给NULL，变成空指针,空指针不是野指针
//	//NULL-用来初始化指针的，给指针赋值
//}






//#include <stdio.h>
//
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	*p = 20;
//	//改地址里的值只能解引用操作*才能改
//	//p = 20改不了
//	printf("%d\n", *p);
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





//#include <stdio.h>
//
//int main()
//{
//	int a = 10;
//
//	int* p = &a;
//
//	//int *p = NULL;
//
//	printf("%p\n", p);
//
//	return 0;
//}
//纯空指针的地址是0000000000000000
//已经存储地址的指针置空之后不是0000000000000000





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




//(自己悟的)
//#include <stdio.h>
//
//int main()
//{
//	int a = 10;
//	int* p = &a;
//
//	printf("p = %p\n", p);
//	printf("p+1 = %p\n\n", p+1);
//
//	printf("*(p + 1) = %p\n", *(p + 1));
//	printf("*(p + 1) = %d\n\n", *(p + 1));
//
//	printf("*p = %p\n", *p);
//	printf("(*p) + 1 = %p\n", (*p) + 1);
//	printf("(*p) + 1 = %d\n", (*p) + 1);
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
//	int* pa = arr;
//	int* pb = &arr[3];
//	printf("%d\n", pb - pa);
//
//	return 0;
//}
//指针减去指针得到的是指针与指针之间的差值(大地址-小地址)
//小地址减去大地址的结果的绝对值是指针与指针之间的插值
//当一个指针减去另一个指针，两个指针一定要指向同一块内存空间，比如两个指针相减，需要这两个指针都是同一个数组



//#include <stdio.h>
//
//int main()
//{
//	int arr1[] = {2,3,5,4,8,5,9};
//	int arr2[] = {11,34,9,2,3,4,0};
//	printf("%d\n", &arr1[3] - &arr2[1]);
//
//
//	int a = 10;
//	int b = 20;
//	int* pa = &a;
//	int* pb = &b;
//	printf("%d\n", pa-pb);
//
//	return 0;
//}
//如果两个指针不是指向同一个数组,它们相减就没有意义
//指针的本质还是地址
//指针可以做减法，不适合做加法






//用数组相加减模拟实现strlen的功能

//#include <stdio.h>
//
//int mystrlen(char* arr)
//{
//	char* start = arr;
//	char* end = arr;
//
//	while (*end != '\0')  //这里必须要*end,因为end是地址,*end才是解引用之后的元素
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

//第二种写法实际在绝大部分的编译器上是可以顺利完成任务的，然而我们还是应该避免这样写，因为标准并不保证它可行

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
//		//指针数组初始化
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
//一级指针存储的是变量的地址
//二级指针及以上存储的是指针的地址




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

//形参是在函数调用的时候才实例化，才开辟内存空间


//题目:
//函数调用exec((v1,v2),(v3,v4),v5,v6)中，实参的个数是多少个？


//(,)里是逗号表达式，逗号表达式的结果是最右边那个表达式的结果
//所以答案是4个


//函数设计应该追求高内聚低耦合(意思是设计的函数要独立一些)

//函数设计使用全局变量不宜过多

//函数设计时函数参数不宜过多

//设计函数时，尽量做到谁申请就由谁释放

//函数的实参可以是：变量，常量，表达式

//main的位置可以任意

//函数中形式参数是在栈中保存的

//在一个函数内复合语句中定义的变量不一定在本函数范围内有效(复合语句指函数中的成对括号构成的代码)
//例子:

//#include <stdio.h>
//
//int main()
//{
//	{
//		int a = 10;
//	}
//	printf("%d\n", a);
//	//会报错，因为变量的作用域被限制在代码块内部了
//}


//题目：
//若定义int a[2][3] = { 1,2,3,4,5,6 };则值为4的数组元素是()？
//A. a[0][0]
//B. a[1][0]
//C. a[1][1]
//d. a[2][2]


//答案是B



//题目:下面sizeof的结果是什么
//#include <stdio.h>
//
//int main()
//{
//	int arr[] = { 1,2,(3,4),5,6 };
//
//	printf("%d\n", sizeof(arr));
//
//	return 0;
//}




//题目：实现一个让数组元素逆置的函数

//#include <stdio.h>
//
//void reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz-1;
//	int tmp = 0;
//
//	while (left <= right)
//	{
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//
//	int i = 0;
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	reverse(arr, sz);
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//
//	return 0;
//}



//题目：将数组A中的内容与数组B中的内容交换(两个数组大小一样)

//#include <stdio.h>
//
//void exchange(int arr1[], int arr2[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	int tmp = 0;
//	int tmp1 = 0;
//
//	while (left <= right)
//	{
//		if (left == right)
//		{
//			tmp = arr1[left];
//			arr1[left] = arr2[left];
//			arr2[left] = tmp;
//		}
//		int tmp = arr1[left];
//		arr1[left] = arr2[left];
//		arr2[left] = tmp;
//
//		int tmp1 = arr1[right];
//		arr1[right] = arr2[right];
//		arr2[right] = tmp1;
//
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10};
//
//	int arr2[] = { 11,12,13,14,15,16,17,18,19,20 };
//
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//
//	exchange(arr1, arr2, sz);
//
//	int i = 0;
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", arr1[i]);
//	}
//	
//	printf("\n");
// 
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", arr2[i]);
//	}
//
//	return 0;
//}




//表达式求值先看是否存在整型提升或算术转换，再进行计算

//表达式真正计算的时候先看相邻操作符的优先级决定算谁

//相邻操作符的优先级相同的情况下，看操作符的结合性决定计算顺序


//以下表达式是程序错误
//#include <stdio.h>
//
//int main()
//{
//	int ret = 0;
//	int i = 0;
//
//	ret = (++i) + (++i) + (++i);
//
//	printf("%d\n", ret);
//
//	return 0;
//}


//野指针不能正常使用

//局部指针变量不初始化就是野指针

//32位系统下,int占4个字节，指针占4个字节,操作系统可以使用的最大内存空间是2^32

//64位系统下,int占4个字节,指针占8个字节,操作系统可以使用的最大内存空间是2^64


//题目：下面代码输出是什么？
//#include <stdio.h>
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	short* p = (short*)arr;
//
//	int i = 0;
//
//	for (i = 0; i < 4; i++)
//	{
//		*(p + i) = 0;
//	}
//
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}


//int指针加一就是加4个字节
//char指针加一就是加一个字节
//short指针加一就是加两个字节




//题目：以下代码会输出什么
//#include <stdio.h>
//
//int main()
//{
//	int a = 0x11223344;
//	char* pc = (char*)&a;
//	*pc = 0;
//
//	printf("%x\n", a);
//
//	return 0;
//}


//在一个内存块内是倒着放的 ，是44 33 22 11



//题目：下面代码输出>还是<

//#include <stdio.h>
//
//int i;	//全局变量-不初始化的话默认为0
//
//int main()
//{
//	i--;
//	if (i > sizeof(i))	
//	//sizeof返回的是无符号数
//	{
//		printf(">");
//	}
//	else
//	{
//		printf("<");
//	}
//	return 0;
//}
	//sizeof()计算变量/类型所占内存的大小,所以一定是正数(也就是无符号数)
	//当一个整型与无符号数进行计算的时候，会把整数转换成无符号数
	//i--变成-1，-1转换成无符号数，符号位最高位的1变为有效位，将会是非常大的数字

	//-1
	//10000000000000000000000000000001 原
	//11111111111111111111111111111110 反
	//11111111111111111111111111111111 补
	//转换成无符号数之后，变成正数，正数原反补相等




//题目:求二进制中不同位的个数
//实现两个int(32位)整数m和n的二进制表达中，有多少个(bit)不同？
//例：1999 2299 输出：7

//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int a = 10;
//	int b = 19;
//
//	int count = 0;
//
//	int c = a ^ b;
//
//	int i = 0;
//
//	for (i = 0; i < 32; i++)
//	{
//		if((c>>i)&1==1)
//		{
//			count++;
//		}
//
//	}
//
//	printf("%d\n", count);
//	system("pause");
////	//system库函数-执行系统命令-pause(暂停) ,需要调用<stdlib.h>的头文件
////	//暂停放在return0前，所有代码后面
//	return 0;
//}


//方法2.
//#include <stdio.h>
//
//int main()
//{
//	int a = 10;
//	int b = 19;
//	int c = a ^ b;
//
//	int count = 0;
//
//	while (c)
//	{
//		c = c & (c - 1);
//		count++;
//	}
//
//	printf("%d\n", count);
//
//	return 0;
//}




//打印一个整数的二进制序列中所有的偶数位和奇数位

//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//
//	int i = 0;
//
//	printf("奇数位：\n");
//
//	//为什么这里是30,因为30就是第31位,0是第一位
//	for (i = 30; i >=0; i-=2)
//	{
//		printf("%d ", (a>>i) & 1 );
//	}	
//	
//	printf("\n");
//
//	printf("偶数位：\n");
//	for (i = 31; i >= 1; i-=2)
//	{
//		printf("%d ", (a>>i) & 1 );
//	}
//
//	return 0;
//}



//题目：用指针打印数组(不使用下标)
//#include <stdio.h>
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//
//	int* p = arr;
//
//	int i = 0;
//
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//
//	return 0;
//}


//递归层次太深，会出现栈溢出的现象




//题目：不使用库函数把字符串数组逆序

//方法1.
//#include <stdio.h>
//#include <string.h>
//
//int mystrlen(char arr[])
//{
//	while (*arr != '\0')
//	{
//		return 1+mystrlen(arr + 1);
//	}
//}
//
//int main()
//{
//	char arr[] = "abcdefg";
//
//	int left = 0;
//	int right = mystrlen(arr)-1;
//
//	while (left < right)
//	{
//		int tmp = 0;
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//
//		left++;
//		right--;
//	}
//
//	printf("%s\n", arr);
//
//	return 0;
//}



//方法2.
//#include <stdio.h>
//
//int my_strlen(char arr[])
//{
//	while (*arr != '\0')
//	{
//		return 1 + my_strlen(arr + 1);
//	}
//}
//
//void reverse_string(char arr[])
//{
//	char tmp = arr[0];
//	int len = my_strlen(arr);
//	arr[0] = arr[len - 1];
//	arr[len - 1] = '\0';
//
//	if (my_strlen(arr + 1) >= 2)
//	{
//		reverse_string(arr + 1);
//	}
//	arr[len - 1] = tmp;
//}
//
//int main()
//{
//	char arr[] = "abcdefg";
//	reverse_string(arr);
//	printf("%s\n", arr);
//}



//三种方法实现strlen:1.计数器方法(6409)	2.递归的方法(不创建临时变量)(6438)   3.指针减指针的方法(8844)



//题目：写一个递归函数DigitSum(n),输入一个非负数，返回组成它的数字之和
//例如：1729 返回(1+7+2+9) = 19;

//#include <stdio.h>
//
//int DigitSum(int a)
//{
//	if(a > 9)
//	{
//		return DigitSum(a / 10) + (a % 10);
//	}
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//
//	int ret = DigitSum(a);
//
//	printf("ret = %d\n", ret);
//
//	return 0;
//}




//题目：编写一个函数实现n的k次方，使用递归实现

//#include <stdio.h>
//
//double test(int n, int k)
//{
//	if (k < 0)
//	{
//		return (1.0 / test(n, -k));
//	}
//	else if (k <= 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * test(n, k - 1);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	int k = 0;
//	scanf("%d", &k);
//
//	double ret = test(n, k);
//
//	printf("ret = %lf\n", ret);
//
//	return 0;
//}






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










//C语言进阶

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












//指针的进阶
//1.字符指针
//2.指针数组
//3.数组指针
//4.数组传参和指针传参
//5.函数指针
//6.函数指针数组
//7.指向函数指针数组的指针
//8.回调函数
//9.指针和数组面试题的解析



//初级指针:
//1.指针就是个变量，用来存放地址，地址唯一标识一块内存空间
//2.指针的大小是固定的4/8个字节(32位平台/64位平台)
//3.指针是有类型,指针的类型决定了指针的+-整数的步长,指针解引用操作的时候的权限
//4.指针的运算

//#include <stdio.h>
//
//void test(int arr[])
//{
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", sz);
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	test(arr);
//
//	return 0;
//}

//32位平台结果是1,64位平台结果是2





//指针的进阶(路标)
//1.字符指针
//2.指针数组
//3.数组指针
//4.数组传参和指针传参
//5.函数指针
//6.函数指针数组
//7.指向函数指针数组的指针
//8.回调函数
//9.指针和数组面试题的解析
 

//1.字符指针

//#include <stdio.h>
//
//int main()
//{
//	char arr[] = "abcdef";
//
//	char* pc = arr;
//
//	printf("%s\n", arr);
//	printf("%s\n", pc);
//	//因为把arr存给pc了,所以arr和pc是一回事,这两个相等
//
//	printf("%c\n", *pc);     //注意是%c
//	printf("%c\n", arr[0]);  //注意是%c
//  //这两个相等
// 
//  printf("%c\n", arr[0]+2);
//  printf("%c\n", *parr+2);
//  //这两个相等
//
//	return 0;
//}





//#include <stdio.h>
//
//int main()
//{
//	char* pc = "abcdef";
//	//"abcdef"是一个常量字符串
//	//如果是在32位系统上,这是放不下的,因为"abcdef"加上'\0'有7个字节
//	//然而32位系统指针只能存放4个字节,所以这行代码存储的是第一个元素的地址(a的地址)
//  //这种写法是可以的
//}



//#include <stdio.h>
//
//int main()
//{
//	char* p = "abcdef";
//	*p = 'w';
//	//这种写法和赋值是错误的
//
//	const char* p = "abcdef";
//	//这种写法才是正确的,"abcdef"是常量字符串,既然是常量,就不能更改,const修饰的是*p,p所指向的内容就不能被修改
//	printf("%s\n", p);
//
//	return 0;
//}



//#include <stdio.h>
//
//int main()
//{
//	char* const parr = "abcdef";
//
//	printf("%p\n", parr);
//
//	parr = 'w';
//	//这里不是把w改成是parr的第一个元素，而是把w的地址赋到parr里面，但是const修饰了parr地址，所以地址不能修改，会报错
//
//	printf("%p\n", parr);
//
//	return 0;
//}



//#include <stdio.h>
//
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	const char* p1 = "abcdef";
//	const char* p2 = "abcdef";
//
//	if (arr1 == arr2)
//	{
//		printf("arr1和arr2相同\n");
//	}
//	else
//	{
//		printf("arr1和arr2不同\n");
//	}
//  //为了存储空间所以分别创立了两块空间,所以不同
//	//数组比较相同不相同是比较地址相同不相同(这样的话好像数组和数组之间永远都不会相同)
//
//	if (p1 == p2)
//	{
//		printf("p1和p2相同\n");
//	}
//	else
//	{
//		printf("p1和p2不同\n");
//	}
//
//	return 0;
//}

//为什么p1和p2是相同的?因为两个"abcdef"都是常量表达式(常量字符串),不能更改，而且两个字符串一模一样
//内存为了节省空间,只存储了一份





//指针的进阶(路标)
//1.字符指针
//2.指针数组
//3.数组指针
//4.数组传参和指针传参
//5.函数指针
//6.函数指针数组
//7.指向函数指针数组的指针
//8.回调函数
//9.指针和数组面试题的解析



//2.指针数组
//指针数组是数组,用来存放指针

//#include <stdio.h>
//
//int main()
//{
//	int arr[4] = { 0 }; //整型指针
//	char ch[5] = { 0 }; //字符指针
//
//	int* parr[4]; //存放整型指针的数组-数组指针
//	char* pch[5]; //存放字符指针的数组-数组指针
//}



//指针数组举例1
//#include <stdio.h>
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int* arr[4] = { &a,&b,&c,&d };
//
//	int i = 0;
//
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", *(arr[i]));
//		printf("%p\n", arr[i]);
//	}
//
//	return 0;
//}





//指针数组举例2
//#include <stdio.h>
//
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//
//	int* parr[] = { arr1,arr2,arr3 };
//
//	int i = 0;
//
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", (*parr)[i]+j);
//			printf("%d ", parr[i][j]);
//			printf("%d ", (*parr[i])+j);
//		}
//		printf("\n");
//	}
//	return 0;
//}



//int* arr1[10];  整形指针的数组
//char* arr2[4];  一级字符指针的数组
//char** arr3[5]; 二级字符指针的数组







//数组指针
//数组指针是指针


//#include <stdio.h>
//
//int main()
//{
//	int* p = NULL;   //p是整形指针 - 指向整形 - 可以存放整形的地址
//	char* pc = NULL; //pc是字符型指针 - 指向字符 - 可以存放字符的地址
//	int *arr[10] = { 0 }; //数组指针 - 就是指向数组 - 可以存放数组的地址
//
//	//arr - 首元素地址
//	//&arr - 数组的地址
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//
//	int(*p)[10] = &arr;   //定义变量时*p不是解引用操作,是说明p是一个指针
//	//上面这个意思是: (*p)指向一个数组(10个元素),数组的每个元素是int
//	//数组的地址要存起来
//	//上面这个就是数组指针
//
//	int* p[10] = &arr;   //这是指针数组
//    //[]的优先级比*高
//	return 0;
//}

//数组指针是一个指针，用来存放数组地址的指针




//题目：把char* arr[5]下面那行代码补全成数组指针
//int main()
//{
//	char* arr[5];
//	//pa= &arr;
//	char* (*pa)[5] = &arr;
//	//char* 是pa指向的数组的元素类型是char*
//	//* 说明pa是指针
//	//pa 是指针变量的名字
//	//[5] pa指向的数组是5个元素的
//
//	return 0;
//}





//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int(*pa)[10] = &arr;
//
//	int i = 0;
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", (*pa)[i]);
//		printf("%d ", *(*pa + i));//*pa == arr  *pa找到arr,arr+1是下一个元素的地址,地址解引用就能找到那个元素
//		printf("%d ", *(arr + i));//*pa == arr  这个写法跟上面代码相等
//		printf("%p ", arr+i); //数组名+1是首元素地址+1就是下一个元素的地址(记住哦，是下一个元素的地址)
//		
//		//这三种方法都可以通过数组指针访问数组
//		//但是把arr存到*int里面也可以达到一样的访问效果
//		//数组指针一般要用到二维数组以上才方便一些
//		printf("\n");
//	}
//
//	system("pause");
//
//	return 0;
//}






//#include <stdio.h>
//
//void print1(int* arr,int x,int y)
//{
//	int i = 0;
//	int j = 0;
//
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i]+j);
//		}
//		printf("\n");
//	}
//}
//
//void print2(int (*pa)[5],int x,int y)
//{
//	int i = 0;
//
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", *(*(pa + i) + j));
//		}
//		printf("%d\n");
//	}
//}
//
//int main()
//{
//
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//
//	print1(arr,3,5);
//	//数组是首元素的地址,要探讨二维数组的首元素,首先要把二维数组看成一维数组,二维数组的首元素其实是二维数组的第一行
//	//也就是{1,2,3,4,5}
//
//	print2(arr,3,5);
//	//既然传过去的是整个一维数组的地址,那接收就要用数组指针来接收
//
//	return 0;
//}







//#include <stdio.h>
//
//void print1(int (*pa)[5], int x, int y)
//{
//	int i = 0;
//
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", *(*(pa+i)+j));
//			printf("%d ", (*(pa + i))[j]);
//			printf("%d ", pa[i][j]);
//			printf("%d ", *(pa[i]+j));
//			//以上三种都可以打印
//			printf("\n");
//		}
//		printf("\n");
//	}
//}
//
// 
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//
//	print1(arr, 3, 5);
//
//	return 0;
//}







//#include <stdio.h>
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//
//	int i = 0;
//	int *p = arr;
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//		printf("%d ", *(arr + i));
//		printf("%d ", *(p + i));
//		printf("%d ", p[i]);
//		//arr[i] == p[i] == *(arr+i) == *(p+i) 
//		printf("\n");
//	}
//
//	return 0;
//}




//int arr[5]			//arr是一个包含5个int类型元素的数组
//int *parr1[10]		//[]的优先级比*高，数组有10个元素,每个元素的类型是int*,parr1是指针数组
//int (*parr2)[10]      //*parr是数组指针，该指针指向了一个数组，数组有10个元素，每个元素的类型是int,parr2是数组指针
//int (*parr3[10])[5]   //parr3首先和[]结合，parr3是一个数组,该数组有10个元素，每个元素是一个数组指针
                        //该数组指针指向的数组有5个元素，每个元素是int

//int (*parr3[10])[5]	//是一个数组指针，有十个元素，每个元素的类型是数组指针，每个数组指针指向的数组有5个，类型是int  




//思考
//你好，我觉得你讲的有道理，我感觉我也是讨好型人格，下面是我自己的思考:
//
//我好像总是伪装成弱者，把自己姿态摆得很低，诱惑着别人来欺负我，然后等别人真的来欺负我的时候，我被欺负到实在受不了时，我就顺理成章的可以反击别人
//达到我内心想要释放暴力的真实目的，因为我不敢去直接诉诸暴力，这是社会，法律所不允许的，所以为了达到释放暴力的目的，
//我一次又一次的伪装成弱者，期待着"猎物"上钩。
//从直接的释放暴力转换成间接的释放暴力，这样貌似会导致更多的压抑，更多的压抑又会导致更加暴力的暴力释放
//
//所以, 讨好型人格有没有可能其实是一种潜在的施暴狂呢 ?
//只不过这个施暴不是直接的，而是间接的施暴，这是我对自己的一点反思，我跟别人相处时会无意识喜欢讨好别人，但内心知道这不是真心盼着对方好，只是一种 诱惑
//但我知道自己其实并不是弱者
//所以不要把自己摆在一个弱者的地位，因为你根本不是弱者

//不然为什么要讨好一个人呢？甚至这个人是陌生人







//#include <stdio.h>
//
//int main()
//{
//	//指针
//	int* p1;  //指向整形的指针-整形指针
//	char* p2; //指向字符的指针-字符指针
//
//	//字符指针
//	char ch = 'w';
//	char* p = &ch;
//	const char* p2 = "abcdefg";
//
//	//指针数组 - 数组 - 存放指针的数组
//	int* arr[10];
//	char* ch[5];
//
//	//数组指针 -指向数组
//	int arr2[5]; //数组
//	int(*pa)[5] = &arr2; //取出数组的地址,pa就是一个数组指针
//	//把名字去掉，剩下的就是元素类型，pa的元素类型是int(*)[5]
//
//	return 0;
//}






//数组参数   指针参数



//一维数组，指针数组 函数传参
//#include <stdio.h>
//
//void test(int arr1[])
//{
//
//}
//
//void test(int arr1[10])  //对于这种在[]里写值的形参也是可以的，但这里写不写都行
//{
//
//}
//
//void test(int* arr1)
//{
//
//}
////以上三种数组传参写法都可以
//
//void test2(int* arr2[20])  //这样写是可以的([]里面的数组大小是可以省略的)
//{
//
//}
//
//void test2(int** arr2)
//{
//
//}
////以上两种指针数组传参都可以
//
//int main()
//{
//	int arr1[10] = { 0 };
//
//	int* arr2[20] = { 0 };
//
//	//一维数组传参
//	test(arr1);
//
//	test2(arr2);
//
//	return 0;
//}
//参数部分可以写成数组也可以写成指针




//二维数组函数传参

//#include <stdio.h>
//#include <stdlib.h>
//
//void test(int arr[3][5])
//{
//
//}
//
//void test1(int arr[][5])	//数组传参可以省略行不能省略列
//{
//
//}
//
//void test2(int(*arr)[5])
//{
//
//}
////以上三种二维数组传参都可以
//
//void test3(int** arr)	//这种方法是不行的，因为二级指针存放的是一级指针变量的地址，而我传过来的是数组的地址
//{
//
//}
//
//int main()
//{
//	int arr[3][5] = { 0 };
//
//	test(arr);
//	test1(arr);
//	test2(arr);
//	test3(arr);
//
//	system("pause");
//
//	return 0;
//}




//指针传参

//#include <stdio.h>
//#include <stdlib.h>
//
//void test(int* arr, int sz)  //传过去的是指针，接收的也是指针
//{
//	int i = 0;
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//
//	int* pa = arr;
//	
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	test(pa, sz);
//
//	system("pause");
//
//	return 0;
//}





//当函数参数为一级指针的时候，可以传什么参数进去？

//#include <stdio.h>
//
//void test1(int* p)
//{
//	;
//}
//
//void test2(char* p)
//{
//
//}
//
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//
//	test1(pa);
//	test1(&a);
//
//
//	char b = 20;
//	char* pb = &b;
//
//	test2(pb);
//	test2(&b);
//
//	return 0;
//}

//当函数形参为一级指针时，可以传地址，也可以传指针变量






//二级指针传参

//#include <stdio.h>
//
//void test(int** ptr)
//{
//
//}
//
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;
//
//	test(pa);
//	test(ppa);
//
//	int* arr[10];
//	test(arr);
//
//	return 0;
//}

//二级指针传参可以把一级指针传过去(一级指针传过去二级指针接收)，也可以把二级指针传过去
//也可以把指针数组传过去，指针数组本质上还是数组





//函数指针

//数组指针 - 是指向数组的指针
//函数指针 - 是指向函数的指针

//#include <stdio.h>
//
//int add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	int ret = add(a, b);
//
//	printf("%p\n", &add);
//	printf("%p\n\n", add);
//	//这两个输出结果相同
//	//&函数名 和 函数名 都是函数的地址
//  //函数名就是函数的地址
//
//	int (*p)(int, int) = add;
//	//函数指针
//	//(int,int)可以,(int x,int y)也可以，不过x,y可以省略
//
//	printf("%d\n", (*p)(2, 3));
// 
//	printf("%p\n", (*p));
//	printf("%p\n", p);
//  
//
//	return 0;
//}

//函数指针是用来存放函数地址的指针

//函数名地址==&函数名地址==函数指针地址==*函数指针地址




//#include <stdio.h>
//
//void print(char* str)
//{
//	printf("%s\n", str);
//}
//
//int main()
//{
//	void (*pa)(char*) = print;
//
//	(*pa)("hello,bite");
//
//	return 0;
//}




//代码1
//(*(void(*)())0();


//void(*)()是一个函数类型,是一个函数指针类型
//类型括号括起来后面加0，就是想要把0强制类型转换，把整形转换成函数指针类型
//意味着想把0当成是某函数的地址
//然后外面还有一个解引用操作符*，意味着通过这个函数的地址找到这个函数，函数的返回类型是void,参数是无参
//解引用之后，后面还有一个括号，说明在调用这个函数，最后面那个括号不需要传参，因为0也是无参
//这段代码其实是函数调用





//代码2
//void (*signal(int,void(*)(int)))(int)

//signal(int,void(*)(int))
//int是整形变量，void(*)(int)是函数指针
//signal是函数,但是()里没有传参,这是一次函数声明

//去掉函数名就是函数的类型
//void(*)(int)  
//其实整段代码就是函数指针,(*)是指针,()是函数,函数的参数是int是参数，返回类型是void

//signal(int,void(*)(int))
//函数名是signal,函数参数是int和函数指针类型,剩下的void(*)(int)就是返回类型
//signal的第二个参数是函数指针，signal的返回类型也是函数指针

//不能这样写 void(*)(int) signal(int,void(*)int)
//因为函数指针的*要放在名字旁边

//signal是一个函数声明
//signal函数的参数有两个，第一个是int,第二个是函数指针，该函数指针指向的函数的参数是int,返回类型是void
//signal函数的返回类型也是一个函数指针：该函数指针指向的函数的参数是int,返回类型是void


//这个函数太过于复杂了,其实可以简化，那就是typedef

//void(*signal(int, void(*)(int)))(int);
//
//typedef void(* pfun_t)(int);   //函数指针改名，新名字是放在*右边的
// 
//pfun_t signal(int, pfun_t);





//#include <stdio.h>
//
//int add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int (*padd)(int, int) = add;
//
//	printf("%d\n", add(3, 5));
//	printf("%d\n", (&add)(3, 5));
//	printf("%d\n", padd(3, 5));
//	printf("%d\n", (padd)(3, 5));
//	printf("%d\n", (*padd)(3, 5));
//	printf("%d\n", (**padd)(3, 5));
//	printf("%d\n\n", (***padd)(3, 5));
//
//	//当一个指针是函数指针时，调用这个函数指针解引用*和不解引用都行，但最好加上*，容易看出来是函数指针
//    //如果没加上的话也要分辨出来
// 
//	//add == padd == *padd
// 
//   	  printf("%p\n", add);
//  	  printf("%p\n", &add);
//      printf("%p\n", padd);
//      printf("%p\n", *padd);
//      printf("%p\n", **padd);
//	
//	//printf("%d\n", &add(3, 5));
//	//&的优先级比()低，函数调用之后返回一个常量
//	//字符常量通常是存储在只读内存区域中，不能直接修改，因此不能取得其地址。所以会报错
//
//	//printf("%d\n", *padd(3, 5));
//	//*的优先级比()低，函数调用之后返回一个常量，再解引用就会报错 
//
//	return 0;
//}
//函数名就是函数的地址











//函数指针数组 
//存放函数指针的数组


//#include <stdio.h>
//#include <stdlib.h>
//
//int add(int x, int y)
//{
//	return x + y;
//}
//
//int sub(int x, int y)
//{
//	return x - y;
//}
//
//int mul(int x, int y)
//{
//	return x * y;
//}
//
//int chu(int x, int y)
//{
//	return x / y;
//}
//
//int main()
//{
//	int (*pa[4])(int, int) = { add,sub,mul,chu };
//
//	int i = 0;
//
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", pa[i](3, 5));
//	}
//
//	system("pause");
//
//	return 0;
//}





//char* mystrcpy(char* dest,const char* src);

//题目1:写一个函数指针pf,能够指向mystrcpy
//函数指针:char* (*pf)(char*,const char*) = mystrcpy;
 
//题目:写一个函数指针数组pfarr,能够存放mystrcpy函数的地址 
//函数指针数组:char* (*pfarr[4])(char*,const char*) = {mystrcpy};






//函数指针数组的用途:转移表
//例子：计算器

//#include <stdio.h>
// 
//void menu()
//{
//	printf("*****************************\n");
//	printf("********1.add	2.sub********\n");
//	printf("********3.mul   4.chu********\n");
//	printf("**          0.exit         **\n");
//	printf("*****************************\n");
//}
//
//int add(int x, int y)
//{
//	return x + y;
//}
//
//int sub(int x, int y)
//{
//	return x - y;
//}
//
//int mul(int x, int y)
//{
//	return x * y;
//}
//
//int chu(int x, int y)
//{
//	return x / y;
//}
// 
//
//int main()
//{
//	int input = 0;
//
//	int x = 0;
//	int y = 0;
//	
//	do
//	{
//		menu();
//
//		printf("请选择算法\n");
//		scanf("%d", &input);
//
//		switch (input)
//		{
//		case 1:
//			printf("请输入两个数\n");
//			scanf("%d %d", &x, &y);
//			printf("add = %d\n\n\n", add(x, y));
//			break;		
//		case 2:
//			printf("请输入两个数\n");
//			scanf("%d &d", &x,&y);
//			printf("sub = %d\n\n\n", sub(x, y));
//			break;		
//		case 3:
//			printf("请输入两个数\n");
//			scanf("%d %d", &x, &y);
//			printf("mul = %d\n\n\n", mul(x, y));
//			break;		
//		case 4:
//			printf("请输入两个数\n");
//			scanf("%d %d", &x, &y);
//			printf("chu = %d\n\n\n", chu(x, y));
//			break;
//		case 0 :
//			break;
//		default:
//			break;
//		}
//
//	} while (input);
//
//	return 0;
//}

//以上写法太过于冗余，可以采用函数指针数组的方法简化





//#include <stdio.h>
//#include <stdlib.h>
//
//void menu()
//{
//	printf("*****************************\n");
//	printf("********1.add	2.sub********\n");
//	printf("********3.mul   4.chu********\n");
//	printf("**          0.exit         **\n");
//	printf("*****************************\n");
//}
//
//int add(int x, int y)
//{
//	return x + y;
//}
//
//int sub(int x, int y)
//{
//	return x - y;
//}
//
//int mul(int x, int y)
//{
//	return x * y;
//}
//
//int chu(int x, int y)
//{
//	return x / y;
//}
//
//int main()
//{
//	int input = 0;
//
//	int x = 0;
//	int y = 0;
//
//	int (*parr[])(int, int) = { 0,add,sub,mul,chu }; //为什么第一个元素要是0？因为不是0的话，选择1其实是数组的第二个元素，也就是sub,要考虑到使用者不是程序员
//	int sz = sizeof(parr) / sizeof(parr[0]);
//
//	do
//	{
//		menu();
//		printf("请选择:>\n");
//		scanf("%d", &input);
//
//		if (input >= 1 && input <= sz)
//		{
//			printf("请输入两个数\n");
//			scanf("%d %d", &x, &y);
//
//			printf("%d\n\n\n", parr[input](x, y));
//		}
//		else
//		{
//			printf("退出\n");
//			break;
//		}
//
//	} while (input);
//
//	system("pause");
//
//	return 0;
//}

//通过下标找到这个元素，再用这个元素找到所指向的函数，我们经常把这样一种函数指针数组叫做 转移表






//回调函数
//回调函数就是一个通过函数指针调用的函数。如果你把函数的指针(地址)作为参数传递给另一个函数，
//当这个指针被用来调用其所指向的函数时，我们就说这是回调函数。
//回调函数不是由该函数的实现方直接调用，而是在特定的事件或条件发生时由另外的一方调用的，
//用于对该事件或条件进行响应


//用回调函数对上面的冗余代码进行改造

//#include <stdio.h>
//
//void menu()
//{
//	printf("*****************************\n");
//	printf("********1.add	2.sub********\n");
//	printf("********3.mul   4.chu********\n");
//	printf("**          0.exit         **\n");
//	printf("*****************************\n");
//}
//
//int add(int x, int y)
//{
//	return x + y;
//}
//
//int sub(int x, int y)
//{
//	return x - y;
//}
//
//int mul(int x, int y)
//{
//	return x * y;
//}
//
//int chu(int x, int y)
//{
//	return x / y;
//}
//
//void calc(int (*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//
//	printf("请输入两个数\n");
//	scanf("%d %d", &x, &y);
//	printf("add = %d\n\n\n", pf(x, y));
//}
//
//int main()
//{
//	int input = 0;
//	
//	do
//	{
//		menu();
//
//		printf("请选择算法\n");
//		scanf("%d", &input);
//
//		switch (input)
//		{
//		case 1:
//			calc(add);
//			break;		
//		case 2:
//			calc(sub);
//			break;		
//		case 3:
//			calc(mul);
//			break;		
//		case 4:
//			calc(chu);
//			break;
//		case 0 :
//			break;
//		default:
//			break;
//		}
//
//	} while (input);
//
//	return 0;
//}




//指向函数指针数组的指针
//指向函数指针数组的指针是一个 指针 指向一个 数组，数组的元素都是函数指针

//#include <stdio.h>
//
//int add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int (*pfarr[4])(int, int) = { &add };
//	//pfarr是一个函数指针数组
//	//pfarr是一个数组，数组元素有4个，每个元素类型是int (*)(int, int) （函数指针）
//
//	int (*(*ppfarr)[4])(int, int) = &pfarr;
//	//指向函数指针数组的指针
//	//ppfarr是一个数组指针，指针指向的数组有4个元素
//	//指向的数组的每个元素的类型是一个函数指针int(*)(int,int)
//
//	return 0;
//}




//回调函数
//回调函数就是一个通过函数指针调用的函数。如果你把函数的指针(地址)作为参数传递给另一个函数，
//当这个指针被用来调用其所指向的函数时，我们就说这是回调函数。
//回调函数不是由该函数的实现方直接调用，而是在特定的事件或条件发生时由另外的一方调用的，
//用于对该事件或条件进行响应

//例子:

//#include <stdio.h>
//
//void print(char* str)   //为什么传过来的是"bit",接收却是指针？因为"bit"是常量字符串，传过去的第一个元素的地址，既然是地址，就应该用指针接收
//						//“bit”是常量字符串，是const char类型
//{
//	printf("%s\n", str);
//}
//
//void test(void (*p)(char*))
//{
//	printf("test\n");
//	p("bit");
//}
//
//int main()
//{
//	test(print);
//
//	return 0;
//}





//#include <stdio.h>
//
//int add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	//指针数组
//	int* arr[10];
//
//	//数组指针
//	int(*pa)[10] = &arr;
//
//	//函数指针
//	int (*padd)(int, int) = &add;
//
//	//函数指针的数组
//	int (*parr[10])(int, int) = { padd };  //这里记住数组初始化要大括号哦{}
//
//	//指向函数指针数组的指针
//	int (*(*pparr)[10])(int, int) = parr;
//
//	return 0;
//}










//冒泡排序

//#include <stdio.h>
//
//void bubble_sort(int* arr, int sz)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz-1; i++)  //为什么这里是sz-1，因为i=0,10-1=9,i<9等于0到8，也就是9趟
//	{
//		
//		int tmp = 0;
//
//		for (j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
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
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	bubble_sort(arr, sz);
//
//	int i = 0;
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//
//	return 0;
//}

//冒泡排序的缺点就是只能排序整形的数组，浮点型什么的都不管用






//qsort - 快速排序(quick sort)

//qsort有4个参数
//void qsort( void *base,     - (目标数组的起始位置)数组首元素地址
//			  size_t num,     - 元素的个数 - sz
//            size_t width,   - 元素的大小(单位是字节) - szieof[0]
//            int (*compare )(const void *elem1, const void *elem2 ) );
//									      elem1和elem2是你要比较的两个元素的地址


//void*就是无类型指针，可以接收任意类型的指针类型地址，比如整型，字符，结构体
//#include <stdio.h>
//
//int main()
//{
//	int a = 10;
//	void* pa = &a;
//
//	//*pa = 0;		非法的间接寻址,这样写会报错，因为*解引用指针类型会决定访问几个字节
//	//				但是void是无类型指针，编译器不知道访问几个字节，会报错
//	//              对于void*类型的指针，不能进行解引用操作(非要解引用的话可以强制类型转换)
//	//              也不能进行+-整数的操作，比如pa++,pa+2,pa--
//	return 0;
//}



//qsort排序整数

//#include <stdio.h>
//
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
////关于compare要求
////Return  Value Description
////< 0     elem1 less than elem2
////  0     elem1 equivalent to elem2
////> 0     elem1 greater than elem2
//
//int main()
//{
//	int arr[10] = { 9,7,8,6,5,4,3,2,1,0 };
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//
//	int i = 0;
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//
//	return 0;
//}





//qsort排序浮点数

//#include <stdio.h>
//
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(float*)e1 - *(float*)e2;
//	
//	//*if(*(float*)e1 == *(float*)e2)
//	//		return 0;
//	//else if(*(float*)e1 > *(float*)e2))
//	//		return 1;
//	//else
//	//		return -1;
//}
//
//int main()
//{
//	float arr[3] = { 9.0,8.9,3.2 };
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//
//	int i = 0;
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%f\n", arr[i]);
//	}
//
//	return 0;
//}






//结构体qsort排序

//#include <stdio.h>
//
//struct stu
//{
//	char name[20];
//	int age;
//};
//
//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
//	//这里结构体不用解引用, ->可以直接指向那个值
//}
//
//int cmp_stu_by_name(const void* e1, const void* e2)
//{
//	//比较名字就是比较字符串
//	//字符串比较不能直接用><=来比较,应该用strcmp函数，需要引<string.h>的头文件
//	//第一个字符串大于第二个字符串，返回1，等于返回0，小于返回-1
//	//strcmp比较字符串的Ascii码，第一个字母相同，再比较第二个，以此类推，直到遇到俩不相同的字母，前者大于后者返回正数，反之返回负数
//	//比较的是首个不同字符的Ascii码值,也就是比z l w
//	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
//}
//
//int main()
//{
//	struct stu s1[3] = { {"zhangsan",20},{"lisi",23},{"wangwu",34} };
//
//	int sz = sizeof(s1) / sizeof(s1[0]);
//
//	qsort(s1, sz, sizeof(s1[0]), cmp_stu_by_name);
//	//这里的sizeof计算的大小是大于等于age和name的，后面结构体会讲这个
//
//	int i = 0;
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\t", (s1[i]).age);
//	}
//
//	return 0;
//}



//qsort排的是数组

//void qsort(void* base,
//		   size_t num, 
//	       size_t width,
//	       int(* compare)(const void* elem1, const void* elem2));

//第一个参数：待排序数组的首元素地址
//第二个参数：待排序数组的元素个数
//第三个参数：待排序数组的每个元素的大小-(单位是字节)
//第四个参数：是函数指针，比较两个元素的所用函数的地址-这个函数使用者自己实现
//           函数指针的两个参数是：带比较的两个元素的地址

//为什么是这4个参数？ 有了首元素地址就能找到这个数组，传过去数组的元素个数就知道这数组有多少个元素，
//再加上每个元素的大小，这样整个数组的的信息就全了






//改造冒泡排序，使得所有数据类型都得以排序

//#include <stdio.h>
//
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
//void swap(char* buf1, char* buf2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	//进行交换的时候，要解引用，解引用只会访问一个字节，因为是char类型,
//	//所以要交换两个未知大小的变量，就得for循环宽度大小次数
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//
//void bubble_sort(void* base, int sz, int width,int(*cmp)(void*e1,void*e2)) 
////					   为了保证能接收任何类型的数据，用void*base
////                     但由于传进来的类型是void*,不能解引用，不知道具体大小，所以要传元素个数sz和元素大小width
////                     为什么cmp用int来接收，因为还是按照大于返回1，等于返回0，小于返回-1的理念来设计这个比较函数
////                     实现bubble_sort函数的程序员，不知道未来排序的数据类型，所以接收比较函数用两个void*
//{
//	int i = 0;
//
//	for (i = 0; i < sz; i++)
//	{
//		int j = 0;
//
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
//			{
//				//char*强制类型转换就只能访问一个字节，一个字节在乘以一个字节的大小(宽度width),就能访问任何数据的一个大小了
//				//交换
//				swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//			}
//
//		}
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//
//	int i = 0;
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//
//	return 0;
//}








//题目:sizeof整形数组


//数组名是首元素地址
//除了以下两种情况，其余所有情况数组名都是首元素地址
//1.sizeof(数组名) - 数组名表示整个数组
//2.&数组名 - 数组名表示整个数组

//#include <stdio.h>
//int main()
//{
//	int a[] = { 1,2,3,4 };
//	printf("%d\n", sizeof(a));		//这是第一种情况，sizeof(数组名)，所以结果是整个数组的大小
//	printf("%d\n", sizeof(a+0));    //这种情况不是以上两种情况，所以数组名是首元素的地址，首元素地址+0还是首元素地址，地址的大小就是4/8字节
//	printf("%d\n", sizeof(*a));		//数组名是首元素地址，*a就会解引用找到那个首元素，sizoef(*a)就是4
//	printf("%d\n", sizeof(a+1));	//这种情况不是以上两种情况，数组名是首元素地址，a+1就是数组的第二个元素的地址，地址的大小就是4/8个字节
//	printf("%d\n", sizeof(a[1]));   //第二个元素的大小
//	printf("%d\n", sizeof(&a));		//&a取出的是数组的地址，但是数组的地址也是地址，地址的大小就是4/8个字节
//	printf("%d\n", sizeof(*&a));	//int类型的地址解引用访问4个字节，char类型的地址解引用访问1个字节，数组类型的地址解引用访问一个数组大小的字节
//									//*和&抵消了，其实计算的是sizoef(a)
//									//&a数组的地址，数组的地址解引用访问的数组，sizeof计算的就是数组的大小单位是字节
//	printf("%d\n", sizeof(&a+1));	//取地址取的是整个数组的地址，&a+1还虽然地址跳过整个数组，但还是地址，大小就是4/8
//	printf("%d\n", sizeof(&a[0]));	//&a[0]是第一个元素的地址
//	printf("%d\n", sizeof(&a[0]+1));//取地址a第一个元素地址，再+1就是第二个元素的地址，既然是地址，结果就是4/8
//
//	return 0;
//}



//题目：sizeof字符数组

//#include <stdio.h>
//
//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//
//	printf("%d\n", sizeof(arr));	  //sizeof计算的是整个数组的大小，6*1 = 6bite
//	printf("%d\n", sizeof(arr+0));    //arr是首元素的地址，arr+0还是首元素地址，既然是地址，就占4/8个字节
//	printf("%d\n", sizeof(*arr));	  //arr是首元素的地址，*arr就是首元素解引用
//	printf("%d\n", sizeof(arr[1]));
//	printf("%d\n", sizeof(&arr));     //&arr是取的整个数组的地址，既然是地址，那就是4/8个字节
//	printf("%d\n", sizeof(&arr+1));   //&arr+1是跳过整个数组后的地址，既然是地址，地址大小就是4/8个字节
//	printf("%d\n", sizeof(&arr[0]+1));
//
//	return 0;
//}




//题目：strlen字符数组

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f'};
//
//	printf("%d\n", strlen(arr));			//1.随机值
//	printf("%d\n", strlen(arr+0));			//2.arr是首元素地址，+0还是首元素地址，结果和1一样是随机值
//	//printf("%d\n", strlen(*arr));			//3.strlen只能接收地址,*arr就是解引用第一个元素，也就是a,a在ASCII码表里是97，strlen 97会报错error
//	//printf("%d\n", strlen(arr[1]));		//4.arr[1]就是数组第二个元素，就是b,在ASCII表里是98，传98过去也会报错
//	printf("%d\n", strlen(&arr));			//5.取的是整个数组的地址，但数组下标还是0，从第一个元素开始找'\0'，数组里没有'\0',继续往后找，所以是随机值
//											//1,2,5虽然都是随机值，但它们的值都是一样的
//	printf("%d\n", strlen(&arr+1));			//6. 6虽然是随机值，但6和1，2，5的值一定相差sz(元素个数)
//	printf("%d\n", strlen(&arr[0] + 1));	//7. 7虽然也是随机值，但一定比1，2，5相差1
//
//	return 0;
//}



//题目：sizeof字符串数组

//#include <stdio.h>
//
//int main()
//{
//	char arr[] = "abcdef";
//
//	printf("%d\n", sizeof(arr));		//字符串数组初始化会把'\0'放进去
//	printf("%d\n", sizeof(arr+0));
//	printf("%d\n", sizeof(*arr));
//	printf("%d\n", sizeof(arr[1]));
//	printf("%d\n", sizeof(&arr));
//	printf("%d\n", sizeof(&arr+1));
//	printf("%d\n", sizeof(&arr[0]+1));
//
//	return 0;
//}



//题目：strlen字符串

//#include <stdio.h>
//
//int main()
//{
//	char arr[] = "abcdef";
//
//	printf("%d\n", strlen(arr));
//	printf("%d\n", strlen(arr+0));
//	//printf("%d\n", strlen(*arr));			  //会报错，strlen接受的是地址，*arr传过去的是'a',编译器以为'a'是地址，就当成地址进行strlen计算,'a'在ASCII表里是97
//	//printf("%d\n", strlen(arr[1]));		  //error
//	printf("%d\n", strlen(&arr));			  //&arr的类型是char (*p)[7] = &arr,但strlen的参数类型是const char*,这两个类型不兼容,有可能会报错，但vs2022居然没报错
//											  //&arr是整个数组的地址，但计算还是从0下标开始算
//	printf("%d\n", strlen(&arr+1));			  //&arr+1是跳过一整个数组，数组后面是未知，所以是随机数
//	printf("%d\n", strlen(&arr[0]+1));	      //数组下标0+1就是第二个元素'b'，从b开始数到\0刚好5个元素
//
//	return 0;
//}





//sizeof指针

//#include <stdio.h>
//
//int main()
//{
//	char* p = "abcdef";
//
//	printf("%d\n", sizeof(p));		//p存放的是常量字符串"abcdef"第一个元素的地址 4/8
//	printf("%d\n", sizeof(p+1));	//p存放的是第一个元素的地址，p+1就是常量字符串的第二个元素的地址
//									//int arr[10]	arr[0]== *(arr+0)== *(p+0) == 'a'
//	printf("%d\n", sizeof(*p));	
//	printf("%d\n", sizeof(p[0]));
//	printf("%d\n", sizeof(&p));
//	printf("%d\n", sizeof(&p+1));
//	printf("%d\n", sizeof(&p[0] + 1));  //p[0]得到的是a,&a是a的地址,a的地址+1就是a后面那个元素的地址，也就是'b'的地址
//
//	return 0;
//}





//#include <stdio.h>
//
//int main()
//{
//	char* p = "abcdef";
//
//	printf("%d\n", strlen(p));		//p是首元素地址，从p开始往后找，直到找到\0为止
//	printf("%d\n", strlen(p+1));
//	//printf("%d\n", strlen(*p));	//error,strlen里面只能放地址，只要不是地址就会报错
//	//printf("%d\n", strlen(p[0])); //同上
//	printf("%d\n", strlen(&p));		//是随机值，取到p的地址(也就是a的地址)之后往后数
//									//一直往后数数到\0为止,由于地址是不可预测的，不知道什么时候才会取到\0
//									//所以是随机值
//									//假设a的地址是0x0012ff44，由于是小端存储,内存中显示是44 ff 21 00
//	                                //直到找到\0为止,strlen(a)就是3
//									//p是一个指针，存放的是地址,&p就是取整个指针变量p的地址，是地址的地址
//	                                //strlen(p)的话是常量字符串首元素的地址，strlen(&p)是p的地址
//	printf("%d\n", strlen(&p+1));	//同上
//	printf("%d\n", strlen(&p[0] + 1));
//
//	return 0;
//}




//#include <stdio.h>
//
//int main()
//{
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));			//整个数组
//	printf("%d\n", sizeof(a[0][0]));	//第一行第一个元素
//	printf("%d\n", sizeof(a[0]));		//a[0]相当于第一行作为一维数组的数组名，数组名单独放在sizeof()内，符合两条情况之外中的一条，计算的是第一行的大小
//	printf("%d\n", sizeof(a[0]+1));     //a[0]如果单独放在sizeof()里就是二维数组第一个元素,但如果a[0]放在表达式里a[0]+1，那么a[0]就是二维数组第一个元素的第一个元素的地址
//	                                    //a[0][0]==a[0]+0
//	                                    //a[0]是第一行的数组名,数组名此时是首元素的地址,a[0]其实就是第一行第一个元素的地址
//	                                    //所以a[0]+1就是第一行第二个元素的地址,地址大小是4/8个字节
//	printf("%d\n", sizeof(*(a[0]+1)));
//	printf("%d\n", sizeof(a+1));        //除两种特殊情况之外，数组名都是首元素地址，二维数组的首元素地址+1是第二行的地址
//	printf("%d\n", sizeof(*(a+1)));     //sizeof(*(a+1)) == sizeof(a[1]),第二行数组的大小，单位是字节
//	printf("%d\n", sizeof(&a[0]+1));    //a[0]是第一行的数组名,数组名取地址取出的是第一行的地址，第一行地址+1就是第二行地址,sizeof(&a[0]+1) == sizeof(a+1)  
//	printf("%d\n", sizeof(*(&a[0] + 1)));
//	printf("%d\n", sizeof(*a));			//a是首元素地址，是第一行的地址
//	printf("%d\n", sizeof(a[3]));		//sizeof内部的表达式是不参与真实运算的，只是根据类型计算大小，a[3]是一个包含4个整形的一维数组，所以答案是16
//
//	return 0;
//}


//总结
//1.sizeof(数组名),这里的数组名表示整个数组,计算的是整个数组的大小
//2.&数组名，这里的&数组名不管是单独出现还是在括号里表达式里，都是取整个数组地址,这里的数组名表示整个数组，取出的是整个数组的地址
//3.除了sizeof(数组名)和sizeof(&arr),其余所有数组名都是首元素的地址,而二维数组的首元素地址是一维数组
//二维数组中的arr[i]表示数组名,二维数组sizeof(arr[i])就是计算二维数组中第n行的总大小










//指针笔试题目:

//指针笔试题1

//#include <stdio.h>
//
//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));
//	return 0;
//}

//&a是取a的整个地址,+1就是跳过一个数组类型,由于此时a的类型是数组指针类型
//所以把a给强制类型转化成int*类型再放到*ptr里，ptr存放的就是a数组+1的地址,再-1就是5




//指针笔试题2：
//题目：已知结构体test类型的变量大小是20个字节

//#include <stdio.h>
//
//struct test
//{
//	int Num;
//	char *pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}* p;
//
//int main()
//{
//	p = (struct test*)0x100000;
//	printf("%p\n", p + 0x1);					//p+1,p是结构体变量,+1就是加20个字节,0x100000(16进制)+20(10进制)就是0x100014
//	printf("%p\n", (unsigned long)p + 0x1);     //强转成长整型，+1就是跳过4个字节，就是+1，结果就是0x100001
//	printf("%p\n", (unsigned int*)p + 0x1);		//强转成int*,指针+-整数取决于指针类型，int*+1就是+4
//	printf("%p\n", (unsigned int)p + 0x1);		
//
//	return 0;
//}

//第二个printf,强转成整形，加多少就是多少
//第三个printf,强转成指针，指针+-整数取决于指针类型





//指针笔试题3：
//题目：输出结果是什么

//#include <stdio.h>
//
//struct test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
//
//int main()
//{
//	p = (struct test*)0x100000;
//
//	printf("%p\n", (unsigned int*)p + 0x1);
//
//	return 0;
//}





//指针笔试题4：

//#include <stdio.h>
//
//int main()
//{
//	int a[4] = { 1,2,3,4 };
//	int *ptr1 = (int *)(&a + 1);
//	int *ptr2 = (int *)((int)a + 1);
//
//	printf("%x,%x", ptr1[-1], *ptr2);
//
//	return 0;
//}

//内存中最小的单位是字节，每个字节都占据一个地址，两个相邻的地址差一个字节，所以地址+1就是向后偏移一个字节

//ptr2的输出
//数组的声明是从左到右，地址逐渐增大,数组左边是低地址，右边是高地址
//由于机器是小端存储模式,存储的地址就是 01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00
//ptr2 , 假设a的地址是0x00 00 00 05,强制转换成int就是5，5+1就是6,地址+1就是加一个字节
//6再强制类型转换成int*(地址),就是0x 00 00 00 06 , a和a+1差了一个字节，此时ptr2的位置在
//01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00
//  ^
//ptr2是整形指针，解引用访问四个字节，也就是：
//00 00 00 02
//倒着读就是0x 02 00 00 00，也就是2


//ptr1输出
//prt[-1] == *(ptr + -1) == *(ptr-1)  ptr1的位置在
//01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00
//                                              ^
//ptr是整形指针，ptr-1解引用就是向前挪动4个字节
//01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00
//                                    ^
//从这个位置解引用，访问4个字节，也就是04 00 00 00
//由于是小端存储，还原回来就得倒着读就是0x 00 00 00 04 就是 4






//指针笔试题5：

//#include <stdio.h>
//
//int main()
//{
//	int a[3][2] = { (0,1),(2,3),(4,5) };
//
//	int* p;
//	p = a[0];
//
//	printf("%d\n",p[1]);
//
//	return 0;
//}

//数组里面是逗号表达式,三个逗号表达式结果是1,3,5 ;这个数组开辟了6块空间,但只初始化了3块空间(1,3,5),
//剩下的没有初始化就为0，相当于a[3][2] = {{1,3},{5,0},{0,0}}

//a[0]就是第一行的数组名,数组名就是首元素地址,放进p，打印p[0]，p[0]就是等于p+0括号括起来解引用 == *(p+0)





//指针笔试题6:

//#include <stdio.h>
//
//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p , %d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//
//	return 0;
//}

//先找到a[4][2],比较简单
//[][][][][] [][][][][] [][][][][] [][][][][] [][][][][]
//[4][2]就是第五行第三个元素
//[][][][][] [][][][][] [][][][][] [][][][][] [][][*][][]
//   a[0]       a[1]       a[2]       a[3]        a[4]



//然后找p[4][2]在哪
//p = a,把a的首元素地址放到P里面,也就是二维数组a[5][5]的第一行a[5]
//p指向的位置是
//[][][][][] [][][][][] [][][][][] [][][][][] [][][][][]
//^
// 
//因为p是指向整形数组的指针,数组指针类型是int(*)[4]，+1就是跳过4个字节
//如果数组指针类型是int(*)[5],那就是跳过5个字节,相当于+1跳过一个数组指针类型
//p[4]的位置是
//[][][][][] [][][][][] [][][][][] [][][][][] [][][][][]
//       ^        ^        ^        ^
//      p[1]     p[2]     p[3]     p[4]
//      p+1      p+2      p+3      p+4   

//p[4][2] 等价于 p先加上一个4再解引用,再+2整体括起来再解引用 == *(*(p+4)+2)
//p+4跳过4个数组指针类型(也就是加一个数组)，解引用后得到的是数组的首元素地址(这个位置的数组名),再+2就是加两个int
//p[4][2]的位置是:
//[][][][][] [][][][][] [][][][][] [][][][*][] [][][][][]
//                                       ^

//a[4][2]的位置是:
//[][][][][] [][][][][] [][][][][] [][][][][] [][][*][][]
//                                                 ^

//&p[4][2] - &a[4][2]   
//指针与指针相减，得到的是指针与指针之间的元素个数
// 打印%p：得-4，-4打印%p就是打印补码的直接值,-4转成补码是11111111 11111111 11111111 11111100
//打印%d就是直接打印出来,打印%p就是打印地址，地址是无符号数，打印出来是0xFFFFFFFC





//指针笔试题7：

//#include <stdio.h>
//
//int main()
//{
//	int arr[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	int* ptr1 = (int*)(&arr + 1);
//	int* ptr2 = (int*)(*(arr + 1));
//
//	printf("%d %d\n", *(ptr1 - 1), *(ptr2 - 1));
//
//	return 0;
//}

//*(ptr+1) == *(arr+1) == arr[1] ==ptr[1]
//虽然是写成数组的形式，但是编译器依然会把ptr[1]转换成ptr+1的形式进行计算

//首先二维数组里没有大括号区分，但是会自动存储进二维数组里面
//相当于arr[2][5] = {{1,2,3,4,5},{6,7,8,9,10}};

//ptr1 取地址arr加一(&arr+1)取的是整个地址，类型是数组指针类型，放到int*里面会警告,所以强制类型转换成int*放到int*里,
//此时取地址加一就是加整个地址,此时ptr1的位置为:
//[1][2][3][4][5] [6][7][8][9][10]
//                               ^
//ptr1-1，由于是整形指针，所以-1减去一个整形

//ptr2 arr是首元素地址,二维数组首元素地址是第一行，加一是跳过一行，此时ptr2的地址是
//[1][2][3][4][5] [6][7][8][9][10]
//                ^
//*(arr+1) == arr[1] 等于arr的数组名 等于第二行首元素的地址
//*(arr+1)其实不需要强转成(int*)，因为*(arr+1)是6，6的地址类型本身就是int*
//ptr2-1，由于是整形指针，所以-1减去一个整形







//指针笔试题8：
//
//#include <stdio.h>
//
//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//
//	char** pa = a;
//
//	pa++;
//
//	printf("%s\n", *pa);
//
//	return 0;
//}


//char* p = "abcdef";	p指针存储的是常量字符串abcdef里a的地址

//同理，a[]里存储的是首元素的地址,也就是work的地址，

//int *pa+1 等于pa跳过一个int类型的地址,
//char**pa+1等于pa跳过一个char*类型的地址

//a[]里有三个常量字符串,每个常量字符串都是以首元素地址存储的
//a[]里存的就是'w','a','a'的地址，存进去的类型是char*

//pa++就是跳过一个char*，也就是at




//笔试题目9 ：

//#include <stdio.h>
//
//int main()
//{
//	char* c[] = { "ENTER","NEW","POINT","FIRST" };
//	char**cp[] = { c + 3,c + 2,c + 1,c };
//	char***cpp = cp;
//
//	printf("%s\n", **++cpp);
//	printf("%s\n", *--*++cpp+3);
//	printf("%s\n", *cpp[-2]+3);
//	printf("%s\n", cpp[-1][-1]+1);
//
//	return 0;
//}


//内存图
//cpp			cp			c
//char***		c+3			"ENTER"
//				c+2			"NEW"
//				c+1			"POINT"
//				c			"FIRST"



//#include <stdio.h>
//
//int main()
//{
//	int a = 10;
//	printf("%d\n", ++a);
//	printf("%d\n", a + 10);
//	printf("%d\n\n", a + 10);
//
//	printf("%d\n", sizeof(a++));
//	printf("%d\n", a);
//
//	return 0;
//}
//printf里面的++a或者a++都是进行实际运算的,但是a+10不是实际运算
//sizeof里的运算不是实际运算的，不管是a++/++a还是 a+10









//初级指针章节作业：




//#include <stdio.h>
//
//int main()
//{
//	unsigned long pulArray[] = { 6,7,8,9,10 };
//	unsigned long* pulPtr;
//
//	pulPtr = pulArray;
//	*(pulPtr + 3) += 3;
//
//	printf("%d,%d\n", *pulPtr, *(pulPtr + 3));
//
//	return 0;
//}


//pulPtr存放pulArray首元素地址，也就是6
//*（pulPtr+3)+=3  就是 *(pulPtr+3) = *(pulPtr+3)+3 ,就是把解引用pulPtr+3的那个元素加三再赋回给*(pulPtr+3)
//也就是把9+3的值赋给*(pulPtr+3)也就是第四个元素9 ，第四个元素最后等于12






//二级指针也是指针，是用来存放一级指针的地址的，不是用来存放数组的地址的,而且不会比一级指针更大,大小是4/8个字节

//指针减去指针得到的是指针和指针之间的元素个数

//指针可以比较大小





//写一个函数，能够逆序字符串的内容

//#include <stdio.h>
//#include <string.h>
//
//void test(char* arr, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//
//	while (left <= right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[256] = { 0 };
//	scanf("%s", arr);
//
//	int sz = strlen(arr);
//
//	test(arr, sz);
//
//	printf("%s\n", arr);
//
//	return 0;
//}


//字符串求元素个数可以用strlen,遇到\0停止,sizeof的话会把\0也算进去,原本6个元素，sizeof输出是7
//字符数组可以用sizeof,不能用strlen,字符数组



//上面代码用指针实现

//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//
//void test(char arr[])
//{
//	assert(arr!=NULL);
//	//也可以assert(arr),意思是一样的，我猜的
//
//	char* left = arr;
//	int len = strlen(arr);
//	char* right = left + len-1;
//
//	while (left <= right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[254] = { 0 };
//
//	//scanf("%s", arr);
//	//如果传"hello bit"过去，只会输出olleh,因为scanf遇到空格就不会读取了
//	//所以可以用gets,gets就是读取一行的意思
//
//	gets(arr);
//
//	test(arr);
//
//	printf("%s\n", arr);
//
//	return 0;
//}





//编程题：计算求和

//题目内容 求Sn = a+aa+aaa+aaaa+aaaaa的前五项之和,其中a是一个数字
//例如：2+22+222+2222+22222

//#include <stdio.h>
//
//int test(int* pa,int sum)
//{
//	int count = 0;
//	int digital = 1;
//	int base = *pa;
//
//	while (count < 4)
//	{
//
//		digital *= 10;
//		*pa += (base * digital);
//		sum += *pa;
//		count++;
//	}
//	return sum;
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//
//	int sum = a;
//
//	int ret = test(&a,sum);
//
//	printf("%d\n", ret);
//
//	return 0;
//}



//鹏哥写的
//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d %d", &a, &n);
//
//	int ret = 0;
//	int sum = 0;
//	int i = 0;
//
//	for (i = 0; i < n; i++)
//	{
//		ret = ret * 10 + a;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}









//题目：求0-100000的所有水仙花数(自幂数)
//水仙花数：这个数是几位数，n就是几,每一位的n次方之和等于这个数，这个数就是水仙花数
//eg:153   1^3 + 5^3 + 3^3 = 153

//#include <stdio.h>
//
//int num_t(int i)
//{
//	int count = 0;
//	while (i > 0)
//	{
//		i /= 10;
//		count++;
//	}
//	return count;
//}
//
//int mul(int n, int num)
//{
//	int l = 0;
//	int result = 1;
//	for (l = 0; l < num; l++)
//	{
//		result *= n;
//	}
//	return result;
//}
//
//int main()
//{
//	int i = 0;
//
//	for (i = 0; i < 100000; i++)
//	{
//		int sum = 0;
//		int num = num_t(i);	  //这个函数的作用是求这个数是几位数
//
//
//		int j = 0;			//这里的作用是把每一位给取出来,如752,把7 5 2分别取出来
//		int ret = i;
//		for (j = 0; j < num; j++)
//		{
//			int n = ret % 10;
//			ret /= 10;
//
//			int p = mul(n, num);
//			sum += p;
//
//		}
//		if (sum == i)
//		{
//			printf("%d\n", sum);
//		}
//	}
//
//	return 0;
//}




//pow( 3,5 )， pow是一个数学函数,可以计算次方，要引<math.h>的头文件,例子是3的5次方的意思
//如果是pow(5,3),那就是5的3次方
//pow返回的是一个double型的数字,所以应该用double接收,或者强制类型转换

//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//	int a = 5;
//
//	int ret = pow(a, 3);
//
//	printf("%d\n", ret);
//
//	return 0;
//}















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










//进阶第五章：动态内存管理

//导航：
//为什么会存在动态内存分配
//动态内存函数的介绍：malloc  free  calloc  realloc
//常见的动态内存错误
//几个经典的笔试题
//柔性数组





//为什么会存在动态内存分配：

//我们已经掌握的内存的使用方式(内存的开辟方式)：

//1.创建一个变量
//int a = 10;  局部变量 - 栈区
//int g_a = 10; 全局变量 - 静态区

//三大区：栈区，堆区，静态区
//栈区里存放：局部变量，函数的形式参数
//堆区：动态内存分配,malloc,free,calloc,realloc
//静态区：全局变量，静态变量


//2.创建一个数组
//int arr[10]
//局部变量的数组放在栈区里，全局变量的数组放在静态区里


//当前这两种方式不能满足我们想创建多大空间就创建多大空间的需求
//所以出现了动态内存分配

//上面两种开辟空间的方式有两个特点：
//1.空间开辟大小是固定的
//2。数组在申明的时候，必须指定数组的长度，它所需要的内存在编译时分配


//但是对于空间的需求，不仅仅是上述的情况。有时候我们需要的空间大小在程序上运行的时候才知道，
//那数组编译时开辟空间的方式就不能满足了。这时候只能试试动态内存开辟了
//动态内存分配是在堆上申请空间的

//之前写的通讯录，一开始就开辟了1000个空间，但如果我只有三个好友，那997个空间就浪费了
//通过学习动态内存分配，可以实现想增加一个单位就增加一个单位，避免浪费提高效率





//动态内存函数

//malloc
//向内存申请空间
//MSDN：void* malloc( size_t size );
//需要引<stdlib.h>的头文件


//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <errno.h>
//
//int main()
//{
//	//malloc向内存申请一块连续可用的空间，并且返回这块空间的起始地址,这就是动态内存开辟
//	int* p = (int*)malloc(10 * sizeof(int));
//	//malloc返回的起始地址类型是void*,开辟的是10个int，就强转int*并用int*接收
//	//返回值的类型是void*,所以malloc函数并不知道开辟空间的类型，具体在使用的时候使用者自己来决定
//
//	//当正常开辟成功会返回开辟空间的起始地址的指针，如果没有足够内存，会返回NULL(空指针),也就是开辟失败了
//	//如果把10*sizeof(int)改成10*INT_MAX,就会报错,因为内存太大了，没有足够的空间开辟
//	//因此malloc函数的返回一定要做检查
//
//	if (p == NULL)
//	{
//		//如果开辟空间失败，打印错误信息
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p+i));
//		}
//	}
//
//	//当动态申请的空间不再使用的时候
//	//就应该还给操作系统
//	//C语言提供了另外一个函数free,专门用来做动态内存的释放和回收的
//	//free()
//
//	free(p);
//	//就算没有free,当代码的生命周期结束的时候，也会返还内存给操作系统
//	//free是主动释放动态内存空间
//	//当p被free释放完了之后，仍然可以通过p找到这块空间，
//	//如果想让p彻底断了的话,free完之后要置空NULL
//	//malloc和free要成对使用，你要有malloc,就得要有free
//
//	return 0;
//
//}

//free函数用来释放动态开辟的内存，free一定是free堆区上的空间
//如果参数ptr指向的空间不是动态开辟的，那free函数的行为是未定义的。像数组这种是不需要free的
//如果参数ptr是NULL指针，则free函数什么事都不会做








//calloc
//作用是开辟空间并且把元素初始化为0
//MSDN：void* calloc(size_t num, size_t size);
//num是几个元素的意思，size是元素的大小，单位是字节
//开辟内存大小的结果是num*size  比如calloc(10,3),就是开辟30个字节

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <errno.h>
//
//int main()
//{
//	//开辟10个int大小的空间
//	//malloc(10*sizeof(int));
//	//calloc(10, sizeof(int));
//	//malloc和calloc的区别：使用上不同，还有就是calloc会初始化空间为0，malloc不会
//	//malloc效率更高一些，因为不用初始化，开辟好空间就把起始地址返回回来了
//
//	int* p = (int*)calloc(10, sizeof(int));
//
//	int i = 0;
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p+i));
//		}
//	}
//
//
//	free(p);
//	p = NULL;
//
//	return 0;
//}









//realloc
//MSDN：void *realloc( void *ptr, size_t size );
//ptr是要调整的内存地址
//size是调整之后新的大小
//返回值为调整之后的内存起始位置
//这个函数调整原内存空间大小的基础上，还会将原来内存中的数据移动到新的空间
//realloc在调整内存空间时存在两种情况：
//情况1：原空间后面有足够大的空间
//情况2：原空间后面没有足够大的空间

//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//#include <errno.h>
//
//int main()
//{
//	int* p = (int*)calloc(20,1);
//
//
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 5; i++)
//		{
//			*(p + i) = i;
//		}
//
//		for (i = 0; i < 5; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	printf("\n");
//	//在使用malloc开辟的20个字节空间
//	//假设这里，20个自己二不能满足我们的使用了
//	//希望我们能够有40个字节的空间
//	//这里就可以使用realloc来调整动态开辟的内存
//
//
//	//当用realloc在栈区中追加一定的字节时，有两种情况：
//	// 1.一种情况是malloc/calloc开辟的字节空间，后面还有足够的空间可以追加,因为内存里面的数据是连续存储的，
//	//如果往一个已经开辟好的空间追加,就要考虑后面空间够不够的情况,够就往后追加,并且返回原来的地址
//
//	//2.如果后面空间不够，强行追加字节，就会造成非法访问的情况，所以realloc会重新开辟一块空间，并且把原来的
//	//元素内容给拷贝到新空间里面，既然开辟了新的空间，那就会返还新的内存空间的地址回来,原内存空间就释放掉了
//
//
//	int* p2 = realloc(p, 40);
//	//这里不能写成int* p = realloc(p,40),因为如果往后追加空间不够，就会创建新空间，原内存空间p会被释放
//	//所以不能写p
//	//如果realloc开辟失败了，就会返回NULL，并且原空间开辟的内存会被释放掉
//  //realloc不管是开辟成功还是开辟失败，原空间都会被释放掉
//
//	//所以为了防止追加失败，原内存还被释放掉的情况出现
//	//就要这样写，当开辟不成功时，NULL就会赋给p2,开辟成功了，再把p2赋回给p
//	if (p2 != NULL)
//	{
//		p = p2;  //这里p,p2只是一个指针，大小只占4/8字节，不会太大
//
//		int i = 0;
//		for (i = 5; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	free(p);
//	p = NULL;
//
//	return 0;
//}


//realloc函数的出现让动态内存管理更加灵活
//有时我们会发现过去申请的空间太小了，有时候我们又会觉得申请的空间太大了，那为了合理的使用内存，
//我们一定会对内存的大小做灵活的调整。那realloc函数就可以做到对动态开辟内存大小的调整。









//常见的动态内存错误


//1.对NULL指针的解引用操作

//#include <stdio.h>
//
//int main()
//{
//	int* p = (int*)malloc(20);
//	//万一malloc失败了，p就被赋值为NULL空指针，所以malloc一定要进行返回值的判断
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 0;
//	}
//}



//2.对动态开辟空间的越界访问

//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int* p = (int*)malloc(20);
//
//	if (p == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		int i = 0;
//
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//	}
//
//	free(p);
//	p = NULL;
//	//free一定是free堆区上的空间
//
//	return 0;
//}




//realloc也可以单独使用开辟内存

//int* p = realloc(NULL, 40);   //这种写法等价于mallic(40)
//但是第一个参数要给NULL;
//单独使用realloc开辟的空间也是未初始化的

//#include <stdio.h>
//#include <stdlib.h>
//#include <errno.h>
//
//int main()
//{
//	int* p = realloc(NULL, 40);
//
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//
//	int i = 0;
//	
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//
//	free(p);
//	p = NULL;
//
//	return 0;
//}


//3.对非动态开辟内存使用free释放

//void test()
//{
//	int a = 10;
//	int* p = &a;
//	free(p);
//}



//4.使用free释放一块动态开辟内存的一部分

//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int* p = (int*)malloc(40);
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*p++ = i;
//	}
//
//	free(p);
//	p = NULL;
//	//为什么会报错？因为p++，p已经改变了，后面的内存不是动态开辟的，
//	//经过一轮循环，p已经指到最后去了，free应该是释放动态内存p开辟的起始位置
//
//
//	return 0;
//}



//5.对同一块动态内存的多次释放

//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int* p = (int*)malloc(40);
//
//	if (p == NULL)
//	{
//		return 0;
//	}
//
//	free(p);
//	//...
//	p = NULL;
//
//	free(p);
//
//	return 0;
//}

//当动态内存空间被释放掉之后，那块空间就不是动态内存了，再free释放掉就会报错
//为了防止这种情况发生，free完了之后要及时置空NULL
//因为p置成NULL了之后，不小心再free也没事，free(NULL)不会进行任何的释放操作





//6.动态开辟内存忘记释放(内存泄露)

//#include <stdio.h>
//#include <stdlib.h>
//
//void test()
//{
//	int* p = (int*)malloc(100);
//	if (NULL!= p)
//	{
//		*p = 20;
//	}
//}
//
//int main()
//{
//	test();
//	//当test调用结束，你想要主动释放都释放不了，因为malloc是在函数里面开辟的，当函数调用结束时
//	//p是临时变量，出了函数p就销毁，就不知道p的地址在哪了，到时候想释放也释放不了
//	//解决办法有两种，1.在函数内部用完就释放   2.把p的地址返回去再释放
//	return 0;
//}

//malloc会开辟内存，一直开辟不释放内存就会爆满





//总结：忘记释放不再使用的动态开辟的空间会造成内存泄露。
//动态开辟的空间一定要释放，并且正确的释放









//动态内存经典笔试题
 


//笔试题1：下面代码有什么问题

//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello,world");
//	printf(str);  //这种写法没问题，等价于printf("%s",str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//1.运行代码程序会出现崩溃的现象
//2.程序存在内存泄露的问题
//str以值传递的形式给p
//p是GetMemory函数的形参，只能函数内部有效
//等GetMemory函数返回之后，动态开辟内存尚未释放
//并且无法找到，所以会造成内存泄露




//把上面代码改成正确的代码:


//方法1:

//#include <stdio.h>
//#include <stdlib.h>
//
//void GetMemory(char** p)  //2.str本身是指针，把指针的地址传过来，那就要用二级指针接收
//{
//	*p = (char*)malloc(100);
//	//3.把这个二级指针解引用才能找到p所指向的内容str
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);  //1.把传值改成传址
//	strcpy(str, "hello,world");
//	printf(str);  
//
//	//4.开辟动态内存空间之后要释放
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}



//方法2：

//#include <stdio.h>
//#include <stdlib.h>
//
//char* GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//	return p;
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory(str);
//	strcpy(str, "hello,world");
//	printf(str);  //这种写法没问题，等价于printf("%s",str);
//
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}









//笔试题2：下面代码会输出什么结果
//返回栈空间地址的问题

//char* GetMemory(void)
//{
//	char p[] = "hello world"; //堆区
//	//static char p[] = "hello world";  //静态区
//	return p;
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}


//p是局部变量，在栈区上开辟的空间，当出了函数，就销毁了，接下来是谁在用这块内存是未知的，
//如果访问就是非法访问，打印出来就是随机值,在char p[]上加上static就能成功运行







//#include <stdio.h>
//
//int* test()
//{
//	int* ptr = malloc(100);
//	return ptr;
//}
//
//int main()
//{
//	int* p = test();
//
//	return 0;
//}

//这样写也没问题，malloc开辟的空间不会随着栈区的销毁而销毁，malloc没有free就不会释放
//因为malloc是在堆区上开辟空间的，把开辟空间的地址返回去就没事
//但是ptr会被销毁掉,ptr所指向的100个字节的空间没有销毁
//100个字节的空间的地址通过ptr返回最终放到p里面去了





//笔试题3：下面代码有什么问题

//#include <stdio.h>
//#include <stdlib.h>
//
//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}


//没有free,存在内存泄露






//笔试题4：以下代码输出什么

//#include <stdio.h>
//#include <stdlib.h>
//
//void Test(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str); //free释放str指向的空间后，并不会把str置为NULL；
//	//当free(str)之后，没有置空，str就会变成野指针
//
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}
//
//int main()
//{
//	Test();
//
//	return 0;
//}

//申请的动态内存提前释放了，释放后的空间再次被访问就会出现非法访问









//c/c++程序的内存开辟

//内存中有内核空间，栈区，内存映射段，堆区，静态区(数据段)，代码段
//内核空间是给操作系统使用的，剩下的内存留给用户使用

//局部变量在栈上开辟空间，动态内存在堆上开辟空间，静态变量和全局变量在静态区开辟空间
//char* arr[] = "abcdef"   常量字符串放在代码段里，代码段里的数据是不能改的


//C/C++程序内存分配的几个区域：
//1.栈区(stack):在执行函数时，函数内局部变量的存储单元都可以在栈上创建，
//函数执行结束时这些存储单元自动被释放。栈内存分配运算内置于处理器的指令集中，效率很高，
//但是分配的内存容量有限。栈区主要存放函数而分配的局部变量.函数参数.返回数据.返回地址等

//2.堆区(heap):一般由程序员分配释放，若程序员不释放，程序结束时可能由OS(操作系统)回收。
//分配方式类似于链表

//3.数据段(静态区)(static)：存放全局变量，静态数据。程序结束后由系统释放。

//4.代码段：存放函数体(类成员函数和全局函数)的二进制代码。



//实际上普通的局部变量是在栈区分配空间的，栈区的特点是在上面创建的变量出了作用域就销毁。
//但是被static修饰的变量存放在数据段(静态区)，数据段的特点是在上面创建的变量，直到程序结束时才销毁，
//所以生命周期变长










//柔性数组(flexible array)
//C99中，结构中最后一个元素允许是未知大小的数组，这就叫做[柔性数组]成员
//结构体中柔性数组成员前面必须至少一个其他成员

//#include <stdio.h>
//#include <stdlib.h>
//
//struct S
//{
//	int n;
//	int arr[]; //是数组的最后一个元素，而且是未指定大小，未知大小的，这是其中一种写法，另一种是arr[0],一样的
//	//这种就叫做柔性数组成员,为什么叫柔性数组呢，因为数组的大小是可以调整的
//};
//
//int main()
//{
//	struct S s = { 0 };
//	
//	printf("%d\n", sizeof(s));
//	//在计算结构体大小的时候，不计算柔性数组成员的大小;
//
//	//如何调整柔性数组的大小？
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 5 * sizeof(int));
//
//	ps->n = 100;
//
//	//给柔性数组赋值
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;
//	}
//
//	//如果柔性数组不够大，那就扩大
//	struct S* ptr = (struct S*)realloc(ps, 44);
//
//	//由于用了realloc,就需要返回值判断
//	if (ptr != NULL)
//	{
//		ps = ptr;
//	}
//
//	//给扩大后的柔性数组赋值
//	for (i = 5; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//
//	//打印扩大后而且赋值后的柔性数组
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//
//	//malloc开辟的空间以后可以用realloc调整，所以这个数组是可变的
//
//	free(ps);
//
//	return 0;
//}




//用指针来模拟柔性数组：

//#include <stdio.h>
//#include <stdlib.h>
//
//struct S
//{
//	int n;
//	int* arr;
//};
//
//int main()
//{
//	struct S* ps = (struct S*)malloc(sizeof(struct S));
//  //结构体在定义的时候不会分配内存，在创建变量的时候才会分配空间
// 
//	ps->arr = (struct S*)malloc(5 * sizeof(int));
//
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;
//	}
//
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	printf("\n");
//
//
//
//	//调整数组大小
//	int* ptr = (int*)realloc(ps->arr, 40);
//	
//	if (ptr != NULL)
//	{
//		ps->arr = ptr;
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//
//
//	//释放内存
//	free(ps->arr);
//	ps->arr = NULL;
//	free(ps);
//	ps = NULL;
//	//先释放ptr再释放ps,不然先释放ps的话就找不到ps-arr了，ps->arr就释放不了造成内存泄露
//
//	return 0;
//}


//以上两种写法都能做到n后面有一块空间是可大可小的，区别在于第一种写法n和arr是连续存储的，
//第二种写法是用指针指向另一块空间,当内存是连续存放时，访问效率会更高
// 
// 存储结构：寄存器，cache(高速缓存),内存，硬盘,越往上速度越快，但是空间会越小
// 
//第一种只malloc了一次，结尾只用释放一次内存，第二种malloc了两次，需要释放两次,容易造成错误
//第二种情况开辟了两块空间，malloc用的越频繁，内存碎片出现的概率会越大
//第一种实现方式相对于第二种内存碎片要更少

//柔性数组的好处：1.方便内存释放，2.这样有利于访问速度












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
//这种就是用ASCII码值存储                          1         0       0        0         0



//测试代码
//#include <stdio.h>
//
//int main()
//{
//	int a = 10000;
//
//	FILE* pf = fopen("test.txt", "wb"); 
//	//fopen：打开文件   test.txt:打开一个test.txt
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
//从内存像磁盘输出数据会先送到内存中的缓冲区，装满缓冲区后才一起送到磁盘上。
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








//最后一章节！：程序环境和C语言预处理

//本章重点：
//程序的翻译环境
//程序的执行环境
//详解：C语言程序的编译+链接
//预定义符号介绍
//预处理指定#define
//宏和函数的对比
//预处理操作符#和##的介绍
//命令定义
//预处理指令#include
//预处理指令#undef
//条件编译




//程序的翻译环境和执行环境

//程序有两个环境：一个叫翻译环境一个叫执行环境
//在ANSIC的任意一种实现中，存在两个不同的环境
//第一种是翻译环境，在这个环境中源代码被转换为可执行的机器指令。 .c----->.exe
//第二种是执行环境，它用于实际执行代码


//C代码(文本文件)   编译   链接       二进制的信息（二进制文件）       运行
//test.c--------------------------->test.exe-------------------------->
//源文件(源程序)      (翻译环境)                           (运行环境)



//每一个源文件都会经过编译器单独进行处理，比如test.c和add.c这两个源文件会单独进行处理
//通过编译器处理后会分别生成目标文件.obj
//所有的目标文件通过链接器处理，再加上链接库，就会生成可执行程序
//编译器处理编译，链接器处理链接
//链接器同时也会引入标准C函数库中任何被该程序所用到的函数，而且它可以搜索程序员个人的程序库，
//将其需要的函数也链接到程序中


//编译再细分就有三个阶段：1.预编译(预处理)  2.编译  3.汇编
       
//预编译把test.c翻译成test.i
//预编译里面有三个操作：1.头文件的包含(#include)   2.注释删除(注释会用空格替换)  3.#define替换
//预编译里的操作都是文本操作


//编译把test.i(C代码)翻译成test.s,也就是翻译成汇编代码

//汇编把test.s翻译成test.o(就是.obj目标文件),
//也就是把汇编代码转换成了二进制指令

//在汇编阶段会形成各自文件的符号表，符号表里有符号和地址

//目标文件经过链接器链接，最终生成可执行文件.exe

//链接会做的两件事：1.合并段表  2.符号表的合并和重定位

//链接期间要进行合并段表和符号表的合并和重定位，如果出问题就会出现链接错误问题

//调试代码的时候调试的是.exe文件


//预编译(预处理)详解


//预定义符号
//预定义符号不是自己定义的，而是语言内置的
//#define不是预定义符号


//__FILE__		//进行编译的源文件
//__LINE__		//文件当前的行号
//__DATE__		//文件被编译的日期
//__TIME__		//文件被编译的时间
//__STDC__		//如果编译器遵循ANSI C，其值为1，否则未定义
//__FUNCTION__	//获取函数名

//预定义符号远不止以上这些



//#include <stdio.h>
//
//int main()
//{
//	printf("%s\n", __FILE__);	//打印出来是文件的绝对路径
//	printf("%d\n", __LINE__);
//	printf("%s\n", __DATE__);
//	printf("%s\n", __TIME__);
//	printf("\n\n");
//
//	//可以用来写日志
//
//	int arr[10] = { 0 };
//	FILE* pf = fopen("text.txt", "w");
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//		fprintf(pf, "file:%s line:%d date:%s time:%s i:%d \n",
//			__FILE__, __LINE__, __DATE__, __TIME__, i);
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//
//
//	return 0;
//}
 






//预处理指令 - #开头的都叫预处理指令

//#define
//#undef
//#include
//#pragma pack(4)
//#pragma pack()
//#if
//#endif
//#ifdef
//#line



//#define - 定义标识符

//#define后面不要加分号;

//#include <stdio.h>
//
//#define MAX 100
//#define STR "haha"	 //#define还可以定义字符串
//#define reg register //#define还可以定义符号
//#define do_forever for(;;)	//#define还可以定义代码
//
//int main()
//{
//	//在预编译的时候就会把max给替换成MAX的值
//	int max = MAX;
//
//	printf("%d\n", max);
//
//	printf("%s\n", STR);
//
//	reg int a = 10;
//	//相当于register int a = 10;
//
//	do_forever;
//
//	//do_forever  //这样写就会直接结束不会循环
//	//因为for(;;) 相当于
//	// for(;;)
//	//{
//	//	return 0;
//	//}
//
//	return 0;
//}






//#define - 定义宏

//#define机制包括了一个规定，允许把参数替换到文本中，
//这种实现通常称为宏(macro)或者定义宏(define macro)

//下面是宏的申明方式：
//#define name(parament-list)stuff ,其中的parament-list是一个由逗号隔开的符号表，
//它们可能出现在stuff中。
//注意：参数列表的左括号必须与name紧邻。
//如果两者之间有任何空白存在，参数列表就会被解释为stuff的一部分


//#include <stdio.h>
//
//#define SQUARE(x) x*x
//#define TWICE(a) a+a
//
//int main()
//{
//	//演示：SQUARE
//
//	int ret = SQUARE(5);  //SQUARE(5) == 5*5
//
//	printf("%d\n", ret);
//
//
//	//有一个小问题
//	ret = SQUARE(5 + 1); 
//	printf("%d\n", ret);
//	//如果我想计算6的平方，那结果应该是36，但是结果却是11？
//	//因为宏定义不是传参，而是直接替换，实际过程应该是5+1 * 5+1 = 5+5+1=11
//	//因为替换改变了原来想法的运算顺序，那解决办法就是把SQUARE(x) x*x 改成 SQUARE(x) (x)*(x)
//
//
//
//
//	//演示：ADD
//	ret = 10 * TWICE(5);
//	printf("%d\n", ret);
//	//结果是55，因为宏定义会替换,实际运算过程就是10*5+5
//	//如果宏改成TWICE(x) (x)+(x)  ,结果依然是55，
//	//把宏改成TWICE(X) ((x)+(x))  ,这样才是想要的结果
//	//写宏定义的时候不用吝啬使用括号
//
//
//	return 0;
//}

//以后简单的函数都可以用宏定义来实现了



//1.宏定义不能实现递归
//2.宏不会替换字符串里的内容  比如printf("MAX = %d");  里面的MAX不会被替换
//3.宏不会替换宏参数前带#的宏参数





//在宏定义中插入字符串

//#include <stdio.h>
//
//#define print(x) printf("the value of "#x" is %d\n",x)
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	print(a);  //等于printf("the value of "a" is 10\n");
//	print(b);  //等于printf("the value of "b" is 20\n");
//
//	//宏参数前面出现#号是不会替换的，而是转换成对应的字符串
//
//	return 0;
//}






//带副作用的宏参数

//当宏参数在宏的定义中出现超过一次的时候，如果参数带有副作用，那么你在使用这个宏的时候就可能出现
//不可预知的后果。副作用就是表达式求值的时候出现的永久性效果。

//例如：
//x+1  不带副作用
//x++  带有副作用


//MAX宏可以证明具有副作用的参数引起的问题

//如果是函数，不会出现像宏的副作用的问题

//#include <stdio.h>
//
//#define MAX(x,y) (x>y)?(x):(y)
//
//int main()
//{
//	int a = 10;
//	int b = 11;
//
//	int max = MAX(a++, b++);
//	//等于int max = MAX(a++,b++) (a++>b++)?(a++):(b++)
//
//	printf("MAX = %d\n", max);
//	printf("a = %d\n", a);
//	printf("b = %d\n", b);
//
//	return 0;
//}






//宏和函数之间的关系

//#include <stdio.h>
// 
////函数
//int Max(int x, int y)
//{
//	return (x > y ? x : y);
//}
// 
////宏
//#define MAX(x,y) (x>y?x:y)
//
//int main()
//{
//	float a = 3.0f;
//	float b = 4.0f;
//
//	int max1 = 0; 
//	int max2 = 0;
//
//	max1 = MAX(a, b);
//	max2 = Max(a, b);
//
//	printf("max1 = %d\nmax2 = %d\n", max1, max2);
//	//在这个代码下宏比函数要好，如果我传浮点数进去，但是函数的返回类型是int,会造成问题
//	//但是在宏定义下面仅仅只是替换，不会在乎传进去的值是什么类型，可以接收不同的数据,但是不够严谨
//
//
//	return 0;
//}


//为什么不用函数来完成这个任务？原因有二：
//1.用于调用函数和从函数返回的代码可能比实际执行这个小型计算工作所需要的时间更多。
//所以宏比函数在程序的规模和速度方面更胜一筹
//2.更为重要的是函数的参数必须声明为特定的类型。所以函数只能在类型合适的表达式上使用。
//反之这个宏可以适用于整型，长整型，浮点型等。宏是无关类型的

//缺点：
//1.每次使用宏的时候，一份宏定义的代码将插入到程序中。除非宏比较短，否则可能大幅度增加程序的长度。
//因为每调用一次宏，都会对代码进行替换，假如这个宏有100行，调用3次，就是300行，
//但是函数只调用同一份代码

//2.宏是没法调试的，因为调试的是.exe可执行文件，宏在预编译阶段就已经替换了

//3.宏不能递归

//4.宏由于类型无关，也就不够严谨

//5.宏可能会带来运算符优先级的问题，导致过程容易出错





//宏有时候可以做到函数做不到的事情。比如：宏的参数可以出现类型，但是函数做不到
//举例：

//#include <stdio.h>
//
//#define SIZE(type) sizeof(type)
//
//int main()
//{
//	int ret = SIZE(int);  //此时已经被替换成ret = sizeof(int)
//
//	printf("%d\n", ret);
//
//	return 0;
//}



//或者

//#include <stdio.h>
//
//#define MALLOC(num,type) (type*)malloc(num*sizeof(type))
//
//int main()
//{
//	//int* pf = (int*)malloc(10 * sizeof(int));
//	//这是传统的开辟内存方式
//
//	int* pf = MALLOC(10, int);
//	//这样写就方便很多，函数是不能这样实现的，因为函数不能传类型
//
//	return 0;
//}



//宏名一般全部大写，函数一般不全部大写





//#undef - 移除宏

//如果现存的一个名字需要被重新定义，那么它的旧名字首先要被移除

//#include <stdio.h>
//
//int main()
//{
//	int a = MAX;
//#undef MAX
//
//	int b = MAX;
//
//	return 0;
//}







//条件编译

//在编译一个程序的时候我们如果要将一条语句(一组语句)编译或者放弃是很方便的。
//因为我们有条件编译指令

//比如说：调试性的代码，删除可惜，保留又碍事，所以我们可以选择性的编译

//条件编译也是在预编译阶段进行处理


//#include <stdio.h>
//
////#define TEST
//
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = 0;
//
//#ifdef TEST  //意思是如果#define了TEST,那就执行，没定义就不执行
//		printf("%d ", arr[i]);
//#endif
//	}
//	//#ifdef 和 #endif是一对，需要呼应起来
//	return 0;
//}





//多个分支的条件编译

//#if 常量表达式
//#elif 常量表达式
//#else 
//#endif

//#include <stdio.h>
//
//int main()
//{
//#if 1==2
//	printf("haha\n");
//#elif 2=2
//	printf("hehe\n");
//#else
//	printf("嘿嘿\n");
//#endif
//	
//	return 0;
//}




//if !defined 和 ifndef 

//#include <stdio.h>
//
//int main()
//{
//#if defined(TEST)
//	printf("hehe\n");
//#endif
//
//
//#if !defined(TEST)  //如果没有定义TEST的话就执行
//	printf("haha\n");
//#endif
//
//
//
//
//#ifdef(TEST)
//	printf("hehe\n");
//#endif
//
//
//#ifndef(TEST)      //如果没有定义TEST的话就执行
//	printf("haha\n");
//#endif
//
//	return 0;
//}







//文件包含

//我们已经知道，#include指令可以使另外一个文件被编译。就像它实际出现于#include指令一样。
//这种替换的方式很简单：预处理器先删除这条指令，并用包含文件的内容替换。
//这样一个源文件被包含10次，那就实际被编译10次


//#include <stdio.h>
//#include "add.h"

//本地文件""的查找策略：先在源文件所在目录下查找，如果该头文件未找到，编译器就像查找库函数头文件一样在标准位置查找头文件。
//如果都找不到就提示编译错误

//尖括号<>(库函数)的查找策略：查找头文件直接区标准路径下去查找，如果找不到就提示编译错误

//""的范围更大，会在本地目录查找也会在标准路径下去查找
//库函数也可以用""的形式包含，但是这样做效率就比较低,比较慢



//如何防止头文件被重复多次的包含？

//第一种方法
//#ifndef __TEST_H__    如果test.h没有被定义
//#define __TEST_H__    那就定义一个test.h的头文件

//int Add(int x,int y);

//#endif



//第二种方法
//在头文件里加上 #pragma once
//这是比较现代的写法




//用宏的方式实现offsetof

//#include <stdio.h>
//
//#define OFFSETOF(struct_name,member_name) (int)&(((struct_name*)0)->member_name)
////原本是要把结构体指针指向的那个成员的偏移量减去起始位置的偏移量，但是起始位置是0，减去0还是原来的值，
////所以没必要减去了
//
//struct S
//{
//	int c1;
//	char a;
//	double c2;
//};
//
//int main()
//{
//	struct S s;
//
//	printf("%d\n", OFFSETOF(struct S, c1));
//	printf("%d\n", OFFSETOF(struct S, a));
//	printf("%d\n", OFFSETOF(struct S, c2));
//
//	return 0;
//}


