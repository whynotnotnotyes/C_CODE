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
//	char arr1[] = "abc";
//
//	char arr2[] = { 'a','b','c','\0'};
//
//	printf("% s\n", arr1);
//
//	printf("%s\n", arr2);
//
//  //strlen����Ч���Ⱥ�ʵ�ʳ��ȣ���Ч���Ⱦ����ж��پ������٣�ʵ�ʳ��Ⱦ�����Ч���ȼ�һ��������\0
//  //strlen���ص���\0
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
//	//strlen:��������ʲô�����ͻ��������λ����������������Ǹ������������Ĵ�С������strlen��a��������ľ���1��strlen��inta��������ľ���4��
//
//	int len = strlen("arr1");
//
//	printf("%d\n", len);
//
//	char a = 'n';
//
//	printf("%s\n", a);
//}






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



//�̶�������for�������յ��ֵ������ȷ�ģ���for�����
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
//					printf("������%d��1�Ǽ�%d�����Ǽ�%d��5�ǵõ�%dԪ\n\n", one, two, five, x);
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




//ǰn���  �Ȳ�����

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






//��ǰn��ͣ���һ����һ�����Ȳ�����

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






//�����ֽ�		wk��45

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





//�����Լ��
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
//	printf("���Լ����%d\n", a);
//
//	return 0;
//}





//����һ��С��6������A�����Ǵ�A��ʼ������4�����֡�������������������ɵ����ظ����ֵ�3λ�� eg:A=1  1,2,3,4  ���123,124,234,231..

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





//��ӡ�žų˷���

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



////��������ռ�ݶ��Ŀռ�	sizeof


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




//���� ��Խ�硱 ����int���������ֵ

//#include <stdio.h>
//
//int main() {
//
//	int a = 0;
//
//	int b = 0;
//
//	while (++a > 0) {
//		printf("int���������������:%d\n", a - 1);
//		b++;
//	}
//
//	while ((a = a / 10)!=0) {
//		b++;
//	}
//
//	printf("int��������������λ��:%d", b);
//
//	return 0;
//
//}





/*float��scanf��% f ��printf�� %f �� %e����ѧ��������
double��scanf�� %lf ��printf�� %f �� %e����ѧ��������	*/

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




//printf���inf��ʾ������Χ�ĸ������� +-(����)�����
//printf���nan��ʾ�����ڵĸ�����





//%c����ֱ������ַ�

//#include <stdio.h>
//
//int main() {
//
//	char a = '1';
//
//	char c = 1;
//
//	if (a == c) {
//		printf("���");
//	
//	}
//	else printf("a=%d,c=%d �ٷֺ�d\n\n", a, c);
//
//	printf("a=%c,c=%d �ٷֺ�c\n\n", a, c);
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




//		\t���Ʊ�λ
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



//�߼�����
//	�����߼���	��a    ������a��ture����1��false����0
//	&&���߼���	a&&b   a��bͬʱΪ�棬�����棬��һ�پ��Ǽٵ�
//	||���߼���	a||b   a��b����Ϊ�棬���ٶ���

//��α����ѧ�е����䣺���� x����4��6֮��
//x>4&&x<6

//����ж�һ���ַ�c�Ƿ��Ǵ�д��ĸ
//c>='A'&&c<'Z'
//c>'a'&&c<'z'




//�Զ��庯����������

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
//	printf("%d������ ��������%d\n", cnt, sum);
//		
//}





//��1��10��20��30��35��45��������(���ǰ�)

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
//		printf("1-10�ļ�������%d\n", a1);
//	}
//
//
//	for (b = 1; b <= 30; b++) {
//		b1 += b;
//		printf("20-30�ļ�������%d\n", b1);
//	}
//
//	for (c = 35; c <= 45; c++) {
//		c1 += c;
//		printf("35-45�ļ�������%d\n", c1);
//	}
//
//	int sum = a1 + b1 + c1;
//
//	printf("%d", sum);
//
//	return 0;
//
//}





//��1��10��20��30��35��45��������(��ͺ���)

//void�������������� void��û�з���ֵ�ĺ���
//����ʹ�ô�ֵ��return
//����û��return
//���õ�ʱ����������ֵ�ĸ�ֵ

//#include <stdio.h>
//
//void sum(int begin, int end)
//{
//	int i;
//	int sum = 0;
//	for (i = begin; i <= end; i++) {
//		sum += i;
//	}
//	printf("%d��%d�ĺ���%d\n\n", begin, end,sum);
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


//����ԭ��
//�Զ�����Էź��棬����Ҫ���Զ��庯����ͷ�Ĵ������ǰ��
//����ͷ���Էֺš�������β���͹����˺�����ԭ�ͣ�
//����ԭ�͵�Ŀ���Ǹ��߱��������������ʲô����
	//���ƣ����������������ͣ�����������


//#include <stdio.h>
//
//void sum(int begin, int end);		//���������� ���Ǻ�����
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
//void sum(int begin, int end)	//����
//{
//	int i;
//	int sum = 0;
//	for (i = begin; i <= end; i++) {
//		sum += 1;
//	}
//	printf("%d��%d�ĺ���%d\n", begin, end, sum);
//}





//�򵥺���
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





//�Ӻ����з���

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




//�Խ���������a��b

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








//����
//���鱾����ǵ�ַ������scanf����ȡ��ַ&

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





//��ȫ��ʼ����	int a[5]={1,2,3,4,};

//����ȫ��ʼ���� int a[5]={1,2,3};

//����ʼ��:		int a[5];  ����ʼ��������Ԫ�ض�������ֵ

//����	��int a[5]={0};







//���Ҫ��a�����е�ֵȫ�����Ƹ�b����

//�����д����
	//b=a;
//��ȷ��д����
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





//��һ������Ԫ�ظ�ȫ��������

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





//�����ʼ��

//int a[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12}

//int a[3][4] = {
//			{1, 2, 3, 4}
//			{5, 6, 7, 8}
//  		{9, 10,11,12}
// };



//�������
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






//дһ����������û���������ֵ�ƽ����������������д���ƽ����������

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


































//����C����

//1.ctrl+f������
//2.����һֱ�����µ�Դ���룬һ��Դ����͹��ˣ�Ҫѧ�µĴ���ֱ�Ӱ�ǰ���ע�;ͺ���
//3.��Ǻ���Ŀ����������Ŀ��ctrl+f: ��Ŀ
//4.�Զ��庯���ĵ����ǵ���ͷ�ļ�.h,���ǵ��ú�����.h
//5.������������ʱ���Ҽ������Ƶ��Ч��ѡ�� �峺����




//ȫ��

//2023.10.23��ʼѧ


//#include �ǰ�������˼ #include <stdio.h>���ǰ���һ��stdio.h��ͷ�ļ�
//ʹ�ÿ⺯����Ҫ��һ��ͷ�ļ�

//stdio ��standard input output����д,��˼�Ǳ�׼�������

//<stdio.h>  == standard input output . head

//int main��һ����������Ŀ����ϣ������һ��int���ͣ�return 0���Ƿ���һ��0��0����int���͵���
//C���Զ��Ǵ�main������ʼ��
//һ������ֻ����һ��main����



//#include <stdio.h>
//
//int main()
//{
//	double a = 5789.539;
//	//С�����������6��С��λ
//
//	printf("%lf\n", a);
//
//	//printf print�Ǵ�ӡ����˼��f��function����д����˼�Ǻ���������
//	//printf�ǿ⺯�����⺯������C���Կ������Դ��ĺ����������Դ��ĺ������Լ�Ҳ���Զ��庯��
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
//	// %c�Ǵ�ӡ�ַ���ʽ������
//	printf("%d\n", a);
//	// %d�Ǵ�ӡʮ�������͵�����
//
//
//	return 0;
//}



//%d   - ��ӡ�����������ݣ����� int��
//%c   - ��ӡ�ַ���������		(char)
//%f   - ��ӡfloat�����ȸ�������������
//%lf  - ��ӡdouble˫���ȸ�������������
//%p   - �Ե�ַ����ʽ��ӡ		
//%x   - ��ӡ16��������
//%s   - ��ӡ�ַ���		(string)
 



//#include <stdio.h>
//
//int main()
//{
//	double ui = 5.555;
//
//	printf("%lf\n", ui);
//
//	//double printf��ʱ��Ҫ��%lf������%lf��%f�Ļ����ǵ����ȣ�Ҳ����float����%lf����˫���ȣ�double��
//
//	return 0;
//
//}





//#include <stdio.h>
//
//int main()
//{	
//	//sizeof ���ڴ���ռ�����ֽ�
//
//	printf("char��sizeof��%d\n\n", sizeof(char));
//
//	printf("short��sizeof��%d\n\n", sizeof(short));
//
//	printf("int��sizeof��%d\n\n", sizeof(int));
//
//	printf("long��sizeof%d\n\n", sizeof(long));
//    //longռ4-8��������long��ռ���ֽ���Ҫ���ڵ���int
//
//	printf("float��siezof��%d\n\n", sizeof(float));
//
//	printf("double��sizeof��%d\n\n", sizeof(double));
//
//	printf("long long��sizeof��%d\n\n", sizeof(long long));
//
//	
//	return 0;
//
//}






//#include <stdio.h>
//
//int sum2 = 20;
////sum2��ȫ�ֱ����������ڴ����{}����ı�����Ϊȫ�ֱ���
////ȫ�ֱ����ǿ����������������̵ģ�ȫ�ֱ����������������������̵���������
//
//int main()
//{
//	
//	int sum1 = 10;
//	//sum1�Ǿֲ������������ڴ�����ڵĳ�Ϊ�ֲ�����
//  //�������ڲ����Ǿֲ�����
//  //�ֲ����������������ǽ������ŵ���������֮��
//	printf("%d\n", sum2);
//	//{
//	//	int a = 23;
//	//
//	//}
//	//printf("%d\n", a);
//	//�ֲ�����ֻ�ھֲ������ã�ȫ�ֱ�����ȫ�ֶ�������(������ʾ���ᱨ��)
//  //�ֲ�������ȫ�ֱ������ֳ�ͻ��ʱ�򣬾ֲ���������
//
//	return 0;
//}






//ȫ�ֱ������ⲿ����

//#include <stdio.h>
//
//int main()
//{
//
//	//extern ����������һ���ⲿ����
//  //�ⲿ����Ҳ��ȫ�ֱ���
//	//ȫ�ֱ����ǿ����������������̵ģ�ȫ�ֱ����������������������̵���������
//
//	extern int wer;
//
//	printf("wer = %d\n", wer);
//
//	return 0;
//}






//����
// 
//#include <stdio.h>
//
//int main()
//{
//	const int AB = 3;
//
//	//const�ǳ�����Ҳ�г�������
//  //һ�㶨��ĳ���������Ҫ��д
//	//const int ��const���εĳ�����
//
//	printf("%d\n", AB);
//
//	int n = 10;
//	//n�Ǳ��������Ҿ��г����ԣ������ǳ�����
//
//	const int a[10] = { 0 };
//	//a[10]�Ϳ��ԣ���Ϊ10�ǳ���,int[n]�Ͳ���,��Ϊn�Ǳ���
//
//	//���鷽��������ֻ���ó���
//
//	return 0;
//
//}

//int�Ǳ���������Ҫ��ʼ����const int�ǳ�������Ҫ��ʼ��
//��ʼ����ָΪ��������һ����ʼֵ�Ĺ���





//��ʶ������

//#define MAX  10		//#define����������ͷ�ļ�ǰ�涨��
////define ��ʶ������  define���ǹؼ��֣���Ԥ����ָ��
////#define ���峣����β���ü�;
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






//ö�ٳ��� enum
 
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
//	//ö�ٳ������Զ���һ���µı���
//	enum Color color = blue;
//	printf("%d\n\n\n", color);
//
//	//ö�ٳ������Գ�ʼ������
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
//	//��������ֻ�ܷų���,green��ö�ٳ���
//	printf("%d\n", sizeof(arr));
//
//
//	enum Name hg = green;
//	printf("%d\n", hg);
//
//	return 0;
//}






//δ��ʼ�����ַ�������/�ַ�����sizeof:
//�ַ�����sizeof��˫��������ʾ�ж��ٸ�����0����\0Ҳ����ȥ,sizeof���Ҫ��1����ΪҪ����\0
//�ַ���sizeof�����������ʾ�ж��ٸ����Ƕ��ٸ����ַ���βû��\0,
//��������\0����0��Ҳ���\0����0���ϣ����Һ�����������������Ϊ0����\0��ֹͣ��������ü�1


//δ��ʼ�����ַ�������/�ַ�����strlen:
//�ַ���strlen˵�򵥵���Ǽ���\0ǰ���Ԫ�صĸ���
//�ַ�strlen˵�򵥵���Ǽ���\0����0ǰ���Ԫ�صĸ���


//��ʼ�����ַ�������/�ַ�����sizeof:
//��ʼ�����ַ��������sizeof�Ľ���������鷽�����ֵ
//��ʼ�����ַ������sizeof�Ľ��Ҳ�����鷽�����ֵ

//��ʼ�����ַ�������/�ַ�����strlen:
//��ʼ�����ַ��������sizeof�Ľ����δ��ʼ��һ��
//��ʼ�����ַ������strlen�Ľ����δ��ʼ��һ��


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






//�ַ���

