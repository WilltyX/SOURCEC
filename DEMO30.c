#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

int main()
{
	char arr[10] = { 0 };
	printf("What should you do when you face diffculties?\n ");
	printf("face or escape?\n");
	scanf("%s", arr);//输入选择
	if (strcmp(arr, "face") == 0)
	{
		int i = 0;
		int n = 1;
		int ret = 1;
		int sum = 0;
		scanf_s("%d", &n);
		for (n = 1; n <= 10; n++)
		{
			ret = 1;
			for (i = 1; i <= n; i++)
			{
				ret *= i;
			}
			sum += ret;
		}
		printf("%d", sum);
		return 0;
	}
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

	void menu()
	{
		printf("1.menu\n");
		printf("0.drop out\n");
	}

	void game()
	{
		int ret = rand() % 100 + 1;
		int guess = 0;
		while (1)
		{
			printf("input:\n");
			scanf("%d", &guess);
			if (ret > guess)
				printf("猜大了\n");
			else if (ret < guess)
				printf("猜小了\n");
			else
				printf("猜对了：%d", guess);
			break;
		}
	}

	int main()
	{
		int input = 0;
		srand((unsigned int)time(NULL));
		do
		{
			menu();
			printf("Please choose:\n");
			scanf("%d", &input);
			switch (input)
			{
			case 1:
				game();
				break;
			case 0:
				printf("Have droped out\n");
				break;
			default:
				printf("fault\n");
				break;
			}
		} while (input);
		return 0;

	}
#include<stdio.h>
#include<string.h>
	int main()
	{
		printf("%d\n", strlen("c:\test\121"));
		return 0;
	}
#include<stdio.h>
#include<string.h>

	int main()
	{
		char arr[] = { 'b', 'i', 't' };
		printf("%d\n", strlen(arr));
		return 0;
	}
#include<stdio.h>

	int main()
	{
		int a = 0;
		int b = 0;
		scanf("%d %d", &a, &b);
		int max = a > b ? a : b;
		printf("%d", max);
		return 0;
	}
#include<stdio.h>

	int main()
	{
		printf("Name    Age    Gender\n");
		printf("---------------------\n");
		printf("Jack    18     man\n");
		return 0;
	}
#include<stdio.h>

	int main()
	{
		int a = 0;
		int b = 0;
		scanf("%d %d", &a, &b);
		printf("%d %d", a / b, a % b);
		return 0;
	}
#include<stdio.h>
	int main()
	{
		int a = 40, c = 212;
		printf("%d", (-8 + 22) * a - 10 + c / 2);
		return 0;
	}