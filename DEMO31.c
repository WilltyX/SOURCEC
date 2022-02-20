#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a, b, c;
	scanf("%d %d", &a, &b);
	c = a + b;
	if (c != 0)
		printf("%d", c);
	else
		printf("7");
	return 0;
}
#include<stdio.h>
int main()
{
	int seconds, points, hour;
	scanf("%d", &seconds);
	hour = seconds / 3600;
	points = seconds % 3600 / 60;
	seconds = seconds % 3600 % 60;
	printf("%d %d %d", hour, points, seconds);
}
#include <stdio.h>

int main()
{
	int n = 0;
	while (scanf("%d", &n) != EOF)
	{
		printf("%d\n", 1 << n);
	}
	return 0;
}
#include <stdio.h>

int main()
{
	long long n = 0;
	scanf("%d", &n);
	printf("%lld", n * 31560000);
	return 0;
}
#include<stdio.h>
int main() {
	double a = 0, b = 0, opt;
	scanf("%lf %lf", &a, &b);
	opt = 1 / (1 / a + 1 / b);
	printf("%lf", opt);

	return 0;
}