//#include <stdio.h>
//
//int main()
//{
//	char arr1[] = "abc";
//	//�ַ���ֻ����˫����������
//  //�ַ��ô����Ŷ���
//	//int�����ô����Ŷ���
//	//���ַ����"abc"����'a','b','c',\0(\0��ֵ����0)  �ַ�������������һ��0��\0���ַ����Ľ�����־
//
//	char arr2[] = { 'a','b','c'};
//	//Ϊʲô�����������������Ϊstrlenֱ���ҵ�\0�Ż�ֹͣ������arr2����û��\0,�ַ�������������Դ�\0��,�ַ�����û���Դ�
//	// \0���ַ��������ı�־�������ַ���������
//
//	char arr3[] = { 'a','b','c','\0','s','b' };
//	// /0�������������ֵ���������������Ϊ\0���ǽ�����־������������������
//
//
//	printf("%d\n", strlen(arr1));
//	//strlen = string length-�����ַ������ȵĿ⺯��
//
//	printf("%d\n", strlen(arr2));
//
//	printf("%d\n", strlen(arr3));
//
//	return 0;
// 
//}

//strlen���ص�������

//�ַ����Ľ�����־: \0
//'\0'-ת���ַ�-0
// 0 ������0 
// '0'���ַ�0��ֵһ��������48
// '0'���ַ�0
//  \0��ת���ַ�����Ӧ��ASCII����0,����0����ASCII���0,�ַ�0('0')��Ӧ��ASCII��48
//
//  �ַ�0-9�����ַ�.a/A -z/ZҲ�����ַ�

//EOF - end of file -�ļ�������־ - ֵ��-1

// char���Զ����ַ�Ҳ���Զ����ַ���""





//ת���ַ�

//#include <stdio.h>
//#include <string.h>
////Ҫʹ��strlen�⺯����Ҫ��һ������<string.h>���ļ�
//int main()
//{
//	
//	printf("%d\n", strlen("c:\test\32\test.c"));
//	//���13���ֱ��� c : \t e s t \32 \t e s t . c
//    // \����һλ������λ�������Ǳ�ʾһ���˽�������
//	//strlen���Ǽ����ַ����ĺ��������Լ����ַ���ʱstrlen("")���������Ҫ��˫����
//
//	printf("%c\n",'\x61');
//	// \xdd��ʾһ����λ����16���Ƶ�����
//
//	printf("%c\n",'\132');
//	printf("%d\n\n", '\132');
//
//    printf("\"�����\"\n\n");
//
//	printf("abc\r\rfg\n\n");
//
//	printf("\"����\"\n\n");
//
//	return 0;
//}



//ת���ַ�
//   \\��˫б�ܣ����ڱ�ʾһ����б�ܣ���ֹ��������Ϊһ��ת�����з�
//   \t ˮƽ�Ʊ��
//	 \v��ֱ�Ʊ��
//   \n ����
// 	 \r�س�
//   \a������������
//   ת���ַ���һ���ַ�
//   \����һλ������λ�������Ǳ�ʾһ���˽�������
//	 \xdd��ʾһ����λ����16���Ƶ�����
//	 \~�ǰ�λȡ������˼
//	 (����)ǿ��ת������





/*C����ע��
	
*/
//





//if���
//#include <stdio.h>
//
//int main()
//{
//	int input = 0;
//
//	printf("��Ҫ�ú�ѧϰ��(1/0)>:");
//	scanf("%d", &input);
//
//	if (input == 1) {
//		printf("��н����\n");
//	}
//	else
//	{
//		printf("���Լ���������Ե�\n");
//	}
//
//	return 0;
//}





//while���
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
//	printf("�ù���");
//
//	return 0;
//
//
//}



//�Զ��庯��
//C���Ժ�����Ϊ�Զ��庯���Ϳ⺯��

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






//����

//#include <stdio.h>
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };	//����һ�����10���������ֵ�����
//
//	int b = 0;
//
//	//��������
//	//�������printf arr[x]�Ļ�����������±��Ӧ����һ��Ԫ�أ�ֻ��ѭ�����������������������Ԫ�أ��������������
//	for (b = 0; b < 10; b++) {
//		printf("%d\t", arr[b]);
//		if (b == 9) {
//			printf("\n\n");
//		}
//	}
//
//
//	printf("%d\n", arr[4]); //�±�ķ�ʽ��������Ԫ��
//
//	//float arr2[5];
//	//char ch[20];
//
//
//	return 0;
//
//
//}

// �����ʼ������Բ�ָ����С
// ����ÿ��Ԫ�ص�������int������,������arr[]��int����,arr[]���Լ���һ������






////��λ������
////�ƣ������ƣ�λ������
//#include <stdio.h>
//
//int main()
//{
//	// <<����
//	// >>����
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









//���ϸ�ֵ

// a=a+10 ���� a+=10
// a=a-10 ���� a-=10
// a=a*10 ���� a*=10
// a=a/10 ���� a/=10
// a=a%10 ���� a%=10
// a>>=b����a=b>>    a<<=b����a=b<<








//��Ŀ������
  //	���߼�������
  //    - ��ֵ
  //    + ��ֵ
  //	& ȡ��ַ
  //	sizeof �������ı���/���ͳ��ȣ����ֽ�Ϊ��λ��
  //    ~ ��һ�����Ķ����ư�λȡ��
 
//˫Ŀ������
//��Ŀ������

//#include <stdio.h>
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	a + b;  // +����˫Ŀ��������˫Ŀ��������������ֵ
//
//	//C���������Ǳ�ʾ��٣�0��ʾ�٣���0��ʾ��
//
//	printf("%d\n", a);
//	printf("%d\n", !a);
//	// !���ǵ�Ŀ����������Ŀ������ֻ����һ��ֵ
//
//
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof a);
//	printf("%d\n", sizeof(int));
//	//sizeof ������������Ӳ������Ŷ����ԣ�������������������
//	//printf("%d\n", sizeof int);
//
//	return 0;
//
//}






//sizeof

//#include <stdio.h>

//int main()
//{
//	int arr[10] = {0,1,2};  //10������Ԫ�ص�����
//	
//	printf("����Ĵ�С��%d�ֽ�\n", sizeof(arr));
//	//  10������(int)Ԫ��,һ������4���ֽڣ�10������40�ֽ�
//
//	//���������Ԫ�ظ���=	�����ܴ�С���ֽڣ�{sizeof(��������)}/ÿ��Ԫ�صĴ�С���ֽڣ�{sizeof(arr[0])}
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	printf("Ԫ�صĸ�����%d��\n", sz);
//
//}







//�Զ��庯�������������ֵ

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
//	printf("��������������\n");
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//
//	printf("%d�Ƚϴ�\n", MAX(a, b));
//
//	return 0;
//}







// \~ ��λȡ��

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

//�������洢�Ķ����ƶ��ǲ��룬��ӡ����Ķ���ԭ�룻
//ԭ�����λ���䣬����ȡ���õ����룬�����1�õ�����
//�����1�õ����룬����ȡ���õ�ԭ��







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

//	a++���Ȱ�a��ֵ����b,��++��
//	++a�ǰ�a��1��ֵ����b;





// (����)ǿ��ת��
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







//(2����)λ����
// &��λ��
// |��λ��
// ^��λ���   ��Ӧ�Ķ�������ͬ��Ϊ0��������Ϊ1  (���Ļ�ǰ�油ȫ��0���ý������)

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
//	printf("������=%d\n", c);
//
//	printf("������=%d\n", d);
//
//	printf("�������=%d\n", e);   
//
//	return 0;
//
//}



//�߼���&&(ʮ����)
//�߼���||(ʮ����)

//���������ж�0/��0

//#include <stdio.h>
//   
//  //�߼���&&
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


//�߼���||
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







//��Ŀ�����(���������)

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
//	//��������ŵ���˼:���a>b,��ִ��a,���a������b,��ִ��b
//
//	printf("%d\n", max);
//
//	return 0;
//
//}






//�±����ò�����[]   �������ò�����()

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
//	int arr[10] = { 0 };  //- []�����ž����±����ò�����
//	
//	int a = 10;
//	int b = 5;
//
//	int sum = Add(a, b);  //- ()Բ���ž��Ǻ������ò�����
//
//	printf("%d\n", sum);
//
//	return 0;
//
//}







//     11111111 11111111 11111111 11111111 Ϊʲô��2^32-1
//		����Ļش��Ǵ�ģ���ȷ�ش��ǣ��ܹ�2^32�����ǻ���һ��ȫΪ0�����������������㣬������2^32-1
// 
//     ��Ϊֱ���㣬��Ҫ2����η�����1 ���� 2��һ�η�����1 ����2�Ķ��η�����1 ����...2��31�η�����1 �������ѱ��
//     ����32��1�ټ���һ�� 1 Ȼ���ټ���һ�� 1���ȼ���һ��һ����ɣ�1 00000000 00000000 00000000 00000000 ����2��32�η���
//     Ȼ���ټ���һ��1������ԭ��������32��1�������������2^32-1(�����Ǵ���Ļش𣬵�����ʱ����ɾ��)



// [1][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][]   ������洢�����λ1��ʾ����
// [0][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][]   ������洢�����λ0��ʾ����
// ֻҪ���������ڴ��д洢�Ķ��Ƕ����ƵĲ��룬������ԭ�뷴�벹�붼��ͬ


// ����14+(-21)
// 14��������ת�ɶ����Ƽ���(����������(ԭ��)���ڷ��벹��)     -21�Ǹ�������Ҫת�ɲ���
// 14ת�ɲ�����  00001110
//-21ת�ɲ�����  11101011          
// ���м���      11111001  ����������ӵõ�14+(-21)�Ĳ��룬�����һ��ȡ���õ�ԭ��
// �����һ      10000111  �õ�ԭ��(������),�����ʮ���Ƶ��� -7

//���������ӷ��������Ǽӷ�
//����14-21����14+��-21��
//   14-��-21������14+21
//�����϶��Ǽӷ�
// ���㶼�ǲ�����м���





//  �ؼ��֣�auto    
//
//#include <stdio.h>
//
//int main()
//{
//	auto int a = 3;
//	// int a ����Ϊ�ֲ�����Ҳ����Ϊ�Զ�����
//	// �ӽ��뵽�����(������)��ʼ����������飬���Զ����٣����Գ�Ϊ�Զ�����
//
//	printf("%d\n", a);
//
//	return 0;
//}






// �ؼ��֣�register

//#include <stdio.h>
//
//int main()
//{
//	register int a = 10;  //�����a����Ϊ�Ĵ�����������������һ������ѭ,ֻ�Ǹ����,�ɱ����������Ƿ���ѭ
//
//	return 0;
//}





//�ؼ��֣�signed(�з�������)  unsigned(�޷�������)

//#include <stdio.h>
//
//int main()
//{
//	signed int a = 1;
//	//signed ����ı������з��ŵ�(����)
//
//	// signed int = int ;int ����signed int����д��
//
//	unsigned int b = -1;
//	// unsigned���޷��ŵ�,�����������
//
//	printf("a=%d\tb=%d", a, b);
//
//	return 0;
//}






//���Ͷ��� �������ض��壩
//#include <stdio.h>
//
//int main()
//{
//	typedef unsigned int u_int;
//	//typedef�൱�����¶���һ��������
//	unsigned int a = 10;
//
//	u_int b = 10;
//
//	if (a == b) {
//		printf("���\n");
//	}
//
//	return 0;
//}









//static ��һ����̬�ľֲ�����,����ʹ�ֲ����������������ӳ�

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
//	//���ϻᱨ�� ��Ϊstatic���ε�ȫ�ֱ���ֻ����static���ڵ�Դ�ļ�����ʹ��
//
//	return 0;
//}





//�����ⲿ����
//static�����ⲿ����

//#include <stdio.h>
//
//int main()
//{
//	extern int APP(int a, int b);
//	//static���κ���,�ı��˺�������������
//	//�����Ǿ����ⲿ�������Եģ�static���κ�ͱ���ڲ����������ˣ�ֻ���ڶ��庯����Դ�ļ�����ʹ��
//
//	int a = 10;
//	int b = 50;
//	int sum = APP(a, b);
//
//	printf("%d\n", sum);
//
//	return 0;
//}
              

// 1.static���ξֲ�����     2.static����ȫ�ֱ���     3.C���������Զ��庯��







//define�����
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






// ָ�����
// ָ��Ҫô��4���ֽ�Ҫô��8���ֽ�(32λϵͳ��4�ֽ�,64λϵͳ��8�ֽ�)
// ָ���Ǹ�������������ŵ�ַ
 

//#include <stdio.h>
//
//int main()
//{
//	int a = 10;
//
//	//& ȡ��ַ��
//
//	printf("%p\n", &a);
//
//	int* p = &a;
//
//	*p = 20;
//
//	//��������+ *�Ǵ�ŵ�ַ�ģ�Ҳ����ָ�����
//
//	printf("%p\n", p);
//
//	//&��ȡ��ַ����int*�Ǵ��ַ��*p�ǽ����ò�����,Ҳ�м�ӷ��ʲ�����
// 
//	return 0;
//
//}


//int* ��ָ�����	int�����ͱ���
//int*������˵��p��ָ������ģ�*p��*�ǽ����ò�����






//����double
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
//	printf("pc���ֽڴ�С��%d\n", sizeof(pc));
//
//	return 0;
//	
//}



