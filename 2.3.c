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
//	int i = 1;//�������
//	int sum = 0;//�������
//	while (sum <= 2000)
//	{
//		sum = sum + i;//���Լ�д��sum += i;
//		i = i * 2;//���Լ�д��i *= 2��
//		if (sum > 2000)//�����������һ�����ͳ�����2000 ��������Ҫ�ж� ��������˾���ô��
//			//if(�ж����)
//			// {
//			//	ִ����䣻
//			//}
//		{
//			i = i / 2; //�������һ������
//			sum = sum - i;//��ȥ��
//			break;//����ѭ��
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