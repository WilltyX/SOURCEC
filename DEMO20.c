#define _CRT_SECURE_NO_WARNINGS 1
int x = 5, y = 7;
void swap()
{
	int z;
	z = x;
	x = y;
	y = z;
}
int main()
{
	int x = 3, y = 8;
	swap();
	printf("%d,%d\n",x, y);
	return 0;
}
#include<stdio.h>
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d", a / b);
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void menu()
{
	printf("*********************\n");
	printf("******1.��ʼ��Ϸ*****\n");
	printf("******2.�˳���Ϸ*****\n");
}

void game()
{

	int ret = rand() % 100 + 1;
	int guess = 0;
	while (1)
	{
		printf("���������֣�\n");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("��С��\n");
		}
		else if (guess < ret)
		{
			printf("�´���\n");
		}
		else
		{
			printf("�¶��ˣ�����%d\n", guess);
			break;
		}

	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�ɹ��˳�\n");
			break;
		default:
			printf("����������������\n");
			break;
		}
	} while (input);
	return 0;
}