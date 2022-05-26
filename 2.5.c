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
    for (i = 1; i <= 10; i++)              //输入10个整数
        scanf("%d", &a[i]);
    for (i = 1; i <= 10; i++) {
        k = i;
        for (j = i + 1; j <= 10; j++)      //判断最小的值，并把序号赋值给初始位置
            if (a[k] > a[j])
                k = j;
        if (k != i) {                       //如果最小值不是是初始位置值，则交换值
            t = a[k];
            a[k] = a[i];
            a[i] = t;
        }
    }
    for (i = 1; i <= 10; i++)              //输出排序后的数组
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

//有一个已经排好序的数组。现输入一个数，要求按原来的规律将它插入数组中。
int main()
{
    int a[100];
    int num; int i;
    printf("请输入已经排序好的数组!\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }
    printf("请输入要插入的数!\n");
    scanf("%d", &num);
    if (a[0] > a[1]) {     //如果是降序 
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
    else if (a[0] < a[1]) {  //  如果是升序 
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
                break;     //（编程错误） 
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
	if (a[0] > a[1])//升序
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
	if (s[0] > s[1])//升序
	{
		for (j = 0; j < 5; j++)
		{
			if (s[j] <= num)//如果小于等于插入值，就把s[j]放入temp1，num放入temp1
			{
				temp1 = s[j];
				s[j] = num;
				for (k = j + 1; k < 6; k++)//冒泡排序把后面顺序调整
				{
					temp2 = s[k];
					s[k] = temp1;
					temp1 = temp2;
				}
			}
			break;
		}
	}
	else if (s[0] < s[1])//降序
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
	printf("请输入一个已排好序的数组："); //1 4 6 9 13 16 19 28 40 100
	for (int i = 0; i < 10; i++) {
		scanf_s("%d", &a[i]);
		printf("%d\t", a[i]);
	}
	printf("\n请输入需要插入的数：");
	scanf_s("%d", &x);
	printf("插入%d后的排序数组为：", x);
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