//ָ����32λƽ̨����4���ֽڴ�С����64λƽ̨����8���ֽڴ�С
//ָ��Ϊʲô��4/8���ֽڣ���Ϊָ���ŵ��ǵ�ַ����ַ����һ��32λ/64λ�Ķ���������ɵģ�32λ/64λת�����ֽھ���4/8���ֽ�








////�ṹ��    �ṹ���������Լ�������������ͣ������������Ӷ���
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
//	//  b1:���ýṹ�����͡�������һ�������͵Ľṹ�����
//	struct Book b1 = { "C���Գ������",50,"�ƹ�"};
//					
//
//	//����ָ���ӡ�������ͼ۸�
//	struct Book* pb=&b1;
//	
//	printf("%s\n",(*pb).name);
//	printf("%d\n", (*pb).price);
//	printf("%s\n\n", (*pb).author);
//	//*��.��������������ȼ���.�����ȼ��ǳ��ߣ�����˳��,������ȷ����*��.
//
//	printf("%s\n", pb->name);
//	printf("%d\n", pb->price);
//	printf("%s\n\n", pb->author);
//	//û�Ǻ�����ΪҪ�ҵ�ַ�����ҵ�����name�����Ǻŵ�ָ��ֻ��ֵ
//	
//
//
//	printf("����:%s\n�۸�:%dԪ\n����:%s\n\n", b1.name, b1.price, b1.author);
// 
//	b1.price = 45;//�޸ĺ�ļ۸� ���ͱ�������ֱ�Ӹ�ֵ �ַ��ͱ���Ҫ��strcopy
// 
//    printf("�޸ĺ�ļ۸�%d\n",b1.price);
//
//	strcpy(b1.name, "c����"); 
//    //strcopy ȫ��string copy- �ַ������� - �ǿ⺯�������Ӧ����ǰ�����ͷ�ļ� - #include <string.h>
//	//strcopy�����ַ������ĵķ�ʽ
//
//	return 0;
//
//}

//     . �ṹ�����.��Ա
//    -> �ṹ��ָ��->��Ա















//��ϸ


//1.��֧(ѡ��ṹ)��ѭ��(ѭ���ṹ)

//C������һ�� �ṹ�� �ĳ����������
// 1.˳��ṹ
// 2.ѡ��ṹ
// 3.ѭ���ṹ


//��֧���:if	switch
//ѭ�����:while   do while   for


//ʲô����䣿
//C��������һ���ֺ�;�����ľ���һ�����
//������һ�� ; Ҳ����䣬�ǿ����



//if����֧

//#include <stdio.h>
//
//int main()
//{
//	int age = 18;
//	
//
//	if (age < 18)
//	{
//		printf("δ����");
//	}
//	else
//		printf("����");
//
//	return 0;
//}



//if���֧

//#include <stdio.h>
//
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//
//	if (age < 18)
//	{
//		printf("δ����\n");
//	}
//	else if (age >= 18 && age <= 28) {
//
//		//if(18<=age<=28)   ���������д��������18���¶������ ����
//		//��Ϊִ��˳����age����10(����10),10С��18,�����������Ǳ��0(��),0�ٸ�28�Ƚ�,���������1	
//
//		printf("����\n");
//	}
//	else if (age >= 28 && age <= 48) {
//		printf("����\n");
//	}
//	else if (age >= 48 && age <= 98) {
//		printf("����\n");
//	}
//	else
//		printf("��ͷ��̫\n");
//
//	return 0;
//}




//����Ĵ���Ҳ��������д
//#include <stdio.h>

//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//
//	if (age < 18)
//	{
//		printf("δ����\n");
//	}
//	else
//	{
//		if (age >= 18 && age <= 28) {
//			printf("����\n");
//		}
//		else if (age >= 28 && age <= 48) {
//			printf("����\n");
//		}
//		else if (age >= 48 && age <= 98) {
//			printf("����\n");
//		}
//		else
//			printf("��ͷ��̫\n");
//	}
//
//}



//��Ŀ�����´�������ʲô��

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

//��Ȼ7�ȴ��ڵ���7 ��С�ڵ���7 ������ifֻ�����ִ���жϳɹ���Ĵ��룬����Ĵ�����Ȼ����������Ҳ��ִ����;









//��Ŀ�������⴮��������hehe����haha��

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

//�����⴮����Ȳ������"hehe"Ҳ�������"haha",��Ϊ���û�д�������ס��else�ͻ����������if��֮ƥ��
//Ҳ����if(b==2),��if(b==2)����if(a==1)��Ƕ����,a��ʼ��Ϊ0������û�н���if(a==1)
// ��ȻҲû��ִ�������else��䣬�����







//��Ŀ��if�״�� 1

//���´���᲻���ӡ �Ǻǣ�

//#include <stdio.h>
//
//int main()
//{
//	int a = 4;
//
//	if (a = 5)
//	{
//		printf("�Ǻ�");
//	}
//
//	return 0;
//	
//}


//���ӡ �Ǻ� ����Ϊif(a=5)�еĵȺ��Ǹ�ֵ,�൱�ڰ�5������a,���Ի��ӡ �Ǻ�,
//  == ���ǵ���









//��Ŀ���ж�һ�����Ƿ�Ϊ����

//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//
//	if (a%2!=0)
//		printf("�����������\n");
//	else
//		printf("�������������\n");
//
//	return 0;
//}






//���100���ڵ�����

//����1
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





//������
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








//  Switch���
//  switch���Ҳ��һ�ַ�֧��䣬�������ڶ��֦�����
//  switch�����û��continue,continue��ѭ������е�


//��������,������ڼ�

//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//
//	scanf("%d", &a);
//
//	//if (a == 1)
//	//	printf("����һ");
//	//else
//	//	if (a == 2)
//	//		printf("���ڶ�");
//	//else
//	//	if (a == 3)
//	//		printf("������");
//	//else
//	//	if (a == 4)
//	//		printf("������");
//	//else
//	//	if (a == 5)
//	//		printf("������");
//
//
//	switch (a)
//	{
//	case 1+0:
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
//		break;
//	}
//
//	return 0;
//}



//#include <stdio.h>
//int main()
//{
//	switch (ֻ�������ͱ��ʽ,����д1+5,������float,double,char...)
//	{
//		�����;
//		case :(ֻ�������ͳ������ʽ)
//      charҲ�����ͳ�������Ϊchar�洢����ASCIIֵ��Ҳ�������ͳ���
//		break; ��switch�����,����û��ֱ��ʵ�ַ�֧,����breakʹ�ò���ʵ�������ķ�֧
//		//break������������ѭ��(while,for,do while)��switch
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
//	switch (input+1) //switchֻ�����ͱ��ʽ
//	{
//	case 2:
//		printf("hehe");
//		break;
//	case 6:
//		printf("6");
//		break;
//	case 'A':   //caseֻ�����ͳ������ʽ
//		printf("ţ��");
//		break;
//	}
//
//	return 0;
//}



//������/��Ϣ�� 1.

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
//		printf("������\n");
//		break;
//	case 6:
//		printf("��Ϣ��\n");
//		break;
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//	}
//	return 0;
//}



//������/��Ϣ�� 2.

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
//			printf("����һ");
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//	default:	//defaultҲ���Է�ǰ��
//		printf("û���������\n");
//		break;
//	}
//}





//���� n �� m�ֱ��Ƕ��٣�

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
//			//switch֧��Ƕ��ʹ��
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
//	if (-1)	//if�������ж��滹�Ǽ٣����������پͽ���,�ڼ��������,��0�����棬0���Ǽ� 
//		printf("hehe\n");
//
//	return 0;
//}





//continue ֻ����ѭ��������ʹ��
//continue�����ǽ�����һ��ѭ��,�ص�����

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


//break����������ѭ����ֱ����ֹѭ��
//continue����������ѭ����continue����Ĵ��벻��ִ�У��ص�ѭ���ʼ
//break��continue����ֻ����ѭ�����������ж�(if)






//getchar()
//getchar()�������Ǽ�������һ���ַ���Ȼ���������ַ����е���scanf���������뺯��
//getcharֻ�ܶ�ȡһ���ַ�
//putchar�������ǰѽ��յ����ַ�����,�൱��printf,�����������


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


//���EOF,����һ���ѡ��ת�����壬���Կ���EOF��ֵ��-1
//EOF��end of file����д������ֵ��-1
//ctrl+z�����˳�
//ctrl+cֱ���˳�






//#include <stdio.h>
//
//int main()
//{
//	int ret = 0;
//	int ch = 0;
//
//	char password[20] = { 0 };
//	//�洢����� ������
//	printf("����������\n");
//
//	scanf("%s", &password);//��������,�������psaaword������,ע����%s�ַ���,123��%d������һ�ٶ�ʮ��,��%s�������ַ�һ����
//	//scanfֻ���ȡ�ո�ǰ��ĺ���
//
//	while ((ch = getchar()) != '\n')
//	{	
//		;
//	}
//	
//
//	printf("��ȷ������(Y/N)");
//
//	//getchar();  //�����д���Ҫɾ�����ܳ���ȷ���н����
//	//���뻺�����������붫������û�д��֮ǰ���������뻺�������棬�����˻س����س�ǰ��Ķ���������ˣ����뻺�����ͻ�ʣ��һ��
//	//  '\n'����ʱ\n�ֱ� ret = getchar()���ߣ�������if�ж�����else,Ҫ���ֻ����ǰ���һ��getchar()��\n���߼���
//
//	//getcharֻ�ܶ�ȡһ���ַ�
//
//	ret = getchar();
//
//	if (ret == 'Y')  //ע�����ַ�'Y'
//		printf("��ȷ��");
//	else
//		printf("ȡ��ȷ��");
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

//֮���������4���κ����֣�����Ϊputcharÿ��ֻ����������ַ��������������ʵ���ַ�

//if(ch<'0' || ch>'9')continue ������ ��� chС���ַ�0 ���� ch�����ַ�9,��continue

//�������һ������789,getcharһ��ֻ���ȡһ���ַ����ȶ�ȡ�ַ�7,�ַ�7���ַ�0���ַ�9֮�䣬����if(ch<'0' || ch'9')֮��
//������else,���ee,�����ѭ����û�н������ص����棬������ȡ8��ע��getchar��ȡ�Ķ����ַ����������ַ�8��
//ѭ��һ�ּ�����ȡ9����������������ѭ����� ee7ee8ee9






//forѭ��

//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//
//	for (a = 1; a <= 10; a++)  //a = 1�ǳ�ʼ��;a<=10���жϽ��뵽ѭ��������;a++��ÿһ��ѭ���ĵ���
//	{	
//		if (a == 5)
//			continue;
//		
//		printf("%d\n", a);
//	}
//	return 0;
//}






// for��ѭ��
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





//����for����ѭ�����Ʊ�����ȡֵ����"ǰ�պ󿪵�д��"(ֻ�ǽ��飬��������������)

//#include <stdio.h>
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	int i = 0;
//
//	for (i = 0; i < 10; i++)
//		//10��ѭ��
//		//10�δ�ӡ
//		//10��Ԫ��
//		printf("%d\t", arr[i]);
//
//	return 0;
//}





//����ѭ��

//#include <stdio.h>
//
//int main()
//{
//	for (;;)
//		//forѭ���ĳ�ʼ��,�ж�,���� ������ʡ��
//		//����:forѭ���� �жϲ��� �����ʡ�ԣ����ж���������:��Ϊ��,�Ǿͻ�����ѭ��
//	{
//		printf("hehe");
//	}
//
//	return 0;
//}




//��Ŀ:���ӡ�����Ǻǣ�

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

//���ϻ��ӡ10��hehe
//��Ϊiû�г�ʼ��������i��10��ʱ��iһֱ����10�����Գ����ࣩ



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

//���ϻ��ӡ100��




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





//��Ŀ�����´���ѭ�����Σ�

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

//���ϴ���һ�ζ���ѭ��,��Ϊfor�����ж�y=0�ǰ�0����y,forѭ�����ж����ж����,���ִ��,�پͲ�ִ��,0���Ǽ٣���0�����棬0����yʹ���ж�Ϊ0
//��Ȼ�Ͳ�ִ����
//һ���Ⱥ��Ǹ�ֵ���������ж�




//��ѭ��
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








//����n�Ľ׳�

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







//��Ŀ1������1��+ 2! + 3! + 4! + 5!...10!

//����Ч��

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




//��Ч��

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


//����3�Ľ׳�ֻ����2�Ľ׳˻����ϳ���3����3�Ľ׳ˣ�����10�Ľ׳�ֻ��Ҫ��9�Ľ׳˻����ϳ���10����10�Ľ׳�







//��Ŀ2����һ�����������в��Ҿ����ĳ�����֡�
// ��дһ������:��V[0]-[1]-V[2]...V[n-1]�������в���k���±ꣻ

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
//			printf("�ҵ���,�±���%d\n", i);
//			break;
//		}
//		
//	}
//
//	if (i == sz)	//���i���������������Ԫ��(sz��������Ԫ�ظ���)��û���ҵ�
//					//Ϊʲôi==sz������i==sz-1��iС��sz��sz��10��i�������ֻ�ܵ�9��
//					//��Ϊ����forѭ��i����9������Ҫi++һ�Σ�����i������������10
//		printf("�Ҳ���\n");
//	
//	return 0;
//
//}

//���ַ�������������Ԫ�ظ���С�����飬��������Ԫ�ض������ͻ��˷Ѻܶ�ʱ��,��Ϊ����Ҫһ��һ���Ĳ�������
//�������㷨����ʱ��,��������Ķ��ֲ����㷨





