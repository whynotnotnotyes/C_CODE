#define _CRT_SECURE_NO_WARNINGS 1



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






