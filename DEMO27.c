#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    float i = 0;
    scanf("%f", &i);
    printf("%.3f", i);
    return 0;
}
#include<stdio.h>
int main()
{
    char i = 0;
    scanf("%c", &i);
    printf("%c", i);
    return 0;
}
#include<stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d", b);
    return 0;
}
#include <stdio.h>
int main()
{
    char n;
    scanf("%c", &n);
    printf("%c%c%c\n%c%c%c\n%c%c%c", n, n, n, n, n, n, n, n, n);
    return 0;
}
#include<stdio.h>
int main()
{
	char i = 0;
	int n, m;
	scanf("%c", &i);
	for (n = 0; n < 3; n++)
	{
		for (m = 0; m < 3; m++)
		{
			printf("%c", i);
		}
		printf("\n");
	}
	return 0;
}
#include<stdio.h>
int main()
{
    char a;
    scanf("%c", &a);
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 2 - i; j > 0; j--)
        {
            printf(" ");
        }
        for (j = 0; j < 2 * i + 1; j++)
        {
            printf("%c", a);
        }
        printf("\n");
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf(" ");
        }
        for (j = 0; j < 2 * (2 - i) - 1; j++)
        {
            printf("%c", a);
        }
        printf("\n");
    }
}
#include<stdio.h>
int main()
{
	char a = 0;
	scanf("%c", &a);
	int i, j;
	for (i = 0; i < 3; i++)
	{
		for (j = 2 - i; j > 0; j == )
		{
			printf(" ");
		}
		for (j = 0; j < 2 * i + 1; j++)
		{
			printf("%c", &a);
		}
		printf("\n");
	}
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2 * (2 - i) - 1; j++)
		{
			printf("%c", a);
		}
		printf("\n");
	}
	return 0;
}
#include<stdio.h>
int main()
{
	char a;
	int i, j;
	scanf("%c", &a);
	for (i = 1; i <= 3; i++)
	return 0;
}