//�������㷨/���ֲ����㷨

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
//		{	//����2�����±꣬Ҳ����0-9
			//����ʱ���Ѿ����˵�һ���ж���,����9����2��4,Ҫ�ҵ���7��4С��Ԫ��7,Ȼ�����
//			right = mid-1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid+1;
//		}
//		else
//		{
//			printf("�ҵ���,�±���%d\n", mid);
//			break;
//		}
//	}
//
//	if (left > right)
//		printf("�Ҳ���");
//
//	return 0;
//}







//��Ŀ3����д��Ŀ,��ʾ����ַ��������ƶ�,���м���
 
//�������鲻�ÿ����±�\0�����������⣬���ַ���������Ҫ����sizeofԪ�ظ�����1
//�����������Ԫ�ظ���������sizeof
//�ַ��������Ԫ�ظ�����Ԫ�س��ȣ�������strlen
//�ַ������鸳ֵ���ұ߿�����""Ҳ������{}������Ҫ��ʲô

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
//		//�ַ����������ֱ����������������arr2������д��arr[]..
//
//		Sleep(1000);
//		//��˼����Ϣ1�룬��λ�Ǻ��룬1000�������1�룬ʹ������⺯��Ҫ��һ��<windows.h>��ͷ�ļ�,S�Ǵ�д
//
//		system("cls");
//		//ִ��ϵͳ�����һ���⺯������Ҫ��һ��<stdlib.h>��ͷ�ļ�
//
//		left++;
//		right--;
//	}
//
//	printf("%s\n", arr2);
//
//	return 0;
//}





//��Ŀ4����д����ʵ��,ģ���û���¼�龰,����ֻ�ܵ�¼����
// (ֻ�������������������������ȷ����ʾ��¼�ɹ���������ξ�����������˳�����)



//#include <stdio.h>
//
//
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//
//	for (i = 0; i < 3; i++) {
//		printf("����������:>");
//		scanf("%s", &password);
//
//		//strcmp�������ǰ������ַ�������strcmp,Ȼ��Ƚ������ַ��Ƿ���ȣ��ǿ⺯����Ҫ��һ��<string.h>��ͷ�ļ� 
//		//�����һ���ַ������ڵڶ����ַ�������������(1)�����С�ڵڶ����ַ������ظ���(-1),��������ַ������,����0;
//
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("��¼�ɹ�\n");
//			break;
//		}
//		else
//			printf("�������\n");
//	
//	}
//
//	if (i == 3)
//		printf("����������������\n");
//
//	return 0;
//
//}




//��Ŀ:������������������ֵ

//�ⷨ 1:
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
//	printf("����������%d\n", max);
//
//	return 0;
//
//}



//�ⷨ 2:
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
//	printf("����������%d\n", max);
//
//	return 0;
//}




//��Ŀ����ӡ1-100��3�ı���

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




//��Ŀ������3�������Ӵ�С���;

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

//�������������ְ���С�����ճ�����abc�ȼ����оͺ��ˣ�a�����b�ǵڶ���c�����
// ���b>a����ô�Ͱ�a��b��ֵ�Ե�����Ϊa���,b�ڶ�
// Ȼ��a��b��(���ڵ�b��ԭ�ȵ�c)�����b��a��a��b��ֵ�ͶԵ�������ԭ�ȵ�a�ͱ��b�ˣ�Ȼ��ԭ�ȵ�a��b�ȹ�����Ҫ��b���
// �������ڵ�c��Ҫ��b��һ�´�С;





//��Ŀ���������������������������Լ��

//#include <stdio.h>
//
//int main()
//{
//	int a, b = 0; 0;
//	scanf("%d %d", &a, &b);
//
//	int c = 0;
//
//	while (c=a%b) //���ﲻ��дc=a%b!=0����Ϊa%b�Ƿ�0����ѭ�������a%b��0,�Ǿ�if�ж�������0��������ѭ����
//	{
//		//��̳��ֵ�����:�Ұ�b=c����ǰ�棬a = b���ں���
//		//����c��ֵ����b�ˣ�Ȼ���ְ�b��ֵ����a�ˣ��൱�ڰ�c��ֵ�ָ���b�ָ���a�ˣ����Գ���һ�־�ִ������
//		a = b;
//		b = c;
//		
//		//c = a % b;��������ʡ�ԣ���Ϊwhileѭ������ÿһ�ֶ��Ѿ�ִ��������
//	}
//
//	printf("���Լ��Ϊ%d\n", b);
//
//	return 0;
//}


//�����õ���շת�����



//�ⷨ2:

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





//��Ŀ����ӡ1000��-2000������
//���꣺1.�ܱ�4�������Ҳ��ܱ�100���������  ��
//      2.�ܱ�400����������

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
//	printf("������1000�굽2000�������\n�ܹ���%d������\n", count);
//
//	return 0;
//}






//��Ŀ����ӡ100-200������

//�ⷨ1��

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
//				//���break�����������ѭ����������if��break������������ѭ���������������ж�
//			}
//			if (ret == (i-1))
//			{
//				printf("%d\n", ret);
//				count++;
//			}
//		}
//	}
//	
//	printf("�ܹ�%d������\n", count);
//
//	return 0;
//}

//���Ϸ������Գ���


//�ⷨ2:
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
//	printf("�ܹ�%d������\n", tmp);
//
//	return 0;
//}
 
 


//�ⷨ3��

//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//	int i = 0;
//	int ret = 0;
//	int count = 0;
//
//  //ż�����Բ����������������Կ��Բ���100��ʼ����101��ʼ��ÿ�μ�2��������2���ǵ�������
// 
//	for (i = 101; i <= 200; i+=2) {
//		//sqrt��һ����ѧ�⺯���������ǿ�ƽ����Ҫ��һ��<math.h>��ͷ�ļ�,sqrt�ǿ⺯��
//      //����for()�����ret<=sqrt(i)Ҳ����д��i/2����Ϊһ����һ��һ������������Ŀ�ƽ��
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
//	printf("�ܹ�%d������\n", count);
//	return 0;
//}

//Ҫ��һ�����Ƿ��������������Ա��������2-��ƽ������ ���������2-��ƽ������������û��ʣ�£���������Ϊ0����ô�������������




//sqrt��ʾ

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





//��Ŀ�����1-100�����������к���9���ֵĸ���

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
//	printf("1-100�ں�9�����ֵĸ�����%d\n", count);
//
//	return 0;
//}





//��Ŀ���������
//����1/1 - 1/2 + 1/3 - 1/4 + 1/5......+ 1/99 - 1/100��ֵ����ӡ�����

//#include <stdio.h>
//
//int main()
//{
//	double i = 1.0;
//	//��C�����У����ͳ����ᱻ��������ʽת����˫���ȸ�����,��double��ú����.0
//	double sum = 0.0;
//	int flag = 1;
//
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag * 1 / i;
//		//Ҫ��õ�С��������������һ�߱���Ϊ������
//		flag = -flag;
//	}
//
//	printf("%lf\n", sum);
//
//	return 0;
//}








//��Ŀ����10�����������ֵ

//#include <stdio.h>
//
//int main()
//{
//	//������������⣬ֻ�������������ֵ����Ϊ������Ҫ��max�Ƚϣ�max��0����������max�Ƚ�ʱ��max����0
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





//��Ŀ����ӡ9*9�˷��ھ���ӡ

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
//			//%2d���Ҷ��룬��ӡ��λ����˼��û����λ��ո���
//			//%-2d����������ӡ��λ,������λ��ѿո�������ұ�
//		}
//
//		printf("\n");
//	}
//	return 0;
//}






//��Ŀ��������Ϸ

//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
////void�Ƿ���ֵ���ͣ���ʾ�������������ֵ��menu��������������ƣ�����ȡ��
//void menu(){
//  printf("���Ǹ�������Ϸ ���1-100��ֵ\n");
//	printf("**************************\n");
//	printf("******1.��ʼ   0.�˳�******\n");
//	printf("**************************\n");
//}
//
//void game()
//{
//
//	//��ʱ����������������������ʼ��
//	//Ҫ����һ�����������Ҫ�õ���������⺯��rand,����randǰ��Ҫʹ��srand(),srand()���Ĳ�����unsigned int
//	// ,����ʱ���time()�������������ʼ�㣬ʱ���time()��������long������Ҫǿ��ת����unsigned int
//	//time()��ʱ����Ŀ⺯����Ҫ��һ��time.h��ͷ�ļ�
//	//ʱ����Ǿ��ȱ仯��
//
//	int ret = 0;
//
//	//srand((unsigned int)time(NULL));   //time��������������ָ��
//	//srand�������������㣬ֻҪ�ڴ����������һ�ξ����ˣ���ҪƵ���������������������㣬���Է�������������;
//	
//	ret = rand()%100+1; //���������,Ҫ��һ��<stdlib.h>��ͷ�ļ�
//	//ΪʲôҪ+1����Ϊrand�����6λ����ģ��100��ʣ����λ������Χ��0-99��
//	// Ҫʵ������1-100�����������Ҫ+1
//
//	int a = 0;
//	int count = 0;;
//
//	while (1)
//	{
//		printf("�������:>");
//
//		scanf("%d", &a);
//
//		if (a > ret)
//		{
//			printf("����\n");
//		}
//		else if (a < ret)
//		{
//			printf("С��\n");
//		}
//		else if (a == ret)
//		{
//			printf("��ϲ�㣬�¶���!\n");
//			break;
//		}
//		count++;
//	}
//	printf("�ҵĴ�����%d\n", count);
//}
//
//int main()
//{
//	int input = 0;
//
//	srand((unsigned int)time(NULL));   //time��������������ָ��
//	//srand�������������㣬ֻҪ�ڴ����������һ�ξ����ˣ���ҪƵ���������������������㣬���Է�������������;
//	
//	do {
//		menu();
//		printf("��ѡ��\n\n");
//		scanf("%d", &input);
//		
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 2:
//			printf("�˳���Ϸ\n\n");
//			break;
//		default:
//			printf("ѡ�����\n\n");
//			break;
//		}
//	
//	}while (input);
//
//	return 0;
//}





// goto���

//C�������ṩ�˿������õ�goto���ͱ����ת�ı��
//��������goto��û�б�Ҫ�ģ�ʵ����û��gotoҲ���Ժܺõ�д������
//������ĳЩ������goto��仹���õ��ŵģ�������÷�������ֹ������ĳЩ���Ƕ�׵Ľṹ�Ĵ������
// ����һ�������������ѭ��
//�������ʹ��break�Ǵﲻ����

//#include <stdio.h>
//
//int main()
//{
//	printf("hello\n");
//
//again:	//������Բ�����again���κζ����ԣ�ֻҪ���ǹؼ���
//	printf("hi\n");
//
//	goto again;
//
//	return 0;
//
//}





//�ػ�����

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
//	printf("��ע�⣬��ĵ��Խ���2���Ӻ�ػ���������룺��������ȡ���ػ�\n������:>");
//
//	scanf("%s", &input);
//
//	if (strcmp(input, "������") == 0)
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





//goto���һ�㲻�ã�����Ĵ�����ȫ������ѭ��д

//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//int main()
//{
//	char input[20] = {0};
//
//	printf("2����֮����ĵ��Խ���ػ�\n������:������ ȡ���ػ�:>\n");
//
//	system("shutdown -s -t 120");
//
//	while (1)
//	{
//		scanf("%s", &input);
//
//		if (strcmp(input,"������") == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//
//	}
//	return 0;
//}











//����
//�ڼ�����У�������һ�����ͳ����е�ĳ���ִ��룬��һ�����߶���������
//���������ĳ���ض����񣬶���������������룬�߱���ԵĶ�����

//һ���������������з���ֵ���ṩ�Թ��̵ķ�װ��ϸ�ڵ�����
//��Щ����ͨ��������Ϊ�����

//���õĺ�����ͷ�ļ���
//io����		<stdio.h>
//�ַ�����������	<string.h>
//�ڴ��������   memset
//ʱ��/���ں���	<time.h>
//��ѧ����		<math.h>



//�ӷ�����

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
//              //a, b��������������Ϊ�������
//
//	printf("%d\n", sum);
//
//	return 0;
//
//}




//������a���ݷŵ�����b   1.

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




//��Ŀ��������a���ݿ���������b  2.

//#include <stdio.h>
//
//int main()
//{
//	char arr1[] = "bit";
//	char arr2[10] = "#######";
//  //���Դ��ַ���ַ�����Ŀ�ĵ��ַ����ͻ����
//
//	strcpy(arr2, arr1);
//	//strcpy�������ǰ�һ���ַ����������ַ���
//	//char*strcpy(char * destination(Ŀ�ĵ�ַ),const char * source(Դͷ));
//	//���strcpy����ַ��������\0Ҳ������ȥ��F10���Ӵ��ڿ��Կ���
//	
//	printf("%s\n", arr2);
//  //Ϊʲô����ӡbit######����Ϊ��ӡ��ʱ��\0��ֹͣ��ӡ��
//  //�����õ��ַ����ĵط���\0�����ַ����Ľ�����־
//
//	return 0;
//}




//memset : �����ڴ�
//Ҫ����ͷ�ļ���:<memory.h> or <string.h>

//menset(void*ptr , int value , size_num);
//ptr:ָ��ָ����Ǹ�Ҫ�����ڴ��
//value:Ҫ���õ��Ǹ�ֵ
//num:Ҫ�����õ��ַ��ĸ���


