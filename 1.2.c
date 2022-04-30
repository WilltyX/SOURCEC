#define _CRT_SECURE_NO_WARNINGS 1
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
#include<stdio.h>
int main()
{
	int i = 0;
	int n = 0;
	scanf("%d", &n);
	int sum = 2;
	for (i = 1; i < n; i++)
	{
		if (n == 1)
			break;
		sum += 3;
	}
	printf("%d", sum);
	return 0;
}
#include<stdio.h>
int main()
{
	int n = 0;
	int sum = 0;
	int i = 0;
	int a1 = 2;
	scanf("%d", &n);
	for (i = 1; i < n; i++)
	{
		a1 += 3;
		sum += a1;
	}
	printf("%d", sum + 2);
	return 0;
}
#include<stdio.h>
#include<math.h>
int main()
2{
	int a, b, c, i;
	int sum1 = 0;
	int sum2 = 0;
	int num2 = 0;
	int sum3 = 0;
	scanf("%d", &a);
	scanf("%d %d %d", &a, &b, &c);
	for (i = 1; i <= a; i++)
	{
		sum1 = sum1 + i;
	}
	for (i = 1; i <= b; i++)
	{
		num2 = pow(i, 2);
		sum2 += num2;
	}
	for (i = 1; i <= c; i++)
	{
		i = 1 / i;
		sum3 += i;
	}
	printf("%.2f", sum1 + sum2 + sum3);
	printf("%d", a);
	return 0;
}
#include<stdio.h>
int main()
{
	int x = 0;
	scanf("%d", &x);
	if (x < 1)
		printf("%d", x);
	else if (x >= 10)
		printf("%d", 3 * x - 11);
	else
		printf("%d", 2 * x - 1);
	return 0;
}
#include<stdio.h>
int main()
{
	int x = 0;
	scanf("%d", &x);
	switch (x / 10)
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
int main()
{
	int a = -1;
	int b = 2; 
	int c = 3;
	int s;
	int w = 0;
	int t = 6;
	if (c > 0)
		s = a + b;
	if (a <= 0)
	{
		if (b > 0)
			if (c <= 0)
				w = a - b;
	}
	else if (c < 0)
		w = a - b;
	else
		t = c;
	printf("%d,%d,%d", s, w, t);
	return 0;
}
#include<stdio.h>
int main()
{
	int x = 0;
	scanf("%d", &x);
	if (x % 4 == 0)
		printf("true");
	else
		printf("false");
	return 0;
}
#include<stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	int f[31];
	f[0] = 0;
	f[1] = 1;
	int i = 0;
	for (i = 2; i <= n; i++)
	{
		f[i] = f[i - 1] + f[i - 2];
	}
	printf("%d", f[n]);
	return 0;
}