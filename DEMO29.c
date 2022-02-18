#define _CRT_SECURE_NO_WARNINGS 1
int main()
{
    char a;
    int i, j;
    scanf("%c", &a);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (i == 0 || i == 4)
                if (j == 2)
                    printf("%c", a);
                else
                    printf(" ");
            if (i == 1 || i == 3)
                if (j == 0 || j == 4)
                    printf(" ");
                else
                    printf("%c", a);
            if (i == 2)
                printf("%c", a);
            /*if(i==3)
                if(j==0 || j==4)
                    printf(" ");
                else
                    printf("%c",a);
            if(i==4)
                if(j==2)
                    printf("%c",a);
            else
                printf(" ");*/
        }
        printf("\n");
    }
}
#include<stdio.h>
int main()
{
    char ch;
    scanf("%c", &ch);
    printf("%d", ch);
    return 0;
}
#include<stdio.h>
int main()
{
    float a = 0;
    scanf("%.2f", &a);
    printf("%d", a);
    return 0;
}
#include<stdio.h>
int main()
{
	float i = 0;
	scanf("%f", &i);
	printf("%.0f", i);
	return 0;
}
#include<stdio.h>
int main()
{
	printf("%15d", 0xABCDEF);
	return 0;
}
#include<stdio.h>
int main()
{
	int a = 1234;
	printf("0%o 0X%X\n", 1234, 1234);
	printf("%#o %#X", 1234, 1234);
	return 0;
}
#include<stdio.h>
int main()
{
    char a;
    int b;
    float c;
    scanf("%c", &a);
    scanf("%d", &b);
    scanf("%f", &c);
    printf("%c %d %.6f", a, b, c);
    return 0;
}
#include<stdio.h>
int main()
{
	float a = 0;
	scanf("%f", &a);
	printf("%d", (int)a % 10);
	return 0;
}
#include<stdio.h>
int main()
{
    int x = 0;
    scanf("%d", &x);
    printf("%d", x * 100);
    return 0;
}
#include<stdio.h>
int main()
{
    int a = 0;
    scanf("%d", &a);
    printf("%d", a % 10);
    return 0;
}
#include<stdio.h>
int main()
{
    int a = 0;
    scanf("%d", &a);
    int b = a / 10;
    printf("%d", b % 10);
    return 0;
}
