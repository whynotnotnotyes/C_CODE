#define _CRT_SECURE_NO_WARNINGS 1



//һ
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



////��.ö�ٳ���
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



//��.��������������ͨ��Ҫ���д
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



//��.����
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
//	strlen:��������ʲô�����ͻ��������λ����������������Ǹ������������Ĵ�С������strlen��a��������ľ���1��strlen��inta��������ľ���4��
//	 
//	int len = strlen("arr1");
//
//	printf("%d\n", len);
//
//	
//	char a = 'n';
//
//	printf("%s\n", a);



//��.ת���ַ�
// #include <stdio.h>
// 
//int main()
//{
//
//	  \n:�����ַ�,n����new����˼...��,Ӧ���ǻس�����˼
//	printf("%d\n", 100);
//	printf("%c\n", 'm');
//	printf("%s\n", "abcde");
//
//	  \:ת���ַ�;
//	printf("%c\n\n", '\'');
//	printf("%s\n\n", "'");
//	/*printf("\test\test\test  \n");
//	printf("\\test\\test\\test   \n\n");*/
//
//
//	  \t��ˮƽ�Ʊ��,�൱�ڴ�ո�;
//	printf("����\t\t����\n");
//
//
//	   \a:�����ַ����������Ի���һ�£�
//	printf("\a");
//
//
//	  \v����ֱ�Ʊ��
//	printf("\vop\vop\vop");
//
//
//
//
//	return 0;
//
//}



//��.��������
// #include <stdio.h>
// 
// 
//int main()
//{
//
//		printf˫����ԭ�ⲻ��������������Ǽ��˹ؼ��֣�����%d���ͻ�Ѷ��ź����ֵ����%d;
//	��
//	/*printf("%d\n\n", 8 * 7);
//	printf("7*8=%d\n\n", 8 * 7);*/
//
//	��
//	/*printf("8/2=%d\n\n", 8 / 2);*/
//
//	�Ӽ�
//	/*printf("7+2-9=%d\n\n", 7 + 2 - 9);*/
//
//	ȡ��
//	/*printf("7%2=%d", 7 % 2);*/
//
//}



//��.����۸�(low��)
// 
// #include <stdio.h>
//
//int main()
//{
//	int price = 0;
//
//	printf("�������Ԫ��:");
//   
//  &price��&��ȡ��ַ��
//	scanf("%d", &price);
//
//	int change = 100 - price;
//
//	printf(("Ӧ����%dԪ\n"), change);
//
//	return 0;
//
//}



//��.����������,ÿ��������Ҫ������ֵ������һ��ֵ����ȫ������
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




////����۸�medi�汾��
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
//	printf("������۸�");
//
//	scanf("%d", &price);
//
//	printf("������˿͸������Ǯ");
//
//	scanf("%d", &amount);
//
//	int yingzhao = amount - price;
//
//	printf("Ӧ�Ҹ���%dԪ", yingzhao);
//
//	return 0;
//}



//����۸�mide�汾2��
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
//	printf("������۸��Ʊ��");
//
//	scanf("%d %d", &price, &amount);
//
//	int yingzhao = amount - price;
//
//	printf("Ӧ������%dԪ", yingzhao);
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
//	printf("������۸��Ʊ��");
//
//	scanf("%d %d", &a, &b);
//
//	printf("%d-%d=%d", b, a, b - a);
//
//	return 0;
//
//
//}



//������ߣ�Ӣ��ת���ף�
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
//	printf("��������߼��߼���\n");
//
//	scanf("%lf %lf", &b, &c);
//
//	double  tall = (b + c / 12) * a;
//
//	��ס��һ�㣬scanf������%lf��printf������%f;
//	printf("��������%fcm\n", tall);
//
//	return 0;
//
//
//}



//����ʱ���1.
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
//	printf("����������ʱ��");
//
//	scanf("%d %d", &hour1,&min1);
//
//	scanf("%d %d", &hour2, &min2);
//	//  Сʱ*60��������ƣ�
//
//	int time = (hour2*60+min2)-(hour1*60+min1);
//
//	printf("ʱ�����%d����", time);
//
//	return 0;
//
//
//}



