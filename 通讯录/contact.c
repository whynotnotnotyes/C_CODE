#define _CRT_SECURE_NO_WARNINGS 1

//Contact ͨѶ¼ʵ��
//1.test.c ����
//2.contact.c ʵ�ֺ����Ĺ���
//3.contact.h ��������



//ʵ�ֹ��ܣ�
//1.���1000�����ѵ���Ϣ
//���֣��绰���Ա�סַ������

//2.���Ӻ�����Ϣ
//3.ɾ��ָ�����ֵĺ�����Ϣ
//4.���Һ�����Ϣ
//5.�޸ĺ�����Ϣ
//6.��ӡ������Ϣ
//7.����


#include "contact.h"
#include <string.h>

//����ʵ����.c����ʵ��
void InitContact(struct Contact* ps)
{
	memset(ps->data, 0, sizeof(ps->data));
	ps->size = 0; //����ͨѶ¼���ֻ��0��Ԫ��
}



void AddContact(struct Contact* ps)
{
	if (ps->size == MAX) //��������һ��������MAX�ĺô������ֳ����ˣ���һ��MAX,ȫ��MAX������Ÿ�
	{
		printf("ͨѶ¼����,�޷�����\n");
	}
	else
	{
		printf("����������:>");
		scanf("%s", ps->data[ps->size].name);
		printf("����������:>");
		scanf("%d", &(ps->data[ps->size].age));
		printf("�������Ա�:>");
		scanf("%s", ps->data[ps->size].sex);
		printf("������绰:>");
		scanf("%s", ps->data[ps->size].tele);
		printf("�������ַ:>");
		scanf("%s", ps->data[ps->size].addr);

		ps->size++;
		printf("��ӳɹ�\n\n\n");
	}

}



void ShowContact(const struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("ͨѶ¼Ϊ��\n\n");
	}
	else
	{
		int i = 0;
		//��ӡ����
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		//��ӡ����
		for (i = 0; i < ps->size; i++)
		{
			printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n", 
				ps->data[i].name,
				ps->data[i].age,
				ps->data[i].sex,
				ps->data[i].tele,
				ps->data[i].addr);				
		}
		printf("\n");
	}
}



static int FindByName(const struct Contact* ps, char name[MAX_NAME])
{
	int i = 0;

	for (i = 0; i < ps->size; i++)
	{
		if (strcmp(ps->data[i].name, name) == 0)
		{
			return i;
		}
	}
	return -1;
}



void DelContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("������Ҫɾ���˵�����:>\n");
	scanf("%s", name);

	//1.����Ҫɾ��������ʲôλ��
	int pos = FindByName(ps, name);
	//�ҵ��˷�����������Ԫ�ص��±�
	//û�ҵ�����-1

	//ɾ��
	if (pos == -1)
	{
		printf("Ҫɾ�����˲���\n");
	}
	else
	{
		//ɾ������
		int j = 0;

		for (j = pos; j < ps->size - 1; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("ɾ���ɹ�\n");
	}
}



void SearchContact(const struct Contact* ps)
{
	char name[MAX_NAME];

	printf("��������Ҫ���ҵ�����:>\n");
	scanf("%s", &name);

	int pos = FindByName(ps,name);

	if (pos == -1)
	{
		printf("Ҫ���ҵ��˲�����\n");
	}
	else
	{
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
			ps->data[pos].name,
			ps->data[pos].age,
			ps->data[pos].sex,
			ps->data[pos].tele,
			ps->data[pos].addr);
		printf("\n");
	}

}



void ModifyContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("������Ҫ�޸��˵�����\n");
	scanf("%s", &name);

	int pos = FindByName(ps, name);

	if (pos == -1)
	{
		printf("�Ҳ�������ϵ��\n");
	}
	else
	{
		printf("������Ҫ�޸ĵ�����:>");
		scanf("%s", ps->data[pos].name);
		
		printf("������Ҫ�޸ĵ�����:>");
		scanf("%d", &(ps->data[pos].age));
	
		printf("������Ҫ�޸ĵ��Ա�:>");
		scanf("%s", ps->data[pos].sex);

		printf("������Ҫ�޸ĵĵ绰����:>");
		scanf("%s", ps->data[pos].tele);

		printf("������Ҫ�޸ĵĵ�ַ:>");
		scanf("%s", ps->data[pos].addr);
	}
}