//#include <stdio.h>
//#include <memory.h>
//
//int main()
//{
//	char arr[] = "love you";
//	memset(arr, 'x', 4);
//  //���Ҫ���õ�ֵ���ַ�����Ŀ�ĵص�ַ�ַ����ͻ����
//
//	printf("%s\n", arr);
//
//	return 0;
//}





//�Զ��庯�������
//ret_type fun_name(part1, *);
//{
//	statement;
//}
//
//ret_type:��������
//fun_name:������
//part1:��������
//statement:�����
//����������Ǻ����壺�������Ǻ�����ʵ��







//��Ŀ��дһ���������ҳ����������Ľϴ�ֵ

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
//	printf("�ϴ�ֵ��%d\n\n", max);
//
//	int max1 = get_max(999, 123);
//	//���ú���Ҳ����ֱ�ӱȽ�
//
//	printf("�ϴ�ֵ��%d\n", max1);
//	
//
//	return 0;
//}





//��Ŀ��дһ��������������������

//#include <stdio.h>

//// ����������ܽ���������������Ϊʵ��ת���βΣ�x��y�������±����ˣ��൱����a��b����ʱ����
//// �������βκ�ʵ�ηֱ�ռ�ò�ͬ���ڴ�飬���βε��޸��ǲ���ı�ʵ�ε�
////void swap1(x, y)
////{
////	int tmp = 0;
////	tmp = x;
////	x = y;
////	y = tmp;
////}
//
//void swap2(int* x,int* y)  //��ʽ�������βΣ�
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
//	//������ʹ�þ��Ǻ����ĵ���
//	//�����ĵ����� ��ֵ���� �� ��ַ����
//	swap1(a, b);
//	//��ֵ���ã��������βκ�ʵ�ηֱ�ռ�ò�ͬ���ڴ�飬���βε��޸��ǲ���ı�ʵ�ε�
//
//	swap2(&a, &b);
//	//��ַ���ã���ַ�����ǰѺ����ⲿ�����������ڴ��ַ���ݸ�����������һ�ֵ��ú����ķ�ʽ
//  //���ִ��η�ʽ�����ú����ͺ�����ߵı�����������������ϵ��Ҳ���Ǻ����ڲ�����ֱ�Ӳ���
//
//	printf("a=%d b=%d\n\n", a, b);
//  //swap(a,b);  //ʵ�� ʵ�ο��Դ�����
//  //swap2(&a, &b); //ʵ�� ʵ�ο��Դ���ַ
//  //swap(300,100); ʵ�ο��Դ�����
//  //swap(300+1,100); ʵ�ο��Դ����ʽ
//    max = get_max(a,get_max(b,c)); //ʵ�ο��Դ�����
//
//	printf("a=%d\n\n", max);
//	printf("max=%d\n",get_max(a,get_max(b,c))); //�⺯��Ҳ���Ե����Զ��庯��
//
//	return 0;
//
//}

//ʵ�ʲ���(ʵ��)����ʵ���������Ĳ�������ʵ�Ρ�ʵ�ο���˵�����������������ʽ�������ȡ�
//����ʵ���Ǻ������͵������ڽ��к�������ʱ�����Ƕ�������ȷ����ֵ���Ա����Щֵ�����β�

//��ʽ�������βΣ�����ʽ������ָ�������������еı�������Ϊ��ʽ����ֻ���ں��������õĹ����в�ʵ�����������ڴ浥Ԫ��
//���Խ�����ʽ��������ʽ�����������������֮����Զ������ˡ������ʽ����ֻ�ں�������Ч

//�β���ʵ�ε�һ����ʱ�������������ʱ����Բ�����ôɵ��ȫ������ȥ����Ϊ���һ��������һ���Ԫ��
//�൱�ڰѴ洢�ռ�����һ��������Ϊ�˱���ռ��˷ѣ�ֻ�Ǵ���ȥ������Ԫ�صĵ�һ����ַ






//��Ŀ��дһ�������ж�һ�����ǲ�������

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
//		printf("�����������\n");
//	}
//	else
//		printf("�������������\n");
//
//	return 0;
//}






//��Ŀ��дһ����ӡ100-200֮��������ĺ���

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
//			//Ϊʲô����ֻ��дreturn 0,����дbreak,��Ϊbreak����forѭ���󣬾�return 1��;
//			//breakֻ����forѭ��
//			//return��ֱ����������
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
//	printf("�ܹ�%d������\n", count);
//
//	return 0;
//}





//��Ŀ��дһ�������ж�һ���ǲ�������

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
//		printf("����������\n");
//	}
//	else if (year(a) == 0)
//	{
//		printf("���겻������\n");
//	}
//
//	return 0;
//}





//��Ŀ:дһ�����������1000-2000��֮�������

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





//��Ŀ��дһ��������ʵ��һ��������������Ķ��ֲ���

//#include <stdio.h>
////					��Ȼ���������ǵ�ַ����int arr[]����ָ�����
//int binary_search(int arr[], int k, int sz)
//{
////int sz = sizeof(arr) / sizeof(arr[0]);
////ָ�������32λϵͳ��4���ֽڣ���64λϵͳ����8���ֽڣ�sz=8/4=2
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
//	//�����ڴ��ε�ʱ�����ֻ�Ǵ���ȥ�����һ��Ԫ�صĵ�ַ
// 
//	if (ret == -1)
//	{
//		printf("�Ҳ���ָ������\n");
//	}
//	else
//		printf("�ҵ���,�±���%d\n", ret);
//
//	return 0;
//}




//��Ŀ��дһ��������ÿ����һ������������ͻ��num��ֵ����1

//#include <stdio.h>
//
////�ò��Ϸ���ֵ��������void
//
//void diaoyong(int* p)
//{
//	(*p)++;
//	//++�����ȼ����*�ߣ����Խ����ò�����*Ҫ�����ţ���Ȼ������p++��*
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








//������Ƕ�׵��ú���ʽ����

//�����ͺ���֮������л�����ϵ�


//������Ƕ�׵���

//#include <stdio.h>
//
//void new_line()
//{
//	printf("���ͻƹ�\n");
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




//������ʽ����

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


//printf��ʽ����

//#include <stdio.h>
//
//int main()
//{
//	printf("%d", printf("%d\n", printf("%d\n", 43)));
//	//ÿһ��printf�������صĶ��Ǵ�ӡ���ַ��ĸ���
// 
//  printf("%d\n",printf("%d\n",printf("%d\n",4567)));
//  //ת���ַ�'\n'Ҳ��һλ��
//
//	return 0;
//}








//�����������붨��

//����������
		//1.���߱�������һ��������ʲô��������ʲô������������ʲô���������ǲ��Ǵ��ڣ��޹ؽ�Ҫ
		//2.����������һ������ں�����ʹ��֮ǰ��Ҫ������������ʹ��
		//3.����������һ��Ҫ����ͷ�ļ���
//�����Ķ��壺
		//  �����Ķ�����ָ�����ľ���ʵ�֣����������Ĺ���ʵ��



//�ڹ����У������Ķ����������Դ�ļ�һ�㲻��ͬһ��Դ�ļ���

//#include <stdio.h>
//
////����������
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
////�����Ķ���
//int add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//
//	return z;
//}



//���������
//��������������.h�ļ��У������Ķ������.c�ļ���
//�⺯��ͷ�ļ���<.h>  ,  �Լ�д�ĺ�����ͷ�ļ���".h"

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






//���ֲ��Һ���(����ģʽ)

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
//		printf("����ҵ���������");
//	}
//	else
//		printf("�ҵ���,�±���%d\n", ret);
//
//	return 0;
//	
//}




//������Ϸ����(����ģʽ)
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
//	srand((unsigned int)time(NULL));  //time��������������ָ��
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
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	}while (input);
//
//	return 0;
//}





//#ifndef __ADD_H__
// �������δ����
//#define __ADD_H__
// �ǾͶ���һ������
//#endif
//����

//��������Ѿ����壬�ǾͲ��ٶ��壬Ϊ�˷�ֹ�ظ�����


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







//�ݹ�

// ʲô�ǵݹ飺
// �����������ı�̼��ɳ�Ϊ�ݹ�(recursion).�ݹ���Ϊһ���㷨�ڳ�����������й㷺Ӧ�á�
// һ�����̻������䶨���˵������ֱ�ӻ��ӵ��������һ�ַ�������ͨ����һ�����͸��ӵ�����
// ���ת��Ϊһ����ԭ�������ƵĹ�ģ��С����������⣬�ݹ����ֻ��Ҫ�����ĳ���Ϳ��������������������Ҫ�Ķ���ظ�����
// �������˳���Ĵ��������ݹ����Ҫ˼����ʽ���ڣ��Ѵ��»�С

//һ���������Ե��ñ�ĺ�����һ�����������Լ����ǵݹ�

//�ݹ鳣���Ĵ���:Stack overflow  ջ���

//#include <stdio.h>
//
//int main()
//{
//	printf("hehe\n");
//
//	main();
//
//}




//�ݹ�ʵ�� ��������޷������ͱ���  eg:����1234 ���1 2 3 4

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

//�ݹ��������Ҫ����
//1.���������������������������������ʱ�򣬵ݹ�㲻�ټ���
//2.ÿ�εݹ����֮��Խ��Խ�ӽ������������




//��Ŀ:��д��������������ʱ���������ַ�������
//��ʱ������һ��ֻ�ڵ����ڼ���Ч���Ҿ��г��Եı���

//strlen��ʵ��ԭ��(�Ҳµ�)


//��������������ʱ���������

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
//		str++; //���鿪�ٵ��������Ŀռ䣬str��ŵ�һ���ַ��ĵ�ַ��str++���ǵ�ַ������������ǵڶ����ַ��ĵ�ַ
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "bite";
//
//	int len = my_strlen(&arr);  //arr�����飬���鴫�Σ�����ȥ�Ĳ����������飬������Ԫ�صĵ�ַ
//
//	printf("%d\n", len);
//
//	return 0;
//}




//�����ǲ���������ʱ���������
//#include <stdio.h>
//#include <string.h>
//
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//		//Ϊʲô����*str+1����str+1����Ϊ*str����b����str��str�ĵ�ַ
//		//Ϊʲôstr��str�ĵ�ַ����Ϊmain�������������ľ�������ĵ�ַ
//	}
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[] = "bite";
//
//	int len = my_strlen(&arr);  //arr�����飬���鴫�Σ�����ȥ�Ĳ����������飬����Ԫ�صĵ�ַ
//
//	printf("%d\n", len);
//
//	return 0;
//}






//�ݹ�ʵ�ֽ׳�

//#include <stdio.h>
//
//int fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * fac(n - 1);
//	  //��n=1��ʱ��return��1������fac(n-1)�Ľ�� 
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




//��Ŀ�������n��쳲�������
//�õݹ��ѭ�������Խ��������ѭ�����ʺ��������

//1.ѭ���ⷨ

//#include <stdio.h>
//
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;//Ϊʲôc��1����Ϊ���n=1���Ͳ������ѭ�����ͻ᷵��c��c��0�Ļ��ʹ���
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




//2.�ݹ�ⷨ

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


//д������ѭ��������ǵݹ������У��ݹ�Ч�ʸߴ���򵥣����ǻ�ջ���

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

//������˵�ݹ�����������Ҫ�����Ͳ���ջ����ˣ��������ϴ���










//����

//������һ����ͬ����Ԫ�صļ��ϡ�
//����Ĵ�����ʽ: type_t  arr_name  [const_n]
               //type_t ��ָ�����Ԫ������
			   // arr_name��ָ�����Ԫ����
			   //const_n��һ���������ʽ������ָ������Ĵ�С


//#include <stdio.h>
//
//int main()
//{
//	int arr[10] = { 1,2,3 };
//	//�������鲻��ȫ��ʼ����ʣ�µ�Ԫ��Ĭ�ϳ�ʼ��Ϊ0
//
//	char arr2[5] = { 'a','b','c' };
//	//�������ַ����飬ʣ��Ԫ��Ĭ�ϳ�ʼ��Ϊ\0
//
//	char arr3[5] = { 'a',98 };
//	//98����b,��Ϊ�����ַ����飬98��ASCII��������Ӧ���ַ���b,�ͻ������b
//
//	char arr4[7] = "abc";
//	//�������ַ������飬abc���滹��һ��\0
//
//	char arr5[] = "abcdefg";
//	//��ָ����С��g���滹����һ��'\0'
//
//	char arr6[3] = { 1,2,3};
//	
//	printf("%d\t%d\t%d\t%d\t%d\t%d\n\n\n", strlen(arr),strlen(arr2),strlen(arr3),strlen(arr4),strlen(arr5),strlen(arr6));
//
//
//	//arr6���ַ����飬��strlen���ַ������������ַ��������û��\0�������Ǹ����ֵ
//
//	printf("%d\t%d\t%d\t%d\t%d\t%d\n", sizeof(arr), sizeof(arr2), sizeof(arr3), sizeof(arr4), sizeof(arr5), sizeof(arr6));
//
//	return 0;
//}

//��֮������ô�����ַ���������涼����һ��'\0'����Ϊ�����ж���������ı�־
//�����������û��\0��δ��ȫ��ʼ�������������Ĭ��Ϊ0
//�ַ����������������涼û��\0





