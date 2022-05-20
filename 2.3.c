#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#define N 4
//int main()
//{
//	int i, j;
//	int s[N];
//	int temp = 0;
//	for (int i = 0; i < N; i++)
//	{
//		scanf("%d", &s[i]);
//	}
//	for (int i = 0; i < 4; i++)
//	{
//		for (int j = 0; j < (3 - i); j++)
//		{
//			if (s[j] > s[j + 1])
//			{
//				temp = s[j];
//				s[j] = s[j + 1];
//				s[j + 1] = temp;
//			}
//		}
//	}
//	for (int i = 0; i < 4; i++)
//	{
//		printf("%d ", s[i]);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 1;//定义变量
//	int sum = 0;//定义变量
//	while (sum <= 2000)
//	{
//		sum = sum + i;//可以简写成sum += i;
//		i = i * 2;//可以简写成i *= 2；
//		if (sum > 2000)//本来加上最后一个数就超过了2000 所以我们要判断 如果超过了就怎么样
//			//if(判断语句)
//			// {
//			//	执行语句；
//			//}
//		{
//			i = i / 2; //（变成上一个数）
//			sum = sum - i;//减去它
//			break;//跳出循环
//		}
//	}
//	printf("%d", sum);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int sum = 0;
//	for (int i = 1; i <= 2000; i = i * 2)
//	{
//		sum += i;
//		if (sum >= 2000)
//		{
//			break;
//		}
//	}
//	sum -= i;
//
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 1; sum <= 2000; i *= 2)
//	{
//		sum += i;
//		if (sum >= 2000)
//			break;
//	}
//	sum -= i;
//	printf("%d", sum);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	int sum = 0;
//	do
//	{
//		sum += i;
//		i *= 2;
//	} while (sum <= 2000);
//	i /= 2;
//	sum -= i;
//	printf("%d", sum);
//	return 0;
//}
#include<stdio.h>
int main()
{
	int i = 0, j = 0, k = 0, a = 0;
	char str1[20], str2[20];
	gets(str1);
	gets(str2);
	while (str1[i] != '\0')
	{
		i++;
		a++;

	}
	while (str2[j] != '\0')
	{
		j++;
	}
	for (i = 0; i < j + 1; i++)
	{
		str1[i + a] = str2[i];
	}
	puts(str1);
	return 0;
}