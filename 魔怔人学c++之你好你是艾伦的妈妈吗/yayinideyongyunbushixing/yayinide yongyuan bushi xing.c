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


//˼��
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
//	unsigned int num = -1;
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
//ȱ�ݣ��Ը���������,Ҫ�벻�ı����д����ȷ���룬��int�ĳ�unsigned����




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
//	int* p = &a;	//�������ǶԱ���a��ȡ�����ĵ�ַ������ʹ��&������
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
//ָ���Ǹ�����,��Ȼ�Ǹ�����,��һ����������

//ָ�����͵���������1.
//#include <stdio.h>
//
//int main()
//{
//	int a = 0x11223344;
//  //һ��16����������4��bit������16����������8bite��Ҳ����һ���ֽ�
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
//int����+1��ַ+4
//char����+1��ַ+1





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
//	//�����֪����ָ�븳ʲôֵ���͸�NULL����ɿ�ָ��,��ָ�벻��Ұָ��
//	//NULL-������ʼ��ָ��ģ���ָ�븳ֵ
//}






//#include <stdio.h>
//
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	*p = 20;
//	//�ĵ�ַ���ֵֻ�ܽ����ò���*���ܸ�
//	//p = 20�Ĳ���
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
//	//ָ��ָ��ռ��ͷż�ʱ��NULL(��)
//
//	*pa = 35;
//	//���ڿ�ָ����ܷ���,�ᱨ��
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
//����ָ��ĵ�ַ��0000000000000000
//�Ѿ��洢��ַ��ָ���ÿ�֮����0000000000000000





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




//(�Լ����)
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
//	int* pa = arr;
//	int* pb = &arr[3];
//	printf("%d\n", pb - pa);
//
//	return 0;
//}
//ָ���ȥָ��õ�����ָ����ָ��֮��Ĳ�ֵ(���ַ-С��ַ)
//С��ַ��ȥ���ַ�Ľ���ľ���ֵ��ָ����ָ��֮��Ĳ�ֵ
//��һ��ָ���ȥ��һ��ָ�룬����ָ��һ��Ҫָ��ͬһ���ڴ�ռ䣬��������ָ���������Ҫ������ָ�붼��ͬһ������



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
//�������ָ�벻��ָ��ͬһ������,���������û������
//ָ��ı��ʻ��ǵ�ַ
//ָ����������������ʺ����ӷ�






//��������Ӽ�ģ��ʵ��strlen�Ĺ���

//#include <stdio.h>
//
//int mystrlen(char* arr)
//{
//	char* start = arr;
//	char* end = arr;
//
//	while (*end != '\0')  //�������Ҫ*end,��Ϊend�ǵ�ַ,*end���ǽ�����֮���Ԫ��
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

//�ڶ���д��ʵ���ھ��󲿷ֵı��������ǿ���˳���������ģ�Ȼ�����ǻ���Ӧ�ñ�������д����Ϊ��׼������֤������

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
//		//ָ�������ʼ��
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
//һ��ָ��洢���Ǳ����ĵ�ַ
//����ָ�뼰���ϴ洢����ָ��ĵ�ַ




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

//�β����ں������õ�ʱ���ʵ�������ſ����ڴ�ռ�


//��Ŀ:
//��������exec((v1,v2),(v3,v4),v5,v6)�У�ʵ�εĸ����Ƕ��ٸ���


//(,)���Ƕ��ű��ʽ�����ű��ʽ�Ľ�������ұ��Ǹ����ʽ�Ľ��
//���Դ���4��


//�������Ӧ��׷����ھ۵����(��˼����Ƶĺ���Ҫ����һЩ)

//�������ʹ��ȫ�ֱ������˹���

//�������ʱ�����������˹���

//��ƺ���ʱ����������˭�������˭�ͷ�

//������ʵ�ο����ǣ����������������ʽ

//main��λ�ÿ�������

//��������ʽ��������ջ�б����

//��һ�������ڸ�������ж���ı�����һ���ڱ�������Χ����Ч(�������ָ�����еĳɶ����Ź��ɵĴ���)
//����:

//#include <stdio.h>
//
//int main()
//{
//	{
//		int a = 10;
//	}
//	printf("%d\n", a);
//	//�ᱨ����Ϊ�����������������ڴ�����ڲ���
//}


//��Ŀ��
//������int a[2][3] = { 1,2,3,4,5,6 };��ֵΪ4������Ԫ����()��
//A. a[0][0]
//B. a[1][0]
//C. a[1][1]
//d. a[2][2]


//����B



//��Ŀ:����sizeof�Ľ����ʲô
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




//��Ŀ��ʵ��һ��������Ԫ�����õĺ���

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



//��Ŀ��������A�е�����������B�е����ݽ���(���������Сһ��)

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




//���ʽ��ֵ�ȿ��Ƿ������������������ת�����ٽ��м���

//���ʽ���������ʱ���ȿ����ڲ����������ȼ�������˭

//���ڲ����������ȼ���ͬ������£����������Ľ���Ծ�������˳��


//���±��ʽ�ǳ������
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


//Ұָ�벻������ʹ��

//�ֲ�ָ���������ʼ������Ұָ��

//32λϵͳ��,intռ4���ֽڣ�ָ��ռ4���ֽ�,����ϵͳ����ʹ�õ�����ڴ�ռ���2^32

//64λϵͳ��,intռ4���ֽ�,ָ��ռ8���ֽ�,����ϵͳ����ʹ�õ�����ڴ�ռ���2^64


//��Ŀ��������������ʲô��
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


//intָ���һ���Ǽ�4���ֽ�
//charָ���һ���Ǽ�һ���ֽ�
//shortָ���һ���Ǽ������ֽ�




//��Ŀ�����´�������ʲô
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


//��һ���ڴ�����ǵ��ŷŵ� ����44 33 22 11



//��Ŀ������������>����<

//#include <stdio.h>
//
//int i;	//ȫ�ֱ���-����ʼ���Ļ�Ĭ��Ϊ0
//
//int main()
//{
//	i--;
//	if (i > sizeof(i))	
//	//sizeof���ص����޷�����
//	{
//		printf(">");
//	}
//	else
//	{
//		printf("<");
//	}
//	return 0;
//}
	//sizeof()�������/������ռ�ڴ�Ĵ�С,����һ��������(Ҳ�����޷�����)
	//��һ���������޷��������м����ʱ�򣬻������ת�����޷�����
	//i--���-1��-1ת�����޷�����������λ���λ��1��Ϊ��Чλ�������Ƿǳ��������

	//-1
	//10000000000000000000000000000001 ԭ
	//11111111111111111111111111111110 ��
	//11111111111111111111111111111111 ��
	//ת�����޷�����֮�󣬱������������ԭ�������




//��Ŀ:��������в�ͬλ�ĸ���
//ʵ������int(32λ)����m��n�Ķ����Ʊ���У��ж��ٸ�(bit)��ͬ��
//����1999 2299 �����7

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
////	//system�⺯��-ִ��ϵͳ����-pause(��ͣ) ,��Ҫ����<stdlib.h>��ͷ�ļ�
////	//��ͣ����return0ǰ�����д������
//	return 0;
//}


//����2.
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




//��ӡһ�������Ķ��������������е�ż��λ������λ

//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//
//	int i = 0;
//
//	printf("����λ��\n");
//
//	//Ϊʲô������30,��Ϊ30���ǵ�31λ,0�ǵ�һλ
//	for (i = 30; i >=0; i-=2)
//	{
//		printf("%d ", (a>>i) & 1 );
//	}	
//	
//	printf("\n");
//
//	printf("ż��λ��\n");
//	for (i = 31; i >= 1; i-=2)
//	{
//		printf("%d ", (a>>i) & 1 );
//	}
//
//	return 0;
//}



//��Ŀ����ָ���ӡ����(��ʹ���±�)
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


//�ݹ���̫������ջ���������




//��Ŀ����ʹ�ÿ⺯�����ַ�����������

//����1.
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



//����2.
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



//���ַ���ʵ��strlen:1.����������(6409)	2.�ݹ�ķ���(��������ʱ����)(6438)   3.ָ���ָ��ķ���(8844)



//��Ŀ��дһ���ݹ麯��DigitSum(n),����һ���Ǹ��������������������֮��
//���磺1729 ����(1+7+2+9) = 19;

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




//��Ŀ����дһ������ʵ��n��k�η���ʹ�õݹ�ʵ��

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






//��ʶ�ṹ��
//1.�ṹ�����͵�����
//2.�ṹ���ʼ��
//3.�ṹ���Ա����
//4.�ṹ�崫��



//1.�ṹ�������
//�ṹ��һЩֵ�ļ��ϣ���Щֵ��Ϊ��Ա�������ṹ��ÿ����Ա�����ǲ�ͬ���͵ı���


//#include <stdio.h>
//
////struct-�ṹ��ؼ���		stu-�ṹ���ǩ(����ʲô��ʲô)		struct stu-�ṹ������
////struct stu��һ���ṹ�����ͣ�û��ռ�ڴ�ռ䣬��int��char�ȼ�
//
//struct stu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}s2,s3; //��β��Ҫ�зֺ�,�����s2,s3��s1һ��,���ǽṹ�����,ֻ����s1�Ǿֲ��Ľṹ�������s2,s3��ȫ�ֵĽṹ�����
//		//����������ṹ������ķ������Ƽ�ʹ�ã���ΪҪ�����ٵ�ȥʹ��ȫ�ֱ���
//int main()
//{
//	struct stu s1;
//	//����ʱ��struct stu����ṹ������������һ��s1���������ʱ����ʱ���ռ�ݿռ�,�ڴ�֮ǰ���ᴴ���ռ�
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
//}stu; //���Ƕ������ض�������Ľṹ������ typedef
//
//int main()
//{
//	//stu s1;
//	//struct stu s2;
//	//�����ֶ����Զ������
//    //���������ǽṹ�����
// 
//	stu s1 = {"����",20,"1824928888","��"};  //�ṹ���ʼ��
//	struct stu s1 = { "��˹",21,"1123389898","��" };
//
//	printf("%s %d %s %s\n", s1.name, s1.age, s1.tele, s1.sex);
//
//}





//�ṹ��Ա������
//�ṹ�ĳ�Ա�����Ǳ���(��ͨ�ı���),���飬ָ�룬�����������ṹ��


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
//	struct s ds;	//�ṹ��������ԷŽṹ��
//	char* pc;
//};
//
//int main()	
//{	
//	char arr[] = "hello orld!";
//	struct t s1 = { "�ƹ�",{10,'m',"12389765",3.14},arr };
//
//	printf("%d\n", s1.ds.a); 
//	printf("%lf\n", s1.ds.d); 
//	printf("%s\n", s1.pc);
//
//	return 0;
//}




//�ṹ���Ա�ķ���

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
//	stu s = { "����",20,"123234873","��" };
//
//	print1(s);  //�������Դ��ṹ�����
//
//	print2(&s);
//
//	print3(&s);
//	//����ѡ��print3(���ṹ��ĵ�ַ)����Ϊ��ַ��ȥ��������ʱ����һ��ʵ�Σ��Ͳ��������Դ�˷�
//
//	return 0;
//}

//�������ε�ʱ�򣬲�������Ҫѹջ��
//�������һ���ṹ������ʱ�򣬽ṹ����󣬲���ѹջ��ϵͳ�����Ƚϴ����Իᵼ�����ܵ��½�
//���Խṹ�崫�ε�ʱ��Ҫ���ṹ��ĵ�ַ









//ʵ�õ��Լ���

//ʲô��bug��
//������ʲô���ж���Ҫ��
//debug��release�Ľ���
//window�������Խ���
//һЩ���Ե�ʵ��
//���д��(���ڵ���)�Ĵ���
//��̳����Ĵ���



//���ԵĻ�������
//1.���ֳ������Ĵ���
//2.�Ը��룬�����ȷ�ʽ�Դ�����ж�λ
//3.ȷ�����������ԭ��
//4.�����������Ľ���취
//5.�Գ���������Ը��������²���





//�ڴ�ռ�����ջ������������̬��
//ջ�������:�ֲ���������������ʽ��������������Ҳ��ջ�����ٿռ�
//���������:��̬�ڴ���䣬malloc/free��realloc��calloc
//��̬�������:ȫ�ֱ�������̬����

//�κ�һ�κ������ö������ڴ����ջ������һ��ռ�
//�������ô������ȴ��ұ߿�ʼ����  eg: add(a,b) �Ȱ�b����

//�������ε�ʱ�򣬲�������Ҫѹջ��
//�������һ���ṹ������ʱ�򣬽ṹ����󣬲���ѹջ��ϵͳ�����Ƚϴ����Իᵼ�����ܵ��½�
//���Խṹ�崫�ε�ʱ��Ҫ���ṹ��ĵ�ַ




//˼��
//����˵�����ֻ���û�а���˹̹��û�а���ͼ��û��xxx������������ƻ��û������ţ�ٵ��Դ��Ļ������ڵ�����϶�����������һ�� �ȵ����ƵĻ���ʱ��
//��ʵ���Ѿ�˵�������ֿ����Եķ��棬�Ѿ�����ì���ˣ�������ʷ�Ͼ��Ի���ĳЩʱ�������˿�ϧ�ģ����˸�̾�����xxxû������������������죬�ȵȻ��������ƵĻ���
//����ʵ���ǣ���ʷ�Ѿ���չ���������ʱ���ˣ�������û����ν�����ֿ����ԣ�Ҳ������ʷû�����





//Debug��Release�Ľ���
//Debugͨ����Ϊ���԰汾��������������Ϣ�����Ҳ����κ��Ż������ڳ���Ա���Գ���
//Release��Ϊ�����汾���������ǽ����˸����Ż���ʹ�ó����ڴ����С�������ٶ��϶������Ž⣬�Ա��û��ܺõ�ʹ�á�
//Release��û�е��Եģ�Debug�汾�ڴ�ռ�ø���



//�ϵ�
//F9 �����ϵ��ȡ���ϵ㣬�����ڳ��������λ�����öϵ�
//�����Ϳ���ʹ�ó�������Ҫ��λ������ִֹͣ�У��̶�һ����ִ����ȥ


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



//���ö�ջ

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

//1.ջ����Ĭ��ʹ�ã�
//��ʹ�øߵ�ַ�Ŀռ�
//��ʹ�õ͵�ַ�Ŀռ�

//2.���������±������
//��ַ���ɵ͵��߱仯



//Debug�汾�µĵ�ַ:i�����棬arr������
//000000C8DF9DF9D8
//000000C8DF9DF9B4

//Realease�汾�µĵ�ַ:i�����棬arr������
//00000090EEAFFE18
//00000090EEAFFE10

//��release�汾��ϵͳ���Զ��Դ�������Ż���������ı��ڴ�ֲ��ṹ





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





//ģ��ʵ��strcpy


//��д��

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



//����3�����������Ż��汾1.0

//#include <stdio.h>
//
//void mystrcpy(char* arr1, char* arr2)
//{
//	while (*arr1++ = *arr2++ )
//	{
//		;
//	}
//	//������ѭ����������Ϊ\0��ѭ��ʱ������ֱ�Ӱ�ѭ���ڲ��ı��ʽ����Ϊѭ������������Ϊ0��ѭ�����˳�
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



//�Ż��汾2.0

//#include <stdio.h>
//
//void mystrcpy(char* arr1, char* arr2)
//{
//	if (arr1 != NULL && arr2 != NULL) //�����жϵ������Ƿ�ֹ�����ָ��,���ǵ���ʱ�����׷��ִ���
//	{
//		while (*arr1++ = *arr2++ )
//		{
//			;
//		}
//      //������ѭ����������Ϊ0��ѭ��ʱ������ֱ�Ӱ�ѭ���ڲ��ı��ʽ����Ϊѭ������������Ϊ0��ѭ�����˳�
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




//�Ż��汾3.0

//#include <stdio.h>
//#include <assert.h>
//
//void mystrcpy(char* arr1, char* arr2)
//{
//	assert(arr1 != NULL);   //���ԣ���Ҫ��<assert.h>��ͷ�ļ�
//	assert(arr2 != NULL);	//�����ִ����ʱ��ᱨ�����һ���ʾ�ڶ�����
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

//const����ָ�������*���ʱ,���ε���*p,Ҳ����˵:����ͨ��p���ı�*p��ֵ
//const����ָ�������*�ұ�ʱ,���ε���ָ�����p����,p�ĵ�ַ���ܱ��ı�




//�ռ��Ż��汾

//#include <stdio.h>
//#include <assert.h>
//
////char *strcpy( char *strDestination, const char *strSource );
////MSDN���strcpy������
//
//char* mystrcpy(char* arr1, const char* arr2)
//{
//	int* ret = arr1; //Ϊʲô����Ҫ����ret�� ��Ϊ�����whileѭ������arr1һֱ��++,�������arr1,���صľ���arr1�����һλ�ĵ�ַ
//	
//
//	assert(arr1 != NULL);   //���ԣ���Ҫ��<assert.h>��ͷ�ļ�
//	assert(arr2 != NULL);	//�����ִ����ʱ��ᱨ�����һ���ʾ�ڶ�����
//
//	//��arr2ָ����ַ���������arr1ָ��Ŀռ�,����'\0'�ַ�
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



//������coding����
//1.ʹ��assert
//2.����ʹ��const
//3.�������õı�����
//4.��ӱ�Ҫ��ע��
//5.������������

//�Բ�һ���д����ˣ����޵���




//ģ��ʵ��strlen

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










//C���Խ���

//�������ڴ��еĴ洢
//1.����������ϸ����
//2.�������ڴ��еĴ洢��ԭ�룬���룬����
//3.��С���ֽ�����ܼ��ж�
//4.���������ڴ��еĴ洢����




//�������ͽ���
//C�������ͷ�Ϊ1.�������ͺ�2.�Զ�������(��������)
//����������char,short,int,float,double�ȵ�...
//


//���͵�����
//1.ʹ��������Ϳ����ڴ�ռ�Ĵ�С(��С������ʹ�÷�Χ)
//2.��ο����ڴ�ռ���ӽ�


//#include <stdio.h>
//
//int main()
//{
//	int a = 10;
//	float f = 10.0;
//	//���ͺ͸��������ڴ��д洢��ͬ���������Բ���洢��
//	return 0;
//}



//���ͼ��壺char,short,int,long

//char��Ϊunsigned char(�޷���char) �� signed char(�з���char)
//unsigned��ΧΪ0-255(11111111,���λΪ��Чλ),signed char��ΧΪ-128-127(11111111,���λΪ����λ)

// char 
//		unsigned char
//		signed char
// short 
//		unsigned short int //���int����ʡ��Ҳ����д��,short��ȫ�ƾ���signed short int
//		signed short int
// int  
//		unsigned int
//		signed int
// long
//		unsigned long int
//		signed long int  //long��ȫ���� signed long int



//�����ͼ���
//float  ->�����ȸ�����
//double ->˫���ȸ�����



//��������(�Զ�������)
//��������   ������ȥ��������������� eg:int arr[10] ,int [10]������������
//�ṹ������ struct (���ǽṹ��ؼ���,���Ͻṹ���ǩ���ǽṹ������)
//ö������   enum
//��������   union



//ָ������
//int* p;
//char* p1;
//float* p2;
//double* p3;
//void* pv;     void��������ָ�������������ָ��



//������
//void��ʾ������(������)
//ͨ��Ӧ���ں����ķ������ͣ������Ĳ�����ָ������

//#include <stdio.h>
//
//void test(void)  //void�������ں����ķ������ͺͺ����Ĳ���,ò������ʽ����������void,ʵ�ʲ����ò���void
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




//ԭ�룬���룬����
//������е�����(���� signed,������������ԭ������ʽ�洢��)�����ֱ�ʾ��������ԭ�룬����Ͳ���
//���ֱ�ʾ�������з���λ����ֵλ�����֣�����λ������0��ʾ'��'����1��ʾ'��'
//����ֵλ���ֱ�ʾ����������ͬ
//��ʵ�޷�����Ҳ����˵��ԭ������洢����Ϊ�޷�����������������ԭ��������ͬ
//�з��ŵ����������޷�����  +signed = unsigned


 
//#include <stdio.h>
//
//int main()
//{
//	int a = 20; //4���ֽ�-32��bit
//	//00000000000000000000000000010100 - ԭ��
//	//00000000000000000000000000010100 - ����
//	//00000000000000000000000000010100 - ����
//	
//	int b = -10;
//	//10000000000000000000000000001010 - ԭ��
//	//11111111111111111111111111110101 - ����
//	//11111111111111111111111111110110 - ����
//	//1111 1111 1111 1111 1111 1111 1111 0110 - ����
//	//0xFFFFFFF6
//
//	return 0;
//}



//����������˵�����ݴ������ʵ��ŵ��ǲ���
//�ڼ����ϵͳ��������ֵһ���ò�������ʾ�ʹ洢��ԭ�����ڣ�ʹ�ò��룬���Խ�����λ����ֵ��ͳһ����;
//ͬʱ,�ӷ��ͼ���Ҳ����ͳһ����(CPUֻ�мӷ���)
//����,�����ԭ���໥ת��,�������������ͬ��,����Ҫ�����Ӳ����·




//ʲô�Ǵ��С��
//���(�洢)ģʽ,��ָ���ݵĵ�λ�������ڴ�ĸߵ�ַ��,�����ݵĸ�λ,�������ڴ�ĵ͵�ַ��;
//С��(�洢)ģʽ,��ָ���ݵĵ�λ�������ڴ�ĵ͵�ַ��,�����ݵĸ�λ,�������ڴ�ĸߵ�ַ��;
//��С�˴洢���ֽڵ�����ʽ�����Ƕ�����λ����ķ�ʽ�����Դ��Ҳ�д���ֽ���洢ģʽ��С�˽�С���ֽ���洢ģʽ

//0x11223344    44�ǵ�λ,11�Ǹ�λ
//��˴洢ģʽ: 11 22 33 44
//С�˴洢ģʽ: 44 33 22 11
//�͵�ַ***************************�ߵ�ַ




//��Ŀ:дһ�δ���,�жϵ�ǰ�������ֽ�����ʲô

//#include <stdio.h>
//
//int check_sys()
//{
//	int a = 1;
//	char* pa = (char*)&a;
//	//����ΪʲôҪ������*,��Ϊָ�����ͽ����þ�����ָ���ܷ��ʼ����ֽ�,char����ָ��������ܷ���1���ֽ�
//	//Ҳ����00000001(����)
//	if (*pa == 1)  //��������õ�һ���ֽ���1,���ڴ��д洢�ľ���10 00 00 00(��ַ),Ҳ����˵�������ѵ�λ���ݷ����˵�λ�ĵ�ַ
//	{              //��������õ�һ���ֽ���0,���ڴ��д洢�ľ���00 00 00 01,Ҳ����˵�������ѵ�λ���ݷ����˸�λ�ĵ�ַ
//                 //������ȡ�ֽ��Ǵ�������ȡ�ģ�Ҳ���Ǵӵ͵�ַ��ʼȡ  �͵�ַ****************�ߵ�ַ
//                 //char���ʹ�������ȡһ���ֽڣ�int��������ȡ4���ֽ�
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
//		printf("��ǰ������С�˴洢\n");
//	}
//	else
//	{
//		printf("��ǰ�����Ǵ�˴洢\n");
//	}
//
//	return 0;
//}

//����������Զ���С�˴洢
//C���Բ�û����ȷ�涨Ҫ��ô�洢�����С�����ɱ�����������

//ָ�����͵�����:
//1.ָ�����;�����ָ������ò����ܷ��ʼ����ֽ�:char* p,*p������һ���ֽ�;  int* p,*p������4���ֽ�
//2.ָ�����;�����ָ��+1,-1,�ӵĻ��߼����Ǽ����ֽ�;char* p;p+1,����һ���ַ�(1���ֽ�);  int* p,p+1,����һ������(4���ֽ�)


//Ϊʲô���д��ģʽ֮���أ�������Ϊ�ڼ����ϵͳ��,���������ֽ�Ϊ��λ��,ÿ����ַ��Ԫ����Ӧ��һ���ֽ�,һ���ֽ�Ϊ8bit��
//������C�����г���8bit��char֮�⣬����16bit��short��,32bit��long��(Ҫ������ı�����),���⣬����λ������8λ����32λ�Ĵ�����,
//���ڼĴ�����ȴ���һ���ֽ�,��ô��Ȼ������һ�����������ֽڰ��ŵ�����,��˾͵����˴�˴洢ģʽ��С�˴洢ģʽ

//����һ��16bit��short��x�����ڴ��еĵ�ַλ0x0010,x��ֵλ0x1122,��ô0x11Ϊ���ֽ�,0x22Ϊ���ֽڡ�
//���ڴ��ģʽ,�պ��෴�����ǳ��õ�x86�ṹ��С��ģʽ,��KETL C51��Ϊ���ģʽ���ܶ�ARM��DSP��ΪС��ģʽ
//��ЩARM��������������Ӳ����ѡ���Ǵ��ģʽ����С��ģʽ