//����ʱ���2.
// 
// #include <stdio.h>
// 
//int main()
//{	
//	int hour1 = 0, min1 = 0;
//
//	int hour2 = 0, min2 = 0;
//
//	printf("����������ʱ��");
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
//	printf("%dʱ%d��", t / 60, t % 60);
//
//	return 0;
//
//}



//����ʱ���3.
//
#include <stdio.h>
//
//int main()
//{
//	int hour1 = 0, minute1 = 0;
//
//	int hour2 = 0, minute2 = 0;
//
//	printf("��������ʼʱ��");
//	scanf("%d %d", &hour1, &minute1);
//
//	printf("���������ʱ��");
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
//	printf("���%dСʱ %d����", time1, time2);
//
//	return 0;
//}



//���ϸ�ֵ
// 
// 
//
//  total += (sum + 100) / 2   ����   total = total + (sum + 100) / 2
//
//  total * = sum + 12  ����  total = total * (sum + 12);
//
//  total /= 12 + 6  ����  total / (12 + 6);



//�����ݼ������
//��++���͡�--����������������������������/*��Ŀ�����*/��������ӻ������Ǳ�����
//������������ֱ���������͵ݼ�����������ǵ����þ��Ǹ��������+1��-1��
//
// count++  ����  count+-  ����  count=count+1
//
//ǰ׺��׺
//++��--���Է��ڱ�����ǰ�棬����ǰ׺��ʽ��Ҳ���Է��ڱ����ĺ��棬������׺��ʽ�� 
//a++��ֵ�� a �� l ��ǰ��ֵ����++a ��ֵ�Ǽ��� l �Ժ��ֵ�������ĸ���a �Լ���ֵ������ l��
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


//����a++��++a����⡣���������a++��a֮ǰ��ֵ��++a��a������ֵ��������ô���˳����أ�a++  a��ǰ������a��֮ǰ��ֵ��++a   a�ں�������a֮���ֵ��
//����a++��֮���ֵ��a--��a֮ǰ��ֵ�أ�����Ҫ��ô����أ�ͬ���ģ�a����++�ˣ����˶���������a++��a�����ֵ����Ȼa++��֮���ֵ����ô++a����֮ǰ��ֵ�ˣ�
//���ԣ��������ǰ׺��׺˳��ĵ�������Ӱ��������ô��⣬����˵����������ʽ�ı任����Ӱ�������жϣ�����Ӱ��������֪�ģ�Ҳ��������������ʶ����Ĳ�����ʽ�����Ǿ��飬
//���������ۺ��ж�



//��������
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
//	c = a;  //��ʱc=6��
//
//	a = b;  //��ʱa=5��
//
//	b = c;  //��ʱb=6��
//
//	printf("a=%d b=%d\n", a, b);
//
//	return 0;
//
//
//
//}



//��ƽ����
// 
// #include <stdio.h>
// 
//int main()
//{
//	int a = 0;
//
//	int b = 0;
//
//	printf("��������������");
//
//	scanf("%d %d", &a, &b);
//
//	double c = (a + b) / 2;
//
//	printf("����%d��%d��ƽ����Ϊ%f", a,b,c);
//
//	return 0;
//
//
//}



//�������и���
// 
// #include <stdio.h>
//
//int main()
//{
//	int money = 0;
//
//	printf("������Ҫ�洢�Ľ��");
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



//������ʼʱ������ŷ�������������ֹʱ��
//int main()
//{
//	int a = 0;
//	int b = 0;
//
//	printf("��������ʼʱ�������ʱ��");
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



//������λ��
// 
// #include <stdio.h>
// 
//int main()
//{
//	int a = 0;
//
//	printf("������һ����λ��");
//	scanf("%d", &a);
//
//	printf("%d\n",(a % 10 * 100) + (a % 100 / 10 * 10) + (a / 100));
//
//
//	return 0;
//}


