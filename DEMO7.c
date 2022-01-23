#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1

//static  - 静态的
//1. static 修饰局部变量
//2. static 修饰全局变量
//3. static 修饰函数
//
#include <stdio.h>

static 修饰局部变量
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


//static 修饰全局变量

extern 是用来声明外部符号的
extern int g_val;

int main()
{
	printf("%d\n", g_val);

	return 0;
}



//static修饰函数

//声明来自外部的函数
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

//#define 定义常量和宏

//#define 定义常量
//#define NUM 100
//#define STR "hehe"
//
////#define 定义宏-宏是有参数的
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

//内存单元有编号（地址/指针）
//
//int main()
//{
//	int a = 10;
//	int * pa = &a;//& -取地址
//	*pa = 20;//* 解引用操作符
//
//	//
//	//指针变量是用来存放地址的一种变量
//	//
//	printf("%d\n", a);
//
//	//char ch = 'w';
//	//char *pc = &ch;
//
//	//pa被成为指针变量
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
//1. 内存会被划分为小的内存单元，一个内存单元的大小是1个字节
//2. 每个内存单元都有编号，这个编号也被称为：地址/指针
//3. 地址/指针就可以存放在一个变量中，这个变量被称谓指针变量
//4. 通过指针变量中存储的地址，就能找到指针指向的空间
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


//描述一个学生
//创建的一个学生类型
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
	struct Stu s1 = { "张三",20,"男",90.5 };
	struct Stu s2 = { "如花", 40,"女", 99.5 };
	scanf("%s %d %s %lf", s1.name, &(s1.age), s1.sex, &(s1.score));
	//printf("%s %d %s %lf\n", s1.name, s1.age, s1.sex, s1.score);
	//结构成员访问操作符
	//结构体变量.结构体成员
	struct Stu* ps = &s1;
	//printf("%s %d %s %lf\n", (*ps).name, (*ps).age, (*ps).sex, (*ps).score);
	printf("%s %d %s %lf\n", ps->name, ps->age, ps->sex, ps->score);
	//-> 结构成员访问操作符
	//结构体指针->结构体成员
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