//��Ŀ1.���������ʲô

//#include <stdio.h>
// 
//int main()
//{
//	unsigned char a = -1;
//	//�޷���λ�����������ȫ��0,Ϊʲô����Ϊ��λ���Ƿ���λ������Чλ���������ȫ��0
//	printf("%d\n", a);
//	
//	return 0;
//}
// 
//�����������нضϵ�Ҳ�ǲ���



//��Ŀ2.���������ʲô��

//#include <stdio.h>
//
//int main()
//{
//	char a = -128;  //����ĳ�128���Ҳ��һ��,Ϊʲô?��Ϊ128����127+1,127+1��char�������-128
//	//10000000 00000000 00000000 10000000 ԭ
//	//11111111 11111111 11111111 01111111 ��
//	//11111111 11111111 11111111 10000000 ��
//	//10000000
//
//	//%d-��ӡ�з�������
//	//%u-��ӡ�޷�������
//	//����������������ǰ�油ʲô������a��ʲô���ͣ�a��char���ͣ��������з��ŵģ�ǰ��ȫ����1,
//	//������ȡ����%u��%u��ӡʱ�Űѷ���λ��Ϊ��Чλ
//	printf("%u\n", a);
//
//	//����char a = -1�ٴ�ӡ%u����
//
//	return 0;
//}

//ת�����޷�����֮��,����λ������Чλ��,�Ͳ�����ת������,��Ϊ����(�޷�����)ԭ������ͬ





//char�ķ�Χ

//char��һ���ֽڣ���С��00000000�������11111111
//00000000 -> 0(ԭ��)
//00000001 -> 1
//00000010 -> 2
//00000011 -> 3
//...
//01111111 -> 127
//�ڴ��д洢���ǲ���,����char��signed char,������char��Χ�ڵ���������
//������char��Χ�����и���

//10000000 -> -128 (�洢���ǲ���,ת��ԭ�����-128)
//Ϊʲô10000000��-128��10000000-1�ɷ��룬���Ǹ��������ˣ���Ϊ���з��ŵ�char������ȫ��0
//��110000000����ת�ɷ�����101111111,��ת��ԭ�����110000000
//ԭ���������ͬ,�����һ��8����λ��ԭ���һ��8����һ��,���Ե��з���char����10000000,����ת����-128
//
//10000001 ->-127 
//...
//11111101 ->-3
//11111110 ->-2
//11111111 ->-1

//����signed char�ķ�ΧΪ-128-127


//�������޷��ŵ�char(unsigned char)
//00000000
//00000001
//...
//11111111

//��Χ����0-255

//���������һ��ԲȦ,ԲȦ�Ŀ�ͷ��0,��127�ϼ�1,01111111+1 = 10000000 �ͻ���-128,�����ϼ�1�ͻ���-127,һֱ������ֻ�ص�0


//ͬ��,Ҳ���Է�����int,short,long�����͵ķ�Χ





//��Ŀ3:���´�������ʲô?

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


//��һ���з�������һ���޷�������ӵ�ʱ���з���������ת���޷������������
//���ղ������ʽ���м���,����ʽ��Ϊ�޷�������




//��Ŀ4:���´�������ʲô?

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

//i��Զ�������Ǹ���,��Ϊi���޷�����,������ô��������ڵ���0
//�������unsigned int ��unsigned char�Ļ�,����9876543210Ȼ���255��ʼ��ѭ��
//��Ϊ�����char�Ļ���Ҫ��������,unsigned���������Ļ����ȫ��0����ס����unsigned���������Ż�ȫ��0
//int����������ͣ��Ͳ���������




//��Ŀ5:���´�������ʲô����˵��ԭ��
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

//strlen��'\0'�ͻ�ֹͣ����,'\0'��ASCII�������0,strlen����ͳ��\0֮ǰ�ж��ٸ�Ԫ��
//Ϊʲô��255�����������char����,��Χ��-128��127
//��-1��ʼ,һֱ��,��-2,-3��-128��ʱ��,�ټ�һ�ͳ���127,Ȼ��3,2,1,1�ټ�ȥ1����0,strlenֹͣ����
//128+127����255



//��Ŀ6:���´�������ʲô?

//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	printf("%s\n", a);
//}
//'\0'��0��һ����,ASCII��ֵ��Ϊ0������������Ҫ��δ�ӡ,��%d��ӡ����0,��%c��ӡ���ǿգ���'\0'��
//��%s��ӡ��(NULL)




//��Ŀ��:���´�������ʲô?

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

//��ʹ���޷�������ʱ��ҪС���ж�����,��Ȼ������ѭ��
//��i==255��ʱ��i�ٴ�++�����256��
//����i��unsigned char,��256�Ž�ȥ��ضϣ����00000000,����ѭ�������������½��뵽ѭ��
//��<=�ĳ�<,���ܽ����ѭ��������







//���������ڴ��еĴ洢


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



//���͵ķ�Χ�洢��C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.37.32822\include
//���ͷ�Χ�ļ��洢��limits.hͷ�ļ���,�����ͷ�Χ�ļ��洢��float.hͷ�ļ���



//#include <stdio.h>
//
//int main()
//{
//	int n = 9;
//	float* pFloat = (float*)&n;
//	printf("n��ֵΪ:%d\n", n);
//	printf("*pFloat��ֵΪ:%f\n", *pFloat);
//
//	*pFloat = 9.0;
//	printf("num��ֵΪ:%d\n", n);
//	printf("*pFloat��ֵΪ:%f\n", *pFloat);
//
//	return 0;
//}

//int a = 9;
//char* p = (char*)&a; //ȡ��ַa��������int*,ֱ�ӷ���char*����ᱨ��,����Ҫǿ������ת��
//ǿ������ת���ǲ���ı�ֵ��,�����Ǿ��ȶ�ʧ



//���ݹ��ʱ�׼IEEE(�����͵��ӹ���Э��)754,����һ�������Ƹ�����v���Ա�ʾ���������ʽ:
//(-1)*S*M*2^E
//(-1)^S��ʾ����λ,��S=0ʱ,vΪ��������S=1ʱ��vΪ����
//M��ʾ��Ч���֣����ڵ���1��С��2 (1<=M<2)
//2^E��ʾָ��λ

//9.0���ڴ��еĴ洢��:
//1001.0
//(-1)*0 * 1.001 * 2^3
//(-1)*S * M     * 2^E



//�������Ϲ�ʽ,�������洢ֻ��Ҫ�洢S,M,E�����ˣ�����S,M,E���ܻ�ԭ��ԭ���ĸ�����

//IEEE 754�涨:����32λ�ĸ�����(float),��ߵ�1λ�Ƿ���λ,���ŵ�8λ��ָ��E��ʣ�µ�23λΪ��Ч����M
//  0(1)EEEEEEEEMMMMMMMMMMMMMMMMMMMMMMM (�����ȸ�������ģ��)
//(1bit)  (8it)         (23bit)

//IEEE 754�涨:����64λ�ĸ�����(double),���λ��1λ�Ƿ���λS�����ŵ�11λ��ָ��E��ʣ�µ�52λΪ��Ч����M
//  0(1)EEEEEEEEEEEMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM (˫���ȸ�������ģ��)
//(1bit)   (11bit)                  (52bit)
//E���޷�����,�����Ķ�������

//����M�Ĺ涨,��ΪMֻ����>=1 <2������,������Զ��1.xxxxx...,���ǰ�1���洢��ȥ�Ļ�,�ͻᶪʧһ������λ,��ΪMǰ����Զ��1
//���Թ涨M��1���ô��ȥ,��ȥ��1,��Ҫ��ʱ���ٲ���1,������������������



//0.5���ڴ��еĴ洢��:
//0.5
//0.1  0.5ʮ�����ڶ������о��Ǳ��Ϊ0.1��Ϊʲô�أ���Ϊ0.1����1* 2^-1(1����2�ĸ�һ�η�)������11����1����2��0�η�����1����2��1�η�
//(-1)*0 * 1.0 * 2^-1
//(-1)*S * M   * 2^E
//S - 0
//M - 1.0
//E - -1
//E�п����Ǹ���,����,EΪһ���޷�������(unsigned int),
//����ζ��,���EΪ8λ,����ȡֵ��ΧΪ0-255�����EΪ11λ������ȡֵ��ΧΪ0-2047��
//��������֪������ѧ�������е�E�ǿ��Գ��ָ����ģ���8����λ��E�����洢�ĸ�����-127����11����λ��E�����洢�ĸ�����-1023
//������IEEE754�涨�������ڴ�ʱE����ʵֵ�����ټ���һ���м���,�����м�����ֵ������ʵֵ����ȥ�м����������ʵֵ
//����8λ��E������м�����127������11λ��E������м�����1023
//����2^10��E��10�����Ա����32λ������(float)ʱ�����뱣���10+127=137����10001001
//�����м���,�����͸�����Ҫ���м���


//���ڸ��������ڴ��еĴ洢,�����Ȱ�һ��ʮ���Ƶĸ�����ת�ɶ����Ƶĸ�����Ȼ��ת���ɿ�ѧ�������ķ�ʽ,������S,E,M




//������ת���ɶ����ƣ�

//С����ôת���ɶ����ƣ�
//��:0.125ʮ����ת�ɶ�����
//0.125*2 = 0.25  -> 0 (��������ȡ����)
//0.25*2  = 0.5   -> 0
//0.5*2   = 1     -> 1
//ֱ���˵���ȫ����1Ϊֹ,����0.125ת�ɶ�����������0.001

//����:0.31ת�ɶ�����
//0.31*2 = 0.62  -> 0
//0.62*2 = 1.24  -> 1
//0.24*2 = 0.48  -> 0
//0.48*2 = 0.96  -> 0
//0.96*2 = 1.92  -> 1
//...��Զ������ʹ�����2��ȫ����1,������32λ�;�ȷ��32λ
//0.31������������0.01001...
//�������ľ��Ⱦ�������β��������

//������0.01����2�ĸ����η�,0.0001����2�ĸ�4�η�

//x��-y�η����� 1/x��y�η�
//����:2^-3����(1/2)^3  = 1/2*1/2*1/2


//���������ڴ��еľ���洢����

//���ӣ�5.5�浽�ڴ���

//1.�Ȱ�5.5��Ϊ�����ƣ�101.1
//2.��ͨ�������ƻ�Ϊ��׼��ʽV��(-1)*0 * 1.011 * 2^2
//3.����E�Ļ����ϼ����м���127(1023):Ҳ����127+2 = 129
//4.�����0100 0000 1011 0000 0000 0000 0000 0000�����ڴ���
//ת����ʮ�����ƾ���0x40b00000,�ڵ����д��ڴ�ȷʵ��0x40b00000


//��Ŀ:5.5ת�ɶ��������Ϳ�ѧ������
//5.5
//101.1  ������
//(-1)*0 * 1.011 * 2^2
//   S       M      E
//S = 0
//M = 1.011
//E = 2

//��������ʵ�洢���ڴ�����:
//0 2 
//0 2+127
//0 129 (129��Ҫת���ɶ����Ʋ���)
//0 10000001 011 (M��float������ռ23λ����Ҫ����)
//0 10000001 01100000000000000000000
//01000000101100000000000000000000

//Ҫ����Ļ��������ڴ��в鿴,���ڴ�����ʾ����16����,����Ҫ�Ѷ�����ת��16����Ȼ���ٿ��ڴ�����û��ת��
//0100 0000 1011 0000 0000 0000 0000 0000 (4��������λ��һ��16����λ)
//0x40B00000


//#include <stdio.h>
//
//int main()
//{
//	float a = 5.5;
//	return 0;
//}

//������Щ֪ʶ�Ǹ��������ͷŽ�ȥ�����,������ȡ������������һ�����





//ָ��E���ڴ���ȡ�����������ٷֳ��������:

//1. E��ȫΪ0��ȫΪ1:
//��ʱ���������Ͳ�������Ĺ����ʾ����ָ��E�ļ���ֵ��ȥ127(��1023)���õ���ʵֵ���ٽ���Ч����Mǰ����ϵ�һλ��1.
//����:0.5(1/2)�Ķ�������ʽΪ0.1�����ڹ涨�������ֱ���Ϊ1������С��������1λ��
//��Ϊ1.0*2^(-1),�����Ϊ-1+127=126,��ʾΪ01111110����β��1.0ȥ����������Ϊ0������0��23λ
//00000000000000000000000����������Ʊ�ʾ��ʽΪ��
//0 01111110 00000000000000000000000


//2. EΪȫ0�������
//��ʱ����������ָ��E����1-127(����1-1023)��Ϊ��ʵֵ,��Ч����M���ټ��ϵ�һλ��1,���ǻ�ԭΪ0.xxxxxxxx��С����
//��������Ϊ�˱�ʾ+-,�Լ��ӽ���0�ĺ�С������
//0 00000000 01100000000000000000000
//��ʾΪ+/- 0.011 * 2^-126
//EȫΪ0˵��E��ʵֵ(û����127ʱ��ֵ)��-127,2^E,Ҳ����2^-127,�������Ǻ�С������,����Ϊ0


//3. EȫΪ1�����
//��ʱ,�����Ч����MȫΪ0����ʾ+-�����(����ȡ���ڷ���λS)
//0 11111111 01100000000000000000000
//E+127=255
//E = 128
//1.xxx * 2^128
//��ʾ��������������


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
//��������inf,��˼�������



//#include <stdio.h>
//
//int main()
//{
//	int n = 9;  //9�Ĳ�����00000000000000000000000000001001
//	float* pFloat = (float*)&n;
//	printf("n��ֵΪ:%d\n", n); 
//	printf("*pFloat��ֵΪ:%f\n", *pFloat);   //EȫΪ0������С
//	//��ӡ����
//	//0 00000000 00000000000000000001001
//	//EΪȫ0,��ʾΪ(-1)*0 * 0.00000000000000000001001 * 2^-126
//	//���޽ӽ���0,���Ի����0
//
//
//	*pFloat = 9.0;
//	//9.0�Ǹ�����,�����Ǹ������洢
//	//(-1)*0 * 1.001 * 2^3
//	//01000001000100000000000000000000
//	//�������������
//	//�����ӡ%d,��ӡ����ԭ��
//	printf("num��ֵΪ:%d\n", n);
//	printf("*pFloat��ֵΪ:%f\n", *pFloat);
//
//	return 0;
//}



//���ͷŽ�ȥ��ȡ���� �� �������Ž�ȥ��ȡ������һ��,
//Ӧ������ֵ�Ž�ȥ����ȡ����,���������ȥ������ȡ����



//��Ŀ����δ�����ʲô���⣿

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


//1.5Ϊdouble���ͣ�C�����Զ�ת����ͬ���͵���Ϊ��֮Ϊ��ʽ����ת��
//ת���Ļ���ԭ���ǣ��;�����߾�������ת������ʱ�������ʽ�Ľ����ת��Ϊdouble����
//double��8���ֽڣ���%d�Ǵ�ӡ�з���ʮ���������ģ���ʱ��Ȼ�ᷢ���ضϣ�
//�ض���ζ�����ݾͻᶪʧ����ô�����һ���������
//������������������һ��Ҫ�뵽�ø����������ջ��߽���ǿתΪ���͡�



//��Ŀ����ӡ�����ʲô��Ϊʲô�������Ľ��

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



//Ϊʲô�������0.000000��

//�������ǵ�����Ϊint�͵����������0xFFFFFFFF����ô����% lf��ӡʱ������ת��Ϊdouble�ʹ�ʱ��Ϊ��0x00000000FFFFFFFF
//��ô���������ǵķ���λ(S)ռһ����11������(E)�� 52��β��(M)����ô�������ҵĽ���E�ǲ���Ϊȫ0�أ�
//������ʮ��������������ʾ�ģ�һ��16����λ��ʾ4��������λ(4������)��
//��ȻΪȫ0����ô�����������ڸ������������ڴ��еĴ洢�����ǲ��ǽ�����EΪȫ0�Ļ�����ʱ��ԭ����Ϊһ����С����V = (-1) ^ 0 * 2 ^ -1022 * M��
//�����Ϊʲô���Ǵ�ӡ��0��ԭ����
//�����long long�Ļ���ô���п��ܲ���0����Ϊlong longռ8���ֽڣ���ȫ��ʹE��Ϊȫ0



//Ϊʲô�����˫���Ⱥ͵�������?

//ԭ���������������һ��׼ȷ�����֣����������ڴ��д洢������������������������洢�ģ�
//��ʮ����ת����Ϊ�����ƣ����п����о�����ʧ��,ע���������ʧ������һζ�ļ����ˣ����п�������
//����������洢��ʱ���ڼ��㲻����ʱ�򣬻ᡰ�������롱�����������ԣ�
//�������������ǽ���һ�����⸡�������תΪ�����Ƶ�ʱ�����Ǿ�֪����Щ���ֿ���������λ����


//�������ıȽ�

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


// ���������ݲ����ܱ�ʾһ��������������������Ҳ�ǲ�����ȵ�



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


//��һ�������: 0.09999999999999997779553950749686919152736663818359
//�ڶ�������ǣ�0.10000000000000000555111512312578270211815834045410
//�����������

//�����������о�����ʧ���������¸��ֽ��������ϸ΢�Ĳ�𣬶��������ǵļ������˵ϸ΢�Ĳ��Ҳ�ǲ���ȵġ�
//���ۣ��������ڽ��бȽϵ�ʱ�򣬾��Բ���ֱ��ʹ�� == �����бȽ�





//��ν��������롰��ֵ�����бȽϣ�


//����һ��

//#include <stdio.h>
//#include <math.h>
//
//#define EPSILON 0.0000000000001 //�Զ���ľ���
//int main()
//{
//	double x = 1.0;
//	double y = 0.1;
//
//	//if (((x - 0.9) - y) > - EPSILON && ((x - 0.9) - y) < EPSILON)
//	if (fabs((x - 0.9) - y) < EPSILON)//���棬fabs�����󸡵����ľ���ֵ��Ҫ����math.h���ͷ�ļ�
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


//���飺
//1.�����ʱ����ʹ��double������float

//2.ƽʱ���Ǽ�����С��Ĭ����double��

//3.��������ʲôƽ�����Լ������С����������һ�������ͱ�������һ��Ҫ��֤���ʽ���и��������ݵĳ��֣�
//����Ҫ���Ը�1.0

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
//Ϊ�˱�����־��ȶ�ʧ����Ҫ��֤���������ݵĳ��֣���ʱ���Ǿͳ���1.0���Ȳ���ı�ԭ��������Ҳ��֤��С���ĳ���


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












//ָ��Ľ���
//1.�ַ�ָ��
//2.ָ������
//3.����ָ��
//4.���鴫�κ�ָ�봫��
//5.����ָ��
//6.����ָ������
//7.ָ����ָ�������ָ��
//8.�ص�����
//9.ָ�������������Ľ���



//����ָ��:
//1.ָ����Ǹ�������������ŵ�ַ����ַΨһ��ʶһ���ڴ�ռ�
//2.ָ��Ĵ�С�ǹ̶���4/8���ֽ�(32λƽ̨/64λƽ̨)
//3.ָ����������,ָ������;�����ָ���+-�����Ĳ���,ָ������ò�����ʱ���Ȩ��
//4.ָ�������

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

//32λƽ̨�����1,64λƽ̨�����2





//ָ��Ľ���(·��)
//1.�ַ�ָ��
//2.ָ������
//3.����ָ��
//4.���鴫�κ�ָ�봫��
//5.����ָ��
//6.����ָ������
//7.ָ����ָ�������ָ��
//8.�ص�����
//9.ָ�������������Ľ���
 

//1.�ַ�ָ��

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
//	//��Ϊ��arr���pc��,����arr��pc��һ����,���������
//
//	printf("%c\n", *pc);     //ע����%c
//	printf("%c\n", arr[0]);  //ע����%c
//  //���������
// 
//  printf("%c\n", arr[0]+2);
//  printf("%c\n", *parr+2);
//  //���������
//
//	return 0;
//}





//#include <stdio.h>
//
//int main()
//{
//	char* pc = "abcdef";
//	//"abcdef"��һ�������ַ���
//	//�������32λϵͳ��,���ǷŲ��µ�,��Ϊ"abcdef"����'\0'��7���ֽ�
//	//Ȼ��32λϵͳָ��ֻ�ܴ��4���ֽ�,�������д���洢���ǵ�һ��Ԫ�صĵ�ַ(a�ĵ�ַ)
//  //����д���ǿ��Ե�
//}



//#include <stdio.h>
//
//int main()
//{
//	char* p = "abcdef";
//	*p = 'w';
//	//����д���͸�ֵ�Ǵ����
//
//	const char* p = "abcdef";
//	//����д��������ȷ��,"abcdef"�ǳ����ַ���,��Ȼ�ǳ���,�Ͳ��ܸ���,const���ε���*p,p��ָ������ݾͲ��ܱ��޸�
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
//	//���ﲻ�ǰ�w�ĳ���parr�ĵ�һ��Ԫ�أ����ǰ�w�ĵ�ַ����parr���棬����const������parr��ַ�����Ե�ַ�����޸ģ��ᱨ��
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
//		printf("arr1��arr2��ͬ\n");
//	}
//	else
//	{
//		printf("arr1��arr2��ͬ\n");
//	}
//  //Ϊ�˴洢�ռ����Էֱ���������ռ�,���Բ�ͬ
//	//����Ƚ���ͬ����ͬ�ǱȽϵ�ַ��ͬ����ͬ(�����Ļ��������������֮����Զ��������ͬ)
//
//	if (p1 == p2)
//	{
//		printf("p1��p2��ͬ\n");
//	}
//	else
//	{
//		printf("p1��p2��ͬ\n");
//	}
//
//	return 0;
//}

//Ϊʲôp1��p2����ͬ��?��Ϊ����"abcdef"���ǳ������ʽ(�����ַ���),���ܸ��ģ����������ַ���һģһ��
//�ڴ�Ϊ�˽�ʡ�ռ�,ֻ�洢��һ��





//ָ��Ľ���(·��)
//1.�ַ�ָ��
//2.ָ������
//3.����ָ��
//4.���鴫�κ�ָ�봫��
//5.����ָ��
//6.����ָ������
//7.ָ����ָ�������ָ��
//8.�ص�����
//9.ָ�������������Ľ���



//2.ָ������
//ָ������������,�������ָ��

//#include <stdio.h>
//
//int main()
//{
//	int arr[4] = { 0 }; //����ָ��
//	char ch[5] = { 0 }; //�ַ�ָ��
//
//	int* parr[4]; //�������ָ�������-����ָ��
//	char* pch[5]; //����ַ�ָ�������-����ָ��
//}



//ָ���������1
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





//ָ���������2
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



//int* arr1[10];  ����ָ�������
//char* arr2[4];  һ���ַ�ָ�������
//char** arr3[5]; �����ַ�ָ�������







//����ָ��
//����ָ����ָ��


//#include <stdio.h>
//
//int main()
//{
//	int* p = NULL;   //p������ָ�� - ָ������ - ���Դ�����εĵ�ַ
//	char* pc = NULL; //pc���ַ���ָ�� - ָ���ַ� - ���Դ���ַ��ĵ�ַ
//	int *arr[10] = { 0 }; //����ָ�� - ����ָ������ - ���Դ������ĵ�ַ
//
//	//arr - ��Ԫ�ص�ַ
//	//&arr - ����ĵ�ַ
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//
//	int(*p)[10] = &arr;   //�������ʱ*p���ǽ����ò���,��˵��p��һ��ָ��
//	//���������˼��: (*p)ָ��һ������(10��Ԫ��),�����ÿ��Ԫ����int
//	//����ĵ�ַҪ������
//	//���������������ָ��
//
//	int* p[10] = &arr;   //����ָ������
//    //[]�����ȼ���*��
//	return 0;
//}

//����ָ����һ��ָ�룬������������ַ��ָ��




//��Ŀ����char* arr[5]�������д��벹ȫ������ָ��
//int main()
//{
//	char* arr[5];
//	//pa= &arr;
//	char* (*pa)[5] = &arr;
//	//char* ��paָ��������Ԫ��������char*
//	//* ˵��pa��ָ��
//	//pa ��ָ�����������
//	//[5] paָ���������5��Ԫ�ص�
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
//		printf("%d ", *(*pa + i));//*pa == arr  *pa�ҵ�arr,arr+1����һ��Ԫ�صĵ�ַ,��ַ�����þ����ҵ��Ǹ�Ԫ��
//		printf("%d ", *(arr + i));//*pa == arr  ���д��������������
//		printf("%p ", arr+i); //������+1����Ԫ�ص�ַ+1������һ��Ԫ�صĵ�ַ(��סŶ������һ��Ԫ�صĵ�ַ)
//		
//		//�����ַ���������ͨ������ָ���������
//		//���ǰ�arr�浽*int����Ҳ���Դﵽһ���ķ���Ч��
//		//����ָ��һ��Ҫ�õ���ά�������ϲŷ���һЩ
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
//	//��������Ԫ�صĵ�ַ,Ҫ̽�ֶ�ά�������Ԫ��,����Ҫ�Ѷ�ά���鿴��һά����,��ά�������Ԫ����ʵ�Ƕ�ά����ĵ�һ��
//	//Ҳ����{1,2,3,4,5}
//
//	print2(arr,3,5);
//	//��Ȼ����ȥ��������һά����ĵ�ַ,�ǽ��վ�Ҫ������ָ��������
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
//			//�������ֶ����Դ�ӡ
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




//int arr[5]			//arr��һ������5��int����Ԫ�ص�����
//int *parr1[10]		//[]�����ȼ���*�ߣ�������10��Ԫ��,ÿ��Ԫ�ص�������int*,parr1��ָ������
//int (*parr2)[10]      //*parr������ָ�룬��ָ��ָ����һ�����飬������10��Ԫ�أ�ÿ��Ԫ�ص�������int,parr2������ָ��
//int (*parr3[10])[5]   //parr3���Ⱥ�[]��ϣ�parr3��һ������,��������10��Ԫ�أ�ÿ��Ԫ����һ������ָ��
                        //������ָ��ָ���������5��Ԫ�أ�ÿ��Ԫ����int

//int (*parr3[10])[5]	//��һ������ָ�룬��ʮ��Ԫ�أ�ÿ��Ԫ�ص�����������ָ�룬ÿ������ָ��ָ���������5����������int  




//˼��
//��ã��Ҿ����㽲���е����Ҹо���Ҳ���ֺ����˸����������Լ���˼��:
//
//�Һ�������αװ�����ߣ����Լ���̬�ڵúܵͣ��ջ��ű������۸��ң�Ȼ��ȱ���������۸��ҵ�ʱ���ұ��۸���ʵ���ܲ���ʱ���Ҿ�˳����µĿ��Է�������
//�ﵽ��������Ҫ�ͷű�������ʵĿ�ģ���Ϊ�Ҳ���ȥֱ���������������ᣬ������������ģ�����Ϊ�˴ﵽ�ͷű�����Ŀ�ģ�
//��һ����һ�ε�αװ�����ߣ��ڴ���"����"�Ϲ���
//��ֱ�ӵ��ͷű���ת���ɼ�ӵ��ͷű���������ò�ƻᵼ�¸����ѹ�֣������ѹ���ֻᵼ�¸��ӱ����ı����ͷ�
//
//����, �ֺ����˸���û�п�����ʵ��һ��Ǳ�ڵ�ʩ������ ?
//ֻ�������ʩ������ֱ�ӵģ����Ǽ�ӵ�ʩ���������Ҷ��Լ���һ�㷴˼���Ҹ������ദʱ������ʶϲ���ֺñ��ˣ�������֪���ⲻ���������ŶԷ��ã�ֻ��һ�� �ջ�
//����֪���Լ���ʵ����������
//���Բ�Ҫ���Լ�����һ�����ߵĵ�λ����Ϊ�������������

//��ȻΪʲôҪ�ֺ�һ�����أ������������İ����







//#include <stdio.h>
//
//int main()
//{
//	//ָ��
//	int* p1;  //ָ�����ε�ָ��-����ָ��
//	char* p2; //ָ���ַ���ָ��-�ַ�ָ��
//
//	//�ַ�ָ��
//	char ch = 'w';
//	char* p = &ch;
//	const char* p2 = "abcdefg";
//
//	//ָ������ - ���� - ���ָ�������
//	int* arr[10];
//	char* ch[5];
//
//	//����ָ�� -ָ������
//	int arr2[5]; //����
//	int(*pa)[5] = &arr2; //ȡ������ĵ�ַ,pa����һ������ָ��
//	//������ȥ����ʣ�µľ���Ԫ�����ͣ�pa��Ԫ��������int(*)[5]
//
//	return 0;
//}






//�������   ָ�����



//һά���飬ָ������ ��������
//#include <stdio.h>
//
//void test(int arr1[])
//{
//
//}
//
//void test(int arr1[10])  //����������[]��дֵ���β�Ҳ�ǿ��Եģ�������д��д����
//{
//
//}
//
//void test(int* arr1)
//{
//
//}
////�����������鴫��д��������
//
//void test2(int* arr2[20])  //����д�ǿ��Ե�([]����������С�ǿ���ʡ�Ե�)
//{
//
//}
//
//void test2(int** arr2)
//{
//
//}
////��������ָ�����鴫�ζ�����
//
//int main()
//{
//	int arr1[10] = { 0 };
//
//	int* arr2[20] = { 0 };
//
//	//һά���鴫��
//	test(arr1);
//
//	test2(arr2);
//
//	return 0;
//}
//�������ֿ���д������Ҳ����д��ָ��




//��ά���麯������

//#include <stdio.h>
//#include <stdlib.h>
//
//void test(int arr[3][5])
//{
//
//}
//
//void test1(int arr[][5])	//���鴫�ο���ʡ���в���ʡ����
//{
//
//}
//
//void test2(int(*arr)[5])
//{
//
//}
////�������ֶ�ά���鴫�ζ�����
//
//void test3(int** arr)	//���ַ����ǲ��еģ���Ϊ����ָ���ŵ���һ��ָ������ĵ�ַ�����Ҵ�������������ĵ�ַ
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




//ָ�봫��

//#include <stdio.h>
//#include <stdlib.h>
//
//void test(int* arr, int sz)  //����ȥ����ָ�룬���յ�Ҳ��ָ��
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





//����������Ϊһ��ָ���ʱ�򣬿��Դ�ʲô������ȥ��

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

//�������β�Ϊһ��ָ��ʱ�����Դ���ַ��Ҳ���Դ�ָ�����






//����ָ�봫��

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

//����ָ�봫�ο��԰�һ��ָ�봫��ȥ(һ��ָ�봫��ȥ����ָ�����)��Ҳ���԰Ѷ���ָ�봫��ȥ
//Ҳ���԰�ָ�����鴫��ȥ��ָ�����鱾���ϻ�������





//����ָ��

//����ָ�� - ��ָ�������ָ��
//����ָ�� - ��ָ������ָ��

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
//	//��������������ͬ
//	//&������ �� ������ ���Ǻ����ĵ�ַ
//  //���������Ǻ����ĵ�ַ
//
//	int (*p)(int, int) = add;
//	//����ָ��
//	//(int,int)����,(int x,int y)Ҳ���ԣ�����x,y����ʡ��
//
//	printf("%d\n", (*p)(2, 3));
// 
//	printf("%p\n", (*p));
//	printf("%p\n", p);
//  
//
//	return 0;
//}

//����ָ����������ź�����ַ��ָ��

//��������ַ==&��������ַ==����ָ���ַ==*����ָ���ַ




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




//����1
//(*(void(*)())0();


//void(*)()��һ����������,��һ������ָ������
//�������������������0��������Ҫ��0ǿ������ת����������ת���ɺ���ָ������
//��ζ�����0������ĳ�����ĵ�ַ
//Ȼ�����滹��һ�������ò�����*����ζ��ͨ����������ĵ�ַ�ҵ���������������ķ���������void,�������޲�
//������֮�󣬺��滹��һ�����ţ�˵���ڵ������������������Ǹ����Ų���Ҫ���Σ���Ϊ0Ҳ���޲�
//��δ�����ʵ�Ǻ�������





//����2
//void (*signal(int,void(*)(int)))(int)

//signal(int,void(*)(int))
//int�����α�����void(*)(int)�Ǻ���ָ��
//signal�Ǻ���,����()��û�д���,����һ�κ�������

//ȥ�����������Ǻ���������
//void(*)(int)  
//��ʵ���δ�����Ǻ���ָ��,(*)��ָ��,()�Ǻ���,�����Ĳ�����int�ǲ���������������void

//signal(int,void(*)(int))
//��������signal,����������int�ͺ���ָ������,ʣ�µ�void(*)(int)���Ƿ�������
//signal�ĵڶ��������Ǻ���ָ�룬signal�ķ�������Ҳ�Ǻ���ָ��

//��������д void(*)(int) signal(int,void(*)int)
//��Ϊ����ָ���*Ҫ���������Ա�

//signal��һ����������
//signal�����Ĳ�������������һ����int,�ڶ����Ǻ���ָ�룬�ú���ָ��ָ��ĺ����Ĳ�����int,����������void
//signal�����ķ�������Ҳ��һ������ָ�룺�ú���ָ��ָ��ĺ����Ĳ�����int,����������void


//�������̫���ڸ�����,��ʵ���Լ򻯣��Ǿ���typedef

//void(*signal(int, void(*)(int)))(int);
//
//typedef void(* pfun_t)(int);   //����ָ��������������Ƿ���*�ұߵ�
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
//	//��һ��ָ���Ǻ���ָ��ʱ�������������ָ�������*�Ͳ������ö��У�����ü���*�����׿������Ǻ���ָ��
//    //���û���ϵĻ�ҲҪ�ֱ����
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
//	//&�����ȼ���()�ͣ���������֮�󷵻�һ������
//	//�ַ�����ͨ���Ǵ洢��ֻ���ڴ������У�����ֱ���޸ģ���˲���ȡ�����ַ�����Իᱨ��
//
//	//printf("%d\n", *padd(3, 5));
//	//*�����ȼ���()�ͣ���������֮�󷵻�һ���������ٽ����þͻᱨ�� 
//
//	return 0;
//}
//���������Ǻ����ĵ�ַ











//����ָ������ 
//��ź���ָ�������


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

//��Ŀ1:дһ������ָ��pf,�ܹ�ָ��mystrcpy
//����ָ��:char* (*pf)(char*,const char*) = mystrcpy;
 
//��Ŀ:дһ������ָ������pfarr,�ܹ����mystrcpy�����ĵ�ַ 
//����ָ������:char* (*pfarr[4])(char*,const char*) = {mystrcpy};






//����ָ���������;:ת�Ʊ�
//���ӣ�������

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
//		printf("��ѡ���㷨\n");
//		scanf("%d", &input);
//
//		switch (input)
//		{
//		case 1:
//			printf("������������\n");
//			scanf("%d %d", &x, &y);
//			printf("add = %d\n\n\n", add(x, y));
//			break;		
//		case 2:
//			printf("������������\n");
//			scanf("%d &d", &x,&y);
//			printf("sub = %d\n\n\n", sub(x, y));
//			break;		
//		case 3:
//			printf("������������\n");
//			scanf("%d %d", &x, &y);
//			printf("mul = %d\n\n\n", mul(x, y));
//			break;		
//		case 4:
//			printf("������������\n");
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

//����д��̫�������࣬���Բ��ú���ָ������ķ�����





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
//	int (*parr[])(int, int) = { 0,add,sub,mul,chu }; //Ϊʲô��һ��Ԫ��Ҫ��0����Ϊ����0�Ļ���ѡ��1��ʵ������ĵڶ���Ԫ�أ�Ҳ����sub,Ҫ���ǵ�ʹ���߲��ǳ���Ա
//	int sz = sizeof(parr) / sizeof(parr[0]);
//
//	do
//	{
//		menu();
//		printf("��ѡ��:>\n");
//		scanf("%d", &input);
//
//		if (input >= 1 && input <= sz)
//		{
//			printf("������������\n");
//			scanf("%d %d", &x, &y);
//
//			printf("%d\n\n\n", parr[input](x, y));
//		}
//		else
//		{
//			printf("�˳�\n");
//			break;
//		}
//
//	} while (input);
//
//	system("pause");
//
//	return 0;
//}

//ͨ���±��ҵ����Ԫ�أ��������Ԫ���ҵ���ָ��ĺ��������Ǿ���������һ�ֺ���ָ��������� ת�Ʊ�






//�ص�����
//�ص���������һ��ͨ������ָ����õĺ����������Ѻ�����ָ��(��ַ)��Ϊ�������ݸ���һ��������
//�����ָ�뱻������������ָ��ĺ���ʱ�����Ǿ�˵���ǻص�������
//�ص����������ɸú�����ʵ�ַ�ֱ�ӵ��ã��������ض����¼�����������ʱ�������һ�����õģ�
//���ڶԸ��¼�������������Ӧ


//�ûص���������������������и���

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
//	printf("������������\n");
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
//		printf("��ѡ���㷨\n");
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




//ָ����ָ�������ָ��
//ָ����ָ�������ָ����һ�� ָ�� ָ��һ�� ���飬�����Ԫ�ض��Ǻ���ָ��

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
//	//pfarr��һ������ָ������
//	//pfarr��һ�����飬����Ԫ����4����ÿ��Ԫ��������int (*)(int, int) ������ָ�룩
//
//	int (*(*ppfarr)[4])(int, int) = &pfarr;
//	//ָ����ָ�������ָ��
//	//ppfarr��һ������ָ�룬ָ��ָ���������4��Ԫ��
//	//ָ��������ÿ��Ԫ�ص�������һ������ָ��int(*)(int,int)
//
//	return 0;
//}




//�ص�����
//�ص���������һ��ͨ������ָ����õĺ����������Ѻ�����ָ��(��ַ)��Ϊ�������ݸ���һ��������
//�����ָ�뱻������������ָ��ĺ���ʱ�����Ǿ�˵���ǻص�������
//�ص����������ɸú�����ʵ�ַ�ֱ�ӵ��ã��������ض����¼�����������ʱ�������һ�����õģ�
//���ڶԸ��¼�������������Ӧ

//����:

//#include <stdio.h>
//
//void print(char* str)   //Ϊʲô����������"bit",����ȴ��ָ�룿��Ϊ"bit"�ǳ����ַ���������ȥ�ĵ�һ��Ԫ�صĵ�ַ����Ȼ�ǵ�ַ����Ӧ����ָ�����
//						//��bit���ǳ����ַ�������const char����
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
//	//ָ������
//	int* arr[10];
//
//	//����ָ��
//	int(*pa)[10] = &arr;
//
//	//����ָ��
//	int (*padd)(int, int) = &add;
//
//	//����ָ�������
//	int (*parr[10])(int, int) = { padd };  //�����ס�����ʼ��Ҫ������Ŷ{}
//
//	//ָ����ָ�������ָ��
//	int (*(*pparr)[10])(int, int) = parr;
//
//	return 0;
//}










//ð������

//#include <stdio.h>
//
//void bubble_sort(int* arr, int sz)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz-1; i++)  //Ϊʲô������sz-1����Ϊi=0,10-1=9,i<9����0��8��Ҳ����9��
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

//ð�������ȱ�����ֻ���������ε����飬������ʲô�Ķ�������






//qsort - ��������(quick sort)

//qsort��4������
//void qsort( void *base,     - (Ŀ���������ʼλ��)������Ԫ�ص�ַ
//			  size_t num,     - Ԫ�صĸ��� - sz
//            size_t width,   - Ԫ�صĴ�С(��λ���ֽ�) - szieof[0]
//            int (*compare )(const void *elem1, const void *elem2 ) );
//									      elem1��elem2����Ҫ�Ƚϵ�����Ԫ�صĵ�ַ


//void*����������ָ�룬���Խ����������͵�ָ�����͵�ַ���������ͣ��ַ����ṹ��
//#include <stdio.h>
//
//int main()
//{
//	int a = 10;
//	void* pa = &a;
//
//	//*pa = 0;		�Ƿ��ļ��Ѱַ,����д�ᱨ����Ϊ*������ָ�����ͻ�������ʼ����ֽ�
//	//				����void��������ָ�룬��������֪�����ʼ����ֽڣ��ᱨ��
//	//              ����void*���͵�ָ�룬���ܽ��н����ò���(��Ҫ�����õĻ�����ǿ������ת��)
//	//              Ҳ���ܽ���+-�����Ĳ���������pa++,pa+2,pa--
//	return 0;
//}



//qsort��������

//#include <stdio.h>
//
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
////����compareҪ��
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





//qsort���򸡵���

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






//�ṹ��qsort����

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
//	//����ṹ�岻�ý�����, ->����ֱ��ָ���Ǹ�ֵ
//}
//
//int cmp_stu_by_name(const void* e1, const void* e2)
//{
//	//�Ƚ����־��ǱȽ��ַ���
//	//�ַ����Ƚϲ���ֱ����><=���Ƚ�,Ӧ����strcmp��������Ҫ��<string.h>��ͷ�ļ�
//	//��һ���ַ������ڵڶ����ַ���������1�����ڷ���0��С�ڷ���-1
//	//strcmp�Ƚ��ַ�����Ascii�룬��һ����ĸ��ͬ���ٱȽϵڶ������Դ����ƣ�ֱ������������ͬ����ĸ��ǰ�ߴ��ں��߷�����������֮���ظ���
//	//�Ƚϵ����׸���ͬ�ַ���Ascii��ֵ,Ҳ���Ǳ�z l w
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
//	//�����sizeof����Ĵ�С�Ǵ��ڵ���age��name�ģ�����ṹ��ὲ���
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



//qsort�ŵ�������

//void qsort(void* base,
//		   size_t num, 
//	       size_t width,
//	       int(* compare)(const void* elem1, const void* elem2));

//��һ���������������������Ԫ�ص�ַ
//�ڶ��������������������Ԫ�ظ���
//�����������������������ÿ��Ԫ�صĴ�С-(��λ���ֽ�)
//���ĸ��������Ǻ���ָ�룬�Ƚ�����Ԫ�ص����ú����ĵ�ַ-�������ʹ�����Լ�ʵ��
//           ����ָ������������ǣ����Ƚϵ�����Ԫ�صĵ�ַ

//Ϊʲô����4�������� ������Ԫ�ص�ַ�����ҵ�������飬����ȥ�����Ԫ�ظ�����֪���������ж��ٸ�Ԫ�أ�
//�ټ���ÿ��Ԫ�صĴ�С��������������ĵ���Ϣ��ȫ��






//����ð������ʹ�������������Ͷ���������

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
//	//���н�����ʱ��Ҫ�����ã�������ֻ�����һ���ֽڣ���Ϊ��char����,
//	//����Ҫ��������δ֪��С�ı������͵�forѭ����ȴ�С����
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
////					   Ϊ�˱�֤�ܽ����κ����͵����ݣ���void*base
////                     �����ڴ�������������void*,���ܽ����ã���֪�������С������Ҫ��Ԫ�ظ���sz��Ԫ�ش�Сwidth
////                     Ϊʲôcmp��int�����գ���Ϊ���ǰ��մ��ڷ���1�����ڷ���0��С�ڷ���-1���������������ȽϺ���
////                     ʵ��bubble_sort�����ĳ���Ա����֪��δ��������������ͣ����Խ��ձȽϺ���������void*
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
//				//char*ǿ������ת����ֻ�ܷ���һ���ֽڣ�һ���ֽ��ڳ���һ���ֽڵĴ�С(���width),���ܷ����κ����ݵ�һ����С��
//				//����
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








//��Ŀ:sizeof��������


//����������Ԫ�ص�ַ
//����������������������������������������Ԫ�ص�ַ
//1.sizeof(������) - ��������ʾ��������
//2.&������ - ��������ʾ��������

//#include <stdio.h>
//int main()
//{
//	int a[] = { 1,2,3,4 };
//	printf("%d\n", sizeof(a));		//���ǵ�һ�������sizeof(������)�����Խ������������Ĵ�С
//	printf("%d\n", sizeof(a+0));    //��������������������������������������Ԫ�صĵ�ַ����Ԫ�ص�ַ+0������Ԫ�ص�ַ����ַ�Ĵ�С����4/8�ֽ�
//	printf("%d\n", sizeof(*a));		//����������Ԫ�ص�ַ��*a�ͻ�������ҵ��Ǹ���Ԫ�أ�sizoef(*a)����4
//	printf("%d\n", sizeof(a+1));	//����������������������������������Ԫ�ص�ַ��a+1��������ĵڶ���Ԫ�صĵ�ַ����ַ�Ĵ�С����4/8���ֽ�
//	printf("%d\n", sizeof(a[1]));   //�ڶ���Ԫ�صĴ�С
//	printf("%d\n", sizeof(&a));		//&aȡ����������ĵ�ַ����������ĵ�ַҲ�ǵ�ַ����ַ�Ĵ�С����4/8���ֽ�
//	printf("%d\n", sizeof(*&a));	//int���͵ĵ�ַ�����÷���4���ֽڣ�char���͵ĵ�ַ�����÷���1���ֽڣ��������͵ĵ�ַ�����÷���һ�������С���ֽ�
//									//*��&�����ˣ���ʵ�������sizoef(a)
//									//&a����ĵ�ַ������ĵ�ַ�����÷��ʵ����飬sizeof����ľ�������Ĵ�С��λ���ֽ�
//	printf("%d\n", sizeof(&a+1));	//ȡ��ַȡ������������ĵ�ַ��&a+1����Ȼ��ַ�����������飬�����ǵ�ַ����С����4/8
//	printf("%d\n", sizeof(&a[0]));	//&a[0]�ǵ�һ��Ԫ�صĵ�ַ
//	printf("%d\n", sizeof(&a[0]+1));//ȡ��ַa��һ��Ԫ�ص�ַ����+1���ǵڶ���Ԫ�صĵ�ַ����Ȼ�ǵ�ַ���������4/8
//
//	return 0;
//}



//��Ŀ��sizeof�ַ�����

//#include <stdio.h>
//
//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//
//	printf("%d\n", sizeof(arr));	  //sizeof���������������Ĵ�С��6*1 = 6bite
//	printf("%d\n", sizeof(arr+0));    //arr����Ԫ�صĵ�ַ��arr+0������Ԫ�ص�ַ����Ȼ�ǵ�ַ����ռ4/8���ֽ�
//	printf("%d\n", sizeof(*arr));	  //arr����Ԫ�صĵ�ַ��*arr������Ԫ�ؽ�����
//	printf("%d\n", sizeof(arr[1]));
//	printf("%d\n", sizeof(&arr));     //&arr��ȡ����������ĵ�ַ����Ȼ�ǵ�ַ���Ǿ���4/8���ֽ�
//	printf("%d\n", sizeof(&arr+1));   //&arr+1���������������ĵ�ַ����Ȼ�ǵ�ַ����ַ��С����4/8���ֽ�
//	printf("%d\n", sizeof(&arr[0]+1));
//
//	return 0;
//}




//��Ŀ��strlen�ַ�����

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f'};
//
//	printf("%d\n", strlen(arr));			//1.���ֵ
//	printf("%d\n", strlen(arr+0));			//2.arr����Ԫ�ص�ַ��+0������Ԫ�ص�ַ�������1һ�������ֵ
//	//printf("%d\n", strlen(*arr));			//3.strlenֻ�ܽ��յ�ַ,*arr���ǽ����õ�һ��Ԫ�أ�Ҳ����a,a��ASCII�������97��strlen 97�ᱨ��error
//	//printf("%d\n", strlen(arr[1]));		//4.arr[1]��������ڶ���Ԫ�أ�����b,��ASCII������98����98��ȥҲ�ᱨ��
//	printf("%d\n", strlen(&arr));			//5.ȡ������������ĵ�ַ���������±껹��0���ӵ�һ��Ԫ�ؿ�ʼ��'\0'��������û��'\0',���������ң����������ֵ
//											//1,2,5��Ȼ�������ֵ�������ǵ�ֵ����һ����
//	printf("%d\n", strlen(&arr+1));			//6. 6��Ȼ�����ֵ����6��1��2��5��ֵһ�����sz(Ԫ�ظ���)
//	printf("%d\n", strlen(&arr[0] + 1));	//7. 7��ȻҲ�����ֵ����һ����1��2��5���1
//
//	return 0;
//}



//��Ŀ��sizeof�ַ�������

//#include <stdio.h>
//
//int main()
//{
//	char arr[] = "abcdef";
//
//	printf("%d\n", sizeof(arr));		//�ַ��������ʼ�����'\0'�Ž�ȥ
//	printf("%d\n", sizeof(arr+0));
//	printf("%d\n", sizeof(*arr));
//	printf("%d\n", sizeof(arr[1]));
//	printf("%d\n", sizeof(&arr));
//	printf("%d\n", sizeof(&arr+1));
//	printf("%d\n", sizeof(&arr[0]+1));
//
//	return 0;
//}



//��Ŀ��strlen�ַ���

//#include <stdio.h>
//
//int main()
//{
//	char arr[] = "abcdef";
//
//	printf("%d\n", strlen(arr));
//	printf("%d\n", strlen(arr+0));
//	//printf("%d\n", strlen(*arr));			  //�ᱨ��strlen���ܵ��ǵ�ַ��*arr����ȥ����'a',��������Ϊ'a'�ǵ�ַ���͵��ɵ�ַ����strlen����,'a'��ASCII������97
//	//printf("%d\n", strlen(arr[1]));		  //error
//	printf("%d\n", strlen(&arr));			  //&arr��������char (*p)[7] = &arr,��strlen�Ĳ���������const char*,���������Ͳ�����,�п��ܻᱨ����vs2022��Ȼû����
//											  //&arr����������ĵ�ַ�������㻹�Ǵ�0�±꿪ʼ��
//	printf("%d\n", strlen(&arr+1));			  //&arr+1������һ�������飬���������δ֪�������������
//	printf("%d\n", strlen(&arr[0]+1));	      //�����±�0+1���ǵڶ���Ԫ��'b'����b��ʼ����\0�պ�5��Ԫ��
//
//	return 0;
//}





//sizeofָ��

//#include <stdio.h>
//
//int main()
//{
//	char* p = "abcdef";
//
//	printf("%d\n", sizeof(p));		//p��ŵ��ǳ����ַ���"abcdef"��һ��Ԫ�صĵ�ַ 4/8
//	printf("%d\n", sizeof(p+1));	//p��ŵ��ǵ�һ��Ԫ�صĵ�ַ��p+1���ǳ����ַ����ĵڶ���Ԫ�صĵ�ַ
//									//int arr[10]	arr[0]== *(arr+0)== *(p+0) == 'a'
//	printf("%d\n", sizeof(*p));	
//	printf("%d\n", sizeof(p[0]));
//	printf("%d\n", sizeof(&p));
//	printf("%d\n", sizeof(&p+1));
//	printf("%d\n", sizeof(&p[0] + 1));  //p[0]�õ�����a,&a��a�ĵ�ַ,a�ĵ�ַ+1����a�����Ǹ�Ԫ�صĵ�ַ��Ҳ����'b'�ĵ�ַ
//
//	return 0;
//}





//#include <stdio.h>
//
//int main()
//{
//	char* p = "abcdef";
//
//	printf("%d\n", strlen(p));		//p����Ԫ�ص�ַ����p��ʼ�����ң�ֱ���ҵ�\0Ϊֹ
//	printf("%d\n", strlen(p+1));
//	//printf("%d\n", strlen(*p));	//error,strlen����ֻ�ܷŵ�ַ��ֻҪ���ǵ�ַ�ͻᱨ��
//	//printf("%d\n", strlen(p[0])); //ͬ��
//	printf("%d\n", strlen(&p));		//�����ֵ��ȡ��p�ĵ�ַ(Ҳ����a�ĵ�ַ)֮��������
//									//һֱ����������\0Ϊֹ,���ڵ�ַ�ǲ���Ԥ��ģ���֪��ʲôʱ��Ż�ȡ��\0
//									//���������ֵ
//									//����a�ĵ�ַ��0x0012ff44��������С�˴洢,�ڴ�����ʾ��44 ff 21 00
//	                                //ֱ���ҵ�\0Ϊֹ,strlen(a)����3
//									//p��һ��ָ�룬��ŵ��ǵ�ַ,&p����ȡ����ָ�����p�ĵ�ַ���ǵ�ַ�ĵ�ַ
//	                                //strlen(p)�Ļ��ǳ����ַ�����Ԫ�صĵ�ַ��strlen(&p)��p�ĵ�ַ
//	printf("%d\n", strlen(&p+1));	//ͬ��
//	printf("%d\n", strlen(&p[0] + 1));
//
//	return 0;
//}




//#include <stdio.h>
//
//int main()
//{
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));			//��������
//	printf("%d\n", sizeof(a[0][0]));	//��һ�е�һ��Ԫ��
//	printf("%d\n", sizeof(a[0]));		//a[0]�൱�ڵ�һ����Ϊһά���������������������������sizeof()�ڣ������������֮���е�һ����������ǵ�һ�еĴ�С
//	printf("%d\n", sizeof(a[0]+1));     //a[0]�����������sizeof()����Ƕ�ά�����һ��Ԫ��,�����a[0]���ڱ��ʽ��a[0]+1����ôa[0]���Ƕ�ά�����һ��Ԫ�صĵ�һ��Ԫ�صĵ�ַ
//	                                    //a[0][0]==a[0]+0
//	                                    //a[0]�ǵ�һ�е�������,��������ʱ����Ԫ�صĵ�ַ,a[0]��ʵ���ǵ�һ�е�һ��Ԫ�صĵ�ַ
//	                                    //����a[0]+1���ǵ�һ�еڶ���Ԫ�صĵ�ַ,��ַ��С��4/8���ֽ�
//	printf("%d\n", sizeof(*(a[0]+1)));
//	printf("%d\n", sizeof(a+1));        //�������������֮�⣬������������Ԫ�ص�ַ����ά�������Ԫ�ص�ַ+1�ǵڶ��еĵ�ַ
//	printf("%d\n", sizeof(*(a+1)));     //sizeof(*(a+1)) == sizeof(a[1]),�ڶ�������Ĵ�С����λ���ֽ�
//	printf("%d\n", sizeof(&a[0]+1));    //a[0]�ǵ�һ�е�������,������ȡ��ַȡ�����ǵ�һ�еĵ�ַ����һ�е�ַ+1���ǵڶ��е�ַ,sizeof(&a[0]+1) == sizeof(a+1)  
//	printf("%d\n", sizeof(*(&a[0] + 1)));
//	printf("%d\n", sizeof(*a));			//a����Ԫ�ص�ַ���ǵ�һ�еĵ�ַ
//	printf("%d\n", sizeof(a[3]));		//sizeof�ڲ��ı��ʽ�ǲ�������ʵ����ģ�ֻ�Ǹ������ͼ����С��a[3]��һ������4�����ε�һά���飬���Դ���16
//
//	return 0;
//}


//�ܽ�
//1.sizeof(������),�������������ʾ��������,���������������Ĵ�С
//2.&�������������&�����������ǵ������ֻ�������������ʽ�����ȡ���������ַ,�������������ʾ�������飬ȡ��������������ĵ�ַ
//3.����sizeof(������)��sizeof(&arr),��������������������Ԫ�صĵ�ַ,����ά�������Ԫ�ص�ַ��һά����
//��ά�����е�arr[i]��ʾ������,��ά����sizeof(arr[i])���Ǽ����ά�����е�n�е��ܴ�С










//ָ�������Ŀ:

//ָ�������1

//#include <stdio.h>
//
//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));
//	return 0;
//}

//&a��ȡa��������ַ,+1��������һ����������,���ڴ�ʱa������������ָ������
//���԰�a��ǿ������ת����int*�����ٷŵ�*ptr�ptr��ŵľ���a����+1�ĵ�ַ,��-1����5




//ָ�������2��
//��Ŀ����֪�ṹ��test���͵ı�����С��20���ֽ�

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
//	printf("%p\n", p + 0x1);					//p+1,p�ǽṹ�����,+1���Ǽ�20���ֽ�,0x100000(16����)+20(10����)����0x100014
//	printf("%p\n", (unsigned long)p + 0x1);     //ǿת�ɳ����ͣ�+1��������4���ֽڣ�����+1���������0x100001
//	printf("%p\n", (unsigned int*)p + 0x1);		//ǿת��int*,ָ��+-����ȡ����ָ�����ͣ�int*+1����+4
//	printf("%p\n", (unsigned int)p + 0x1);		
//
//	return 0;
//}

//�ڶ���printf,ǿת�����Σ��Ӷ��پ��Ƕ���
//������printf,ǿת��ָ�룬ָ��+-����ȡ����ָ������





//ָ�������3��
//��Ŀ����������ʲô

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





//ָ�������4��

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

//�ڴ�����С�ĵ�λ���ֽڣ�ÿ���ֽڶ�ռ��һ����ַ���������ڵĵ�ַ��һ���ֽڣ����Ե�ַ+1�������ƫ��һ���ֽ�

//ptr2�����
//����������Ǵ����ң���ַ������,��������ǵ͵�ַ���ұ��Ǹߵ�ַ
//���ڻ�����С�˴洢ģʽ,�洢�ĵ�ַ���� 01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00
//ptr2 , ����a�ĵ�ַ��0x00 00 00 05,ǿ��ת����int����5��5+1����6,��ַ+1���Ǽ�һ���ֽ�
//6��ǿ������ת����int*(��ַ),����0x 00 00 00 06 , a��a+1����һ���ֽڣ���ʱptr2��λ����
//01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00
//  ^
//ptr2������ָ�룬�����÷����ĸ��ֽڣ�Ҳ���ǣ�
//00 00 00 02
//���Ŷ�����0x 02 00 00 00��Ҳ����2


//ptr1���
//prt[-1] == *(ptr + -1) == *(ptr-1)  ptr1��λ����
//01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00
//                                              ^
//ptr������ָ�룬ptr-1�����þ�����ǰŲ��4���ֽ�
//01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00
//                                    ^
//�����λ�ý����ã�����4���ֽڣ�Ҳ����04 00 00 00
//������С�˴洢����ԭ�����͵õ��Ŷ�����0x 00 00 00 04 ���� 4






//ָ�������5��

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

//���������Ƕ��ű��ʽ,�������ű��ʽ�����1,3,5 ;������鿪����6��ռ�,��ֻ��ʼ����3��ռ�(1,3,5),
//ʣ�µ�û�г�ʼ����Ϊ0���൱��a[3][2] = {{1,3},{5,0},{0,0}}

//a[0]���ǵ�һ�е�������,������������Ԫ�ص�ַ,�Ž�p����ӡp[0]��p[0]���ǵ���p+0���������������� == *(p+0)





//ָ�������6:

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

//���ҵ�a[4][2],�Ƚϼ�
//[][][][][] [][][][][] [][][][][] [][][][][] [][][][][]
//[4][2]���ǵ����е�����Ԫ��
//[][][][][] [][][][][] [][][][][] [][][][][] [][][*][][]
//   a[0]       a[1]       a[2]       a[3]        a[4]



//Ȼ����p[4][2]����
//p = a,��a����Ԫ�ص�ַ�ŵ�P����,Ҳ���Ƕ�ά����a[5][5]�ĵ�һ��a[5]
//pָ���λ����
//[][][][][] [][][][][] [][][][][] [][][][][] [][][][][]
//^
// 
//��Ϊp��ָ�����������ָ��,����ָ��������int(*)[4]��+1��������4���ֽ�
//�������ָ��������int(*)[5],�Ǿ�������5���ֽ�,�൱��+1����һ������ָ������
//p[4]��λ����
//[][][][][] [][][][][] [][][][][] [][][][][] [][][][][]
//       ^        ^        ^        ^
//      p[1]     p[2]     p[3]     p[4]
//      p+1      p+2      p+3      p+4   

//p[4][2] �ȼ��� p�ȼ���һ��4�ٽ�����,��+2�����������ٽ����� == *(*(p+4)+2)
//p+4����4������ָ������(Ҳ���Ǽ�һ������)�������ú�õ������������Ԫ�ص�ַ(���λ�õ�������),��+2���Ǽ�����int
//p[4][2]��λ����:
//[][][][][] [][][][][] [][][][][] [][][][*][] [][][][][]
//                                       ^

//a[4][2]��λ����:
//[][][][][] [][][][][] [][][][][] [][][][][] [][][*][][]
//                                                 ^

//&p[4][2] - &a[4][2]   
//ָ����ָ��������õ�����ָ����ָ��֮���Ԫ�ظ���
// ��ӡ%p����-4��-4��ӡ%p���Ǵ�ӡ�����ֱ��ֵ,-4ת�ɲ�����11111111 11111111 11111111 11111100
//��ӡ%d����ֱ�Ӵ�ӡ����,��ӡ%p���Ǵ�ӡ��ַ����ַ���޷���������ӡ������0xFFFFFFFC





//ָ�������7��

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
//��Ȼ��д���������ʽ�����Ǳ�������Ȼ���ptr[1]ת����ptr+1����ʽ���м���

//���ȶ�ά������û�д��������֣����ǻ��Զ��洢����ά��������
//�൱��arr[2][5] = {{1,2,3,4,5},{6,7,8,9,10}};

//ptr1 ȡ��ַarr��һ(&arr+1)ȡ����������ַ������������ָ�����ͣ��ŵ�int*����ᾯ��,����ǿ������ת����int*�ŵ�int*��,
//��ʱȡ��ַ��һ���Ǽ�������ַ,��ʱptr1��λ��Ϊ:
//[1][2][3][4][5] [6][7][8][9][10]
//                               ^
//ptr1-1������������ָ�룬����-1��ȥһ������

//ptr2 arr����Ԫ�ص�ַ,��ά������Ԫ�ص�ַ�ǵ�һ�У���һ������һ�У���ʱptr2�ĵ�ַ��
//[1][2][3][4][5] [6][7][8][9][10]
//                ^
//*(arr+1) == arr[1] ����arr�������� ���ڵڶ�����Ԫ�صĵ�ַ
//*(arr+1)��ʵ����Ҫǿת��(int*)����Ϊ*(arr+1)��6��6�ĵ�ַ���ͱ������int*
//ptr2-1������������ָ�룬����-1��ȥһ������







//ָ�������8��
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


//char* p = "abcdef";	pָ��洢���ǳ����ַ���abcdef��a�ĵ�ַ

//ͬ��a[]��洢������Ԫ�صĵ�ַ,Ҳ����work�ĵ�ַ��

//int *pa+1 ����pa����һ��int���͵ĵ�ַ,
//char**pa+1����pa����һ��char*���͵ĵ�ַ

//a[]�������������ַ���,ÿ�������ַ�����������Ԫ�ص�ַ�洢��
//a[]���ľ���'w','a','a'�ĵ�ַ�����ȥ��������char*

//pa++��������һ��char*��Ҳ����at




//������Ŀ9 ��

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


//�ڴ�ͼ
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
//printf�����++a����a++���ǽ���ʵ�������,����a+10����ʵ������
//sizeof������㲻��ʵ������ģ�������a++/++a���� a+10









//����ָ���½���ҵ��




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


//pulPtr���pulArray��Ԫ�ص�ַ��Ҳ����6
//*��pulPtr+3)+=3  ���� *(pulPtr+3) = *(pulPtr+3)+3 ,���ǰѽ�����pulPtr+3���Ǹ�Ԫ�ؼ����ٸ��ظ�*(pulPtr+3)
//Ҳ���ǰ�9+3��ֵ����*(pulPtr+3)Ҳ���ǵ��ĸ�Ԫ��9 �����ĸ�Ԫ��������12






//����ָ��Ҳ��ָ�룬���������һ��ָ��ĵ�ַ�ģ����������������ĵ�ַ��,���Ҳ����һ��ָ�����,��С��4/8���ֽ�

//ָ���ȥָ��õ�����ָ���ָ��֮���Ԫ�ظ���

//ָ����ԱȽϴ�С





//дһ���������ܹ������ַ���������

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


//�ַ�����Ԫ�ظ���������strlen,����\0ֹͣ,sizeof�Ļ����\0Ҳ���ȥ,ԭ��6��Ԫ�أ�sizeof�����7
//�ַ����������sizeof,������strlen,�ַ�����



//���������ָ��ʵ��

//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//
//void test(char arr[])
//{
//	assert(arr!=NULL);
//	//Ҳ����assert(arr),��˼��һ���ģ��Ҳµ�
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
//	//�����"hello bit"��ȥ��ֻ�����olleh,��Ϊscanf�����ո�Ͳ����ȡ��
//	//���Կ�����gets,gets���Ƕ�ȡһ�е���˼
//
//	gets(arr);
//
//	test(arr);
//
//	printf("%s\n", arr);
//
//	return 0;
//}





//����⣺�������

//��Ŀ���� ��Sn = a+aa+aaa+aaaa+aaaaa��ǰ����֮��,����a��һ������
//���磺2+22+222+2222+22222

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



//����д��
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









//��Ŀ����0-100000������ˮ�ɻ���(������)
//ˮ�ɻ�����������Ǽ�λ����n���Ǽ�,ÿһλ��n�η�֮�͵�������������������ˮ�ɻ���
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
//		int num = num_t(i);	  //�����������������������Ǽ�λ��
//
//
//		int j = 0;			//����������ǰ�ÿһλ��ȡ����,��752,��7 5 2�ֱ�ȡ����
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




//pow( 3,5 )�� pow��һ����ѧ����,���Լ���η���Ҫ��<math.h>��ͷ�ļ�,������3��5�η�����˼
//�����pow(5,3),�Ǿ���5��3�η�
//pow���ص���һ��double�͵�����,����Ӧ����double����,����ǿ������ת��

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















//�ṹ���½���ҵ��



//#include <stdio.h>
//
//struct student
//{
//	int num;
//	char name[32];
//	float score;
//}stu;

//struct�ǽṹ�����͵Ĺؼ���
//struct student���û�����Ľṹ������
//num,score���ǽṹ���Ա��
//stu���û�����Ľṹ�������





//����⣺����ˮ����
//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�������ж���ƿ��ˮ


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




//����д��
//#include <stdio.h>
//
//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	scanf("%d", &money);
//
//	//���������ˮ�ȵ�
//	total = money;
//	empty = money;
//	//����������ˮ
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("total = %d\n", total);
//
//	return 0;
//}







//C����ʵ�õ��Լ����½���ҵ


//C���򳣼��Ĵ�������������������Ӵ�������ʱ����
//������ջ�����ջ������Ƿ��࣬��ĳһ�ִ���


//ctrl+F5�ǿ�ʼִ�в����ԣ�F5����������
//F10������̵��ԣ��������������뺯��
//F11���������ԣ����Թ۲��ʽ��ÿ��ϸ��
//F9�����öϵ��ȡ���ϵ�


//Debug����Ϊ���԰汾�����������bug�İ汾
//Release����Ϊ�����汾��������Ա���Եľ���Release�汾
//Debug�汾����������Ϣ,�����Ż�,����Debug���ļ����Release��
//Release�汾�����Ե���



//const int *p �� int const *p�ȼ�





//��Ŀ����������ż��˳��
//�������������ȫ����λ��ż��ǰ��

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




//һ������ԭ���������ֱ��ת���ɶ�����

//��С���ֽ���ָ���������ڵ����ϴ洢���ֽ�˳��




//��Ŀ�����������������ʲô

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

//��һ��%d,a+b�����������������,����a+b��û�д�ŵ�һ��������

//c��ֵ���Ϊ255��a+b����300��ǿ�зŽ�ȥ��Ȼ��ضϣ����ȶ�ʧ
//c=a+b  ����char���ͱ�����ӣ���Ҫ����������,�Ž�c�����ٽض�





//��Ŀ:��32λ���ģʽ�������ϱ���b���ڶ��٣�

//#include <stdio.h>
//
//int main()
//{
//	unsigned int a = 0x1234;
//	unsigned char b = *(unsigned char*)&a;
//
//	return 0;
//}

//&aת����unsigned char*,ֵ�������仯
//a��int����, 0x1234ȫ����0x00 00 12 34 ,�ڴ�˴洢ģʽ������0x00 00 12 34
//�ٽ����ã�char*ָ������÷���һ���ֽڣ�Ҳ����0x00���Ž�b����
//������0x00






//û������
//p46��ҵ����2������ż˳��	p47��ҵ����3		p48��ҵ����4


//��ʹ��free�ͷŵ�һ��ָ�����ݺ�,ָ�������ֵӦ�ñ���ΪNULL

//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int a = 10;
//	//����ռ�
//	int* p = (int*)malloc(10 * sizeof(int));
//	//ʹ�ÿռ�
//	//***
//	//�ͷſռ�
//	free(p);
//	p = NULL;	//��ʹ��free�ͷŵ�һ��ָ�����ݺ�, ָ�������ֵӦ�ñ���ΪNULL
//
//	return 0;
//}


//32λϵͳ���κ�����ָ��ĳ��ȶ���4���ֽ�

//ָ�������������������ָ��ʵ��ָ�����ݵ���������

//Ұָ����ָδ��������Ѿ��ͷŵ��ڴ��ַ





//�����������ָ���������ȷ����:()
//A.����ָ����һ������
//B.����ָ����һ�ִ�������ָ��
//C.����ָ����һ��ָ��
//D.ָ��������һ��ָ�������ָ��




//����C��D������ָ�����飬Ҫ���������������ָ�밡ι������





//�����ĸ�������ָ��()
//A.int** arr[10]
//B.int(*arr[10])
//C.char*(*arr)[10]
//D.char(*)arr[10]

//char*(*arr)[10]	arr��һ������ָ�룬ָ���������10��Ԫ�أ�ÿ��Ԫ����char*����





//include <stdio.h>
//
//int main()
//{
//	int main[10] = { 0 };
//	return 0;
//}

//����ѡ���ĸ��Ǵ���ģ�

//A.������arr��&arr��һ����
//B.sizeof(arr),arr��ʾ��������
//C.&arr,arr��ʾ��������
//D.����sizeof(arr)��&arr�е�������,�����ط����ֵ�������arr������������Ԫ�صĵ�ַ



//����A
//arr����Ԫ�ص�ַ��&arr��ȡ��������ĵ�ַ






//�������д���ֱ���ʲô����

//int* fun(int a,int b)
//int (*fun)(int a,int b)
//(int*) fun(int a,int b)




//��һ���Ǻ����������ڶ����Ǻ���ָ�룬������Ҳ�Ǻ�������(һ��fun�ĺ���������������int*)




//��Ŀ:��������Ĵ���

//int(*(*F)(int,int))(int)

//int(*F)(int,int)



//��һ��������һ������ָ�룬ָ��ĺ���������int�ββ��ҷ���һ������ָ��,
//�������͵�ָ��ָ��һ����һ��int�ββ��ҷ���int�ĺ���
//int(*		(F*)(int,int)	)(int)

//�ڶ���������һ������ָ�룬ָ��ĺ���������int�β�,����������int




//��Ŀ������һ��ָ����10��Ԫ�ص������ָ�룬����ÿ��Ԫ����һ������ָ�룬
//�ú����ķ���ֵ��int��������int*





//��:int (*(*pa)[10])(int*);



//�ص���������һ��ͨ������ָ����õĺ���

//�ص�����һ��ͨ������ָ��ʵ��

//�ص�����һ�㲻�Ǻ�����ʵ�ֵ��ã��������ض��ĳ����£�������һ������

//�ص������ǵ��ú���ָ��ָ����Ǹ�����



//��ѡ��
//����test����������ȷ����()
//char* arr[5] = { "hello","bit" };
//test(arr);
//
//A.void test(char* arr);
//B.void test(char** arr);
//B.void test(char arr[5]);
//B.void test(char* arr[5]);



//����B,D
//�������������飬��������д�����飬Ҳ����д��ָ��
//д��ָ����ǣ�arr����Ԫ�ص�ַ,��Ԫ��������char*,���Դ���ȥ��char**����
//д���������char* arr[5]





//���������print_arr������������ĸ�����ȷ�ģ�()
//int arr[3][5] = { 1,2,3,4,5,6,7,8,9,10 };
//print_arr(arr, 3, 5);
//
//A.void print_arr(int arr[][], int row, int col);
//B.void print_arr(int* arr, int row, int col);
//B.void print_arr(int (*arr)[5], int row, int col);
//B.void print_arr(int (*arr)[3], int row, int col);


//A���У��к��ж�û��ָ��
//B���У�дָ����ʽ������ά������Ԫ�ص�ַ��Bȴ��һ��ָ��
//Cд��������ʽ�ǶԵ�ѡC
//D��[3]����˼����������3��Ԫ�أ�����������5��Ԫ��





//�����:
//ʵ��һ�����������������ַ����е�k���ַ�
//���磺
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB
//ABCD���������ַ��õ�DABC

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
//	char arr[] = "abcdefg";	//����һ��Ҫ��arr[]������arr����Ȼ���ǰѳ����ַ����Ž�arr����,�����ַ��������޸�
//
//	printf("��Ҫ���������ַ�:>\n");
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




//���ϴ��� ����������ָ����д

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
//	char arr[] = "abcdefg";	//����һ��Ҫ��arr[]������arr����Ȼ���ǰѳ����ַ����Ž�arr����,�����ַ��������޸�
//
//	printf("��Ҫ���������ַ�:>\n");
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


//���ϰ취����������ⷨ,���и��ŵİ취
//������ת��
//abcdef	��ת�����ַ����п������ַ�
//ab cdef
//ba fedc	�п��������ֶ��ٴν��з�ת
//cdefab	



//#include <stdio.h>
//#include <assert.h>
//
//void reverse(char* left,char* right)
//{
//	assert(left);	//ֻҪ�β���ָ����������涼Ҫ����assert��֤�䴫�ξ�����Ч��
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