//�жϳɼ�
// 
// #include <stdio.h>
// 
//int main()
//{
//	const int PASS = 60;
//	int score = 0;
//
//	printf("������ɼ�");
//	scanf("%d", &score);
//
//	printf("������ĳɼ���%d\n", score);
//
//	if (score < PASS)
//		printf("���ź�������ɼ�û�м���");
//
//	else {
//		printf("ף���㣬����ɼ�������\n");
//		printf("�ټ�\n");
//	}
//
//	return 0;
//}



//if else�жϼ۸�
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
//	printf("������۸��Ʊ��");
//	scanf("%d %d", &price, &bill);
//
//	if (bill > price) {
//		amount = bill - price;
//		printf("Ӧ����%dԪ", amount);
//	}
//	else {
//		printf("���Ǯ�������Ͻ�����");
//	
//	}
//	return 0;
//}


//�Ƚ��������ִ�С1.0    (if else)
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
//	printf("������������");
//	scanf("%d %d", &a, &b);
//
//	if (a > b) {
//		max = a;
//	}
//	else {
//	 	max = b;
//	}
//
//	printf("%d�Ƚϴ�", max);
//
//	return 0;
//
//}



//�����������ִ�С2.0     (if else)
// 
// #include <stdio.h>
// 
//int main() {
//	int a = 0;
//
//	int b = 0;
//
//	printf("������������");
//	scanf("%d %d", &a, &b);
//	
//	int max = b;
//	if (a > b) {
//		max = a;
//	}
//
//	printf("%d�Ƚϴ�", max);
//
//}



//��ϵ����Ľ��
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
//	printf("������1��4������");
//	scanf("%d", &type);
//
//	switch (type) {
//
//	case 1:
//
//	case 2:
//		printf("���Ϻ�\n");
//
//	case 3:
//		printf("���Ϻ�\n");
//		break;
//	case 4:
//		printf("�ټ�\n");
//		break;
//	default:
//		printf("������\n");
//		break;
//	}
//
//}



//�ٷ��Ƴɼ�ת��Ϊ����Ƶĳɼ�   ��if else��
//
//#include <stdio.h>

//int main()
//{
//	int sorce = 0;
//
//	printf("������һ���ɼ�");
//	scanf("%d", &sorce);
//
//	printf("��ĳɼ���%d\n\n", sorce);
//
//	if (sorce >= 90) {
//
//		printf("��ĳɼ���A");
//	}
//	else if (sorce >= 80) {
//		printf("��ĳɼ���B");
//	}
//	else if (sorce >= 70) {
//		printf("��ĳɼ���C");
//	}
//	else if (sorce <= 60) {
//		printf("��ĳɼ�������");
//	
//	}
//
//	return 0;
//
//}



//�ٷ��Ƴɼ�ת��Ϊ����Ƶĳɼ�   ��switch case��
// 
 //#include <stdio.h>

//int main()
//{
//	int sorce = 0;
//
//	printf("��������ĳɼ�\n\n");
//	scanf("%d", &sorce);
//
//	int grade = sorce / 10;
//
//	printf("��ĳɼ��ȼ���%d\n\n", grade);
//
//	switch (grade) {
//
//	case 10:
//	case 9:
//		printf("��ĳɼ���A");
//		break;
//	case 8:
//		printf("��ĳɼ���B");
//		break;
//	case 7:
//		printf("��ĳɼ���C");
//		break;
//	case 6:
//		printf("��ĳɼ���D");
//		break;
//	case 5:
//	case 4:
//	case 3:
//	case 2:
//	case 1:
//		printf("������");
//		break;
//	default:
//		printf("��������֮��");
//		break;
//	}
//
//	return 0;
//}



//�Ƚ���������С
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
//	printf("������������");
//	scanf("%d %d", &a, &b);
//
//	int max = b;
//
//	if (a > b) {
//		max = a;
//	}
//
//	printf("��������һ������");
//	scanf("%d", &c);
//
//	if (max < c) {
//		max = c;
//	}
//
//	printf("%d�Ƚϴ�\n", max);
//
//	return 0;
//}



