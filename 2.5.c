#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i, j;
	int temp = 0;
	int s[10];
	for (i = 0; i < 10; i++)
		scanf("%d", &s[i]);
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < (9 - i); j++)
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
		printf("%d ", s[i]);
	}
	return 0;
}
#include <stdio.h>
int main()
{
    int a[11], i, j, k, t;
    for (i = 1; i <= 10; i++)              //����10������
        scanf("%d", &a[i]);
    for (i = 1; i <= 10; i++) {
        k = i;
        for (j = i + 1; j <= 10; j++)      //�ж���С��ֵ��������Ÿ�ֵ����ʼλ��
            if (a[k] > a[j])
                k = j;
        if (k != i) {                       //�����Сֵ�����ǳ�ʼλ��ֵ���򽻻�ֵ
            t = a[k];
            a[k] = a[i];
            a[i] = t;
        }
    }
    for (i = 1; i <= 10; i++)              //�������������
        printf("%d ", a[i]);
    printf("\n");
    return 0;
}
#include<stdio.h>
int main()
{
	int s[10];
	int i, j, k, temp;
	for (i = 0; i < 10; i++)
		scanf("%d", &s[i]);
	for (i = 0; i < 10; i++)
	{
		k = i;
		for (j = i + 1; j < 9; j++)
		{
			if (s[k] > s[j])
			{
				k = j;
			}
		}
		if (k != i)
		{
			temp = s[k];
			s[i] = s[k];
			s[k] = temp;
		}
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d", s[i]);
	}
	return 0;
}
#include <stdio.h>
#include <stdlib.h>

//��һ���Ѿ��ź�������顣������һ������Ҫ��ԭ���Ĺ��ɽ������������С�
int main()
{
    int a[100];
    int num; int i;
    printf("�������Ѿ�����õ�����!\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }
    printf("������Ҫ�������!\n");
    scanf("%d", &num);
    if (a[0] > a[1]) {     //����ǽ��� 
        for (int j = 0; j < 5; j++) {
            if (a[j] <= num) {
                int  temp1 = a[j];
                a[j] = num;
                for (int k = j + 1; k < 6; k++)
                {
                    int temp2 = a[k];
                    a[k] = temp1;
                    temp1 = temp2;
                }
                break;
            }
        }

    }
    else if (a[0] < a[1]) {  //  ��������� 
        for (int j = 0; j < 5; j++) {
            if (a[j] > num) {
                int  temp1 = a[j];
                a[j] = num;
                for (int k = j + 1; k < 6; k++)
                {
                    int temp2 = a[k];
                    a[k] = temp1;
                    temp1 = temp2;
                }
                break;     //����̴��� 
            }
        }
    }
    for (i = 0; i < 6; i++)
        printf("%6d", a[i]);
    return 0;
}
#include<stdio.h>
int main()
{
	int a[10];
	int i, j, k, num, temp1, temp2;
	scanf("%d", &num);
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &a[i]);
	}
	if (a[0] > a[1])//����
	{
		for (j = 0; j < 5; j++)
		{
			if (a[j] <= num)
			{
				temp1 = a[j];
				a[j] = num;
				for (k = j + 1; j < 6; j++)
				{
					temp2 = a[k];
					a[k] = temp1;
					temp1 = temp2;
				}
			}
		}
	}
	for (i = 0; i < 6; i++)
	{
		printf("%d", a[i]);
	}
	return 0;
}
#include<stdio.h>
int main()
{
	int s[10], num, i, j, k;
	int temp1, temp2;
	for (i = 0; i < 5; i++`
		scanf("%d", &s[i]);
	scanf("%d", &num);
	if (s[0] > s[1])//����
	{
		for (j = 0; j < 5; j++)
		{
			if (s[j] <= num)//���С�ڵ��ڲ���ֵ���Ͱ�s[j]����temp1��num����temp1
			{
				temp1 = s[j];
				s[j] = num;
				for (k = j + 1; k < 6; k++)//ð������Ѻ���˳�����
				{
					temp2 = s[k];
					s[k] = temp1;
					temp1 = temp2;
				}
			}
			break;
		}
	}
	else if (s[0] < s[1])//����
	{
		for (j = 0; j < 5; j++)
		{
			if (s[j] >= num)
			{
				temp1 = s[j];
				s[j] = num;
				for (k = j + 1; k < 6; k++)
				{
					temp2 = s[k];
					s[k] = temp1;
					temp1 = temp2;
				}
			}
			break;
		}
	}
	for (i = 0; i < 6; i++)
	{
		printf("%d", s[i]);
	}
	return 0;
}
#include<stdio.h>
#include<math.h>
#include<string.h>
int main() {
	int a[11];
	int x;
	printf("������һ�����ź�������飺"); //1 4 6 9 13 16 19 28 40 100
	for (int i = 0; i < 10; i++) {
		scanf_s("%d", &a[i]);
		printf("%d\t", a[i]);
	}
	printf("\n��������Ҫ���������");
	scanf_s("%d", &x);
	printf("����%d�����������Ϊ��", x);
	for (int i = 0; i < 11; i++) {
		if (x > a[i] && x < a[i + 1]) {
			for (int j = 10; j > i; j--)
				a[j + 1] = a[j];
			a[i + 1] = x;
		}
		printf("%d\t", a[i]);
	}
}
#include<stdio.h>
int main()
{
	int a[] = { 1, 2, 3, 5, 7, 8, 10, 2, 5, 20 };
	int i, j, max, b;
	for (i = 0; i < 10; i++)
	{
		max = 0;
		for (j = 0; j < (9 - i); j++)
		{
			if (a[max] < a[j])
				max = j;
			b = a[max];
			a[max] = a[9 - j];
			a[9 - j] = b;
		}
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}