#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1

//static  - ��̬��
//1. static ���ξֲ�����
//2. static ����ȫ�ֱ���
//3. static ���κ���
//
#include <stdio.h>

static ���ξֲ�����
void test()
{
	static int n = 1;
	n++;
	printf("%d ", n);
}

int main()
{
	int i = 0;
	while (i < 10)
	{
		test();
		i++;
	}

	return 0;
}


//static ����ȫ�ֱ���

extern �����������ⲿ���ŵ�
extern int g_val;

int main()
{
	printf("%d\n", g_val);

	return 0;
}



//static���κ���

//���������ⲿ�ĺ���
extern int Add(int, int);
//
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	int sum = Add(a, b);
	printf("%d\n", sum);

	return 0;
}

//#define ���峣���ͺ�

//#define ���峣��
//#define NUM 100
//#define STR "hehe"
//
////#define �����-�����в�����
//#define  ADD(x,y) ((x)+(y))
//
//
int main()
{
	//printf("%d\n", NUM);//printf("%d\n", 100);
	//printf("%s\n", STR);//printf("%s\n", "hehe");
	int a = 10;
	int b = 20;
	int sum = ADD(a, b);//int sum = (a+b);
	printf("%d\n", sum);

	return 0;
}

//�ڴ浥Ԫ�б�ţ���ַ/ָ�룩
//
//int main()
//{
//	int a = 10;
//	int * pa = &a;//& -ȡ��ַ
//	*pa = 20;//* �����ò�����
//
//	//
//	//ָ�������������ŵ�ַ��һ�ֱ���
//	//
//	printf("%d\n", a);
//
//	//char ch = 'w';
//	//char *pc = &ch;
//
//	//pa����Ϊָ�����
//	
//	//
//	//0000 0000 0000 0000 0000 0000 0000 1010
//	//00 00 00 0a
//	//
//	return 0;
//}


int main()
{
	char ch = 'a';
	char* pc = &ch;
	*pc = 'b';
	printf("%c\n", ch);

	return 0;
}

//
//1. �ڴ�ᱻ����ΪС���ڴ浥Ԫ��һ���ڴ浥Ԫ�Ĵ�С��1���ֽ�
//2. ÿ���ڴ浥Ԫ���б�ţ�������Ҳ����Ϊ����ַ/ָ��
//3. ��ַ/ָ��Ϳ��Դ����һ�������У������������νָ�����
//4. ͨ��ָ������д洢�ĵ�ַ�������ҵ�ָ��ָ��Ŀռ�
//
//
int main()
{
	char ch = 'w';
	int n = 100;
	double d = 3.14;

	char* pc = &ch;
	int* pi = &n;
	double* pd = &d;

	printf("%d\n", sizeof(pc));//4/8
	printf("%d\n", sizeof(pi));//4/8
	printf("%d\n", sizeof(pd));//4/8

	return 0;
}


//����һ��ѧ��
//������һ��ѧ������
//struct Stu
//{
//	char name[20];
//	int age;
//	char sex[5];
//	double score;
//};
//
int main()
{
	struct Stu s1 = { "����",20,"��",90.5 };
	struct Stu s2 = { "�绨", 40,"Ů", 99.5 };
	scanf("%s %d %s %lf", s1.name, &(s1.age), s1.sex, &(s1.score));
	//printf("%s %d %s %lf\n", s1.name, s1.age, s1.sex, s1.score);
	//�ṹ��Ա���ʲ�����
	//�ṹ�����.�ṹ���Ա
	struct Stu* ps = &s1;
	//printf("%s %d %s %lf\n", (*ps).name, (*ps).age, (*ps).sex, (*ps).score);
	printf("%s %d %s %lf\n", ps->name, ps->age, ps->sex, ps->score);
	//-> �ṹ��Ա���ʲ�����
	//�ṹ��ָ��->�ṹ���Ա
	//
	return 0;
}


#include <stdio.h>

int main()
{
	int n = 0;
	int m = 0;
	while (scanf("%d %d", &n, &m) == 2)
	{
		printf("hehe\n");
	}

	return 0;
}