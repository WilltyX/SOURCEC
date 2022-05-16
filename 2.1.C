#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
double Sqr( double x)
{
	return x * x;
}
double x[2], y[2];

int main()
{
	while (scanf("%lf %lf %lf %lf", &x[0], &x[1], &y[0], &y[1]) != EOF)
	{
		printf("%lf", sqrt(Sqr(x[0] - x[1]) + Sqr(y[0] - y[1])));
	}
	return 0;
}
#include<stdio.h>
int main()
{
	int n, ans; 
	while (scanf("%d", &n) != EOF)
	{
		ans = 1;
		while (n)
		{
			ans *= n;
			n--;
		}
		printf("%d", ans);
	}
	return 0;
}
#include<stdio.h>
int main()
{
	int n;
	int ans;
	while (scanf("%d", &n) != EOF)
	{
		for (int i = 0; i < n; i++)
		{
			ans *= n;
		}
		printf("%d", ans);
	}
	return 0;
}
#include<stdio.h>
int f(int n)
{
	if (n <= 1)
		return 1;
	else
	{
		return f(n - 1) * n;
	}
}
int main()
{
	int ans = 1;
	int n;
	while (scanf("%d", &n) != EOF)
		{
			printf("%d", f(n));
		}
	return 0;
}
#include<stdio.h>
int Isloweer(char x)
{
	return x >= 'a' && x <= 'z';
}
char Getloweer(char x)
{
	return x - 'a' + 'A';
}
int main()
{
	char c;
	while (scanf("%c", &c) != EOF)
	{
		if (Isloweer(c))
			printf("%c", Getloweer(c));
	}
	return 0;
}
#include <stdio.h>
int isLowwer(char c) {
    return 'a' <= c && c <= 'z';
}
char getUpper(char c) {
    return c - 'a' + 'A';
}
int main() {
    char c;
    while (scanf("%c", &c) != EOF) {
        if (isLowwer(c)) {      // (1)
            c = getUpper(c);   // (2)
        }
        printf("%c\n", c);
    }
    return 0;
}
#include<stdio.h>
int main()
{
	int i, j;
	int arr[4];
	int temp = 0;
	for (i = 0; i < 4; i++)
	{
		scanf("%d", &arr[4]);
	}
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < (3 - i); j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	for (i = 0; i < 4; i++)
	{
		printf("%d", arr[i]);
	}
	return 0;
}
#include<stdio.h>
int main()
{
	int i, j;
	int a[4];
	int temp = 0;
	for (i = 0; i < 4; i++)
	{
		scanf("%d", &a[4]);
	}
	for (i = 0; i < 4; i++)
	{
		for (j = 3; j <= 3; j--)
		{
			if (a[j] > a[j + 1])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	for (i = 0; i < 4; i++)
	{
		printf("%d", a[i]);
	}
	return 0;
}
#include<stdio.h>
int main()
{
	int i, n, avr;
	avr = 0;
	while (scanf("%d", &n) != EOF)
	{
		for (i = 0; i < n; i++)
		{
			avr += i;
		}
		avr /= n;
		printf("%d", avr);
	}
	return 0;
}