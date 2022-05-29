#define _CRT_SECURE_NO_WARNINGS 1
void Paixu(char a[])
{
	int i, j;
	char temp = 0;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < (10 - i) && (a[i] != '\0'); j++)
		{
			if (a[j] > a[j + 1])
			{
				temp = a[j + 1];
				a[j + 1] = a[j];
				a[j] = temp;
			}
		}
	}
}

#include<stdio.h>
int main()
{
	void Paixu(char a[]);
	char a[11];
	for (int i = 0; i < 10; i++)
	{
		scanf("%c", &a[i]);
	}
	Paixu(a);
	for (int i = 0; i < 10; i++)
	{
		printf("%c", a[i]);
	}
	return 0;
}
#include<stdio.h>
int main()
{
	char a[11];
	int i, j;
	char temp = 0;
	for (i = 0; i < 10; i++)
	{
		scanf("%c", &a[i]);
	}
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < (10 - i) && (a[i] != '\0'); j++)
		{
			if (a[j] > a[j + 1])
			{
				temp = a[j + 1];
				a[j + 1] = a[j];
				a[j] = temp;
			}
		}
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%c", a[i]);
	}
	return 0;
}
#include<stdio.h>
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d", a + b);
	return 0;
}
#include<stdio.h>
int main()
{
	int a, b;
	while (scanf("%d %d", &a, &b) == 2)
	{
		printf("%d", a + b);
	}
	return 0;
}
#include<stdio.h>
int main()
{
	int a, b;
	while (~scanf("%d %d", &a, &b))
	{
		printf("%d", a + b);
	}
	return 0;
}
#include<stdio.h>
int main()
{
	int a, b;
	while (scanf("%d %d", &a, &b) != 0)
	{
		printf("%d", a + b);
	}
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
	float f;
	scanf("%f", &f);
	printf("c=%.2f", 5 * (f - 32) / 9);
	return 0;
}
#include<stdio.h>
int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	int max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
	printf("%d", max);
	return 0;
}
#include<stdio.h>
int main()
{
	int x;
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
	int t = 0;
	scanf("%d", &t);
	switch (t / 10)
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
	int index = 1;
	for (int i = 0; i < 4; i++)
	{
		index *= 10;
	}
	n = m;
	while (n)
	{
		printf("%d", n / index);
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
	int n, i;
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
	n = m;
	int index = 1;
	for (i = 0; i < count; i++)
	{
		index *= 10;
	}
	while (n)
	{
		printf("%d ", n / index);
		n %= index;
		index /= 10;
	}
	printf("\n");
	n = m;
	while (n)
	{
		printf("%d", n % 10);
		n /= 10;
	}
	printf("\n");
	return 0;
}
