#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int a[10];
//	int i, j, k, num;
//	int temp1 = 0;
//	int temp2 = 0;
//	scanf("%d", &n);
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	if (a[0] > a[1])
//	{
//		for (i = 0; i < 5; i++)
//		{
//			if (a[i] >= num)
//			{
//				temp1 = a[i];
//				a[i] = num;
//				for (j = i + 1; j < 6; j++)
//				{
//					temp2 = a[j];
//					a[j] = temp1;
//					temp1 = temp2;
//				}
//			}
//			break;
//		}
//	}
//	if (a[0] < a[1])
//	{
//		for (i = 0; i < 5; i++)
//		{
//			if (a[i] <= num)
//			{
//				temp1 = a[i];
//				a[i] = num;
//				for (j = i + 1; j < 6; j++)
//				{
//					temp2 = a[j];
//					a[j] = temp1;
//					temp1 = temp2;
//				}
//			}
//			break;
//		}
//	}
//	for (i = 0; i < 6; i++)
//	{
//		printf("%4d", a[i]);
//	}
//	return 0;
//}
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

//#include<stdio.h>
//int main()
//{
//	char a[11];
//	int i, j;
//	char temp = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%1c", &a[i]);
//	}
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < (10 - i) && (a[i] != '\0'); j++)
//		{
//			if (a[j] > a[j + 1])
//			{
//				temp = a[j + 1];
//				a[j + 1] = a[j];
//				a[j] = temp;
//			}
//		}
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%c", a[i]);
//	}
//	return 0;
//}