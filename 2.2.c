#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
	int s[4];
	int i, j;
	int temp = 0;
	for (i = 0; i < 4; i++)
	{
		scanf("%d", &s[i]);
	}
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < (3 - i); j++)
		{
			if (s[j] > s[j + 1])
			{
				temp = s[j];
				s[j] = s[j + 1];
				s[j + 1] = temp;
			}
		}
	}
	for (i = 0; i < 4; i++)
	{
		printf("%d ", s[i]);
	}
	return 0;
}

#include<stdio.h>
int main()
{
	int i, j;
	int s[4];
	for (i = 0; i < 4; i++)
	{
		scanf("%d", &s[i]);
	}
	int temp = 0;
	for (i = 1; i < 4; i++)
	{
		if (s[temp] < s[i])
		{
			temp = i;
		}
	}
	printf("%d", s[temp]);
	return 0;
}
#include<stdio.h>
int main()
{
	char c = 0;
	int alt = 0;
	int num = 0;
	int oth = 0;
	int blo = 0;
	int N = 0;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		c = getchar();
		if ((c > 'a' && c < 'z') || c > 'A' && c < 'A')
			alt++;
		else if (c > '1' && c < '9')
			num++;
		else if (c == ' ')
			blo++;
		else
			oth++;
	}
	printf("%d %d %d %d", alt, num, blo, oth);

	return 0;
}
#include<stdio.h>
#include<math.h>
int main()
{
	int a = 0;
	int num = 0;
	int sum = 0; 
	scanf("%d", &a);
	int temp = a;
	while (temp)
	{
		num = pow(temp % 10, 3);
		temp /= 10;
		sum += num;
	}
	printf("%d %d", a, sum);
	return 0;
}
#include<stdio.h>
int main()
{
	int s[10];
	int i = 0;
	int j = 0;
	int temp = 0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &s[i]);
	}
	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 8 - i; j++)
		{
			if (s[j] > s[j + 1])
			{
				temp = s[j];
				s[j] = s[j + 1];
				s[j + 1] = temp;
			}
		}
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d", s[i]);
	}
	return 0;
}