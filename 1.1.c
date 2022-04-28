#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main()
{
	int num;
	int sum;
	int a = 0;
	scanf("%d", &a);
	int tmp = a;
	while (tmp)
	{
		num = pow(a % 10, 3);
		sum += num;
		 a /= 10;
	}
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
	int temp = a;
	while (temp) {
		num = pow(temp % 10, 3);
		temp /= 10;
		sum += num;
	}
	return 0;
}
#include<stdio.h>
#include<math.h>
int main()
{
	int a = 0;
	int num = 0;
	int sum = 0;
	scanf("%d", &a);
	int temp = a;
	while (temp) {
		num = pow(temp % 10, 3);
		temp /= 10;
		sum += num;
	}
	if (sum == a)
		printf("1");
	else
		printf("0");
	return 0;
}
#include<stdio.h>
#include<math.h>
int main()
{
	int a = 100;
	int i = 0;
	int num = 0;
	int sum = 0;
	int temp = a;
	for (i = 100;i <= 1000;i++)
	{
		temp++;
		while (temp)
		{
			num = pow(temp % 10, 3);
			sum += num;
			temp /= 10;
		}
		if (sum == a)
			printf("%d", a);
	}
	return 0;
}
#include<stdio.h>
#include<math.h>

int main()
{
	int a = 0;
	scanf("%d", &a);
	int num = 0;
	int sum = 0;
	int temp = a;
	while (temp)
	{
		num = pow(temp % 10, 3);
		sum += num;
		temp /= 10;
	}
	if (sum == a)
		printf("1");
	return 0;
}
#include<stdio.h>
#include<math.h>
int main()
{
	int a = 100;
	int i = 0;
	int num = 0;
	int sum = 0;
	int temp = a;
	for (i = 100; i < 1000; i++)
	{
		temp++;
		while (temp)
		{
			num = pow(temp % 10, 3);
			sum += num;
			temp /= 10;
		}
		if (sum == a)
		{
			printf("%d\n", a);
		}
	}
	return 0;
}
#include<stdio.h>
#include<math.h>
int main()
{
	int a, b, c, i;
	for (i = 100; i < 1000; i++)
	{
		a = i % 10;
		b = i / 10 % 10;
		c = i / 100;
		if (i == pow(a, 3) + pow(b, 3) + pow(c, 3))
		{
			printf("%d\n", i);
		}
	}
	return 0;
}
#include<stdio.h>
int main()
{
	double f = 0;
	scanf("%lf", &f);
	double c = (f - 32) * 5 / 9;
	printf("%.2lf", c);
	return 0;
#include<stdio.h>
#define N 100
int main()
{

    int n;
    int a[N];
    int sum = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            sum += a[i];
        }
    }
    printf("%d", sum);
    return 0;
}
#include<stdio.h>
int main()
{
	int i = 0;
	int n = 0;
	int sum = 0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		if (i % 2 == 0)
		{
			sum += i;
		}
	}
	printf("%d", sum);
	return 0;
}