//��Ŀ��дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ���
//���磺���� s1=AABCD ��s2=BCDAA,����1
//���� s1=abcd �� s2=ACBD,����0

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
//		left_move(s1, 1);	//����Ϊʲô��1������i��ÿ�ε���left_move������s1����ı�,
//		//��Ϊ�����i�Ļ���i=1����תһ���ַ���s1��ABCDA,�ٵ���һ�Σ�i=2��s1�����CDAAB
//		//������������Ҫ����һ��Ȼ��Ա�s2��Ŀ��
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


//���˼·��s1�ַ���5���ַ���������5�Σ�ÿ�������𽥵���һ��Ԫ��
//�����һ������s1����s2����˵��s1��s1������ת��ϵ(��strcmp�Ƚ�)
//Ϊʲô������s1==s2�أ���Ϊs1,s2��������Ԫ�ص�ַ,�����������Ԫ�ص�ַ�ǲ�������ȵ�







//�ڶ��ַ���
//���磺s1 = "abcdef",�ټ���һ��"abcdef"����"abcdefabcdef",����ַ����������������ת�Ŀ�����

//#include <stdio.h>
//#include <string.h>
//
//int is_left_move(char* str1, char* str2)
//{
//	//�������ж������ַ��������Ƿ���ͬ,����abc��ab,ab������abc�ķ�ת,����abc���ǰ���ab,���������
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	if (len1 != len2)
//	{
//		return 0;
//	}
//
//
//	//1.��str1�ַ�����׷��һ��str1���ַ�c
//	//strncat��MSDN��Ľ��ͣ�char *strncat( char *strDest, const char *strSource, size_t count );
//	//strcat��MSDN��Ľ���:char *strcat( char *strDestination, const char *strSource );
//	//strncat��strcat���˸�count,˵��strnact�ǿ��ַ���Ԫ�ظ���������ֹͣ��
//	strncat(str1, str1,len1);
//
//
//	//2.�ж�str2ָ����ַ����Ƿ���str1ָ����ַ������Ӵ�
//	//strstr-���Ӵ��ĺ���
//	char* ret = strstr(str1, str2);	//��str1��������û��str2���Ӵ�,�ҵ��˷���str2�ĵ�ַ(�ַ���ַ)���Ҳ������ؿ�ָ��NULL
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
//	char arr1[30] = "abcdef";	//��30��Ϊ�����㹻�Ŀռ�׷��һ���ַ���
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




//�⺯��strcat ��һ���ַ���׷�ӵ�����һ���ַ�������,���ǲ���׷���Լ�,Ҫ��<string.h>��ͷ�ļ�

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char arr1[30] = "abc";		//�ǵ������[]Ҫ��һ���������㹻�Ŀռ���׷��
//	char arr2[] = "def";
//
//	strcat(arr1, arr1);
//
//	printf("%s\n", arr1);
//
//	return 0;
//}

//strcatԭ��:abc\0  def\0,��d�ŵ�\0��λ��,e����\0�����λ��,f�����ٺ����λ��,����def\0��\0�ŵ����
//Ϊʲôstrcat����׷���Լ�,����abc\0,��a�ŵ�\0λ��,��b�ŵ�\0����λ�ã���c�ŵ�������λ�ã���ʱ\0�Ѿ���a��ռ��
//��ʱ�ַ�����û��\0��,׷�ӾͲ���ֹͣ,ֱ������\0
//�Լ�׷���Լ�������strncat








//��Ŀ�����Ͼ���
//��Ŀ���ݣ�
//��һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ����ģ�
//���д�����������ľ����в���ĳ�������Ƿ����
//Ҫ���¼����Ӷ�С��O(N);
//����(����)��ȫ��Ԫ����N����ÿ����һ��Ԫ����ҪO*N����λʱ��,
//����Ҫ����10��10��������һ��Ԫ��,����ȥ�ҵĻ����ҵ�ʱ��͵���O(N)��



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
//	int ret = FindNum(arr, &row, &col, k);	//���к��д�ַ��ȥ�����㷵���±�,����ں�����printf�������
//											//��δ����Ҫ���ؼ���ֵ����һ��return�޷��㶨��ʱ�򣬿��Դ�ַ
//
//	if (ret == 1)
//	{
//		printf("�ҵ���\n");
//		printf("�±���%d,%d", row, col);
//	}
//	else
//	{
//		printf("û�ҵ�\n");
//	}
//
//	return 0;
//}


//���˼·���������Ͻǻ��������½�Ԫ�ؿ�ʼ����
//��������Ͻ�Ԫ��С��k,˵����һ�ж�û��k,��Ϊ������������ҵ�����,k����һ��������������߿϶�û��,
//�����һ�ж�ȥ��,x++,x++���һ�оͲ��ܷ�����,
//��������Ͻ�Ԫ�ش���k,˵����һ�ж�û��k,��Ϊ������������µ�����,��һ�����������һ����С�ģ���С������Ҫ��k�����������û��Ҫ����
//�����һ��ȥ����y--,y--����һ�оͲ��ܷ�����

//ֱ���ҵ�һ�������Ȳ�����Ҳ��С�ڣ��Ǿ��ǵ����ˣ��൱���ҵ������k��










//���½ڣ��ַ�������������

//���ַ�������
//strlen

//���Ȳ������Ƶ��ַ�������
//strcpy
//strcat
//strcmp

//�������޵��ַ�����������
//strncpy
//strncat
//strncmp

//�ַ�������
//strstr
//strtok

//������Ϣ����
//strerror

//�ַ�����

//�ڴ��������
//memcpy
//memmove
//memset
//memcmp


//C�����ж��ַ����ַ����Ĵ������Ƶ��������C���Ա�����û���ַ������͵ģ�
//�ַ���ͨ������ �����ַ��� �л��� �ַ����� �У������ַ�����������Щ���������޸ĵ��ַ�������
//�����һ���ַ�������ô����ĩβҪ��\0��Ϊ������־





//strlen
//strlen���ص���unsigned int(�޷�������)��
//�ַ����Ѿ���\0��Ϊ������־��strlen�ĺ������ص����ַ�����'\0'ǰ����ֵ��ַ�����(������'\0')
//����ָ����ַ�������Ҫ��'\0'����
//ע�⺯���ķ���ֵsize_t,���޷��ŵ�

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



//strlen��MSDN�Ķ���
//size_t strlen( const char *string );
//size_tת���������unsigned int ������(typedef)��
//����unsigned int(�޷�����)������õ��Ļ����޷���������Ȼ���޷��������Ǿͻ����0

//Ϊʲô�����Ǹ�my_strlen�᷵��haha�أ���Ϊmy_strlen���ص�������int,�����my_strlen�ķ������͸ĳ�size_t��
//���صľ���hehe





//strcpy
//Դ�ַ�������'\0'����
//�ὫԴ�ַ����е�'\0'������Ŀ��ռ�
//Ŀ��ռ�����㹻����ȷ���ܴ��Դ�ַ���
//Ŀ��ռ����ɱ�


//ģ��ʵ��strcpy


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
//	//����srcָ����ַ�����destָ��Ŀռ䣬����'\0'
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	
//	//����Ŀ�Ŀռ����ʼ��ַ
//	return ret;
//
//}
//
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "ABCD";
//	//���Դ��ַ��arr2[] = {'a','b','c'};�������Ǵ���ģ���ΪԴ��ַû��\0
//
//	//arr1 = arr2;   ����д���Ǵ���ģ�arr1��arr2������Ԫ�ص�ַ
//
//	my_strcpy(arr1, arr2);
//	
//	printf("%s\n", arr1);
//
//	return 0;
//}


//Դ��ַ������'\0'����				  ������ arr[] = {'a','b','c'};
//�ὫԴ�ַ����е�'\0'������Ŀ��ռ�
//Ŀ��ռ�����㹻��,��ȷ���ܴ���ַ���  ������ Ŀ�ĵ�ַ arr1[] = "a"	arr2[] = "abcdef" , ��Ų���
//Ŀ��ռ����ɱ�                     ������ �����ַ���  char arr = "abcdef"







//strcat  �ַ�׷�Ӻ���
//Դ�ַ���������'\0'����
//Ŀ��ռ�������㹻��,��������Դ�ַ���������
//Ŀ��ռ������޸�

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char arr1[30] = "abcdef";
//	//char arr1[] = "abcdef";
//	char arr2[] = "ABCDEF";
//	//char arr1[] = "abcdef";Ϊʲô����д�ᱨ��,��Ϊ�ַ��������Ǹ����ַ�����ʼ����ȷ��arr1�Ĵ�С�ģ�
//	//����ֻ�ܷ�abcdef,��׷��һ����Խ�����
//	
//	//1.���Ҫ��Դ��ַ׷�ӵ�Ŀ�ĵص�ַ��Ŀ�ĵص�ַ�Ŀռ�Ҫ�㹻��
//	//2.Դ��ַ����Ҫ����\0
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
//	//���arr1��hello,��������\0��û��׷�ӵ�����,
//	//hello\0xxxxxxxx,���\0ȷʵ׷����,\0�ͻ�ĳ�w,����һ��x����\0
//
//	//strcat Դ��ַ��Ŀ�ĵض�Ҫ��\0
//
//	char arr2[] = "world";
//
//	strcat(arr1, arr2);
//
//	return 0;
//}






//ģ��ʵ��strcat

//#include <stdio.h>
//#include <assert.h>
//
//char* my_strcat(char* dest,const char* src)	//Ŀ�ĵ�ַ��Ҫ�ı䣬Դ��ַ����Ҫ�ı䣬����Դ��ַ����const
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
//�ַ����ȽϺ���
//int strcmp( const char *string1, const char *string2 );


//#include <stdio.h>
//
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "as";
//
//	int ret = strcmp(arr1, arr2);
//	//�Ƚ������ַ�������һ���ȵڶ����󣬷������������ڷ���0����һ���ȵڶ���С���ظ���(��ͬ��������һ��,���Ƿ���ԭ��һ��)
//	//�Ƚϵ����׸���ͬ�ַ���Ascii��ֵ
//	//��һ���ַ�˫������a,��ȣ���������С�������ȵڶ����ַ�
//	//a��ASCIIֵС��s,���Ե�һ���ַ���С�ڵڶ����ַ���
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








//ģ��ʵ��strcmp

//#include <stdio.h>
//#include <assert.h>
//
//int my_strcmp(const char* arr1,const char* arr2)  //����ֻ�ǱȽϣ����޸ģ�������const����
//{
//	assert(arr1 && arr2);
//
//	while (*arr1 == *arr2)
//	{
//		if (*arr1 == '\0')  //��һ�����˼��*arr1==*arr2 ���� *arr1=='\0',�Ǿ�˵����ʱarr2Ҳ����'\0'���������ַ�����ȫ���
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
//	//��������ع̶���1����-1,��������������return,arr1����arr2,���һ����������,arr1С��arr2,���һ�����ظ���
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



//���Ϻ������ǳ��Ȳ������Ƶ��ַ�������,������\0Ϊ������־
//������Բ�����ȫ,�ٸ�����

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

//�����ᱨ����Ϊarr1ֻ�ܴ��5��Ԫ��,ǿ�а�arr2 11��Ԫ�طŽ�ȥ��������\0��β����Ų���







//��������ܳ������Ƶ��ַ����⺯��


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
//	//strncpy�����\0������ȥ���Ǹ���size_t����,size_t�Ƕ��پͿ������ٸ��ֽ�
//
//	printf("%s\n\n", arr1);
//
//
//	char arr3[10] = "abcdefgh";
//	char arr4[] = "abc";
//	
//	strncpy(arr3, arr4,6);
//	//�������Դ��ַ����û��6���ֽڣ������Ļ��ͻ��Զ�����\0,�����ǰ�\0���ƹ�ȥ
//	//6-3 = 3,����׷��3��\0��ȫ
//
//	printf("%s\n\n", arr3);
//
//	return 0;
//}

//strncpy��MSDN�Ľ���,count�ǿ������ٸ��ֽڵ���˼����λ���ֽ�
//char *strncpy( char *strDest, const char *strSource, size_t count );

//strcpy��MSDN�Ľ���
//char *strcpy( char *strDestination, const char *strSource );

//strncpyֻ�´��Դ��ַ���������ݵ�Ŀ�ĵ�ַ�����Ŀ�ĵ�ַ�����ݴ���Դ��ַ�����ڵ��ǲ������ݲ��ᱻstrncpy�ı�






//ģ��ʵ��strncpy

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







//strncat  �ַ���׷�Ӻ���

//MSDN��strncat�Ľ���
//char *strncat( char *strDest, const char *strSource, size_t count );

//ģ��ʵ��strncat

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
//	//strncat�ð�\0׷�ӹ�ȥ,����Ҫ׷�ӵ�������Դ��ַ��Сʱ������ֻ�Ჹһ��\0��strncpy�Ჹȫ\0
//
//	printf("%s\n", arr2);
//
//	return 0;
//}









//�ַ����ȽϺ���
//strncmp
//strncmp��MSDN��Ľ���
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






//ģ��ʵ��strncmp

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






//strstr-�������ַ�������
//strstrֻ�᷵���������: NULL��ָ�� �� ��ַ
//�ҵ����Ӵ����ز��ҵ��Ӵ�����Ԫ�ص�ַ��û�ҵ�����NULL

//��MSDN�ĵ���NULL��ʾ��ָ��
//NUL/Null����ʾ \0

//NULL - ��ָ��
//NUL/Null - \0

//MSDN��strstr�Ľ��ͣ�
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
//		printf("û�ҵ�\n");
//	}
//	else
//	{
//		printf("%s\n",ret);
//		//�����������Ӵ���Ԫ�صĵ�ַ,Ҳ����d,��ӡ����defhi,��Ϊû������\0�ͻ�һֱ��ӡ
//		//����������ַ�����abcdefdef,Ҫ���ҵ��ַ�����def������������def,���ص��ǵ�һ���Ӵ��ĵ�ַ,
//		//Ҳ���ǻ��ӡdefdef
//	}
//
//	return 0;
//}




//ģ��ʵ��my_strstr

//���ַ���" "����ֻ��һ��Ԫ��,�Ǿ��� '\0'

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
//	//��p2���������ǿ��ַ���" ",����ֻ��һ��Ԫ��,�� \0,�Ǿͷ���p1�ĵ�ַ,����ʲô�����Լ���ôд
//	//д��printf("���������ǿ��ַ���\n") Ҳ����
//	if (*p2 == '\0')
//	{
//		return (char*)p1;  //ΪʲôҪǿ������ת��,��Ϊp1��const char*����,����������char����,���в���
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
//		if (*s2 == '\0')   //���*s2=='\0',������ʵ�Ѿ��̺��˼�������,�Ǿ���1.s2�Ѿ������ꣻ2. s1��s2ͬʱһһ��Ӧ����s2������
//		{
//			return cur;	//�ҵ��Ӵ�
//		}
//		cur++;
//	}
//	return NULL; //û�ҵ��Ӵ�
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
//		printf("û�ҵ�\n\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//
//	return 0;
//}


//�����ľ�������cur������,ÿ��ֻ��һ��Ԫ�أ������Ԫ�ؿ�ʼ���ң��Ҳ����ٹ���һ��Ԫ��









//strtok - �ַ����ָ��

//strtok��MSDN��Ľ���:
//char* strtok(char* str, const char* sep);
//sep�����Ǹ��ַ����������������ָ������ַ�����


//��һ������ָ��һ���ַ�������������0�����߶����sep�ַ�����һ�����߶���ָ����ָ�ı��
//strtok�����ҵ�str�е���һ�����,������\0��β������һ��ָ�������ǵ�ָ��(ע��strtok����
// ��ı䱻�������ַ�����������ʹ��strtok�����зֵ��ַ���һ�㶼����ʱ���������ݲ��ҿ��޸�)
//strtok�����ĵ�һ��������ΪNUL���������ҵ�str�е�һ�����,strtok���������������ַ����е�λ��
//strtok�����ĵ�һ������ΪNULL����������ͬһ���ַ����б������λ�ÿ�ʼ��������һ�����
//����ַ����в����ڸ���ı�ǣ��򷵻�NULLָ��


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
//	//ΪʲôҪ�ٸ�һ�������أ���Ϊstrtok����ʵ�ı�arr�����ݣ����Ը�һ������
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
//	//strtok��һ��������ΪNULL�����,strtok���ҵ��ָ��������ѷָ����ĳ�\0(�����ĸı�),Ȼ�󷵻��ͷ�Ǹ��ַ��ĵ�ַ:edu
//	//�ٴε��õ�ʱ��str�Ͳ���arr��,�ĳ�NULL�������ٴ�����ʹ��
//	//����ַ����в����ڸ���ı�ǣ��ͻ᷵��NULL
//	//strtokһ��ֻ����һ��
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

//�ѷָ���Ÿĳ�\0֮�󣬺���������ø�arr��NULL����
//�����������ô�ӵ�һ���ָ������ҵ���?�����Ʋ���һ����̬����











//strerror - ���󱨸溯��(������Ϣ����)
//MSDN��char *strerror( int errnum );

//��Щ���Ǵ����� , ÿһ���������Ӧһ��������Ϣ
//0 - No error
//1 - Operation not permitted
//2 - No such file or directory
//3 - No such process

//#include <stdio.h>
//#include <string.h>
//#include <errno.h>
//int main()
//{
//	//char* str = strerror(3);  - ��ֻ����ʾ��������ô��
//
//	//Ӧ���������õ�
//	char* str = strerror(errno);
//	//errno ��һ��ȫ�ֵĴ�����ı���
//	//��C���ԵĿ⺯����ִ�й����У������˴���,�ͻ�Ѷ�Ӧ�Ĵ����룬��ֵ��errno��
//	//��ʱstrerror�ٸ��ݴ�����ת���ɴ�����Ϣ
// 
//  //errno��Ҫ��<errno.h>��ͷ�ļ�
//
//	printf("%s\n", str);
//
//	return 0;
//}

//strerror�����þ���ת�����ǵĴ����룬�Ѵ����뷭��ɴ�����Ϣ,���������ĵ�ַ




//#include <stdio.h>
//#include <errno.h>
//#include <string.h>
//
//int main()
//{
//	//C��������Դ��ļ�����fopen����.fopen("�ļ���","r"),r����˼�Ƕ��ļ�
//	//fopen�᷵��һ��FILE*��ָ��
//	//��������������ʧ���ˣ��᷵��һ����ָ��NULL�ŵ�pf����
//	//���Ǵ��ļ�ʧ���кܶ���ԭ���ļ������ڣ���Ȩ�޲����ȵ�ԭ��,
//	//��֪������ԭ��Ļ��͵�strerror(errno)
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



//���Ϻ��������ַ�������



//�ַ����ຯ�� 
//���ַ����ຯ����Ҫ�� <ctype.h>��ͷ�ļ�
//�������ַ����ຯ����tolower(תСд����)  toupper(ת��д����)

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





//��һ����д�ַ���ȫ���ĳ�Сд

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
//		//�޸ĵ�ֵҪ�Ż�arr����
//		i++;
//	}
//
//	printf("%s\n", arr);
//
//	return 0;
//}










//�ڴ溯��
//memcpy  - �ڴ濽������
//memmove - �ڴ��ƶ�����
//memcmp  - �ڴ�ȽϺ���
//memset

//����ѧ�Ķ����ַ��������������������ַ�������Щ���������ٶ�Ҫ��\0�򽻵�
//���������飬�ַ������飬�ṹ�嶼�ò���

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

//arr��int�����飬���ڴ��еĴ洢�ǣ�
//01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00 00 05 00 00 00 00
//strcpy��һ���ַ�һ���ַ�ȥ�������ȿ�����һ���ַ�01��01������00��strcpy����\0ֹͣ�����Ǿ�ֹͣ��
//����strcpyֻ�ܿ����ַ������о�����,�����������⣬�����ڴ���������ĳ���







//memcpy - �ڴ濽������
//ֻҪ���ڴ��д�ŵ����ݣ����ܿ���


//��Ȼ��Ҫ�ܿ����������͵��ڴ棬�Ͳ�����strcpy����������������char*,
//������һ��ͨ���͵�ָ�������գ�void*

//void *memcpy( void *dest, const void *src, size_t count );
//count��Ҫ��Դ��ַ�������ٸ��ֽڵ�Ŀ�ĵص�ַ����˼,������unsigned

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
//	//������������
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[5] = { 0 };    //Ŀ�ĵص�ַ������Ҫȷ����С��Ȼ�ᱨ��
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
//	//�����ṹ�����
//	struct s arr3[] = { {"����",20},{"����",30} };
//	struct s arr4[3] = { 0 };
//
//	memcpy(arr4, arr3, sizeof(arr3));
//
//	return 0;
//}




//ģ��ʵ��memcpy

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
//		//���ȼ�������++ �� ǿ������ת�� �� ǰ��++ ��������ǰ��++
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
//	//��ӡ��������
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
//	//��ӡ�ṹ��
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
//	//��arr3��12345������arr3��34567
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
//	//���ְ취���������ģ�����Ҫ����һ�����鵽ͬһ������ʱ������������Ѿ��ı��ˣ������Ľ��Ҳ������Ԥ������
//	//��һ��ר�ŵĺ������������ڴ��ص�������������Ǿ���memmove
//  //��Ȼ����˵��������ֻ���Լ�ʵ�ֵĺ���������,�⺯��memcpy�ǿ��Գ����������������
//  //C���Ա�׼:
//  //memcpyֻҪ���� ���ص����ڴ濽���Ϳ��� - 60 -100
//  //memmove �����ص��ڴ�Ŀ��� -100
//
//	return 0;
//}






//memmove 
//memmove��MSDN������:
//void *memmove( void *dest, const void *src, size_t count );
//��memcpyһ��

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






//ģ��ʵ��memmove

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
//	if (src > dest)  //��ǰ���󿽱�
//	{
//		while (count--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	else if (src < dest)  //�Ӻ���ǰ����
//	{
//		while (count--)  //����count��������20����������ѭ��֮�����19��dest��src����19���ֽ�֮���ٽ����ã��ͷ��ʵ�20���ֽ�
//		{
//			*((char*)dest+count) = *((char*)src+count);
//			//ǿ��ת����char*����,����19���Ǽ���19��char,�������������ٽ�����
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


//memcpy��memmove�Ĳ�����memmove���������Դ�ڴ���Ŀ���ڴ���ǿ����ص���
//���Դ��ַ��Ŀ���ַ�����ص�,�͵�ʹ��memmove��������








//memcmp
//memcmp��C������Ľ���:
//int memcmp( const void *buf1, const void *buf2, size_t count );


//#include <stdio.h>
//
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6 };
//	int arr2[] = { 1,2,3,5,5,6 };
//
//	int ret = memcmp(arr1, arr2,13);  //13��Ҫ�Ƚ�13���ֽڵ���˼
//	//��һ�����ڵڶ�������1
//	//��һ��С�ڵڶ�������-1
//	//��һ�����ڵڶ�������0
//
//	printf("%d\n", ret);
//
//	return 0;
//}



//ģ��ʵ�� memcmp

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





//memset - �ڴ�����
//MSDN��void *memset( void *dest, int c, size_t count );

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
//	//�����10��ǰ10���ֽڱ��1�������ǰ�10��Ԫ�ض����1
//	//���Ҫ��ÿ��Ԫ�ض���ʼ��Ϊ1���Ǿ�Ҫ�趨��40
//
//	return 0;
//}














//C���Խ��׵����£��Զ�������

//C�����������ͣ�char short int long float double
//C�����Զ������ͣ��ṹ�壬ö�٣�����


//�ṹ�壺
//�ṹ�����͵�����
//�ṹ���������
//�ṹ������Ķ���ͳ�ʼ��
//�ṹ���ڴ����
//�ṹ�崫��
//�ṹ��ʵ��λ��(λ�ε����&����ֲ��)



//�ṹ�������:
//�ṹ����һЩֵ�ļ��ϣ���Щֵ��Ϊ��Ա�������ṹ��ÿ����Ա�����ǲ�ͬ���͵ı���
//(����):������һ����ͬԪ�����͵�Ԫ�صļ���

//����һ��ѧ�����ͣ���ͨ��ѧ������������ѧ������(����)

//#include <stdio.h>
//
//struct t
//{
//	int abc;
//	char c;
//};
//
//struct stu  //struct-�ṹ��ؼ���  stu-�ṹ���ǩ  struct stu-�ṹ������
//{
//	struct t T1;      //�ṹ�崴�����������ַ���:s1,s2,s3,s4��T1
//	char name[20];
//	char tele[12];
//	char sex[10];
//	int age;
//	//�����ǽṹ���Ա����
//}s4;
//
//struct stu s3;
//
//int main()
//{
//
//	//ͨ���ṹ�����ʹ����ṹ�����,���ڱ�������main�ڲ��������Ǿֲ�����
//	//����봴���ṹ��ȫ�ֱ������Ǿͷ���main����,Ҳ���ǽṹ�����͵�����棬�ֺ�ǰ
//	//����ֱ����main������������������struct����������
//	//s1,s2,s3,s4���ǽṹ�������s1��s2�ǽṹ��ֲ�����,s3��s4�ǽṹ��ȫ�ֱ���
//
//	struct stu s1;
//	struct stu s2;
//
//	return 0;
//}