//�Ƚ���������С
// 
// #include <stdio.h>
//
//int main() {
//
//	int a, b, c = (0, 0, 0);
//
//	int max = 0;
//	printf("��������������");
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


//������λ��

#include <stdio.h>

//int main()
//{
//	int a = 0;
//
//	int n = 0;
//
//	printf("��������λ����λ���ڵ�����");
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



//�ֶκ���
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




//���������λ while 
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
////	x/=10 ����x=x/10;
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



//�������λ����if+while
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



//���������������㣬do while������һ�飬while����һ�߶�������



//if+do while ���ɵļ��㼸λ�����ҿ��Լ��㸺���ļ�λ��
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




//������Ϸ
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
//	printf("������һ��1-100������,ֱ������Ϊֹ");
//	
//	do {
//		scanf("%d", &a);
//
//		if (a > number) {
//		
//			printf("����");
//			count++;
//		}
//		else if (a < number) {
//			printf("С��");
//			count++;
//		} 
//	} while (a != number);
//
//	printf("��ϲ�����ˣ��㳢�ԵĴ�����%d", count);
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




//�������
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




//��������
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
//      //�ؼ���һ����Ҫ����10
//		a /= 10;
//	}
//
//	printf("%d %d %d", a, digit, ret);
//
//	return 0;
//
//	}





//����׳�	whileѭ��
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




//����׳�	forѭ��

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
//	printf("%d�Ľ׳���%d", n,fact);
//
//	return 0;
//
//}



//������
// 
//#include <stdio.h>
//
//int main() {
//
//	int i = 1;
//
//	int sum = 0;
//	//for�������ǰ����i���Ըĳ��κ����������Ӷ������һ��i�����һ��i�����ֵ
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




//һ�������ܹ���3�����������ĺ�	��forѭ����

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



//1-100֮�������֮�� �� ż����	��forѭ����
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
//	printf("100���ڵ���������%d\n\n", sum);
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
//	printf("100���ڵ�ż������%d", sum2);
//
//	return 0;
//}




//100���ڵ������ĸ����Ƕ���  ��forѭ����
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
//	printf("100���ڵ������ĸ�����%d", count);
//
//	return 0;
//
//}



//һ�����ڵ������͵�ƽ����
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
//	printf("������Ϊ%d\n\n\n", sum1);
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
//	printf("һ�����ڵ���ĸ���Ϊ%d\n\n\n", sum2);
//
//	int avg = sum1 / sum2;
//
//	printf("һ�����ڵ������͵�ƽ����Ϊ%d\n\n\n", avg);
//
//	
//	return 0;
//}



//�̶�������for
//��ִ��һ����do while
//���������while



//����һ�������ж�������Ƿ�������

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
//	//	=�Ǹ�ֵ	==�ǵ���
//	if (isprime == 0) {
//	
//		printf("��������");
//	}
//	else printf("������");
//
//	return 0;
//}





//һ�����ڵ�����
 
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




//���ǰ50������		while

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




//���ǰ50������		for

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




//�����1�ǣ�2�Ǻ�5�ǵ�Ӳ�Ҵճ�10Ԫ���µĽ��	break
//exit==0		exit==1		����ѭ��

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
//					printf("������%d��1�Ǽ�%d�����Ǽ�%d��5�ǵõ�%dԪ\n\n", one, two, five,x);
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




//�����1�ǣ�2�Ǻ�5�ǵ�Ӳ�Ҵճ�10Ԫ���µĽ��	goto out

#include <stdio.h>

int main() {

	int x = 0;

	scanf("%d", &x);

	int one, two, five;

	int exit = 0;

	for (one = 1; one < x * 10; one++) {
		for (two = 1; two < x * 10 / 2; two++) {
			for (five = 1; five < x * 10 / 5; five++) {
				if (one + two * 2 + five * 5 == x * 10) {
					printf("������%d��1�Ǽ�%d�����Ǽ�%d��5�ǵõ�%dԪ\n\n", one, two, five, x);
					exit = 1;
					goto out;
				}
			}
		}
	}
out:
	return 0;

}