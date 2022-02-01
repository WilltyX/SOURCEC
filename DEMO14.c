#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int a = 0;
	scanf("%d", &a);
	if (a >= 0 && a <= 100)
	{
		switch (a / 10)
		{
		case 10:;
		case 9: printf("A"); break;
		case 8: printf("B"); break;
		case 7: printf("C"); break;
		case 6: printf("D"); break;
		default:printf("E"); break;
		}
	}
	else
	{
		printf("F");
	}
	return 0;
}
#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    if (n >= 90 && n <= 100) {
        printf("A\n");
    }
    else if (n >= 80 && n < 90) {
        printf("B\n");
    }
    else if (n >= 70 && n < 80) {
        printf("C\n");
    }
    else if (n >= 60 && n < 70) {
        printf("D\n");
    }
    else if (n >= 0 && n < 60) {
        printf("E\n");
    }
    else {
        printf("F\n");
    }

    return 0;
}
#include<stdio.h>

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    printf("%.1f", a * 0.2 + b * 0.1 + c * 0.2 + d * 0.5);
    return 0;
}
#include<stdio.h>

int main()
{
    int a = 0;
    int b = 0;
    scanf("%d", &a);
    for (b = 1; b <= a; b++)
    {
        printf("Happy new year!Good luck!\n");
    }
    return 0;
}
#include<stdio.h>

int main()
{
    int a = 0;
    int b = 0;
    scanf("%d", &a);
    for (b = 1; b < a; b++)
    {
        printf("Happy new year!Good luck!\n");
    }
    return 0;
}
#include <stdio.h>

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;

    scanf("%d%d%d", &a, &b, &c);
    printf("%d", ((a > b) ? a : b) > c ? ((a > b) ? a : b) : c);

    return 0;
}
#include<stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d/%d/%d", a, b, c);
    return 0;
}
#include<stdio.h>
struct Tday
{
    int year;
    int mouth;
    int day;
};
int main()
{
    struct Tday a1={0};
        scanf("%d",&(a1.year));
        scanf("%d",&(a1.mouth));
        scanf("%d",&(a1.day));
    printf("%d/%d/%d",a1.day,a1.mouth,a1.year);
    return 0;
}
#include<stdio.h>
int main() {
    char m[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%c ", &m[i][j]);
        }
    }
    if (m[0][0] == m[1][1] && m[0][0] == m[2][2]) {
        if (m[0][0] == 'K') goto K;
        else if (m[0][0] == 'B') goto B;
    }
    if (m[0][2] == m[1][1] && m[0][2] == m[2][0]) {
        if (m[0][2] == 'K')goto K;
        else if (m[0][2] == 'B')goto B;
    }
    for (int i = 0; i < 3; i++) {
        if (m[i][0] == m[i][1] && m[i][0] == m[i][2]) {
            if (m[i][0] == 'K')goto K;
            else if (m[i][0] == 'B')goto B;
        }
        if (m[0][i] == m[1][i] && m[0][i] == m[2][i]) {
            if (m[0][i] == 'K')goto K;
            else if (m[0][i] == 'B')goto B;
        }
    }
    printf("No winner!\n");
    return 0;
K:
    printf("KiKi wins!\n");
    return 0;
B:
    printf("BoBo wins!\n");
    return 0;
}
#include<stdio.h>

int main()
{
    printf(" The size of short is 2 bytes.\nThe size of int is 4 bytes.\nThe size of long is 8 bytes.\nThe size of long long is 8 bytes.");
    return 0;
}
#include<stdio.h>

int main()
{
	printf("Practice makes perfect!\n");
	return 0;
}
#include<stdio.h>

int main()
{
	printf("v   v");
	printf(" v v");
	printf("  v");
	return 0;
}
#include<stdio.h>
int main()
{
	printf("     **     \n");
	printf("     **     \n");
	printf("************\n");
	printf("************\n");
	printf("    *  *    \n");
	printf("    *  *    \n");
	return 0;
}
#include<stdio.h>
int main()
{
	int a = 40;
	int c = 212;
	printf("%d", (-8 + 22) * a - 10 + c / 2);
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

	int n = 0;
	scanf("%d", &n);
	for (int i = 0; i < 4; i++)
	{
		printf("%d", n % 10);
		n /= 10;
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
    return 0;
}
#include<stdio.h>

int main()
{
	printf("I lose my cellphone!\n");
	return 0;
}