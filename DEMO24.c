#define _CRT_SECURE_NO_WARNINGS 1

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
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);
    printf("%.2f %.2f", a + b + c, (a + b + c) / 3);
    return 0;
}
#include<stdio.h>
int main()
{
    int a = 0;
    while (scanf("%d", &a) != EOF)
    {
        if (a % 2 == 0)
            printf("Even\n");
        else
            printf("Odd\n");
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int t;
    while (~scanf("%d", &t))
    {
        if (t > 0)
            printf("1\n");
        else if (t == 0)
            printf("0.5\n");
        else
            printf("0\n");
    }
}
#include<stdio.h>
int main()
{
    int t = 0;
    while (scanf("%d", &t) != EOF)
        if (t > 0)
            printf("1\n");
        else if (t == 0)
            printf("0.5\n");
        else
            printf("0\n");
    return 0;
}
#include<stdio.h>
int main()
{
    int weight = 0;
    int height = 0;
    float BMI = 0;
    while (scanf("%d %d", &weight, &height) != EOF)
    {
        BMI = weight / (height / 100.0 * height / 100.0);
        if (BMI < 18.5)
            printf("Underweight\n");
        else if (BMI >= 18.5 && BMI <= 23.9)
            printf("Normal\n");
        else if (BMI > 23.9 && BMI <= 27.9)
            printf("Overweight\n");
        else
            printf("Obese\n");
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int n = 0;
    int i = 0;
    while (scanf("%d", &n) != EOF)
    {
        for (i = 1; i <= n; i++)
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
    float a, b, c, d, e;
    scanf("%f %f %f %f %f", &a, &b, &c, &d, &e);
    printf("%.2f", (a + b + c + d + e) / 5);
    return 0;
}
#include<stdio.h>
int main()
{
    int n = 0;
    scanf("%d", &n);
    int a = 0;
    int b = 0;
    int i = 1;
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
            b++;
        else
            a++;
    }
    printf("%d %d", a, b);
    return 0;
}
#include<stdio.h>
int main()
{
	int n, a, b;
	scanf("%d", &n);
	if (n >= 1 && n <= 1000)
	{
		if (n % 2 == 0)
		{
			a = n / 2;
			b = n / 2;
			printf("%d %d", a, b);
		}
		else
		{
			a = n / 2 + 1;
			b = n / 2;
			printf("%d %d", a, b);
		}
	}
	return 0;
}
#include<stdio.h>
int main()
{
	int arr[10];
	int i = 0;
	for (i = 1; i <= 10; i++)
		scanf("%d", &arr[i]);
	for (i = 1; i <= 10; i++)
		printf("%d ", arr[i]);
	return 0;
}