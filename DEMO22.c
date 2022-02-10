#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	return 0;
} 
#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d%d%d", &a, &b, &c);
	if (a < b)
	{
		int tmp = a;
		a = b;
		b = tmp;
	}
	if (a < c)
	{
		int tmp = a;
		a = c;
		c = tmp;
	}
	if (b < c)
	{
		int tmp = b;
		b = c;
		c = tmp;
	}
	printf("%d %d %d\n", a, b, c);
	return 0;
}

#include<stdio.h>

int main()
{
	int a = 1;
	for (a = 1; a <= 100; a++)
	{
		if (a % 3 == 0)
			printf("%d ", a);
	}
	return 0;
}
//给两个数，最大公约数
#include<stdio.h>
int main()
{
	int n = 0;
	int m = 0;
	scanf_s("%d%d", &n, &m);
	int max = m > n ? n : m;
	/*printf("%d", max);*/
	while (1)
	{
		if (m % max == 0 && n % max == 0)
		{
			printf("最大公约数为：%d", max);
			break;
		}
		max--;
	}
	return 0;
}
//辗转相除法
//m%n=t！=0
//n%t=0 t为最大公约数
//#include<stdio.h>
//
int main()
{
	int n = 0;
	int m = 0;
	scanf_s("%d%d", &m, &n);
	int t = 0;
	while (t = m % n)
	{
		m = n;
		n = t;
	}
	printf("%d", n);
	return 0;
}

//打印1000到2000之间的闰年
//被400整除是闰年
//被4整除，不能被100整除是闰年

#include<stdio.h>

int main()
{
	int y = 0;
	int count = 0;
	for (y = 1000; y <= 2000; y++)
		if (y % 4 == 0)
		{
			if (y % 100 != 0)
			{
				printf("%d ", y);
				count++;
			}
		}
	if (y % 400 == 0)
	{
		printf("%d ", y);
		count++;
	}
	printf("\ncount = %d \n", count);
	return 0;
}
#include<stdio.h>

int main()
{
	int y = 0;
	int count = 0;
	for (y = 1000; y <= 2000; y++)
		if ((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0))
		{
			printf("%d ", y);
			count++;
		}
	printf("\n闰年个数：%d\n", count);
	return 0;
}
//写一个代码:打印100~200之间的素数
//素数-质数
//只有被1和本身整除

//判断i是否为素数
//2->i-1之间的数字去试去除i，看能否整除
#include<stdio.h>

int main()
{
	int i = 0;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{
		int j = 0;
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (i == j)
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("%d", count);
	return 0;
}

#include<stdio.h>

int main()
{
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		int j = 0;
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (i == j)
		{
			printf("%d ", i);
		}
	}
}
#include<stdio.h>
//
int main()

{
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		int j = 0;
		int flag = 1;
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
		{
			printf("%d", i);
		}
	}
	return 0;
}


//sqrt(开平方的函数 math.h
//m = a * b
//a和b中一定至少有一个数字是<=开平方m的

#include<stdio.h>
#include<math.h>
//
int main()
{
	`int i = 0;
	for (i = 101; i <= 200; i += 2)
	{
		int j = 0;
		int flag = 1;
		for (j = 2; j <= sqrt(i); j++)
		{
			if (i % j == 0)
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
		{
			printf("%d ", i);
		}
	}
	return 0;
	//}

#include<stdio.h>
	int main()
	{
	flag:
		printf("hehe\n");
		printf("haha\n");
		goto flag;
		return 0;
	}
	//关机
	//sysyem()-执行系统命令
	//shutdown -s -t 60
	//shutdown -a
#include<stdio.h>
#include<stdio.h>
#include<string.h>
	int main()
	{
		char input[20] = { 0 };//存放输入信息
		system("shutdown -s -t 60");
	again:
		printf("请注意，你的电脑在1min内关机，如果输入：我是猪，就取消关机");
		scanf_s("%s\n", input);
		if (strcmp(input, "我是猪") == 0)
		{
			system("shutdown -a");
		}
		else
		{
			goto again;
		}
		return 0;
	}
#include<stdio.h>
#include<stdio.h>
#include<string.h>
	int main()
	{
		char input[20] = { 0 };//存放输入信息
		system("shutdown -s -t 60");
		while (1)
		{
			printf("请注意，你的电脑在1min内关机，如果输入：我是猪，就取消关机");
			scanf_s("%s\n", input);
			if (strcmp(input, "我是猪") == 0)
			{
				system("shutdown -a");
				break;
			}
		}
		return 0;
	}
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

	int main()
	{
		char input[20] = { 0 };
		system("shutdown -s -t 60");
		while (1)
		{
			printf("请注意，你的电脑将在1min内关机，如果输入：我是猪，将会停止\n");
			scanf("%s", input);
			if (strcmp(input, "我是猪") == 0)
			{
				system("shutdown -a");
				break;
			}
		}
		return 0;
	}