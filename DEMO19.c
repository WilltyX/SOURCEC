#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    float a = 0;
    scanf("%f", &a);
    int b= a /1;
    printf("%d", b % 10);
    return 0;
}
#include<stdio.h>
int main()
{
    float a = 0;
    scanf("%f",&a);
    int b = (int)a;
    b = b-(b/10)*10;
    printf("%d\n",b);
    return 0;
}
#include<stdio.h>
int main()
{
	int n, m;
	scanf("%d", &n, &m);
	printf("%d", m % n);
	return 0;
}
#include<stdio.h>
int main()
{
    float a, b;
    scanf("%f %f", &a, &b);
    b = b / 100;
    printf("%.2f", a / (b * b));
    return 0;
}