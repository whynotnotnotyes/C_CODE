#define _CRT_SECURE_NO_WARNINGS 1



//一.分支(选择结构)和循环(循环结构)

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



