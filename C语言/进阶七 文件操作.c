#define _CRT_SECURE_NO_WARNINGS 1



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
//���־�����ASCII��ֵ�洢                       1(49)     0(50)       0        0         0



//���Դ���
//#include <stdio.h>
//
//int main()
//{
//	int a = 10000;
//
//	FILE* pf = fopen("test.txt", "wb"); 
//	//fopen�����ļ�   test.txt:��һ��test.txt���ļ�
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





