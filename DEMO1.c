#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int n = 0;
	while (scanf("%d", &n) != EOF)
	{
		if (n >= 60)
			printf("Pass\n");
		else
			printf("Fail\n");
	}
	return 0;
}
#include<stdio.h>

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	int max = a > b ? a : b;
	printf("%d", max);
	return 0;
}
#include<stdio.h>
main()
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
	int a, b;
	scanf("%d %d", &a, &b);
	float BMI = b / a;
	if (BMI < 18.5)
		printf("Underweight\n");
	else if (BMI > 18.5 && BMI <= 23.9)
		printf("Normal\n");
	else if (BMI > 23.9 && BMI <= 27.9)
		printf("Overweight\n");
	else if (BMI > 27.9)
		printf("Obese\n");
	return 0;
}
#include <stdio.h>

int main() {
    int weight = 0, height = 0;
    float BMI = 0.0;
    //循环读入体重和身高
    while (scanf("%d %d", &weight, &height) != EOF) {
        //根据公式计算BMI
        BMI = weight / (height / 100.0 * height / 100.0);
        //使用if else嵌套判断BMI所在的区间，输出即可
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
	int a, b;
	while (scanf("%d", &b) != EOF)
	{
		for (a = 1; a <= b; a++)
			printf("*");
		printf("\n");
	}
	return 0;
}
#include<stdio.h>

int main()
{
    float a, b, c, d, e;
    scanf("%f %f %f %f %f", &a, &b, &c, &d, &e);
    printf("%.2f", (a + b + c + d + e) / 5.0);
    return 0;
}
#include<stdio.h>

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    printf("%d", (a + b - c) * d);
    return 0;
}
#include<stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    if (a % 5 == 0)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
#include<stdio.h>

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    scanf("%d", &a);
    for (d = 1; d <= a; d++)
    {
        if (d % 2 == 0)
            b++;
        else
            c++;
    }
    printf("%d %d", b, c);
    return 0;
}
#include<stdio.h>
int main()
{
    int n, i;
    double min, max, aver, sum = 0, a[100];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%lf", &a[i]);
    min = max = a[0];
    for (i = 0; i < n; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
        if (min > a[i])
        {
            min = a[i];
        }
        sum += a[i];
    }
    aver = sum / n;
    printf("%.2lf %.2lf %.2lf", max, min, aver);
}
#include<stdio.h>

int main()
{
    int i;
    int max = 0;
    int x;
    for (i = 0; i < 4; i++)
    {
        scanf("%d", &x);
        if (max < x)
        {
            max = x;
        }
    }
    printf("%d", max);
    return 0;
}