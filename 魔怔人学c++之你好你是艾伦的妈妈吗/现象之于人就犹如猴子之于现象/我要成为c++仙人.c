#define _CRT_SECURE_NO_WARNINGS 1



#include <stdio.h>

//һ
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
////��.ö�ٳ���
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
//��.��������������ͨ��Ҫ���д
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
//��.����
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
//
//
// 
//��.ת���ַ�
//int main()
//{
//
//	  \n:�����ַ�,n����new����˼...��
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
//
//
//
//��.�򵥼���
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
//
//
//
//��.����۸�(low��)
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
//int main()
//{
//	int a = 0, b = 100, c = 9;
//
//	printf("%d\n\n%d\n\n%d\n\n", a, b, c);
//
//	return 0;
//}




////����۸�medi�汾��
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
//	//��ס��һ�㣬scanf������%lf��printf������%f;
//	printf("��������%fcm\n", tall);
//
//	return 0;
//
//
//}



//����ʱ���1.
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
//
//
//}



//���ϸ�ֵ

  //total += (sum + 100) / 2   ����   total = total + (sum + 100) / 2

  //total * = sum + 12  ����  total = total * (sum + 12);

  //total /= 12 + 6  ����  total / (12 + 6);



//�����ݼ������
//��++���͡�--����������������������������/*��Ŀ�����*/��������ӻ������Ǳ�����
//������������ֱ���������͵ݼ�����������ǵ����þ��Ǹ��������+1��-1��

// count++  ����  count+-  ����  count=count+1

//ǰ׺��׺
//++��--���Է��ڱ�����ǰ�棬����ǰ׺��ʽ��Ҳ���Է��ڱ����ĺ��棬������׺��ʽ�� 
//a++��ֵ�� a �� l ��ǰ��ֵ����++a ��ֵ�Ǽ��� l �Ժ��ֵ�������ĸ���a �Լ���ֵ������ l��

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


//����a++��++a����⡣���������a++��a֮ǰ��ֵ��++a��a������ֵ��������ô���˳����أ�a++  a��ǰ������a��֮ǰ��ֵ��++a   a�ں�������a֮���ֵ��
//����a++��֮���ֵ��a--��a֮ǰ��ֵ�أ�����Ҫ��ô����أ�ͬ���ģ�a����++�ˣ����˶���������a++��a�����ֵ����Ȼa++��֮���ֵ����ô++a����֮ǰ��ֵ�ˣ�
//���ԣ��������ǰ׺��׺˳��ĵ�������Ӱ��������ô��⣬����˵����������ʽ�ı任����Ӱ�������жϣ�����Ӱ��������֪�ģ�Ҳ��������������ʶ����Ĳ�����ʽ�����Ǿ��飬
//���������ۺ��ж�



//��������
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
int main()
{
	int a = 0;

	printf("������һ����λ��");
	scanf("%d", &a);

	printf("%d\n",(a % 10 * 100) + (a % 100 / 10 * 10) + (a / 100));


	return 0;
}