//�����ṹ������

//#include <stdio.h>
//
//struct     //-���ṹ��û�б�ǩ��ʱ������ṹ�����;��������ṹ������
//	       //�����ṹ���������ʱ����û�б�ǩ�������ں�������һ�����������������ṹ�����
//{
//	int a;
//	char c;
//}sa;
//
//struct
//{
//	int a;
//    char c;
//}*psa;     //�������ṹ����ǰ���*�����������ṹ������ָ��
//
////����������ṹ��������ʱ��ʡ�Ե��˽ṹ���ǩ(tag)
//
//int main()
//{
//	psa = &sa;
//	//����д���ᱨ��
//	//sa��psa��������Ա��ȫ��ͬ�������ṹ��,����psa�����ṹ��ָ��Ų���sa�ĵ�ַ
//	//ԭ������Ϊ����������Ϊ����������ȫ��ͬ�ı���
//
//	return 0;
//}











//�ṹ���������
//����Ҫ�㶮�����ݽṹ������

//�ڽṹ���а���һ������Ϊ�ýṹ����ĳ�Ա������
//���ǲ�����,������С�ǲ���ȷ����
//��ȷ�����÷�ʽ�ǽṹ��Ҫ�ܹ��ҵ�ͬ���͵������ı�������ָ�������������
//ָ��ָ�������Ҳ��ܴ󣬵�ָ����Զֻ��4/8���ֽڣ�������ָ������


//#include <stdio.h>
//
//struct Node
//{
//	int data;
//	struct Node n;
//};
//���ݽṹ���������ڴ��д洢�Ľṹ
//����:������һ��int���͵�����:12345,��12345��ͨ���������������ģ�1�Ľ�������1�Լ���һ��Ԫ��(Ҳ����2)�ĵ�ַ
//���һ��Ԫ��5�Ľڵ������5��\0
//���Ҫ��������һ������ڵ�Ľṹ���������һ���ڵ���˰�������֮�⣬��Ҫ������һ���ڵ�ĵ�ַ

//struct Node
//{
//	//һ���ڵ����������֣�һ�����������ݣ�һ����������һ���ڵ�ĵ�ַ
//	//������ݵĽ��������򣬴�ŵ�ַ�Ľ���ָ����
//	int date;
//	struct Node* next;
// //�ṹ��Ҫ�ҵ�һ��ͬ���͵ı����Ļ�����ָ��ȥ��
//};
//
//int main()
//{
//	return 0;
//}








//�ṹ�������õ�ʱ����ʡ�����͵Ĵ�������ʹ��typedef
//�ṹ����� typedef

//#include <stdio.h>
//
//typedef struct Node   
//{
//	int data;
//	struct Node* next;
//
//}Node;  //-��typedef�ѽṹ������struct Node����ΪNode
//
//
////typedef struct
////{
////	int data;
////	Node* next;
////}Node;
////��������ṹ�����ᱨ��,������ϵ�������,Node��û�����������ṹ�����һ��Node��,�ᱨ��
////������������ʱ��ṹ���ǩ����ʡ�Ե�
//
//int main()
//{
//	struct Node s1;  //-����������������
//	Node s2;         //-Ҳ������typedef��Node����������
//	return 0;
//}





//�ṹ������Ķ���ͳ�ʼ��

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
//	//���ṹ��ÿ����Աһ��ֵ���ǽṹ���ʼ��
//
//	printf("%c\n%d\n%lf\n%s\n\n", s1.c, s1.a, s1.d, s1.arr);
//	//Ҫ�ѽṹ��ÿ����Ա�ó������漰���ṹ���Ա�ķ���
//
//	//��ӡ�ṹ������Ľṹ��
//	printf("%d\n%c\n\n", s1.T1.abc, s1.T1.c);
//
//	//ͨ������ָ���ӡ�ṹ��
//	struct s* s2 = &s1;
//	printf("%c\n", s2->c);
//	printf("%c\n\n", (*s2).c);
//
//	//ͨ��ָ���ӡ�ṹ����Ľṹ��
//	printf("%d\n%c\n", s2->T1.abc, s2->T1.c);
//	//s2->T1��ͨ���ṹ��ָ����������Ա�������Ա���ǽṹ�壬����.������
//	//�ṹ��ָ�������->		�ṹ�������.
//
//	return 0;
//}









//�ṹ���ڴ����


//���´�������Ƕ���

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

//��μ���ṹ���С��
// 1.��һ����Ա����ṹ�����ƫ����Ϊ0�ĵ�ַ��
// 2.������Ա����Ҫ���뵽ĳ������(������)���������ĵ�ַ��
//������ = ������Ĭ�ϵ�һ��������  �� �ó�Ա��С�Ľ�Сֵ
//VS��Ĭ�ϵ�ֵΪ8		��gcc���������Ա�Ĵ�С���Ƕ�����
//
// 3.�ṹ���ܴ�СΪ��������(ÿ����Ա��������һ��������)��������
// 4.���Ƕ���˽ṹ��������Ƕ�׵Ľṹ����뵽�Լ���������������������,
// �ṹ��������С����������������(��Ƕ�׽ṹ��Ķ�����)��������

// �ṹ���ڲ��ڴ棬�����������ͽ�������
// �����ʱ�������������͵�����������������������������������




//��ҵ���������������٣�

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
//	// 4.���Ƕ���˽ṹ��������Ƕ�׵Ľṹ����뵽�Լ���������������������,
//	// �ṹ��������С����������������(��Ƕ�׽ṹ��Ķ�����)��������
//  //char c1һ���ֽڣ�struct s3 16���ֽڣ�s3���������������8,8+16 = 24
//  //24�ټ���8����32
//
//	return 0;
//}



//Ϊʲô������ڴ����
//1.ƽ̨ԭ��(��ֲԭ��):�������е�Ӳ��ƽ̨���ܷ��������ַ�ϵ��������ݵģ�
// ĳЩӲ��ƽֻ̨����ĳЩ��ַ��ȡĳЩ�ض����͵����ݣ������׳�Ӳ���쳣
//2.����ԭ�����ݽṹ(������ջ)Ӧ�þ����ܵ�����Ȼ�߽��϶��롣
// ԭ�����ڣ�Ϊ�˷���δ������ڴ棬��������Ҫ�������ڴ���ʣ���������ڴ���ʽ���Ҫһ�η���


//�ܵ���˵���ṹ����ڴ�������� �ռ� ���� ʱ�� ������





//������ƽṹ���ʱ�����Ǽ�Ҫ������룬��Ҫ��ʡ�ռ䣬���������
//�취���ǣ���ռ�ÿռ�С�ĳ�Ա����������һ��


//���磺
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

//s1��s2���ͳ�Աһģһ��������s1��s2��ռ�ռ�Ĵ�Сȴ��һ��,s1�Ŀռ�Ҫ��С








//�޸�Ĭ�϶�����
//#pragma pack���Ԥ����ָ����Ըı����ǵ�Ĭ�϶�����

//#include <stdio.h>
//
//#pragma pack(4)  //����Ĭ�϶�����Ϊ4
//
//struct s
//{
//	char c1;
//	double b;
//};
//
////#pragma pack()  //ȡ�����õ�Ĭ�϶�����
//
//int main()
//{
//	struct s s1;
//
//	printf("%d\n", sizeof(s1));
//	//���Ĭ�϶�������8����ô�������16
//	//Ĭ�϶�������1���������9
//
//    
//
//	printf("%d\n", sizeof(s1));
//
//	return 0;
//}


//�ṹ���ڶ��뷽ʽ�����ʵ�ʱ�򣬿����Լ�����Ĭ�϶�����







//offsetof - ������ ����ṹ���Ա�������ʼλ�õ�ƫ����
//offsetof��һ���꣬���Ǻ���
//��offsetofҪ��ͷ�ļ�<stddef.h>

//��MSDN�Ķ��壺size_t offsetof( structName, memberName );
//��һ�������ǽṹ��������(���Ǳ�����)���ڶ��������ǳ�Ա��,���ص���ƫ����

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








//�ṹ�崫��

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
//	//��ֵ
//	Init(&s);
//
//	//�ṹ�崫ַ ��ӡ
//	print1(&s);
//
//	//�ṹ�崫ֵ ��ӡ
//	print2(s);
//
//	return 0;
//}

//�ṹ�崫�Σ�Ҫ���ṹ��ĵ�ַ










//λ��
//λ�ε������ͽṹ�������Ƶģ���������ͬ:
//1.λ�εĳ�Ա������int , unsigned int �� signed int (��ʵcharҲ����)
//����Ա����int��ʱ�򣬻�һ�ο���4���ֽڣ�����Ա����char��ʱ��һ�ο���һ���ֽ�
//2.λ�εĳ�Ա�������һ��ð�ź�һ������


//λ�ε�λ�Ƕ�����λ
//1.λ�εĳ�Ա����˵int ,unsigned int,signed int������char(�������ͼ���)����
//2.λ�εĿռ����ǰ�����Ҫ��4���ֽ�(int)����1���ֽ�(char)�ķ�ʽ�����ٵ�
//3.λ���漰�ܶ಻ȷ������,λ���ǲ���ƽ̨�ģ�ע�ؿ���ֲ�ĳ���Ӧ�ñ���ʹ��λ��
//4.����λ�β��ܴ���32
 

//#include <stdio.h>
//
//struct s
//{
//	int a : 2;   //��˼�����int�������ֻ����������,��ʡ�ռ䣬�������������ֻ��Ҫ�������أ��ǾͲ���Ҫ32��������
//	int b : 5;	 //��˼�����int�������ֻ��5������
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

//Ϊʲôsizeof(s1)��8���ֽڣ�λ�������������
//λ�εĳ�Ա����һ���ģ�int����4���ֽ��ȣ�Ҳ����8�����أ�2�����ؼ���5�����ؼ���10�����ص���17������
//ʣ��15�����أ��Ų������30�����أ�����15�����ؾ�ȫ�����ϣ�����������һ��int���͵��ڴ棬Ҳ����4���ֽ�
//��������4���ֽھ���8���ֽ�
//��ʹ����15���ֽڸ��Ž���һ�����ֽ������ʣ��15������,���ǵÿ���һ��ռ䣬���Ǳ�����ѡ���˷���15���������¿���һ��ռ���

//��������4��int������Ҫ16���ֽڣ�����ֻ��Ҫ8���ֽڣ�λ�εĴ��ھ���Ϊ�˽�ʡ�ռ�





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

//���������ȿ���һ��char��8������,aռ3����,bռ4����,ʣ��һ���ֽڲ����ţ��ٿ���һ��ռ䣬cռ5������,
//ʣ�µĲ�����d,�ٿ���һ��char�ռ�,�ܹ�3��char�ռ�
//00000000 00000000 00000000
//10�Ķ�����Ϊ1010  12�Ķ�����Ϊ1100  3�Ķ�����Ϊ011   4�Ķ�����Ϊ100
//��Ϊaֻ������3�����أ�����ֻ�ܽضϴ�ţ����010�����д��ȥ���ǣ�
//01100010
//c������5�����أ�����cֻ����λ�����ͻ���0����
//00000011
//�������ֽ���00000100 
//ȫò����:01100010 00000011 00000100
//���ڴ�����16���ƴ洢��,ÿ�ĸ�����һ��16������
//0110 0010 0000 0011 0000 0100 (��ÿһ���ڴ��ұ������)
//�ڴ��о���0x620304





//λ�εĿ�ƽ̨����
//1.intλ�α������з������ǲ�ȷ����(���λ���з���λ�����޷���λ��C�������ǲ�ȷ����)
//2.λ����������Ŀ����ȷ��(16λϵͳ���16,32λϵͳ���32,д��27����16λ�����������)
//3.λ���еĳ�Ա���ڴ��д������ҷ��仹�Ǵ������������δ����
//4.��һ���ṹ��������λ�Σ��ڶ���λ�γ�Ա�Ƚϴ������������һ��λ��ʣ���λʱ��
//����ʣ���λ�������ã����ǲ�ȷ����

//�ܽ᣺���ṹ����ȣ�λ�ο��Դﵽͬ����Ч�������ԺܺõĽ�ʡ�ռ䣬�����п�ƽ̨���������
//���һ������ע�ؿ���ֲ�ԣ�Ӧ�ñ���ʹ��λ��










//ö�٣�
//ö�ٹ���˼�����һһ�о٣��ѿ��ܵ�ֵһһ�о�

//ö�ٵĴ�С����4���ֽ�(λ��Ҳ��)

//ö�����͵Ķ���

//ö������
//#include <stdio.h>
//
//enum Sex
//{
//	MALE,	//ö�����ͳ�Ա�ö���,����
//	FEMALE,
//	SECRET  //���һ����Ա����Ҫ����
//};
//
//enum Color
//{
//	red = 2, //ö�ٱ�����ֵ�ǿ����޸ĵ�
//	yellow = 4,
//	blue = 8,
//	green    //��Ա���û���޸�Ĭ��ֵ����Ա��ֵ����һ����Ա��ֵ+1
//	//ö�ٳ����ǳ�������ֵ���Ǹı�ֵ��ֻ�Ǹ�һ����ʼֵ������ֵ֮��Ͳ��ܸ���,��Ϊ�ǳ���
//};
//
//int main()
//{
//	enum Sex s = MALE;  //enum Sexֻ�ܸ�ö�����͵�ֵ��Ҳ����˵ֻ����MALE,FEMALE,SECRET  
//	s = FEMALE;
//
//	printf("%d %d %d\n", MALE, FEMALE, SECRET); //��ӡ��������Ĭ��ֵ
//
//	printf("%d %d %d %d\n", red, yellow, blue,green);//��ӡ�޸�Ĭ��ֵ���ö�ٱ���
//
//
//	enum Color s1 = 5;   //������ֵ����ͨ�����������⣬��Ϊ5��int����,s1��enum Color����,���Ͳ�����
//	//�������ﲻ����������ֵ
//
//	printf("%d %d %d %d\n", red, yellow, blue, green);
//
//	return 0;
//}







//ö�ٵ��ŵ�
//1.���Ӵ���Ŀɶ��ԺͿ�ά����
//2.��#define����ı�ʶ���Ƚ�ö�������ͼ��,�����Ͻ���#define��enum��������#define�����redû�����ͣ�
// ֻ��һ������,����enum Color��red�����ͣ��Ǿ���ö������
//3.��ֹ������Ⱦ(��װ)
//4.���ڵ���
//5.ʹ�÷��㣬һ�ο��Զ���������

//enum��#define���

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
////C�������й���:C���Ե�Դ����-Ԥ����-����-����-��ִ�г���
////#define��enum��������#define�����redû�����ͣ�ֻ��һ������,����enum Color��red�����ͣ��Ǿ���ö������
//
//int main()
//{
//	return 0;
//}


//ö�ٵĴ�С

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
//	enum Sex s = MALE; //���︳ֵֻ�ܸ�ֵö����ĳ�Ա��ö����ĳ�Ա����int����,��ӡsizoef����4���ֽ�
//
//	printf("%d\n", sizeof(s));
//	printf("%d\n", sizeof(s1));
//
//	return 0;
//}






//����
//����Ҳ�������壬������

//�������͵Ķ���
//����Ҳ��һ��������Զ������ͣ��������Ͷ���ı���Ҳ����һϵ�еĳ�Ա��
// ��������Щ��Ա����ͬһ��ռ�(����Ҳ�й�����)

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

//��������ص�
//������ĳ�Ա�ǹ���ͬһ���ڴ�ռ�ģ�����һ�����ϱ����Ĵ�С,����������Ա�Ĵ�С
//��Ϊ�������ٵ����������������Ǹ���Ա

//��Щ��Ա����ͬʱʹ��,�ı�һ����Ա�������Ҳ��ı�






//�жϻ�����С�ֽ���


//����1��ָ�����

//1��1616������0x00 00 00 01
//�͵�ַ------------------�ߵ�ַ
//С�˴洢����: 0x01 00 00 00
//��˴洢����: 0x00 00 00 01

//#include <stdio.h>
//
//int main()
//{
//	int a = 1;   //0x00 00 00 01 �����Ǵ��ҵ���(�д���ȶ)
//
//	
//	if (*(char*)&a==1)
//	{
//		printf("С�˴洢\n");
//	}
//
//	return 0;
//}




//����2��������ķ�ʽ���

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
//	//�������ǿռ��ص��ģ���i��ֵ1��Ȼ��c��ֵ�Ƕ���,���i��С�˴洢���Ǿ���0x01000000,��˾���0x00000001
//	//С��c����ŵľ���1,���c����ŵľ���0
//}
//
//int main()
//{
//	int ret = check_sys();
//
//	if (ret == 1)
//	{
//		printf("С�˴洢\n");
//	}
//	else
//	{
//		printf("��˴洢\n");
//	}
//
//	return 0;
//}



//��Ȼ�ǹ���һ���ڴ棬���ǳ�Ա��С�ǲ�һ����
//����0x11223344,�浽�������������0x44332211(С��)
//char c����ֻ��洢һ���ֽڣ�����44��i��int���͵ľͻ�洢44332211
//���Ըı��������һ����Ա��������ԱҲ����ű�
//union un
//{
//	char c;
//	int i;
//};








//���ϴ�С�ļ���

//1.���ϵĴ�С����������Ա�Ĵ�С
//2.������Ա��С����������������������ʱ�򣬾�Ҫ���뵽����������������

//#include <stdio.h>
//
//union un
//{
//	//char arr[5]; //�����Ԫ��������ʲô������������ʹ�С���������,arr������char,��С��1��
//  //��Ĭ�϶�����8�ȣ���С��1���Ƕ�����
//	//д��arr[5],�൱��д��5��char:char c1,char c2,char c3,char c4,char c5
//	int i;  //Ĭ�϶�����8��i��С��4,4��С��4����Ĭ�϶�����
//
//  //char arr[5]�ܹ�5���ֽ�,���������(������)����5���ֽڣ������������С������������������������������
//  //����������4��5����4�����������ǾͲ��뵽4�����������Ǿ���8
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


//�ṹ����ڶ��룬��������ڶ���,λ�β����ڶ��룬��ΪҪ��ʡ�ռ�,ö��Ҳû�ж���








//�ṹ����� �½���ҵ



//1.��A=2��B=3ʱ��pointer������ٸ��ֽڵĿռ䣿

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




//����9
//������unsigned char state : ;  û�ж����С���Ǿ�ռһ�������ٵĿռ䣬Ҳ����ռ1���ֽ�







//2.����Ƕ��٣�

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





//С��Ŀ��ͨѶ¼

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
//	//����ͨѶ¼
//	struct Contact con;
//	//con����ͨѶ¼����߰�����1000��Ԫ�ص�����size
//
//
//	//��ʼ��ͨѶ¼
//	InitContact(&con);
//
//	do
//	{
//		menu();
//
//		printf("��ѡ��:>\n");
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
//			printf("�˳�ͨѶ¼\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}










//���׵����£���̬�ڴ����

//������
//Ϊʲô����ڶ�̬�ڴ����
//��̬�ڴ溯���Ľ��ܣ�malloc  free  calloc  realloc
//�����Ķ�̬�ڴ����
//��������ı�����
//��������





//Ϊʲô����ڶ�̬�ڴ���䣺

//�����Ѿ����յ��ڴ��ʹ�÷�ʽ(�ڴ�Ŀ��ٷ�ʽ)��

//1.����һ������
//int a = 10;  �ֲ����� - ջ��
//int g_a = 10; ȫ�ֱ��� - ��̬��

//��������ջ������������̬��
//ջ�����ţ��ֲ���������������ʽ����
//��������̬�ڴ����,malloc,free,calloc,realloc
//��̬����ȫ�ֱ�������̬����


//2.����һ������
//int arr[10]
//�ֲ��������������ջ���ȫ�ֱ�����������ھ�̬����


//��ǰ�����ַ�ʽ�������������봴�����ռ�ʹ������ռ������
//���Գ����˶�̬�ڴ����

//�������ֿ��ٿռ�ķ�ʽ�������ص㣺
//1.�ռ俪�ٴ�С�ǹ̶���
//2��������������ʱ�򣬱���ָ������ĳ��ȣ�������Ҫ���ڴ��ڱ���ʱ����


//���Ƕ��ڿռ�����󣬲��������������������ʱ��������Ҫ�Ŀռ��С�ڳ��������е�ʱ���֪����
//���������ʱ���ٿռ�ķ�ʽ�Ͳ��������ˡ���ʱ��ֻ�����Զ�̬�ڴ濪����
//��̬�ڴ�������ڶ�������ռ��

//֮ǰд��ͨѶ¼��һ��ʼ�Ϳ�����1000���ռ䣬�������ֻ���������ѣ���997���ռ���˷���
//ͨ��ѧϰ��̬�ڴ���䣬����ʵ��������һ����λ������һ����λ�������˷����Ч��





//��̬�ڴ溯��

//malloc
//���ڴ�����ռ�
//MSDN��void* malloc( size_t size );
//��Ҫ��<stdlib.h>��ͷ�ļ�


//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <errno.h>
//
//int main()
//{
//	//malloc���ڴ�����һ���������õĿռ䣬���ҷ������ռ����ʼ��ַ,����Ƕ�̬�ڴ濪��
//	int* p = (int*)malloc(10 * sizeof(int));
//	//malloc���ص���ʼ��ַ������void*,���ٵ���10��int����ǿתint*����int*����
//	//����ֵ��������void*,����malloc��������֪�����ٿռ�����ͣ�������ʹ�õ�ʱ��ʹ�����Լ�������
//
//	//���������ٳɹ��᷵�ؿ��ٿռ����ʼ��ַ��ָ�룬���û���㹻�ڴ棬�᷵��NULL(��ָ��),Ҳ���ǿ���ʧ����
//	//�����10*sizeof(int)�ĳ�10*INT_MAX,�ͻᱨ��,��Ϊ�ڴ�̫���ˣ�û���㹻�Ŀռ俪��
//	//���malloc�����ķ���һ��Ҫ�����
//
//	if (p == NULL)
//	{
//		//������ٿռ�ʧ�ܣ���ӡ������Ϣ
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
//	//����̬����Ŀռ䲻��ʹ�õ�ʱ��
//	//��Ӧ�û�������ϵͳ
//	//C�����ṩ������һ������free,ר����������̬�ڴ���ͷźͻ��յ�
//	//free()
//
//	free(p);
//	//����û��free,��������������ڽ�����ʱ��Ҳ�᷵���ڴ������ϵͳ
//	//free�������ͷŶ�̬�ڴ�ռ�
//	//��p��free�ͷ�����֮����Ȼ����ͨ��p�ҵ����ռ䣬
//	//�������p���׶��˵Ļ�,free��֮��Ҫ�ÿ�NULL
//	//malloc��freeҪ�ɶ�ʹ�ã���Ҫ��malloc,�͵�Ҫ��free
//
//	return 0;
//
//}

//free���������ͷŶ�̬���ٵ��ڴ棬freeһ����free�����ϵĿռ�
//�������ptrָ��Ŀռ䲻�Ƕ�̬���ٵģ���free��������Ϊ��δ����ġ������������ǲ���Ҫfree��
//�������ptr��NULLָ�룬��free����ʲô�¶�������








//calloc
//�����ǿ��ٿռ䲢�Ұ�Ԫ�س�ʼ��Ϊ0
//MSDN��void* calloc(size_t num, size_t size);
//num�Ǽ���Ԫ�ص���˼��size��Ԫ�صĴ�С����λ���ֽ�
//�����ڴ��С�Ľ����num*size  ����calloc(10,3),���ǿ���30���ֽ�

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <errno.h>
//
//int main()
//{
//	//����10��int��С�Ŀռ�
//	//malloc(10*sizeof(int));
//	//calloc(10, sizeof(int));
//	//malloc��calloc������ʹ���ϲ�ͬ�����о���calloc���ʼ���ռ�Ϊ0��malloc����
//	//mallocЧ�ʸ���һЩ����Ϊ���ó�ʼ�������ٺÿռ�Ͱ���ʼ��ַ���ػ�����
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
//MSDN��void *realloc( void *ptr, size_t size );
//ptr��Ҫ�������ڴ��ַ
//size�ǵ���֮���µĴ�С
//����ֵΪ����֮����ڴ���ʼλ��
//�����������ԭ�ڴ�ռ��С�Ļ����ϣ����Ὣԭ���ڴ��е������ƶ����µĿռ�
//realloc�ڵ����ڴ�ռ�ʱ�������������
//���1��ԭ�ռ�������㹻��Ŀռ�
//���2��ԭ�ռ����û���㹻��Ŀռ�

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
//	//��ʹ��malloc���ٵ�20���ֽڿռ�
//	//�������20���Լ��������������ǵ�ʹ����
//	//ϣ�������ܹ���40���ֽڵĿռ�
//	//����Ϳ���ʹ��realloc��������̬���ٵ��ڴ�
//
//
//	//����realloc��ջ����׷��һ�����ֽ�ʱ�������������
//	// 1.һ�������malloc/calloc���ٵ��ֽڿռ䣬���滹���㹻�Ŀռ����׷��,��Ϊ�ڴ�����������������洢�ģ�
//	//�����һ���Ѿ����ٺõĿռ�׷��,��Ҫ���Ǻ���ռ乻���������,��������׷��,���ҷ���ԭ���ĵ�ַ
//
//	//2.�������ռ䲻����ǿ��׷���ֽڣ��ͻ���ɷǷ����ʵ����������realloc�����¿���һ��ռ䣬���Ұ�ԭ����
//	//Ԫ�����ݸ��������¿ռ����棬��Ȼ�������µĿռ䣬�Ǿͻ᷵���µ��ڴ�ռ�ĵ�ַ����,ԭ�ڴ�ռ���ͷŵ���
//
//
//	int* p2 = realloc(p, 40);
//	//���ﲻ��д��int* p = realloc(p,40),��Ϊ�������׷�ӿռ䲻�����ͻᴴ���¿ռ䣬ԭ�ڴ�ռ�p�ᱻ�ͷ�
//	//���Բ���дp
//	//���realloc����ʧ���ˣ��ͻ᷵��NULL������ԭ�ռ俪�ٵ��ڴ�ᱻ�ͷŵ�
//  //realloc�����ǿ��ٳɹ����ǿ���ʧ�ܣ�ԭ�ռ䶼�ᱻ�ͷŵ�
//
//	//����Ϊ�˷�ֹ׷��ʧ�ܣ�ԭ�ڴ滹���ͷŵ����������
//	//��Ҫ����д�������ٲ��ɹ�ʱ��NULL�ͻḳ��p2,���ٳɹ��ˣ��ٰ�p2���ظ�p
//	if (p2 != NULL)
//	{
//		p = p2;  //����p,p2ֻ��һ��ָ�룬��Сֻռ4/8�ֽڣ�����̫��
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


//realloc�����ĳ����ö�̬�ڴ����������
//��ʱ���ǻᷢ�ֹ�ȥ����Ŀռ�̫С�ˣ���ʱ�������ֻ��������Ŀռ�̫���ˣ���Ϊ�˺����ʹ���ڴ棬
//����һ������ڴ�Ĵ�С�����ĵ�������realloc�����Ϳ��������Զ�̬�����ڴ��С�ĵ�����









//�����Ķ�̬�ڴ����


//1.��NULLָ��Ľ����ò���

//#include <stdio.h>
//
//int main()
//{
//	int* p = (int*)malloc(20);
//	//��һmallocʧ���ˣ�p�ͱ���ֵΪNULL��ָ�룬����mallocһ��Ҫ���з���ֵ���ж�
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 0;
//	}
//}



//2.�Զ�̬���ٿռ��Խ�����

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
//	//freeһ����free�����ϵĿռ�
//
//	return 0;
//}




//reallocҲ���Ե���ʹ�ÿ����ڴ�

//int* p = realloc(NULL, 40);   //����д���ȼ���mallic(40)
//���ǵ�һ������Ҫ��NULL;
//����ʹ��realloc���ٵĿռ�Ҳ��δ��ʼ����

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


//3.�ԷǶ�̬�����ڴ�ʹ��free�ͷ�

//void test()
//{
//	int a = 10;
//	int* p = &a;
//	free(p);
//}



//4.ʹ��free�ͷ�һ�鶯̬�����ڴ��һ����

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
//	//Ϊʲô�ᱨ����Ϊp++��p�Ѿ��ı��ˣ�������ڴ治�Ƕ�̬���ٵģ�
//	//����һ��ѭ����p�Ѿ�ָ�����ȥ�ˣ�freeӦ�����ͷŶ�̬�ڴ�p���ٵ���ʼλ��
//
//
//	return 0;
//}



//5.��ͬһ�鶯̬�ڴ�Ķ���ͷ�

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

//����̬�ڴ�ռ䱻�ͷŵ�֮���ǿ�ռ�Ͳ��Ƕ�̬�ڴ��ˣ���free�ͷŵ��ͻᱨ��
//Ϊ�˷�ֹ�������������free����֮��Ҫ��ʱ�ÿ�NULL
//��Ϊp�ó�NULL��֮�󣬲�С����freeҲû�£�free(NULL)��������κε��ͷŲ���





//6.��̬�����ڴ������ͷ�(�ڴ�й¶)

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
//	//��test���ý���������Ҫ�����ͷŶ��ͷŲ��ˣ���Ϊmalloc���ں������濪�ٵģ����������ý���ʱ
//	//p����ʱ���������˺���p�����٣��Ͳ�֪��p�ĵ�ַ�����ˣ���ʱ�����ͷ�Ҳ�ͷŲ���
//	//����취�����֣�1.�ں����ڲ�������ͷ�   2.��p�ĵ�ַ����ȥ���ͷ�
//	return 0;
//}

//malloc�Ὺ���ڴ棬һֱ���ٲ��ͷ��ڴ�ͻᱬ��





//�ܽ᣺�����ͷŲ���ʹ�õĶ�̬���ٵĿռ������ڴ�й¶��
//��̬���ٵĿռ�һ��Ҫ�ͷţ�������ȷ���ͷ�









//��̬�ڴ澭�������
 


//������1�����������ʲô����

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
//	printf(str);  //����д��û���⣬�ȼ���printf("%s",str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//1.���д���������ֱ���������
//2.��������ڴ�й¶������
//str��ֵ���ݵ���ʽ��p
//p��GetMemory�������βΣ�ֻ�ܺ����ڲ���Ч
//��GetMemory��������֮�󣬶�̬�����ڴ���δ�ͷ�
//�����޷��ҵ������Ի�����ڴ�й¶




//���������ĳ���ȷ�Ĵ���:


//����1:

//#include <stdio.h>
//#include <stdlib.h>
//
//void GetMemory(char** p)  //2.str������ָ�룬��ָ��ĵ�ַ���������Ǿ�Ҫ�ö���ָ�����
//{
//	*p = (char*)malloc(100);
//	//3.���������ָ������ò����ҵ�p��ָ�������str
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);  //1.�Ѵ�ֵ�ĳɴ�ַ
//	strcpy(str, "hello,world");
//	printf(str);  
//
//	//4.���ٶ�̬�ڴ�ռ�֮��Ҫ�ͷ�
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}



//����2��

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
//	printf(str);  //����д��û���⣬�ȼ���printf("%s",str);
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









//������2�������������ʲô���
//����ջ�ռ��ַ������

//char* GetMemory(void)
//{
//	char p[] = "hello world"; //����
//	//static char p[] = "hello world";  //��̬��
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


//p�Ǿֲ���������ջ���Ͽ��ٵĿռ䣬�����˺������������ˣ���������˭��������ڴ���δ֪�ģ�
//������ʾ��ǷǷ����ʣ���ӡ�����������ֵ,��char p[]�ϼ���static���ܳɹ�����







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

//����дҲû���⣬malloc���ٵĿռ䲻������ջ�������ٶ����٣�mallocû��free�Ͳ����ͷ�
//��Ϊmalloc���ڶ����Ͽ��ٿռ�ģ��ѿ��ٿռ�ĵ�ַ����ȥ��û��
//����ptr�ᱻ���ٵ�,ptr��ָ���100���ֽڵĿռ�û������
//100���ֽڵĿռ�ĵ�ַͨ��ptr�������շŵ�p����ȥ��





//������3�����������ʲô����

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


//û��free,�����ڴ�й¶






//������4�����´������ʲô

//#include <stdio.h>
//#include <stdlib.h>
//
//void Test(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str); //free�ͷ�strָ��Ŀռ�󣬲������str��ΪNULL��
//	//��free(str)֮��û���ÿգ�str�ͻ���Ұָ��
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

//����Ķ�̬�ڴ���ǰ�ͷ��ˣ��ͷź�Ŀռ��ٴα����ʾͻ���ַǷ�����









//c/c++������ڴ濪��

//�ڴ������ں˿ռ䣬ջ�����ڴ�ӳ��Σ���������̬��(���ݶ�)�������
//�ں˿ռ��Ǹ�����ϵͳʹ�õģ�ʣ�µ��ڴ������û�ʹ��

//�ֲ�������ջ�Ͽ��ٿռ䣬��̬�ڴ��ڶ��Ͽ��ٿռ䣬��̬������ȫ�ֱ����ھ�̬�����ٿռ�
//char* arr[] = "abcdef"   �����ַ������ڴ������������������ǲ��ܸĵ�


//C/C++�����ڴ����ļ�������
//1.ջ��(stack):��ִ�к���ʱ�������ھֲ������Ĵ洢��Ԫ��������ջ�ϴ�����
//����ִ�н���ʱ��Щ�洢��Ԫ�Զ����ͷš�ջ�ڴ�������������ڴ�������ָ��У�Ч�ʺܸߣ�
//���Ƿ�����ڴ��������ޡ�ջ����Ҫ��ź���������ľֲ�����.��������.��������.���ص�ַ��

//2.����(heap):һ���ɳ���Ա�����ͷţ�������Ա���ͷţ��������ʱ������OS(����ϵͳ)���ա�
//���䷽ʽ����������

//3.���ݶ�(��̬��)(static)�����ȫ�ֱ�������̬���ݡ������������ϵͳ�ͷš�

//4.����Σ���ź�����(���Ա������ȫ�ֺ���)�Ķ����ƴ��롣



//ʵ������ͨ�ľֲ���������ջ������ռ�ģ�ջ�����ص��������洴���ı�����������������١�
//���Ǳ�static���εı�����������ݶ�(��̬��)�����ݶε��ص��������洴���ı�����ֱ���������ʱ�����٣�
//�����������ڱ䳤










//��������(flexible array)
//C99�У��ṹ�����һ��Ԫ��������δ֪��С�����飬��ͽ���[��������]��Ա
//�ṹ�������������Աǰ���������һ��������Ա

//#include <stdio.h>
//#include <stdlib.h>
//
//struct S
//{
//	int n;
//	int arr[]; //����������һ��Ԫ�أ�������δָ����С��δ֪��С�ģ���������һ��д������һ����arr[0],һ����
//	//���־ͽ������������Ա,Ϊʲô�����������أ���Ϊ����Ĵ�С�ǿ��Ե�����
//};
//
//int main()
//{
//	struct S s = { 0 };
//	
//	printf("%d\n", sizeof(s));
//	//�ڼ���ṹ���С��ʱ�򣬲��������������Ա�Ĵ�С;
//
//	//��ε�����������Ĵ�С��
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 5 * sizeof(int));
//
//	ps->n = 100;
//
//	//���������鸳ֵ
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;
//	}
//
//	//����������鲻�����Ǿ�����
//	struct S* ptr = (struct S*)realloc(ps, 44);
//
//	//��������realloc,����Ҫ����ֵ�ж�
//	if (ptr != NULL)
//	{
//		ps = ptr;
//	}
//
//	//���������������鸳ֵ
//	for (i = 5; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//
//	//��ӡ�������Ҹ�ֵ�����������
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//
//	//malloc���ٵĿռ��Ժ������realloc������������������ǿɱ��
//
//	free(ps);
//
//	return 0;
//}




//��ָ����ģ���������飺

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
//  //�ṹ���ڶ����ʱ�򲻻�����ڴ棬�ڴ���������ʱ��Ż����ռ�
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
//	//���������С
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
//	//�ͷ��ڴ�
//	free(ps->arr);
//	ps->arr = NULL;
//	free(ps);
//	ps = NULL;
//	//���ͷ�ptr���ͷ�ps,��Ȼ���ͷ�ps�Ļ����Ҳ���ps-arr�ˣ�ps->arr���ͷŲ�������ڴ�й¶
//
//	return 0;
//}


//��������д����������n������һ��ռ��ǿɴ��С�ģ��������ڵ�һ��д��n��arr�������洢�ģ�
//�ڶ���д������ָ��ָ����һ��ռ�,���ڴ����������ʱ������Ч�ʻ����
// 
// �洢�ṹ���Ĵ�����cache(���ٻ���),�ڴ棬Ӳ��,Խ�����ٶ�Խ�죬���ǿռ��ԽС
// 
//��һ��ֻmalloc��һ�Σ���βֻ���ͷ�һ���ڴ棬�ڶ���malloc�����Σ���Ҫ�ͷ�����,������ɴ���
//�ڶ����������������ռ䣬malloc�õ�ԽƵ�����ڴ���Ƭ���ֵĸ��ʻ�Խ��
//��һ��ʵ�ַ�ʽ����ڵڶ����ڴ���ƬҪ����

//��������ĺô���1.�����ڴ��ͷţ�2.���������ڷ����ٶ�












//���½ڣ��ļ�����

//ʲô���ļ�
//�ļ���
//�ļ�����
//�ļ�������
//�ļ�ָ��
//�ļ��Ĵ���ر�
//�ļ���˳���д
//�ļ��������д
//�ļ��������ж�




//ʲô���ļ�
//�����ϵ��ļ������ļ�
//�����ڳ�������У�����һ��̸���ļ������֣������ļ��������ļ�

//�����ļ�������Դ�����ļ�(��׺Ϊ.c),Ŀ���ļ�(window������׺Ϊ.obj)����ִ�г���(windows������׺Ϊ.exe)
//�����ļ����Բ��������ļ�

//�����ļ����ļ������ݲ�һ���ǳ���,���ǳ�������ʱ��д�����ݣ�
//�������������Ҫ���ж�ȡ���ݵ��ļ�������������ݵ��ļ�


//���½����۵��������ļ�
//����ǰ�������������ݵ���������������ն�Ϊ����ģ������ն˵ļ����������ݣ����н����ʾ����ʾ���ϡ�
//��ʵ��ʱ�����ǻ����Ϣ����������ϣ�����Ҫ��ʱ���ٴӴ����ϰ����ݶ�ȡ���ڴ���ʹ�ã����ﴦ��ľ��Ǵ����ϵ��ļ�






//�ļ���
//һ���ļ�Ҫ��һ��Ψһ���ļ���ʶ���Ա��û�ʶ������á�
//�ļ��������������֣��ļ�·��+�ļ�������+�ļ���׺
//���磺c:\code\test.txt
//Ϊ�˷���������ļ���ʾ������Ϊ�ļ���
//c:\code��·��	test���ļ�������	txt���ļ���׺,�����ļ�����






//�ļ�����
//�������ݵ���֯��ʽ�������ļ�����Ϊ�ı��ļ����߶������ļ�
//�������ڴ����Զ����Ƶ���ʽ�洢���������ת�����������棬���Ƕ������ļ�
//���Ҫ�����������ASCII�����ʽ�洢������Ҫ�ڴ洢ǰת������ASCII�ַ�����ʽ�洢���ļ������ı��ļ�
//���ö������ı��ļ����������ģ����ֵ�������ļ��Ƕ������ļ�
//Ҳ����˵��ԭʼ�ģ�δ��������ľ��Ƕ������ļ���������ASCIIת������ľ����ı��ļ�

//һ���������ڴ�������ô�洢���أ�
//�ַ�һ����ASCII�洢����ֵ�����ݼȿ�����ASCII��ʽ�洢��Ҳ����ʹ�ö�������ʽ�洢
//��������10000�������ASCII�����ʽ��������̣��������ռ��5���ֽ�(ÿ���ַ�һ���ֽ�)��10000
//����������ʽ���,���ڴ�����ֻռ2���ֽڣ�0x10 27 00 00


//10000���ڴ��еĴ洢��ʽ��
//10000�Ķ������ǣ�00000000 00000000 00100111 00010000��ֱ�Ӵ浽�ڴ����棬���Ƕ�������ʽ�洢

//��10000��ÿһλ��ת����ASCIIֵ�浽�ڴ����棬����00110001 00110000 00110000 00110000 00110000,
//���־�����ASCII��ֵ�洢                          1         0       0        0         0



//���Դ���
//#include <stdio.h>
//
//int main()
//{
//	int a = 10000;
//
//	FILE* pf = fopen("test.txt", "wb"); 
//	//fopen�����ļ�   test.txt:��һ��test.txt
//	//w :writeд��   b:binary ������   wb:�Զ����Ƶ���ʽȥд������ļ�
//	//������ļ������ڵ�ʱ��,fopen�ᴴ������ļ�
//
//	fwrite(&a, 4, 1, pf); //�Զ����Ƶ���ʽд���ļ���
//	//&a:д�ļ���дa�����ݽ�ȥ��&a��ʾ������Դ��a�����ַ��
//	//4��4��д4���ֽڵ���˼
//	//1��дһ�������ӵ����ݣ�дһ��4���ֽڵ�����
//	//pf���ŵ�pfά�����ļ���ȥ
//
//	fclose(pf);
//	//���ļ���д��󣬾Ϳ��Թر�����ļ���
//
//	pf = NULL;
//	//�ر���֮��pf����Ϊ��ָ��
//
//	return 0;
//}

//�ü��±�����notepad++�򿪴����õ�test.txt�ᷢ�ָ�����������������ݣ�
//ԭ������Ϊ�������Զ�����д��ȥ����ļ��ģ������±���notepad++�����ı��༭����������

//����vs���Կ��ö���Դ�ļ�����ӡ���������һ���ӵ�test.txt���򿪷�ʽ��ѡ������Ʊ༭��

//��֮����10 27 00 00,������С�˷ŵ��ڴ��ﵹ�Ŷ���00 00 27 10��ת��ʮ���ƾ���10000
//��ӡ�����Ķ����ƺ��ڴ��д洢�����෴��

//һ��浽�ı�����ʽ����10000���浽�����������10 27 00 00







//�ļ�������


//ANISC��׼����"�����ļ�ϵͳ"����������ļ��ģ���ν�����ļ�ϵͳ��ָϵͳ�Զ���
//���ڴ���Ϊ������ÿһ������ʹ�õ��ļ�����һ��"�ļ�������"��
//���ڴ������������ݻ����͵��ڴ��еĻ�������װ�����������һ���͵������ϡ�
//����Ӵ����������������ݣ���Ӵ����ļ��ж�ȡ�������뵽�ڴ滺����(����������)��
//Ȼ���ٴӻ���������Ľ������͵�����������(�������)�ȡ�
//�������Ĵ�С����C����ϵͳ������


//�κεĳ�����ʾ����Ļ�϶�����һ�����뻺���������������







//�ļ�ָ��


//�����ļ�ϵͳ�У��ؼ��ĸ�����"�ļ�����ָ��",���"�ļ�ָ��"��
//ÿ����ʹ�õ��ļ������ڴ��п�����һ����Ӧ���ļ���Ϣ������������ļ��������Ϣ
//���ļ������֣��ļ�״̬���ļ���ǰ��λ�õ�
//��Щ��Ϣ�Ǳ�����һ���ṹ������еġ��ýṹ��������ϵͳ�����ģ�ȡ��ΪFILE


//������Ҫ�ڶ�ȡtest.txt���ͻ����ڴ��п���һ��ռ䣬���ļ���Ϣ����������test.txt�������Ϣ��
//�����ŵ���Ϣ������һ���ṹ������У��ýṹ��������ϵͳ��������ȡ��ΪFILE��
//��FILE����һ��������ΪFILE fʱ��f������һ���ļ������

//FILE��ʵ��һ���ṹ��������

//    typedef struct _iobuf
//{
//	void* _Placeholder;
//	} FILE;

//_iobuf���ǣ�

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


//������κ�һ���ļ����в�����ʱ�򣬱����һ���ļ���ʱ��д�ļ������ļ���ʱ��ȣ�
//ϵͳ������ļ�������Զ�����һ��FILE�ṹ�ı���������������е���Ϣ��
//��Щ�ļ���Ϣ����һ���ļ���Ӧ����

//��ͬ��������FILE���Ͱ��������ݲ���ȫ��ͬ�����Ǵ�ͬС��

//һ�㶼��ͨ��FILE*��ָ����ά�����FILE�ṹ��ı���




//�ļ��Ĵ���ر�

//�ڱ�д�����ʱ���ڴ��ļ���ͬʱ�����᷵��һ��FILE*��ָ�����ָ����ļ���Ҳ�൱�ڽ�����ָ����ļ��Ĺ�ϵ

//ANSIC�涨ʹ��fopen(const char* filename,const char* mode);
//int fclose(FILE* stream);


//mode(�򿪷�ʽ)���£�

//�ļ�ʹ�÷�ʽ��		���壺										���ָ���ļ������ڣ�
//"r"(ֻ��)			Ϊ���������ݣ���һ���Ѿ����ڵ��ı��ļ�		����
//"w"(ֻд)			Ϊ��������ݣ���һ���ı��ļ�					����һ���µ�
//"a"(׷��)			���ı��ļ�β�������							����
//"rb"(ֻ��)			Ϊ���������ݣ���һ���������ļ�				����
//"wb"(ֻд)			Ϊ��������ݣ���һ���������ļ�				����һ���µ��ļ�



//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <errno.h>
//
//int main()
//{
//	
//	//���·��-����ڵ�ǰλ�����ĸ�����
//	//FILE* ps = fopen("test.txt", "r");
//
//	//����·��-����·��Ҫ������\\����Ϊһ��\���������ַ��ͻᱻʶ���ת���ַ�������\t,\n
//	//FILE* ps = fopen("E:/Chengxu\\C++\\ħ����ѧc++֮������ǰ��׵�������\\yayinideyongyunbushixing\\test.txt", "r");
//	
//	//���Ҫ����һ��·�����ļ��������þ���·�����������·����ʱ��Ҫ��.. ��ǰ·������.
//	//FILE* ps = fopen("..//test.txt", "r");
//	//������б��\\��Ϊ�˷�ֹת�壬��һ����б��Ҳ���Դﵽͬ����Ч��
//
//	//��ǰ·������һ��·������һ��·��
//	//FILE* ps = fopen("..\\..\test.txt", "w");
//
//	return 0;
//}





//#include <stdio.h>
//
//int main()
//{
//	//FILE��ʧ�ܾͻ᷵�ؿ�ָ��,����file*�Ͷ�̬�ڴ�һ��Ҫ������ֵ�ж�
//
//	FILE* ps = fopen("test.txt", "r");
//
//	if (ps = NULL)
//	{
//		printf("��ʧ��\n");
//		return 0;
//	}
//
//	//�򿪳ɹ�
//	//���ļ�
//	//�ر��ļ�
//	fclose(ps);
//	ps = NULL;
//
//	//fclose���ǹر��ļ������Ұ���Դ�ͷŵ������ǲ����ps�ÿգ����Թر���Ҫ�ֶ��ÿգ���freeһ��
//
//
//	FILE* pf = fopen("test.txt", "w");
//	//�������д(w)����ʽ�򿪣�����������ļ���Ҳ�ᴴ��һ�����ļ����ǣ����ļ������ݣ�д��֮���ٴ򿪾��ǿյ�
//
//	return 0;
//}






//�ļ���˳���д


//����		    	������			������
//�ַ����뺯��		fgetc			���������� 
//�ַ��������		fputc			���������
//�ı������뺯��		fgets			����������	
//�ı����������		fputs			���������
//��ʽ�����뺯��		fscanf			����������
//��ʽ���������		fprintf			���������
//����������			fread			�ļ�
//���������			fwrite			�ļ�





//�ַ��������   

// fputc   c����char����˼

//MSDN��int fputc(int c, FILE* stream);

//д�ļ� - һ��дһ���ַ�

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
//	//fputc(д�ļ�)��MSDN�Ľ��ͣ�
//	//int fputc(int c, FILE * stream);
//	
// 
//	//д�ļ�
//	fputc('b', pfWrite);
//	fputc('i', pfWrite);
//	fputc('t', pfWrite);
//    //�ļ�����������ļ���д����
//
//
//	//�ر��ļ�
//	fclose(pfWrite);
//	pfWrite = NULL;
//
//	return 0;
//}



//�ַ����뺯��

//���ļ� - fgetc һ�ζ�һ���ַ�
//MSDN��int fgetc( FILE *stream );

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
//	//���ļ�
//	printf("%c", fgetc(pfRead));  //fgetcһ��ֻ��һ���ַ�
//	printf("%c", fgetc(pfRead));
//	printf("%c", fgetc(pfRead));
//  //�ļ������������ļ��������
//
//	//�ر��ļ�
//	fclose(pfRead);
//	pfRead = NULL;
//
//	return 0;
//}



//�Ӽ���������
//�������Ļ
//����&��Ļ�����ⲿ�豸

