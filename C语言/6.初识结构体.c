#define _CRT_SECURE_NO_WARNINGS 1



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




