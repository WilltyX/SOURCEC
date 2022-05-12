#define _CRT_SECURE_NO_WARNINGS 1
//#include<math.h>
//
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	double b = 0;
//	scanf("%d", &a);
//	if (a >= 0 && a <= 1000)
//	{
//		b = sqrt(a);
//		printf("%2.0f", b);
//	}
//	else
//		printf("´íÎó");
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int arr[4];
//	int i, j;
//	int temp = 0;
//	for(i = 0; i < 4; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < (3 - 1); j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a[4];
//	int i, j;
//	int temp = 0;
//	for (i = 0; i < 4; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < (3 - i); j++)
//		{
//			if (a[j] > a[j + 1])
//			{
//				temp = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = temp;
//			}
//		}
//	}
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char c = 0;
//	int al, bl, nu, ot;
//	al = 0; 
//	bl = 0;
//	nu = 0;
//	ot = 0;
//	while ((c = getchar() != '\n')
//	{
//
//	}
//	return 0;
//}
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
		sum += sum;
	}
	if (sum == a)
	{
		printf("1");
	}
	else
		printf("0");
	return 0;
}