//sizeof��strlenû��ʲô��ϵ

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
//	//sizeof�Ǽ���arr��ռ�ռ�Ĵ�С����λ���ֽ�,\0Ҳ��ռ�ռ䣬����\0Ҳ����ռ�
//	printf("%d\n", strlen(arr));
//	//strlen�Ǽ����ַ�������ĳ��ȣ���\0��ֹͣ������\0���������
//
//	return 0;
//}


//sizeof��strlenû��ʲô����
//strlen�����ַ������ȵ�-ֻ������ַ����󳤶� - �⺯�� - ����ͷ�ļ�
//sizeof�Ǽ�����������飬���͵Ĵ�С-��λ���ֽ�-������(��Ӽ��˳����ǲ����������Ǻ�����������ͷ�ļ�)



//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char arr[] = "abc";
//	//δ��ʼ������ȫ��ʼ������4��Ԫ�أ�����δ��ʼ�����Ӵ��ڻ���ʾ\0
//	char arr1[3] = "abc";
//
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(arr1));
//
//	printf("%d\n", strlen(arr));
//	printf("%d\n", strlen(arr1));
// 
//}






//��Ŀ������sizeof��strlen���Ƕ��٣�
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//
//	printf("%d\n", sizeof(arr1));
//	//arr1���ַ������飬�ַ�����\0��β�������ַ������涼����\0������ռ��4���ռ䣬ÿ���ռ���1(char)
//	printf("%d\n", sizeof(arr2));
//	//arr2���ַ����飬�ַ�������\0��β�����ٸ����Ƕ��ٸ�
//
//	printf("%d\n", strlen(arr1));
//	//arr1���ַ�������,�����ַ�����\0������������3
//	printf("%d\n", strlen(arr2));
//	//arr2���ַ����飬��strlen���ַ������������ַ��������û��\0�������Ǹ����ֵ
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
//	{   //strlen���ص���һ���޷�������(unsigned int)������Ҫǿ��ת����int:i<(int)strlen(arr);��һ�㲻��ôд
//		printf("%c ", arr[i]);
//	}
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//sizeof�������ַ�������Ҳ��������������
//	printf("%d\n", sz);
//	//�����7,��Ϊ��һ��\0
//
//	return 0;
//}





//һά�������ڴ��еĴ洢

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

//����������Ľ��,�ó��Ľ��ۣ�
//������������ŵ�,�������ͷ�����ͬ��С�Ŀռ�
//�±�Ϊ0���ǵ͵�ַ�����Ͼ��Ǹߵ�ַ

//& arr[0] = 00000051003CFBD8
//& arr[1] = 00000051003CFBDC
//& arr[2] = 00000051003CFBE0
//& arr[3] = 00000051003CFBE4
//& arr[4] = 00000051003CFBE8
//& arr[5] = 00000051003CFBEC





//��ά����Ĵ���

//#include <stdio.h>
//
//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5},{6,7,5}};
//
//	return 0;
//}
 
////��ά����δ��ȫ��ʼ����Ĭ��ֵҲ��0
//��ά�����е��±����ʡ�ԣ�����ʡ����






//������ά����
//��ά������Ȼ��ͨ���±�������

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






//��ά�������ڴ��еĴ洢

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

//���еĶ�ά������������һά������ɵ�
//��ά������һά���������

//���ϴ����������

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

//���ۣ���ά�����һά�������ڴ�洢��һ����Ҳ�������洢��






 







//ð������

//#include <stdio.h>
//
//void bubble_sort(int arr[], int sz) //int arr[]����ָ�������д��int* arrһ������
//                                    //int* �Ƕ�ĳ������ȡ��ַ��int arr[]��ϵͳĬ��ȡ������Ԫ�ص�ַ
//{
//	int i = 0;
//
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		int flag = 1;  //����Ч��
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
//	bubble_sort(arr,sz);//�β���ʵ�ε�һ����ʱ�������������ʱ����Բ�����ôɵ��ȫ������ȥ����Ϊ���һ��������һ���Ԫ��
//                      //�൱�ڰѴ洢�ռ�����һ��������Ϊ�˱���ռ��˷ѣ�ֻ�Ǵ���ȥ������Ԫ�صĵ�һ����ַ
//                      //��Ϊ�����������洢�ģ������һ��Ԫ��+1���ǵڶ���Ԫ��
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

//10��Ԫ�ؾ���9�ˣ�9��Ԫ�ؾ���8��

//��һ������
//9�ԶԱ�

//�ڶ������򣬲��������һλ����Ϊ�Ѿ����������Աȹ���������ˣ���������ѭ����������sz - 1 - i��i��ʱ��0
//10 - 1 - 0 = 9   �� iÿһ�˼�1��ÿһ�˼�ȥ�Ѿ�������˵���

//...�Դ�����






//������

//#include <stdio.h>
//
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//
//	printf("%p\n", arr);
//	printf("%p\n\n", arr + 1);
// 
//	printf("%p\n", &arr[0]); //������������Ԫ�صĵ�ַ
//	printf("%p\n\n", &arr[0] + 1);
//
//	printf("%d\n\n", *arr); //�����������ò�����������ĵ�һ��Ԫ��
// 
//	printf("%p\n",&arr);//����&arrȡ������Ԫ�صĵ�ַ���������ģ������ʡ����
//	printf("%d\n", sizeof(&arr + 5)); 
//	printf("%p\n\n", &arr + 1);
//	
//
//	printf("%d\n", sizeof(*arr));
//	printf("%d\n\n", sizeof(arr));
// 
//	return 0;
//}

//������������Ԫ�صĵ�ַ,�������������⣺
// 1.sizeof�����������е������������������Ԫ�ص��ڴ�ռ䣬��λ���ֽ�
// 2.&arr,ȡ��ַʱȡ����������������ĵ�ַ
//����������������������������(arr)���������ǵ�һ��Ԫ�صĵ�ַ

//�����������ò�����������ĵ�һ��Ԫ��









//������

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
////��Ϸ�������㷨ʵ��
//void game()
//{	//����-����߳���������Ϣ
//	char board[ROW][COL] = { 0 };
//
//	int ret = 0;
//
//	//��ʼ������,��ʼ����������ŵĶ��ǿո�
//	InitBoard(board, ROW, COL);
//
//	//��ӡ����
//	DisplayBoard(board,ROW,COL);
//
//	while (1)
//	{
//		//�������
//		PlayerMove(board, ROW, COL);
//		DisplayBoard(board,ROW,COL);
//		system("cls");
//
//		//�ж�����Ƿ�Ӯ	         �����ĸ������1.���Ӯ 2.����Ӯ 3.��ûӮ������ 4.ƽ��
//		ret = IsWin(board,ROW,COL);
//
//
//		//��������
//		ComputerMove(board, ROW, COL);
//		DisplayBoard(board, ROW, COL);
//
//		//�жϵ����Ƿ�Ӯ
//		ret = IsWin(board,ROW,COL);
//
//		if (ret != 'C')
//		{
//			break;
//		}
//	}
//	if (ret == '*')
//	{
//		printf("��Ӯ��!\n\n");
//	}
//	else if (ret == '#')
//	{
//		printf("����Ӯ��\n\n");
//	}
//	else if (ret == 'Q')
//	{
//		printf("ƽ��\n");
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
//		printf("������:>\n");
//
//		scanf("%d", &input);
//
//		switch (input)
//		{
//			case 1:
//				game();
//				break;
//			case 0:
//				printf("�˳���Ϸ\n");
//				break;
//			default:
//				printf("ѡ���������ѡ��\n");
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










//ɨ��

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
//	//�׵���Ϣ�洢
//	//1.���úõ��׵���Ϣ
//	char mine[ROWS][COLS] = { 0 };  //11*11  
//	//2.�Ų�����׵���Ϣ
//	char show[ROWS][COLS] = { 0 };
//	//Ϊʲô�Ų�����׵���ϢҲҪ���ó�11*11����Ϊ��������ͬ�Ļ��ͻ����겻ͬ��
//
//	//��ʼ������
//	InitBoard(mine, ROWS, COLS, '0');
//	InitBoard(show, ROWS, COLS, '*');
//
//	//���������飬���Գ�ʼ����������
//
//	//��ӡ����
//  //DisplayBoard(mine, ROW, COL);
//	DisplayBoard(show, ROW, COL);
//
//	//������
//	SetMine(mine, ROW, COL);
//	//DisplayBoard(mine, ROW, COL);
//
//	//ɨ��
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
//		printf("��ѡ��:>(1/0)\n");
//		
//		scanf("%d", &input);
//
//		switch (input)
//		{
//			case 1:
//				game();
//				break;
//			case 0:
//				printf("�˳���Ϸ");
//				break;
//			default:
//				printf("ѡ���������������");
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














//���������


//	���ࣺ



//���������� + = * / �Ӽ��˳�

//#include <stdio.h>
//
//int main()
//{
//	int a = 5 / 2;	//���õ�����
//	int b = 5 % 2;	//ģ�õ�����,����ȡģ������������Ҳ������������� ���� ,��Ȼ�ᱨ��
//
//	double c = 5 / 2.0;  //Ҫ��õ���ȷ�ĸ���������������ͱ�������Ҫ��һ���Ǹ�����,�����ͻᶪʧ����
//
//	printf("5/2 = %d\n", a);
//	printf("5%%2 = %d\n\n", b);
//
//	printf("5/2.0 = %lf\n", c);
//}








//��λ��������ͨ����������λ���������߼���λ

//�������� >>�����Ʋ����ұ߶�������߲�ԭ����λ��������0��������1��
//�߼����ƣ����Ʋ����ұ߶�������߲�0

//��λ�ǶԲ��������λ

//��λ��������λ������ֻ��Ӧ���������������ø�����
//��λ������,λ������,��λȡ��,����,��ʽ����ת���������ò�����м��㣬ֻ���������Ĳ���ԭ�뷴����ͬ

//#include <stdio.h>
//
//int main()
//{
//	int a = 16;
//	int b = a >> 1;
//	//��������һλ�൱��ԭ������2������������λ�൱��ԭ������2
//
//	printf("a>>1 = %d\n\n", b);
//	//��λ��������������λ��a�ò��������ƶ�һλ���ұ߶���һλ������߲���һ��ԭ���ķ���λ;
//	//                     ����������ƶ�һλ����߶���һλ�����ұ߲�0
//
//
//
//	//�����Ķ����Ʊ�ʾ�����֣�ԭ�룬���룬����
//	//�洢���ڴ���ǲ���
//	//������ԭ�룬���룬������ͬ
//	//�������ڴ��д���ǲ��룬��ʾ��ԭ��
//
//	//���֤���������ڴ��д���ǲ��룿
//	//��f10��������ԣ��ҵ��ڴ棬�㿪��������ȡ��ַc:&c,�ῴ��8��f,f��16���ƣ�ת���ɶ�������4��1��8��f����32
//
//	int c = -16;
//
//	int d = c >> 1;
//	//ԭ�룺10000000 000000000 00000000 00010000
//	//���룺11111111  11111111 11111111 11101111
//	//���룺11111111  11111111 11111111 11110000
//
//	//��������һλ��   11111111 11111111 11111111 1111000
//	//��߲�ԭ����λ��11111111 11111111 11111111 11111000
//
//	//�����һ�÷���:11111111 11111111 11111111 11110111
//	//����ȡ����ԭ�룺10000000 00000000 00000000 00001000
//
//	//ת�ɶ����Ƶ�-8
//
//	printf("c>>1 = %d\n", d);
//
//	return 0;
//}
//���棺������λ����������Ҫ�ƶ�����λ������Ǳ�׼δ�����
//���磺 int num = 10;
//       num >> -1;








//		λ������
//      ��λ��������λ������ֻ��Ӧ���������������ø�����

//      ��λ������,λ������,��λȡ��,����,��ʽ����ת���������ò�����м��㣬ֻ���������Ĳ���ԭ�뷴����ͬ
		
//#include <stdio.h>
//
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a & b; //��λ�� ��Ӧ��������ͬΪһ
//	//00000011
//	//00000101
//	//00000001
//
//	int d = a | b; //��λ�� ��Ӧ��������һΪһ
//	//00000011
//	//00000101
//	//00000111
//
//	int e = a ^ b; //��λ��� ��Ӧ��������ͬΪ�㣬����ͬΪһ
//	//00000011
//	//00000101
//	//00000110
//
//	//λ�������Ƕ����Ʋ������ ������/������/�������
//
//	printf("a&b = %d\n\n", c);
//	printf("a|b = %d\n\n", d);
//	printf("a^b = %d\n\n", e);
//
//	return 0;
//}






//��Ŀ��������������,Ҫ�󲻴�����ʱ����


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
//�Ӽ���
//��ȱ�ݣ����������ֶ��ǳ��󣬽ӽ�int���͵ļ��ޣ��������ͻ�������õ���ֵ�Ͳ�����ʵ��ӵ�ֵ,�о���ȱʧ



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

// a��b���õ�c,c�����b��õ�a,c���b(ԭ�ȵ�a)��õ�a(ԭ�ȵ�b)
// �е���a��b��ӵõ�c, c-a=b, c-b = a

//��λ���
//�κ�������������õ�������������������������ͨ�����������������
//����㷨������������,��Ϊ������ֻ������Ƿ���ͬ���죬�����λ

//ȱ�㣺ִ��Ч�ʵ�,�����������������죬�ɶ���Ҳ��








//��Ŀ����д����ʵ�֣���һ�������洢���ڴ��еĶ�������1�ĸ���

