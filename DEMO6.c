#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int max3(int a, int b, int c)
{
	int max = a;
	if (max < b)
		max = b;
	if (max < c)
		max = c;
	return max;
}
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d %d %d", &a, &b, &c);
	float m = (max3(a + b, b, c) * 1.0) / (max3(a, b, b + c) + max3(a, b, b + c));
	printf("%.2f", m);
	return 0;
}
/ int main()
{
	//int a = -10;//����
	//int b = -a;
	//int c = +10;
	//c = +a;

	//int a = 10;

	//printf("%d\n", sizeof(a));
	//printf("%d\n", sizeof(int));

	//00010101
	//11101010

	//int a = 10;
	////int b = ++a;//ǰ��++����++����ʹ��
	////a=a+1;b=a;

	//int b = a++;//����++����ʹ�ã���++
	////b=a;a=a+1;
	//printf("a=%d b=%d\n", a, b);//11 10

	//int a = 10;
	////int b = --a;//ǰ��--����--����ʹ��
	//int b = a--;//����--����ʹ�ã���--

	//printf("a=%d b=%d\n", a, b);//

	//int a = 1;
	//int b = (++a) + (++a) + (++a);
	//printf("%d\n", b);

	int a = (int)3.14;//ǿ������ת��
	printf("%d\n", a);

	return 0;
}

int main()
{
	int a = 3;
	int b = 20;
	if (a == 3 || b == 4)
	{
		printf("hehe\n");
	}
}

int main()
{
	int a = 3;
	int b = 5;
	int m = 0;

	if (a > b)
		m = a;
	else
		m = b;

	m = ((a > b) ? a : b);

	return 0;
}

int main()
{
	int a = 1;
	int b = 3;
	int c = 4;
	int d = (a = b - 3, b = a * 2, c = a - b);

	printf("%d %d %d %d\n", a, b, c, d);

	return 0;
}


int main()
{
	int arr[10] = { 1,2,3,4,5 };
	//              0 1 2 3 4

	printf("%d\n", arr[4]);//[]�����±����ò�����
	//[] - arr 4
	//3+5
	return 0;
}

int Max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}

int main()
{
	printf("hello");//()���Ǻ������ò�����
	//()�Ĳ������Ǻ�����printf���ڶ�������"hello"
	int m = Max(2, 3);
	//() -- Max,2,3

	return 0;
}

int main()
{
	int a = 10;
	//int char;//err

	return 0;
}


//�޷��ŵ����ͱ���

typedef unsigned int uint;

int main()
{
	unsigned int num1 = 0;
	uint num2 = 0;
	return 0;
}


int main()
{
	register int num = 10;
	//�Ĵ��������ǲ���ȡ��ַ�ģ�Ϊʲ�أ�
	//register ��һ����������ã����齲num��ֵ���ڼĴ����У��������ɱ�����������

	return 0;
}

//static - ��̬��
//1. static�������ξֲ�����
//2. static��������ȫ�ֱ���
//3. static�������κ���
//C������static��3���÷�

int main()
{
	//1.
	return 0;
}

#include <stdio.h>

int main()
{
	int a = 40;
	int c = 212;
	int r = (-8 + 22) * a - 10 + c / 2;

	printf("%d\n", r);

	return 0;
}


#include <stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	//����
	scanf("%d %d", &a, &b);
	//���
	printf("%d %d\n", a / b, a % b);

	return 0;
}


#include <stdio.h>

int main()
{
	printf("Name    Age    Gender\n");
	printf("---------------------\n");
	printf("Jack    18     man\n");
	return 0;
}


#include <stdio.h>

int main()
{
	int iq = 0;
	//����
	while (scanf("%d", &iq) != EOF)
	{
		//���
		if (iq >= 140)
			printf("Genius\n");
	}

	return 0;