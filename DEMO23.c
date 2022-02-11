#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n = 0;
	int m = 0;
	while (scanf("%d %d", &n, &m) == 2)
	{
		if (n == m)
			printf("%d=%d\n", n, m);
		if (n > m)
			printf("%d>%d\n", n, m);
		if (n < m)
			printf("%d<%d\n", n, m);
	}
	return 0;
}
#include<stdio.h>
int main()
{
	float a = 0;
	float b = 0;
	float c = 0;
	scanf("%f%f%f", &a, &b, &c);
	printf("%.2f %.2f", (a + b + c), (a + b + c) / 3);
}
#include<stdio.h>
int main()
{
	int a, b, c, d;
	scanf("%1d%1d%1d%1d", &a, &b, &c, &d);
	printf("%d%d%d%d", d, c, b, a);
	return 0;
}
#include<stdio.h>
int main()
{
	int a = 0;
	int i = 0;
	scanf("%d", &a);
	for (i = 0; i < 4; i++)
	{
		printf("%d", a % 10);
		a /= 10;
	}
	return 0;
}
#include <stdio.h>
int sum(int a)
{
    int c = 0;
    static int b = 3;
    c += 1;
    b += 2;
    return (a + b + c);
}
int main()
{
    int i;
    int a = 2;
    for (i = 0; i < 5; i++)
    {
        printf("%d,", sum(a));
    }
}
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
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	printf("%.2f", max3(a + b, b, c) * 1.0 / (max3(a, b + c, c) + max3(a, b, b + c)));
	return 0;
}
#include<stdio.h>
int main()
{
	int n, m;
	while (scanf("%d", &n) != EOF)
	{
		for (m = 0; m < n; m++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
#include<stdio.h>
int main()
{
	int i = 0;
	while (i < 100)
	{
		if (i % 2 == 1)
		{
			printf("%d ", i);
		}
		i++;
	}
	return 0;
}
#include<stdio.h>
int main()
{
	int i = 0;
	for (i = 0; i <= 100; i++)
	{
		if (i % 2 == 1)
		{
			printf("%d ", i);
		}
	}
	return 0;
}
#include<stdio.h>
int main()
{
	int i = 1;
	while (i <= 100)
	{
		if (i % 2 == 1)
		{
			printf("%d ", i);
		}
		i += 2;
	}
	return 0;
}





nµÄ½×³Ë
#include<stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	int ret = 1;
	for (i = 1; i <= n; i++)
	{
		ret *= i;
	}
	printf("%d", ret);
	return 0;
}
#include<stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	int ret = 1;
	int sum = 0;
	for (i = 1; i <= n; i++)
	{
		ret *= i;
		sum += ret;
	}printf("%d", sum);
	return 0;
}
#include<stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	int i = 1;
	int ret = 1;
	int sum = 0;
	while (i < n)
	{
		ret *= i;
		sum += ret;
		i++;
	}
	printf("%d", sum);
	return 0;
}
#include<stdio.h>
int main()
{
	int n = 0; 
	int i = 1;
	int sum = 0;
	for (n = 1; n <= 3; n++)
	{
		int ret = 1;
		for (i = 1; i <= n; i++)
		{
			ret *= i;
		}
		sum += ret;
	}
	return 0;
}
#include<stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	int ret = 1;
	int sum = 0;
	for (i = 1; i <= n; i++)
	{
		ret *= i;
		sum += ret;
	}
	printf("%d", sum);
	return 0;
}
#include<stdio.h>
int main()
{
	int n = 0;
	int i = 0;
	int ret = 1;
	int sum = 0;
	for (n = 1; n <= 3; n++)
	{
		ret = 1;
		for (i = 1; i <= n; i++)
		{
			ret *= i;
		}
		sum += ret;
	}
	printf("%d", sum);
	return 0;
}
#include<stdio.h>
int main()
{
	int n = 0;
	int i = 1;
	int ret = 1;
	int sum = 0;
	for (; n <= 3; n++)
	{
		for (i = 1; i <= n; i++)
		{
			ret *= i;
		}
	}
	return 0;
}
#include<stdio.h>
int main()
{
	int n = 0;
	int i = 0;
	int ret = 1;
	for (i = 1; i <= n; i++)
	{
		ret *= i;
	}
	return 0;
}
#include<stdio.h>
int main()
{
	int n = 0;
	int i = 1;
	int ret = 1;
	int sum = 1;
	for (n = 1; n <= 3; n++)
	{
		ret = 1;
		for (i = 1; i <= n; i++)
		{
			ret *= i;
		}
		sum += ret;
	}
	printf("%d", sum);
	return 0;
}
#include<stdio.h>
int main()
{
	int n = 0;
	int ret = 1;
	int sum = 0;
	for (n = 1; n <= 3; n++)
	{
		ret *= n;
		sum += ret;
	}
	printf("%d", sum);
	return 0;
}
#include<stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	int i = 1;
	int ret = 1;
	int sum = 0;
	for (i = 1; i <= n; i++)
	{ 
		ret *= i;
		sum += ret;
	}
	printf("%d", sum);
	return 0;
}
#include<stdio.h>
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