//����1.
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
//		num = num / 2;	//ע����һ�㣡�� ����num/2,��num=num/2,num/2��ֵҪ�洢��һ����������
//	}
//	printf("��������1�ĸ��� = %d\n", count);
//
//	return 0;
//}
// 
//ȱ�ݣ��Ը���������




//����2

//#include <stdio.h>
//
//int main()
//{
//	int num = 0;
//
//	printf("����������");
//	scanf("%d", &num);
//
//	int i = 0;
//	int count = 0;
//
//	//ÿһ�����Ͷ���32λ�����һ����������1��&�����㣬���������ұߵ�ֵ��1��������Ϊ1��˵��������������ұߵĶ���������1
//	//00000000 00000000 00000000 00000101
//	//00000000 00000000 00000000 00000001
//	//��ÿһλ����1��������,����1��λ�ͼ���count++,�Ϳ��Եõ�һ����������������1�ĸ���
//
//	for (i = 0; i < 32; i++)
//	{
//		if (num & (1 << i))
//		{
//			count++;
//		}
//	}
//
//	printf("��������1�ĸ����� = %d\n", count);
//
//	return 0;
//}








//��ֵ������

//#include <stdio.h>
//
//int main()
//{
//
//	//���������г�ʼ��
//	int i = 10;
//
//	//�������ı���һ��ֵ�и�ֵ
//	i = 20;
//
//	//������ֵ
//	int a = 10;
//	int x = 5;
//	int y = 20;
//
//	a = x = y + 1;
//	printf("%d\n", a);
//
//	return 0;
//}



//���ϸ�ֵ��
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





//��Ŀ������



// �� �߼�������

//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	printf("%d\n", !a);
//	//��Ŀ������: !,������ �߼������������ϴ��룬10Ϊ��0Ϊ�棬���������Ǽ�(0)
//
//
//	if (a) //����aΪ��
//	{
//		printf("hehe\n");
//	}
//
//	if (!a) //����aΪ��
//	{
//		printf("haha\n");
//	}	
//	
//	return 0;
//}


//��ֵ  -

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



//&  ȡ��ַ������

//#include <stdio.h>
//
//int main()
//{
//	int a = 10;
//
//	int* pa = &a;   //ȡ�ĵ�ַֻ����ָ��������
//
//	int ret = *pa;  //*pa��*�ǽ����ò�������������ͨ��pa��ŵĵ�ַ���ҵ���ָ��Ķ���,*pa����a
//
//	printf("ret=%d\n", ret);
//
//	return 0;
//}




//sizeof  ���������ռ�ռ�Ĵ�С

//#include <stdio.h>
//
//int main()
//{
//	int a = 10;
//	char c = 'r';
//	char* p = &c;
//	int arr[10] = { 0 };
//
//	//sizeof ���� ���� ��ռ�ռ�Ĵ�С,��λ���ֽ�
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
//	//��������;��� ����ǰ�������+[]
//
//	short s = 0;
//	int b = 10;
//
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(s = a + 5));	//�ѳ����ͷŽ������ͣ�����ɶ����;���
//	printf("%d\n", s);					//s����0,��Ϊsizeof������㲻����ʵ����������ʵ��ֵ��
//	
//
//	return 0;
//}





//	~��λȡ��

//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	//����:00000000 00000000 00000000 00000000
//	//ȡ��:11111111 11111111 11111111 11111111	//����ȡ����������λҲҪȡ��
//	//��Ϊȡ�������Ȼ�ǲ��룬���Դ�ӡ��������Ҫת����ԭ��
//	//����:11111111 11111111 11111111 11111110   //��Ϊȡ�������λ�Ǹ�����ȡ������ת�������λ����
//	//ԭ��:10000000 00000000 00000000 00000001
//
//	printf("%d\n", ~a);
//
//	return 0;
//}
//��λȡ��Ҳ�ǲ������ȡ��






//��Ŀ����һ����������λ����һλ�ĳ�1

//#include <stdio.h>
//
//int main()
//{
//	int a = 11;
//
//	a = a | (1 << 2);	//��Ҫ�޸Ķ����Ƶ���λ�����޸�2
//	//00000000 00000000 00000000 00001011	a
//	//00000000 00000000 00000000 00000100	1<<2
//
//
//	//���ϴ�����15������뻹ԭ��11����ô���أ�
//	//00000000 00000000 00000000 00001111	// 15
//	//11111111 11111111 11111111 11111011	//������������д������������,���ܻ�ԭ��������ô�õ����д����أ�
//	//00000000 00000000 00000000 00001011	// 11
//
//	//00000000 00000000 00000000 00000100	//ֻ��Ҫ�����д��밴λȡ�����ٺ�15�Ķ����ƻ����㣬���ܻ�ԭ��11��
//
//	a = a & (~(1 << 2));
//
//	//a = a ^ (1 << 2);		����Ҳ���Ի�ԭ
//
//
//	printf("%d\n", a);
//
//	return 0;
//}





//++ --   ǰ��++ --������++ --

//#include <stdio.h>
//
//int main()
//{
//	int a = 10;
//	printf("++a = %d\n", ++a);
//	printf("a++ = %d\n", a++);
//	//˭��ȺŽ���˭�Ƚ���
//
//	int b = 10;
//	int c = ++b;
//	printf("%d\n", c);
//	
//	return 0;
//}





// (����)	ǿ������ת��

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








//��Ŀ��˵�������ĸ�printf����Ķ���ʲô

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


//Ϊʲô��3���ͣ�4���������8 ����Ϊ��������ȥ����������Ԫ�صĵ�ַ����Ȼ�ǵ�ַ�����յ����;���ָ�����
//ָ�������32λϵͳ������4�ֽڣ���64λϵͳ������8�ֽ�




//	��ϵ������
//  >
//  >=
//  <
//  <=
//  !=
//  ==






//	�߼�������

// &&�߼���		��Ҫ�Ͱ�λ�����֣��߼����ע����������������滹�Ǽ�
// ||�߼���

// 1 && 3 = 1
// 1 || 3 = 1




//��Ŀ1����������Ľ����ʲô��

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
//	//�߼���ֻҪ������Ϊ0���ұ߶����ٽ������㣬������Ϊ�٣�0��
//
//	return 0;
//}




//��Ŀ2

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


//��Ŀ3

//#include <stdio.h>
//
//int main()
//{
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//
//	i = a++ || ++b || d++;
//	// �߼���ֻҪǰ��Ϊ�棬���涼���������㣬���ܺ�����٣���������Ϊ��
//
//	printf(" a=%d\n b=%d\n c=%d\n d=%d\n", a, b, c, d);
//
//	return 0;
//}




//��Ŀ4

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







//	����������(��Ŀ������)

//exp1 ? exp2 : exp3

//������ʽ1Ϊ�棬���ʽ2Ҫ�㣬���ʽ2�Ľ�����������ʽ�Ľ��
//������ʽ1Ϊ�٣����ʽ3Ҫ�㣬���ʽ3�Ľ�����������ʽ�Ľ��


//��Ŀ�������´����д����Ŀ������������������������ʽ

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




//����������������Ŀ����������a��b�Ľϴ�ֵ

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





//	���Ų�����

//���ű��ʽ�������ö��Ÿ����Ķ�����ʽ�����ű��ʽ��������������ִ�С�
// �������ʽ�Ľ�������һ�����ʽ�Ľ��

//exp1,exp2,exp3,...expN

//#include <stdio.h>
//
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);
//	//���ʽ��������㶼����ʵ���㲢����ʵ��ֵ��
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
//		printf("������\n");
//	}
//
//	printf("a=%d\n", a);
//	printf("b=%d\n", b);
//	printf("c=%d\n", c);
//
//	return 0;
//}



//�ö��ű��ʽ��д
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



//�ö��ű��ʽ��д�������
//#include <stdio.h>
//
//int main()
//{
//	while (a = get_val(), count_val(a), a > 0)
//	{
//
//	}
//}





//	�±����ã��������úͽṹ��Ա


//�±����ò�����
//#include <stdio.h>
//
//int main()
//{
//	int arr[4] = { 0 };
//	//������:һ��������+һ������ֵ
//	//���� 1+2��+�ž����������������ֱ���1��2
//	//[]Ҳ���������������ֱ���������(arr) �� []����±�(4) 
//  //�����±����ò�����Ҳ��˫Ŀ������
//
//}



//��������

//#include <stdio.h>
//
////         ���Բ���Ų��Ǻ������ò��������Ƕ��庯�����﷨����
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
//	//���ú�����ʱ���()���Ǻ������ò�����
//	int max = get_max(a, b);
//	//����ĺ������ò�����������������(��Ŀ������)
//	//�ֱ��Ǻ�������get_max��,a,b
//
//	return 0;
//}






//���ʽṹ��Ա

//#include <stdio.h>
//
////struct studentҲ��һ�����ͣ� ���͵������Ǵ�������
////����һ���ṹ������-struct student
//struct student
//{
//	//��Ա����
//	char name[20];
//	int age;
//	char id[20];
//};
//
//
//int main()
//{
//	//ʹ��struct student������ʹ�����һ������- s1,����ʼ��
//	struct student s1 = { "�ƹ�",21,"202205010311" };
//
//	//���ʷ�ʽ1.
//	printf("s1.name = %s\n", s1.name);
//	printf("s1.age = %d\n", s1.age);
//	printf("s1.id = %s\n\n", s1.id);
//	// �ṹ�����.��Ա��
//
//
//
//	//���ʷ�ʽ2.
//	struct student* ps = &s1;
//
//	printf("&ps = %p\n", &ps);
//	printf("s1.name = %s\n", (*ps).name);
//	//	*ps�����ò�����ָ��ľ���s1,
//	printf("s1.age = %d\n", (*ps).age);
//	printf("s1.id = %d\n\n", (*ps).id);
//
//	//��Ȼs1�Ǳ������Ǿ�һ����ռ��һ�����ڴ�ռ䣬����һ���е�ַ
//	//��ַֻ����ָ������洢���ṹ���ָ����������;���struct+�ṹ����
//	//���ڶ��ַ�ʽ���Ԇ��£�C���Ի��ṩ�˵����ַ�ʽ
//
//
//
//	//���ʷ�ʽ3.
//	printf("s1.name = %s\n", ps->name);
//	printf("s1.age = %d\n", ps->age);
//	printf("s1.id = %d\n", ps->id);
//	//->:�ṹ��ָ��ָ�������
//	//�ṹ��ָ��->��Ա��
//	//->����ָ�������ڲ�
//
//	return 0;
//}






//���ʽ��ֵ
//���ʽ��ֵ��˳��һ�������ɲ����������ȼ��ͽ���Ծ�����
//ͬ������Щ���ʽ�Ĳ���������ֵ�Ĺ����п�����Ҫת��Ϊ��������

//��ʽ����ת��
//c������������������������ȱʡ�������͵ľ����������ġ�
//Ϊ�˻��������ȣ����ʽ�е��ַ��Ͷ����Ͳ�������ʹ��֮ǰ��ת��Ϊ��ͨ���ͣ�����ת����Ϊ��������

//�������������壺
//���ʽ����������Ҫ��CPU����Ӧ��������ִ�У�CPU������������(ALU)�Ĳ��������ֽڳ���
//һ�����int���ֽڳ��ȣ�ͬʱҲ��CPU��ͨ�üĴ����ĳ��ȡ�ֻҪ�������������С��int����,���������������

//��ˣ���������char���͵���ӣ���CPUִ��ʱʵ����ҲҪ��ת��ΪCPU�ڲ����Ͳ������ı�׼���ȡ�

//ͨ��CPU������ֱ��ʵ������8�����ֽ�ֱ���������(��Ȼ����ָ���п����������ֽ����ָ��)��
//���ԣ����ʽ�и��ֳ��ȿ���С��int���ȵ�����ֵ����������ת��Ϊint��unsigned int,Ȼ���������CPUȥִ�м���




//��ʽ����ת��
//#include <stdio.h>
//
//int main()
//{
//	char a = 3;
//	//00000000 00000000 00000000 00000011
//	//��һ����������'3'�Ž��ַ�����char���棬����ɶ����ƽضϣ�ȡ���λ�����Ϊ:
//	//00000011
//	
//	char b = 127;
//	//00000000 00000000 00000000 01111111
//	//01111111
//
//	//��ν�����������
//	//���������ǰ��ձ������������͵ķ���λ�������ģ�����λΪ0�����ȫ����0����߷���λΪ1��ȫ����1,����32λ
//	//������֮�������ͣ����ͽ��мӼ��˳�
//	char c = a + b;
//	//b��cҪ�ӵĻ�������a��b��ֵ������Ϊ��ͨ���ͣ�Ȼ����ִ�мӷ����㡣
//	//00000000 00000000 00000000 00000011
//	//00000000 00000000 00000000 01111111
//	//00000000 00000000 00000000 10000010
//	//�ӷ��������֮����Ϊc��char���ͣ���������ضϣ�Ȼ���ٴ洢��a��
//	
//	//c = 10000010
//	
//	printf("%d\n", c);
//	//������Ҫ��ӡ����%d,c��char���͵�,���Ի�Ҫ����һ����������
//	//10000010 ��������
//	//11111111 11111111 11111111 10000010�����룩
//	//11111111 11111111 11111111 10000001�����룩
//	//10000000 00000000 00000000 01111110�����룩
//
//	return 0;
//}





