#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a, b, c, z;
	scanf("%d %d %d", &a, &b, &c);
	if (a > b)
		z = a;
	else
		z = b;
	if (b > c)
		z = b;
	else
		z = c;
	printf("%d", z);
	return 0;
}
#include<stdio.h>
int main()
{
	int a, b, c, max = 0, min = 0, mid = 0;
	scanf("%d %d %d", &a, &b, &c);
	max = ((a > b) ? a : b) > c ? ((a > b) ? a : b) : c;
	min = ((a > b) ? b : a) > c ? c : ((a > b) ? b : a);
	mid = a + b + c - min - max;
	printf("%d %d %d", max, mid, min);
	return 0;
}

#include<stdio.h>
int main()
{
	char s[11];
	gets(s);
	int i = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
		{
			s[i] = (s[i] + 4 - 'A') % 26 + 'A';
		}
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = (s[i] + 4 - 'a') % 26 + 'a';
		}
	}
	puts(s);
	return 0;
}

#include<stdio.h>
int main()
{
	float F = 0;
	scanf("%f", &F);
	printf("%.2f", 5.0 * (F - 32) / 9);
	return 0;
}
#include<stdio.h>
int main()
{
	double f, c;
	scanf("%lf", &f);
	c = 5 * (f - 32) / 9;
	printf("c=%.2f", c);
	return 0;
}
#include<stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", a * a + b * b);
    return 0;
}
#include<stdio.h>
int main()
{
    double r = 0;
    scanf("%lf", &r);
    printf("%.2lf", 3.14 * r * r);
    return 0;
}
#include<stdio.h>
#include<math.h>
main()
{
    int a, b, z;
    scanf("%d%d", &a, &b);
    z = pow(a, 2) + pow(b, 2);
    printf("%d", z);
}
#include<stdio.h>
#include<math.h>
int main()
{
	double r = 0;
	scanf("%lf", &r);
	printf("%.2lf",3.14159 * pow(r, 2));
	return 0;
}
#include<stdio.h>
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	printf("C:%d\nS:%d", 2 * (a + b), a * b);
	return 0;
}
#include<stdio.h>
int main()
{
	int a, b, c, z;
	scanf("%d %d %d", &a, &b, &c);
	if (a > b)
		z = a;
	else
		z = b;
	if (a > c)
		z = a;
	else
		z = c;
	printf("%d", z);
	return 0;
}
#include<stdio.h>
int main()
{
	int x = 0;
	scanf("%d", &x);
	if (x < 1)
		printf("%d", x);
	else if (x >= 1 && x < 10)
		printf("%d", 2*x - 1);
	else if (x >= 10)
		printf("%d", 3*x - 11);
	return 0;
}
#include<stdio.h>
int main()
{
	int a, b, c, max, min, mid;
	scanf("%d %d %d", &a, &b, &c);
	max = ((a > b) ? a : b) > c ? ((a > b) ? a : b) : c;
	min = ((a > b) ? b : a) > c ? c : ((a > b) ? b : a);
	mid = a + b + c - max - min;
	printf("%d %d %d", min, mid, max);
	return 0;
}
#include<stdio.h>
int main() {
    int a;
    scanf("%d", &a);
    switch (a / 10) {
    case 10:
    case 9:
        putchar('A');
        break;
    case 8:
        putchar('B');
        break;
    case 7:
        putchar('C');
        break;
    case 6:
        putchar('D');
        break;
    default:
        putchar('E');
    }
    return 0;
}
#include<stdio.h>
int main()
{
	int a = 0;
	scanf("%d", &a);
	switch (a / 10)
	{
	case 10:
	case 9:
		printf("A");
		break;
	case 8:
		printf("B");
		break;
	case 7:
		printf("C");
		break;
	case 6:
		printf("D");
		break;
	default:		
		printf("E");
	}
	return 0;
}
#include<stdio.h>
#include<string.h>
int main()
{
	char arr[6];
	int i = 0;
	gets(arr);
	int num = strlen(arr);
	pirntf("%d\n", num);
	for (i = 0; i < num; i++)
	{
		printf("%c ", arr[i]);
	}
	printf("\n");
	for (i = num - 1; i >= 0; i--)
	{
		printf("%c", arr[i]);
	}
	return 0;
}
#include<stdio.h>
#include<string.h>
int main()
{
	char arr[25];
	gets(arr);
	int i = 0;
	int sum = 0;
	int num = strlen(arr);
	for (i = 0; i < num; i++)
	{
		sum += arr[i];
	}
	printf("%d", sum / 10);
	return 0;
}
#include <stdio.h>
#include <stdlib.h>
#define N 10
int main()
{
    int nums[N];
    int i;
    int and = 0;
    int temp = 0;
    for (i = 0; i < N; i++)
    {
        scanf("%d", &nums[i]);                           //循环输入10位数字
        and += nums[i];
    }
    and = and / N;
    for (i = 0; i < N; i++)
    {
        if (nums[i] > and)
        {
            temp++;
        }
    }
    printf("%d", temp);
}
#include<stdio.h>
#define N 10
int main()
{
	int arr[N];
	int i = 0;
	int sum = 0;
	int num = 0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
		sum += arr[i];
	}
	sum = sum / 10;
	for (i = 0; i < 10; i++)
	{
		if (arr[i] > sum)
		{
			num++;
		}
	}
	printf("%d", num);
	return 0;
}
#include<stdio.h>
#include<math.h>
int main()
{
	int a = 0;
	int i = 0;
	int num = 0;
	int sum = 0;
	scanf("%d", &a);//
	int temp=a;
	int ans = a;
	for (i = 0; i < 3; i++)
	{
		temp %= 10;//371,1
		num = pow(temp, 3);
		a /= 10;
		temp = a;
		sum += num;
	}
	while (temp) {
		num = pow(temp % 10, 3);
		temp /= 10;
		sum += num;
	}
	if (sum == ans)
		printf("1");
	else
		printf("0");
	return 0;
}