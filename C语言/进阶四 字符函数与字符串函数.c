#define _CRT_SECURE_NO_WARNINGS 1



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