//#include <stdio.h>
//
//int main()
//{
//	char a = -1;
//	//10000000 00000000 00000000 00000001 (����a�Ķ����ƣ�ԭ�룩)
//	//11111111 11111111 11111111 11111110
//	//11111111 11111111 11111111 11111111(����)
//	//11111111(�������λ�ض�) �浽 char a����
//	//%d �������� 11111111 11111111 11111111 11111111(����)
//	//			 11111111 11111111 11111111 11111110(����)
//	//           10000000 00000000 00000000 00000001(ԭ��)
//
//	printf("%d\n", a);
//
//	return 0;
//}





// 0x���������16���Ƶ�����

// 0xb6�Ž�char: 10110110 
//				 11111111 11111111 11111111 10110110
//				 11111111 11111111 11111111 10110101
//				 10000000 00000000 00000000 01001010  2+8+64 = -74

// 0xb6�Ž�int:	10110110 2+4+16+32+128 = 182

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



//���֤����ʽ������ʵ����
//��Ŀ��������ӡʲô

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

//Ϊʲôc���Դ�ӡ����Ϊc�����ͣ�������������
//Ϊʲôa,b�����ӡ����Ϊa,b���������ͣ�������a���бȽ�ʱ(�Ƚ�Ҳ����һ������)��������������������0xb6�Ͳ�ͬ��



//��Ŀ

//#include <stdio.h>
//
//int main()
//{
//	char c = 1;
//
//	//%u �޷������������ʽ unsigned int
//	printf("%u\n", sizeof(c));
//
//	printf("%u\n", sizeof(+c));
//	// +c(��c),��������������
//
//	printf("%u\n", sizeof(!c));
//	//!c����0��0�Ž�ȥ�ͻ�ضϣ�����char
//
//	return 0;
//}





//����ת��������ת��Ҳ��һ����ʽ����ת����

//���ĳ���������ĸ������������ڲ�ͬ�����ͣ���ô��������һ��������ת��Ϊ��һ��������������
//����������޷����С�����Ĳ����ϵ��Ϊ Ѱ������ת��

//int ���int�ߵ����ͽ��������ʱ�򣬳�Ϊ����ת��

// long doeble
// double
// float
// unsigned long int
// long int
// unsigned int
// int


//���ĳ������������������������б������ϵͣ�
//��ô����Ҫת��Ϊ��һ�������������ͺ�ִ������

//���棺��������ת��Ҫ����Ҫ��Ȼ����һЩǱ������

//float f = 3.14
//int num = f;  //��ʽת�������о��ȶ�ʧ





//������������
//���ӱ��ʽ����ֵ������Ӱ�������
//1.�����������ȼ�
//2.�������Ľ����
//3.�Ƿ������ֵ˳��

//�������ڵĲ�������ִ���ĸ���ȡ�������ǵ����ȼ���
//������ߵ����ȼ���ͬ��ȡ�������ǵĽ����

//���ȼ�
//�����

//���ȼ�
//#include <stdio.h>
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = a + b * 3;
//	//������*���㣬����ǲ�������������
//
//	return 0��
//}


//�����
//#include <stdio.h>
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = a + b + 30;
//	//��������ͬ������+�ŵĲ������Ǵ����ҿ�ʼ��ģ�a+b���㣬������+30������ǲ������Ľ����
//	
//	//����Է�ΪL-R(�����ҽ��),R-L(���ҵ�����),��N/A(�޽����)���纯�����ò�����:()
//	//�߼���&&	�߼���||		����������?:		���Ų�����, �����п�����ֵ˳��Ĺ���
//	//������ֵ˳�����˼��һ���ֱ��ʽ���㣬һ���ֱ��ʽ������
//	
//
//	return 0��
//}





//�Ƿ����ʽ1.
//#include <stdio.h>
//
//int main()
//{
//	int ret = a * b + c * d + e * f;
//	//���a,b,c,d,e,f�ֱ��Ǳ��ʽ��������д���ܾͻ�õ�����Ľ��
//	return 0;
//}




//�Ƿ����ʽ2..
//#include <stdio.h>
//
//int main()
//{
//	int c = 1;
//	c = c + --c;
//	//��α��ʽ���������,����ֻ֪��--�����ȼ�����+,��֪����׼��֮ǰ�Ǹ�--c��ֵ�ȣ�����c��ֵ�ȣ�C��ֵ��C����1��1+0=1
//	//--c��ֵ�ȣ�c�͵���0���ڸ�ֵ��ǰ���Ǹ�CҲ��0��0+0=0,һ�����ʽ���ֽ����
//	
//	printf("%d\n", c);
//
//	return 0;
//}





//�Ƿ����ʽ3.
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

//�Ƿ����ʽ����ͬ����������Ľ������һ�������Ա���д�����Ĵ���
//Ҫд��ͨ��������������ȷ��Ψһ�ļ���·���ı��ʽ�����������Ǵ����




//�Ƿ����ʽ4.
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
//	//����û�а취֪����ʲô˳���ǵ�һ��fun()�����Ƚ��У����Ǻ����fun()�Ƚ���
//	printf("%d\n", answer);
//
//	return 0;
//}




//�Ƿ����ʽ5.
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










//��ʶָ��

//�ڼ�����У�ָ�루pointer���Ǳ�������еĶ���
//���õ�ַ������ֱֵ��ָ��(pointers to)���ڵ��Դ洢������һһ���ط���ֵ��
//����ͨ����ַ���ҵ�����ı�����Ԫ������˵:��ַָ��ñ�����Ԫ����ˣ�����ַ����Ϊ��ָ�롱��
//��˼��ͨ�������ҵ���Ϊ��Ϊ��ַ���ڴ浥Ԫ


//ָ���Ǹ�����������ڴ浥Ԫ�ĵ�ַ(���)
//һ���ڴ浥Ԫ��С��һ���ֽ�

//#include <stdio.h>
//
//int main()
//{
//	int a = 10;  	//���ڴ��п���һ��ռ�
//	int* p = &a;	//�������ǶԱ�������ȡ�����ĵ�ַ������ʹ��&������
//					//��a�ĵ�ַ�����p�����У�p����һ��ָ�����
//	return 0;
//}

//�����ָ���е�ֵ�������ɵ�ַ����



//��32λ�Ļ����ϣ���ַ��32��0����1��ɵĶ��������У��ǵ�ַ�͵���4���ֽڵĿռ����洢��
//����һ��ָ������Ĵ�СӦ�þ���4���ֽ�

//�������64λ�����ϣ������64����ַ�ߣ���һ��ָ�������С��8���ֽڣ�
//���ܴ��һ����ַ

//ָ����������ŵ�ַ�ģ���ַ��Ψһ��ʾһ���ַ�ռ��
//ָ��Ĵ�С��32λƽ̨��4���ֽڣ���64λƽ̨����8���ֽ�





//ָ������


//ָ�����͵���������1.
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
//	//���򿪵���->����->�ڴ��ʱ��,һ��һ�����ԣ���*pc = 0��ʱ��ֻ�е�һ���ֽڱ��0
//	//�����*pc��int*ָ�����ͣ��ĸ��ֽڶ�����0
//
//	//printf("%p\n", pa);
//	//printf("%p\n", pc);
//
//	return 0;
//}

//�ܽ᣺ָ�����;�����ָ����н����ò�����ʱ���ܹ����ʿռ�Ĵ�С
//int*p    *p�ܹ�����4���ֽ�
//char*p	 *p�ܹ�����1���ֽ�
//double*p *p�ܹ�����8���ֽ�



//ָ�����͵���������2.
//ָ��Ĳ���
//ָ��ļӼ�

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

//�ܽ᣺ָ������;�����ָ����ǰ���������һ���ж�����



//�����Ӧ��
//#include <stdio.h>
//
//int main()
//{
//	int arr[10] = { 0 };
//
//	int i = 0;
//
//	int* pa = &arr;
//	//�������ĳ�(char* pa)�Ļ�,�����ֻ��Ķ�10���ֽڣ�ֻ���ǰ10���ֽڸ���ֵ��
//	//������arr��40���ֽ�
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

//�ܽ�:ָ������;����˶�ָ������ò���ʱ�ж���Ȩ��(�ܲ��������ֽ�)
//����:char*��ָ������þ�ֻ�ܷ���һ���ֽ�,��int*��ָ��Ľ����þ��ܷ����ĸ��ֽ�




//Ұָ��
//Ұָ�����ָ��ָ���λ���ǲ���֪��(����ģ�����ȷ�ģ�û����ȷ���Ƶ�)


//Ұָ�����1��ָ��δ��ʼ��
//#include <stdio.h>
//
//int main()
//{
//	int a; //�ֲ���������ʼ����Ĭ�������ֵ
//	int* p; //�ֲ���ָ��������ͱ���ʼ��Ϊ���ֵ
//	*p = 20;
//
//	return 0;
//}


//Ұָ�����2��ָ��Խ�����

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
//		//��ָ��ָ��ķ�Χ��������arr�ķ�Χʱ��p����Ұָ��
//	}
//
//	return 0;
//}



//Ұָ�����3��ָ��ָ��Ŀռ��ͷ�

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


//��a�ֲ������ں����������п�����һ���ڴ�ռ�ʱ
//��������ֲ����������ˣ���ַ���ǻᴫ��ȥ�����ǳ�Ұָ����


//��ι��Ұָ��
//1.ָ���ʼ��
//2.С��ָ��Խ��
//3.ָ��ָ��ռ��ͷż�ʱ��NULL(��)
//4.ָ��ʹ��֮ǰ�����Ч��





//#include <stdio.h>
//
//int main()
//{
//	int* pa = NULL;
//	//�����֪����ָ�븳ʲôֵ���͸�NULL����ɿ�ָ��
//	//NULL-������ʼ��ָ��ģ���ָ�븳ֵ
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
//	//ָ��ָ��ռ��ͷż�ʱ��NULL(��)
//
//	*pa = 35;
//	//���ڿ�ָ����ܷ���,�ᱨ��
//
//	return 0;
//
//}



//ָ������
//ָ��+-����
//ָ��-ָ��
//ָ��Ĺ�ϵ����



//ָ��+-����

//#include <stdio.h>
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	int i = 0;
//
//	int* p = &arr[9];
//	//���嵽����ĳһ��ǰ��Ҫ��&����Ȼ���������һ��Ԫ�أ�������������arr[9]����ͻ��
//
//
//	//for (i = 0; i < 5; i++)
//	//{
//	//	printf("%d\t", *p);
//	//	p+=2;//ָ���
//	//}
//
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d\n", *p);
//		p -= 2; //ָ���
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
//	for (vp = &values[0]; vp < &values[N_VALUES];)  //ָ���ǿ��ԱȽϴ�С��
//	{
//		*vp++;
//		//������vp��++���ٽ����ã�++�Ĳ�������*��
//	}
//
//	return 0;
//}




//ָ��-ָ��

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
//ָ���ȥָ��õ�����ָ����ָ��֮��Ĳ�ֵ(���ַ-С��ַ)
//С��ַ��ȥ���ַ�Ľ���ľ���ֵ��ָ����ָ��֮��Ĳ�ֵ
//��һ��ָ���ȥ��һ��ָ�룬����ָ��һ��Ҫָ��ͬһ���ڴ�ռ䣬��������ָ���������Ҫ������ָ�붼��ͬһ������




//��������Ӽ�ģ��ʵ��strlen�Ĺ���

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




//ָ��Ĺ�ϵ����(ָ��Ƚϴ�С)

//#include <stdio.h>
//
//int main()
//{
//	#define N_VALUES 5
//
//	float values[N_VALUES];
//	float* vp;
//	
//	//��һ��д��
//	for (vp = &values[N_VALUES]; vp > &values[0];)
//	{
//		*--vp = 0;
//	}
//
//
//	//�ڶ���д��
//	//for (vp = &values[N_VALUES]; vp >= &values[0]; vp--)
//	//{
//	//	*vp = 0;
//	//}
//
//	
//}

//ʵ���ھ��󲿷ֵı��������ǿ���˳���������ģ�Ȼ�����ǻ���Ӧ�ñ�������д����Ϊ��׼������֤������

//��׼�涨��
//����ָ������Ԫ�ص�ָ����ָ���������һ��Ԫ�غ�����Ǹ��ڴ�λ�õ�ָ��Ƚ�
//���ǲ�������ָ���һ��Ԫ��֮ǰ���Ǹ��ڴ�λ�ý��бȽ�






//ָ�������


//������
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
//	//����sizeof��&arr֮�⣬����������������������ĵ�һ��Ԫ�صĵ�ַ
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






//����ָ��

//#include <stdio.h>
//
//int main()
//{
//	int a = 10;		//a��������int
//
//	int * pa = &a;	//pa��������int*
//	//����дҲ�ǿ��Ե�,�м�տ�һ����һ��*����pa��ָ����������ָ�������ָ���������int����
//
//	int* * ppa = &pa;  //����Ƕ���ָ��  ppa��������int**
//	//ppa��ָ�������ppa��ָ���������ָ�����
//
//	**ppa = 20;
//	printf("%d\n", **ppa);
//	
//	//ͨ��ppa�ҵ�a
//
//	return 0;
//}




//ָ������
//����ָ��


//ָ������
//ָ�������������ָ��

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




//֪ʶ��
//returnֻ�ܷ���һ����

//��������Ƕ�׵��ã�����Ƕ�׶���

//�����Ķ��岻һ��Ҫ���ں�����ǰ�棬���Ժ��涨�壬ǰ������

//�������뱣֤��������ʹ��