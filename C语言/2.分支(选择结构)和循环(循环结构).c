#define _CRT_SECURE_NO_WARNINGS 1



//һ.��֧(ѡ��ṹ)��ѭ��(ѭ���ṹ)

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



