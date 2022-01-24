#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    int a, i;
    while (scanf("%d", &a) != EOF)
    {
        for (i = 0; i < a; i++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
int main()
{
    float a, b, c, d, e;
    scanf("%f %f %f %f %f", &a, &b, &c, &d, &e);
    printf("%.2f", (a + b + c + d + e) / 5);
    return 0;
}
#include<stdio.h>
int main() {
    float arr[5][6];
    int i, j;
    for (i = 0; i < 5; i++) {
        float sum = 0;
        for (j = 0; j < 5; j++) {
            scanf("%f", &arr[i][j]);
            sum += arr[i][j];
        }
        arr[i][5] = sum;
    }
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 6; j++) {
            printf("%.1f ", arr[i][j]);
        }printf("\n");
    }

    return 0;
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
    float m = max3(a + b, b, c) * 1.0 / (max3(a, b, b + c) + max3(a, b, b + c));
    printf("%.2f", m);
    return 0;
}
#include <stdio.h>
int main() {
    int x = 3;
    int y = 3;
    switch (x % 2) {
    case 1:
        switch (y)
        {
        case 0:
            printf("first");
        case 1:
            printf("second");
            break;
        default: printf("hello");
        }
    case 2:
        printf("third");
    }
    return 0;
}
int func(int a)
{
    int b;
    switch (a)
    {
    case 1: b = 30;
    case 2: b = 20;
    case 3: b = 16;
    default: b = 0;
    }
    return b;
}
#include<stdio.h>

int main()
{
	int a, b, c;
	scanf("%1d %1d %1d", &a, &b, &c);
	printf("%d %d %d", c, b, a);
	return 0;
}
#include<stdio.h>

int main()
{
	int a;
	for (a = 0; a <= 100; a++)
	{
		if (a % 3 == 0)
		{
			printf("%d ", a);
		}
	}
	return 0;
}
#include<stdio.h>

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);

	return 0;
}
#include<stdio.h>
int main()
{
	int n = 0;
	int m = 0;
	scanf("%d %d", &m, &n);
	int t = 0;
	while (t = m % n)
	{
		m = n;
		n = t;
	}
	printf("%d", n);
	return 0;
}
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
#include<stdlib.h>
int main()
{
	int num = 0;
	int count = 0;
	for (int n = 1; n <= 100; n++)
	{
		num = n;
		while (num > 0)
		{
			int d = num % 10;
			if (d == 9)
			{
				count++;
			}
			num /= 10;
		}
	}
	printf("9的个数为：%d\n", count);
	system("pause");
	return 0;
}
#include<stdio.h>
int main()
{
	int n;
	float i = 1.0;
	int j = 1;
	float sum = 0;
	for (n = 1; n <= 100; n++)
	{
		sum = sum + (i / n) * j;
		j = -j;

	}
	printf("%f\n", sum);
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
int main() {
	int i = 0;
	int Max = 0;
	int arr[10] = { 0 };
	printf("请输入10个整数 ");
	for (i = 0; i < 10; i++) {
		scanf("%d", &arr[i]);
	}
	Max = arr[0];
	for (i = 0; i < 10; i++) {
		if (arr[i] > Max) {
			Max = arr[i];
		}
	}
	printf("最大的数为%d ", Max);
	system("pause");
	return 0;
}