//����-��׼�����豸 - stdin
//��Ļ-��׼����豸 - stdout
//��������һ������Ĭ�ϴ򿪵��������豸

//һ����������Ĭ�ϴ�������
//stdin-��׼����
//stdout-��׼���
//stderr
//������������FILE*���͵� 

//���������ָָ�룬���ӳ����ļ���������̵�ʱ�����ָ������������֮��������


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

//fgetc������������������fputc���������������������stdin(��׼����)��stdout(��׼���)
//�������������˼�Ǽȿ��Բ����ļ�Ҳ���Բ�����Ļ








//�ı�������������� fgets/fputs    s����string����˼


//���ļ�

//fgets - �ı������뺯��

//MSDN:char *fgets( char *string, int n, FILE *stream );
//char* string�����ݵĴ洢λ�ã����������ȡ����Ϣ��������
//int n��Ҫ��ȡ���ٸ��ַ�(����ȡ���ٸ��ַ�)
//FILE* stream�����������

//#include <stdio.h>
//
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//
//	if (pf == NULL)
//	{
//		printf("��ʧ��\n");
//		return 0;
//	}
//
//	char buf[1024] = { 0 };
//
//	//���ļ� - �ı������뺯��
//	fgets(buf, 1024, pf);
//	printf("%s", buf);
//	//Ϊʲô���л��У���Ϊԭ�ļ�test.txt���л��з���fgetsһ�δ�ӡһ�У����з�Ҳ���ӡ��ȥ
//
//	fgets(buf, 1024, pf);
//	//putsҲ�ܹ�ʵϰ��printfһ���Ĵ�ӡЧ��
//	//puts��MSDN�Ľ��ͣ�int puts( const char *string );
//	puts(buf);
//
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}




//д�ļ� - fputs

//fputs  - �ı����������
//fputs��MSDN�Ľ��ͣ�int fputs( const char *string, FILE *stream );
//��˼��дһ���ַ�����������ȥ

//#include <stdio.h>
//
//int main()
//{
//	FILE* pf = fopen("test.txt", "w"); //Ҫ��w����ΪҪд��
//
//	//д�ļ�   
//	fputs("hello ", pf);
//	fputs("world", pf);
//	
//
//	return 0;
//}





//�������������˼�Ǽȿ��Բ����ļ�Ҳ���Բ�����Ļ

//#include <stdio.h>
//
//int main()
//{
//	//�Ӽ��̶�ȡһ���ı���Ϣ
//	char buf[1024] = { 0 };
//
//	fgets(buf, 1024, stdin); //�ӱ�׼��������ȡ
//	fputs(buf, stdout);  //�������׼�����
//
//	//�������ȼ���
//	gets(buf);
//	puts(buf);
//
//	//gets��fgets���������fgets������n�����ƣ�������������Խ��
//
//	return 0;
//}





//���϶��Ƕ��ַ������в����ģ���ʽ����������������԰��κ����͵����ݶ�д��ȥ


//��ʽ�������������	 fprintf/fscanf


//               int printf(const char* format[, argument]...);
//int fprintf(FILE* stream, const char* format[, argument]...);
//printf��Ա�׼�������fprintf�ȿ�����Ա�׼�����Ҳ��������ļ���


//��ʽ���������  fprintf

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
//	struct S s = { 100,3.14f,"bit" };   //3.14f�Ǳ�ʾ�����������float���͵ģ�����f����Ĭ��double����
//
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//
//	//��ʽ������ʽд�ļ�
//	fprintf(pf,"%d  %f  %s",s.n,s.score,s.arr);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}




//��ʽ�����뺯��   fscanf

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


//c����ƫ��ײ㣬���ǵð��Լ�������ڴ�...
//���������վ���ڴ�ĽǶȣ����������ļ���Ӳ�̣��Ƕȵ�
//���൱�ں��������룬���ǰ���Ϣ���뵽�����У���������Ǵӳ�����Ū����
//����������� fprintf����ָ�ӳ�����������ļ���ȥ��fscanf�����ļ������뵽��������
//���������ļ������ݣ���������ļ�д����


//��Ӧ��׼���������

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
//	fprintf(stdout,"%d %2f %s", s.n, s.score, s.arr);  //%2f����С��������ӡ��λ����˼
//
//	return 0;
//}

//���﹦�ܾ͸�scanf��printf�Ĺ���һ���ˣ�����ָ������ĵط��Ӽ������룬����ĵط�����Ļ��




//�Ա�һ�麯��
//scanf/fscanf/sscanf
//printf/fprintf/sprintf

//scanf/printf   ����Ա�׼������/��׼������� ��ʽ������/������
//fscanf/fprintf ���������������/����������� ��ʽ������/������

//sfcanf/fprintf��ʵ�ǰ�����scanf/printf�Ĺ��ܵ�


//sscanf�Ǵ��ַ����ж�ȡ��ʽ��������
//sprintf�ǰѸ�ʽ�����������(�洢��)�ַ���

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
//	//�Ѹ�ʽ��������ת�����ַ����洢��buf
//	sprintf(buf, "%d %f %s", s.n, s.score, s.arr);
//
//	//printf("%s\n",buf);
//	//��buf�ж�ȡ��ʽ�����ݵ�tmp��
//	sscanf(buf, "%d %f %s", &(tmp.n), &(tmp.score), &tmp.arr);
//
//	printf("%d %f %s\n", tmp.n, tmp.score, tmp.arr);
//
//	return 0;
//}






//�����������������  fread/fwrite 
//�������ļ���

//fwrite - ����������ļ�
//MSDN��size_t fwrite( const void *buffer, size_t size, size_t count, FILE *stream );

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
//	struct S s = { "����",20,55.6 };
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
//	//�����Ƶ���ʽд�ļ�
//	fwrite(&s, sizeof(struct S), 1, pf);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}



//fread - �����������ļ�
//MSDN��size_t fread( void *buffer, size_t size, size_t count, FILE *stream );
//��stream���count����СΪsize���������ŵ�buffer����ȥ

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




//ͨѶ¼(��̬���ļ���)

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
//	//����ͨѶ¼
//	struct Contact con;
//	//con����ͨѶ¼����߰�����1000��Ԫ�ص�����size
//
//
//	//��ʼ��ͨѶ¼
//	InitContact(&con);
//
//	do
//	{
//		menu();
//
//		printf("��ѡ��:>\n");
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
//			//����ͨѶ¼
//			SaveContact(&con); //�˳�ǰ����
//			DestroyContact(&con);
//			printf("�˳�ͨѶ¼\n");
//			break;
//		case SAVE:
//			SaveContact(&con);
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}







//�ļ��������д

//fseek 

//�ƶ��ļ�ָ�뵽ָ����λ��
//�����ļ�ָ���λ�ú�ƫ��������λ�ļ�ָ��
//MSDN��int fseek( FILE *stream, long offset, int origin );
//stream - Ҫ�������ļ�
//offset - ƫ����   ƫ����Ϊ2����ʼָ�������ƶ�����λ�ã�ƫ����Ϊ-2����ʼָ�������ƶ�����λ��
//origin - �ļ�ָ�뵱ǰλ��,������ѡ�SEEK_CUR(�ļ���ǰλ��) SEEK_END(�ļ���ĩβλ��) SEEK_SET(�ļ�����ʼλ��)

//�ļ���ָ��Ĭ��ָ���һλ�������Ҫ���������ط����Ϳ�����fseek


//#include <stdio.h>
//#include <errno.h>
//
//int main()
//{
//	//�����ʵ��ʱtest.txt��Ӧ�÷ŵ���"abcdef";
//	FILE* pf = fopen("test.txt", "r");
//
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//
//	//���ļ��ɹ���һ����λ�ļ�ָ��
//	//1.��λ�ļ�ָ��
//	fseek(pf, 2, SEEK_CUR);
//	//SEEK_CUR(�ļ���ǰλ��)
//	//SEEK_END(�ļ���ĩβλ��) ������abcdef,ĩβλ������f�ĺ��棬���Ҫƫ�Ƶ�e������Ҫд-2
//	//SEEK_SET(�ļ�����ʼλ��) 
//
//	//2.��ȡ�ļ�
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
//�����ļ�ָ���������ʼλ�õ�ƫ����
//MSDN��long ftell( FILE *stream );

//rewind
//MSDN��long ftell( FILE *stream );
//���ļ�ָ���λ�ûص��ļ�����ʼλ��


//#include <stdio.h>
//#include <errno.h>
//
//int main()
//{
//	//���ʵ����Ҫ��test.txt����������Ϊabcdef
//	FILE* pf = fopen("test.txt", "r");
//
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//
//	//1.��λ�ļ�ָ��
//	fseek(pf, -2, SEEK_END);
//
//	int ret = ftell(pf);
//	printf("%d\n", ret);
//
//	fgetc(pf);
//	int pos = ftell(pf);  //ftell:�����ļ�ָ���������ʼλ�õ�ƫ����
//	printf("%d\n", pos);
//	//��fgetc��ʱ�򣬾ͻ��ȡһ����ÿ��һ���ļ�ָ�����ƫ��һ��
//
//	char ch = 0;
//	rewind(pf);  //rewind:���ļ�ָ���λ�ûص��ļ�����ʼλ��
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	//�ͷſռ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}




//perror
//��������Ϣ����

//#include <stdio.h>
//
//int main()
//{
//	FILE* pf = fopen("test222.txt", "r");
//
//	if (pf == NULL)
//	{
//		perror("Open test222.txt");
//		//perror��strerror����һ�������Ǵ�ӡ������Ϣ������perror������ͷ�ļ���Ҳ����errno���մ�����
//		//perror�����÷�Χ����strerrorҪ�㣬perror�����Զ�����������һ��ں������ð�źͿո�,�������strerror
//		return 0;
//	}
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}






//feof - �ļ������ж�

//���ļ���ȡ�����У�������feof�����ķ���ֱֵ�������ж��ļ����Ƿ������
//����Ӧ���ڵ��ļ���ȡ������ʱ���ж��Ƕ�ȡʧ�ܽ��������������ļ�β������

//1.�ı��ļ���ȡ�Ƿ�������жϷ���ֵ�Ƿ�ΪEOF(fgetc),����NULL(fgets)
//���磺
//		fgetc�ж��Ƿ�ΪEOF
//		fgets�жϷ���ֵ�Ƿ�ΪNULL

//2.�������ļ��Ķ�ȡ�����жϣ��жϷ���ֵ�Ƿ�С��ʵ��Ҫ���ĸ���
//���磺
//		fread�жϷ���ֵ�Ƿ�С��ʵ��Ҫ���ĸ���


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
//	//���ļ�
//	int ch = 0;
//	while ((ch = fgetc(pf)) != EOF)
//	{
//		putchar(ch);
//	}
//
//	//�ļ��������ҽ�����ԭ������Ϊ�ļ��������������������������������
//	if (ferror(pf))
//	{
//		printf("error\n");
//	}
//	else if (feof(pf))
//	{
//		printf("end of file\n");
//	}
//	//ferror�����ļ��������ļ���ȡ���󶼻᷵���棬����feof��һ���ж��������������������˶�ȡ����
//	//ferror����ֵΪ0����ʾû�г�������Ϊ��
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}








//���һ�½ڣ������򻷾���C����Ԥ����

//�����ص㣺
//����ķ��뻷��
//�����ִ�л���
//��⣺C���Գ���ı���+����
//Ԥ������Ž���
//Ԥ����ָ��#define
//��ͺ����ĶԱ�
//Ԥ���������#��##�Ľ���
//�����
//Ԥ����ָ��#include
//Ԥ����ָ��#undef
//��������




//����ķ��뻷����ִ�л���

//����������������һ���з��뻷��һ����ִ�л���
//��ANSIC������һ��ʵ���У�����������ͬ�Ļ���
//��һ���Ƿ��뻷���������������Դ���뱻ת��Ϊ��ִ�еĻ���ָ� .c----->.exe
//�ڶ�����ִ�л�����������ʵ��ִ�д���


//C����(�ı��ļ�)   ����   ����       �����Ƶ���Ϣ���������ļ���       ����
//test.c--------------------------->test.exe-------------------------->
//Դ�ļ�(Դ����)      (���뻷��)                           (���л���)



//ÿһ��Դ�ļ����ᾭ���������������д�������test.c��add.c������Դ�ļ��ᵥ�����д���
//ͨ��������������ֱ�����Ŀ���ļ�.obj
//���е�Ŀ���ļ�ͨ�������������ټ������ӿ⣬�ͻ����ɿ�ִ�г���
//������������룬��������������
//������ͬʱҲ�������׼C���������κα��ó������õ��ĺ�����������������������Ա���˵ĳ���⣬
//������Ҫ�ĺ���Ҳ���ӵ�������


//������ϸ�־��������׶Σ�1.Ԥ����(Ԥ����)  2.����  3.���
       
//Ԥ�����test.c�����test.i
//Ԥ��������������������1.ͷ�ļ��İ���(#include)   2.ע��ɾ��(ע�ͻ��ÿո��滻)  3.#define�滻
//Ԥ������Ĳ��������ı�����


//�����test.i(C����)�����test.s,Ҳ���Ƿ���ɻ�����

//����test.s�����test.o(����.objĿ���ļ�),
//Ҳ���ǰѻ�����ת�����˶�����ָ��

//�ڻ��׶λ��γɸ����ļ��ķ��ű����ű����з��ź͵�ַ

//Ŀ���ļ��������������ӣ��������ɿ�ִ���ļ�.exe

//���ӻ����������£�1.�ϲ��α�  2.���ű�ĺϲ����ض�λ

//�����ڼ�Ҫ���кϲ��α�ͷ��ű�ĺϲ����ض�λ�����������ͻ�������Ӵ�������

//���Դ����ʱ����Ե���.exe�ļ�


//Ԥ����(Ԥ����)���


//Ԥ�������
//Ԥ������Ų����Լ�����ģ������������õ�
//#define����Ԥ�������


//__FILE__		//���б����Դ�ļ�
//__LINE__		//�ļ���ǰ���к�
//__DATE__		//�ļ������������
//__TIME__		//�ļ��������ʱ��
//__STDC__		//�����������ѭANSI C����ֵΪ1������δ����
//__FUNCTION__	//��ȡ������

//Ԥ�������Զ��ֹ������Щ



//#include <stdio.h>
//
//int main()
//{
//	printf("%s\n", __FILE__);	//��ӡ�������ļ��ľ���·��
//	printf("%d\n", __LINE__);
//	printf("%s\n", __DATE__);
//	printf("%s\n", __TIME__);
//	printf("\n\n");
//
//	//��������д��־
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
 






//Ԥ����ָ�� - #��ͷ�Ķ���Ԥ����ָ��

//#define
//#undef
//#include
//#pragma pack(4)
//#pragma pack()
//#if
//#endif
//#ifdef
//#line



//#define - �����ʶ��

//#define���治Ҫ�ӷֺ�;

//#include <stdio.h>
//
//#define MAX 100
//#define STR "haha"	 //#define�����Զ����ַ���
//#define reg register //#define�����Զ������
//#define do_forever for(;;)	//#define�����Զ������
//
//int main()
//{
//	//��Ԥ�����ʱ��ͻ��max���滻��MAX��ֵ
//	int max = MAX;
//
//	printf("%d\n", max);
//
//	printf("%s\n", STR);
//
//	reg int a = 10;
//	//�൱��register int a = 10;
//
//	do_forever;
//
//	//do_forever  //����д�ͻ�ֱ�ӽ�������ѭ��
//	//��Ϊfor(;;) �൱��
//	// for(;;)
//	//{
//	//	return 0;
//	//}
//
//	return 0;
//}






//#define - �����

//#define���ư�����һ���涨������Ѳ����滻���ı��У�
//����ʵ��ͨ����Ϊ��(macro)���߶����(define macro)

//�����Ǻ��������ʽ��
//#define name(parament-list)stuff ,���е�parament-list��һ���ɶ��Ÿ����ķ��ű�
//���ǿ��ܳ�����stuff�С�
//ע�⣺�����б�������ű�����name���ڡ�
//�������֮�����κοհ״��ڣ������б�ͻᱻ����Ϊstuff��һ����


//#include <stdio.h>
//
//#define SQUARE(x) x*x
//#define TWICE(a) a+a
//
//int main()
//{
//	//��ʾ��SQUARE
//
//	int ret = SQUARE(5);  //SQUARE(5) == 5*5
//
//	printf("%d\n", ret);
//
//
//	//��һ��С����
//	ret = SQUARE(5 + 1); 
//	printf("%d\n", ret);
//	//����������6��ƽ�����ǽ��Ӧ����36�����ǽ��ȴ��11��
//	//��Ϊ�궨�岻�Ǵ��Σ�����ֱ���滻��ʵ�ʹ���Ӧ����5+1 * 5+1 = 5+5+1=11
//	//��Ϊ�滻�ı���ԭ���뷨������˳���ǽ���취���ǰ�SQUARE(x) x*x �ĳ� SQUARE(x) (x)*(x)
//
//
//
//
//	//��ʾ��ADD
//	ret = 10 * TWICE(5);
//	printf("%d\n", ret);
//	//�����55����Ϊ�궨����滻,ʵ��������̾���10*5+5
//	//�����ĳ�TWICE(x) (x)+(x)  ,�����Ȼ��55��
//	//�Ѻ�ĳ�TWICE(X) ((x)+(x))  ,����������Ҫ�Ľ��
//	//д�궨���ʱ��������ʹ������
//
//
//	return 0;
//}

//�Ժ�򵥵ĺ����������ú궨����ʵ����



//1.�궨�岻��ʵ�ֵݹ�
//2.�겻���滻�ַ����������  ����printf("MAX = %d");  �����MAX���ᱻ�滻
//3.�겻���滻�����ǰ��#�ĺ����





//�ں궨���в����ַ���

//#include <stdio.h>
//
//#define print(x) printf("the value of "#x" is %d\n",x)
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	print(a);  //����printf("the value of "a" is 10\n");
//	print(b);  //����printf("the value of "b" is 20\n");
//
//	//�����ǰ�����#���ǲ����滻�ģ�����ת���ɶ�Ӧ���ַ���
//
//	return 0;
//}






//�������õĺ����

//��������ں�Ķ����г��ֳ���һ�ε�ʱ������������и����ã���ô����ʹ��������ʱ��Ϳ��ܳ���
//����Ԥ֪�ĺ���������þ��Ǳ��ʽ��ֵ��ʱ����ֵ�������Ч����

//���磺
//x+1  ����������
//x++  ���и�����


//MAX�����֤�����и����õĲ������������

//����Ǻ���������������ĸ����õ�����

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
//	//����int max = MAX(a++,b++) (a++>b++)?(a++):(b++)
//
//	printf("MAX = %d\n", max);
//	printf("a = %d\n", a);
//	printf("b = %d\n", b);
//
//	return 0;
//}






//��ͺ���֮��Ĺ�ϵ

//#include <stdio.h>
// 
////����
//int Max(int x, int y)
//{
//	return (x > y ? x : y);
//}
// 
////��
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
//	//����������º�Ⱥ���Ҫ�ã�����Ҵ���������ȥ�����Ǻ����ķ���������int,���������
//	//�����ں궨���������ֻ���滻�������ں�����ȥ��ֵ��ʲô���ͣ����Խ��ղ�ͬ������,���ǲ����Ͻ�
//
//
//	return 0;
//}


//Ϊʲô���ú���������������ԭ���ж���
//1.���ڵ��ú����ʹӺ������صĴ�����ܱ�ʵ��ִ�����С�ͼ��㹤������Ҫ��ʱ����ࡣ
//���Ժ�Ⱥ����ڳ���Ĺ�ģ���ٶȷ����ʤһ��
//2.��Ϊ��Ҫ���Ǻ����Ĳ�����������Ϊ�ض������͡����Ժ���ֻ�������ͺ��ʵı��ʽ��ʹ�á�
//��֮�����������������ͣ������ͣ������͵ȡ������޹����͵�

//ȱ�㣺
//1.ÿ��ʹ�ú��ʱ��һ�ݺ궨��Ĵ��뽫���뵽�����С����Ǻ�Ƚ϶̣�������ܴ�������ӳ���ĳ��ȡ�
//��Ϊÿ����һ�κ꣬����Դ�������滻�������������100�У�����3�Σ�����300�У�
//���Ǻ���ֻ����ͬһ�ݴ���

//2.����û�����Եģ���Ϊ���Ե���.exe��ִ���ļ�������Ԥ����׶ξ��Ѿ��滻��

//3.�겻�ܵݹ�

//4.�����������޹أ�Ҳ�Ͳ����Ͻ�

//5.����ܻ������������ȼ������⣬���¹������׳���





//����ʱ������������������������顣���磺��Ĳ������Գ������ͣ����Ǻ���������
//������

//#include <stdio.h>
//
//#define SIZE(type) sizeof(type)
//
//int main()
//{
//	int ret = SIZE(int);  //��ʱ�Ѿ����滻��ret = sizeof(int)
//
//	printf("%d\n", ret);
//
//	return 0;
//}



//����

//#include <stdio.h>
//
//#define MALLOC(num,type) (type*)malloc(num*sizeof(type))
//
//int main()
//{
//	//int* pf = (int*)malloc(10 * sizeof(int));
//	//���Ǵ�ͳ�Ŀ����ڴ淽ʽ
//
//	int* pf = MALLOC(10, int);
//	//����д�ͷ���ܶ࣬�����ǲ�������ʵ�ֵģ���Ϊ�������ܴ�����
//
//	return 0;
//}



//����һ��ȫ����д������һ�㲻ȫ����д





//#undef - �Ƴ���

//����ִ��һ��������Ҫ�����¶��壬��ô���ľ���������Ҫ���Ƴ�

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







//��������

//�ڱ���һ�������ʱ���������Ҫ��һ�����(һ�����)������߷����Ǻܷ���ġ�
//��Ϊ��������������ָ��

//����˵�������ԵĴ��룬ɾ����ϧ�������ְ��£��������ǿ���ѡ���Եı���

//��������Ҳ����Ԥ����׶ν��д���


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
//#ifdef TEST  //��˼�����#define��TEST,�Ǿ�ִ�У�û����Ͳ�ִ��
//		printf("%d ", arr[i]);
//#endif
//	}
//	//#ifdef �� #endif��һ�ԣ���Ҫ��Ӧ����
//	return 0;
//}





//�����֧����������

//#if �������ʽ
//#elif �������ʽ
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
//	printf("�ٺ�\n");
//#endif
//	
//	return 0;
//}




//if !defined �� ifndef 

//#include <stdio.h>
//
//int main()
//{
//#if defined(TEST)
//	printf("hehe\n");
//#endif
//
//
//#if !defined(TEST)  //���û�ж���TEST�Ļ���ִ��
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
//#ifndef(TEST)      //���û�ж���TEST�Ļ���ִ��
//	printf("haha\n");
//#endif
//
//	return 0;
//}







//�ļ�����

//�����Ѿ�֪����#includeָ�����ʹ����һ���ļ������롣������ʵ�ʳ�����#includeָ��һ����
//�����滻�ķ�ʽ�ܼ򵥣�Ԥ��������ɾ������ָ����ð����ļ��������滻��
//����һ��Դ�ļ�������10�Σ��Ǿ�ʵ�ʱ�����10��


//#include <stdio.h>
//#include "add.h"

//�����ļ�""�Ĳ��Ҳ��ԣ�����Դ�ļ�����Ŀ¼�²��ң������ͷ�ļ�δ�ҵ���������������ҿ⺯��ͷ�ļ�һ���ڱ�׼λ�ò���ͷ�ļ���
//������Ҳ�������ʾ�������

//������<>(�⺯��)�Ĳ��Ҳ��ԣ�����ͷ�ļ�ֱ������׼·����ȥ���ң�����Ҳ�������ʾ�������

//""�ķ�Χ���󣬻��ڱ���Ŀ¼����Ҳ���ڱ�׼·����ȥ����
//�⺯��Ҳ������""����ʽ����������������Ч�ʾͱȽϵ�,�Ƚ���



//��η�ֹͷ�ļ����ظ���εİ�����

//��һ�ַ���
//#ifndef __TEST_H__    ���test.hû�б�����
//#define __TEST_H__    �ǾͶ���һ��test.h��ͷ�ļ�

//int Add(int x,int y);

//#endif



//�ڶ��ַ���
//��ͷ�ļ������ #pragma once
//���ǱȽ��ִ���д��




//�ú�ķ�ʽʵ��offsetof

//#include <stdio.h>
//
//#define OFFSETOF(struct_name,member_name) (int)&(((struct_name*)0)->member_name)
////ԭ����Ҫ�ѽṹ��ָ��ָ����Ǹ���Ա��ƫ������ȥ��ʼλ�õ�ƫ������������ʼλ����0����ȥ0����ԭ����ֵ��
////����û��Ҫ��ȥ��
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


