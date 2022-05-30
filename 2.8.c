#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a[10];
	int i, j, t, max;
	for (i = 0; i < 10; i++)
		scanf("%d", &a[i]);
	for (j = 0; j < 10; j++)
	{
		max = 0;
		for (i = 0; i < 10 - j; i++)
		{
			if (a[max] < a[i])
				max = i;
			t = a[max];
			a[max] = a[9 - j];
			a[9 - j] = t;
		}
	}
	for (i = 0; i < 10; i++)
		printf("%d ", a[i]);
	return 0;
}
#include<stdio.h>
int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	int max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
	printf("%d", max);
	return 0;
}
#include<stdio.h>
int main()
{
    int a, b;
    while (~scanf("%d%d", &a, &b))
        printf("%d\n", a + b);
    return 0;
}
#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int m = n;
	int count = 0;
	while (n)
	{
		n /= 10;
		count += 1;
	}
	printf("%d", count);
	printf("\n");

	int index = 1;
	for (int i = 0; i < 4; i++)
	{
		index *= 10;
	}
	n = m;
	while (n)
	{
		printf("%d ", n / index);
		n = n % index;
		index = index / 10;
	}
	printf("\n");
	n = m;
	while (n)
	{
		printf("%d", n % 10);
		n = n / 10;
	}
	printf("\n");

	return 0;
}
#include<stdio.h>
int main()
{
    double h, r;
    int count = 0;
    scanf("%lf %lf", &h, &r);
    double val = 10000;
    while (val > 0)
    {
        val -= 3.14 * h * r * r;
        count++;
    }
    printf("%d", count);
    return 0;
}

#include<stdio.h>
int main()
{
	int a1, a2, a3;
	scanf("%d %d", &a1, &a2);
	int d = a2 - a1;
	printf("%d", a2 + d);
	return 0;
}
#include<stdio.h>
int main()
{
	int a1, a2;
	scanf("%d %d", &a1, &a2);
	int n = 0;
	scanf("%d", &n);
	int d = a2 - a1;
	int num = a1 + a2;
	for (int i = 2; i < n; i++)
	{
		num += d;
	}
	printf("%d", num);
	return 0;
}
#include<stdio.h>
#include<math.h>
int main()
{
	int r = 0;
	scanf("%d", &r);
	float v = 4.0 / 3 * 3.14 * r * r * r;
	printf("%f", v);
	return 0;
}