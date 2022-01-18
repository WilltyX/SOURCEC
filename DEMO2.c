#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	//	//n的阶乘
	int i = 0;
	int n = 0;
	int ret = 1;
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
	{
		ret *= i;
	}
	printf("%d", ret);
	//变形
	int i = 0;
	int n = 1;
	int ret = 1;
	int sum = 0;
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
	/ return 0;
}
#include<stdio.h>

int main()
{
	int i = 1;
	int n = 0;
	int ret = 1;
	scanf_s("%d", &n);
	while (i <= n)
	{
		ret *= i;
		i++;
	}
	printf("%d", ret);
	return 0;
}
#include<stdio.h>

int main()
{
	/ int i = 0;
	int n = 0;
	for (i = 0; i <= 4; i++)
	{
		printf("%d", i);
	}
	return 0;
}
#include<stdio.h>
int main()
{
	int a = 0;
	int n = 0;
	int sum = 1;
	scanf_s("%d", &n);
	for (a = 1; a <= n; a++)
	{
		sum *= a;
	}
	printf("%d", sum);
	return 0;
}
#include<stdio.h>
int main()
{
	int i = 0;
	int n = 0;
	int ret = 1;
	int sum = 0;
	for (n = 1; n <= 10; n++)
	{
		for (i = 1; i <= n; i++)
			/ {
			ret *= i;
		}
		sum += ret;
	}
	printf("%d", sum);
}
/ #include<stdio.h>
int main()
{
	int i = 0;
	int n = 0;
	int ret = 1;
	int sum = 0;
	for (n = 1; n <= 3; n++)
	{
		ret *= n;
		sum += ret;
	}
	printf("%d", sum);
	return 0;
}
#include<stdio.h>

int main()
/ {
	/ int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	/ int az = sizeof(arr) / sizeof(arr[0]);//数组的元素个数
	/ int k = 7;//要查找的数字
	/ int left = 0;
	/ int right = sz - 1;
	/ int mid = (right + left) / 2;
	/ if (arr[mid])
		return 0;
}
#include<stdio.h>
int main()
/ {
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int az = sizeof(arr) / sizeof(arr[0]);
	/ int left = 0;
	/ int right = az - 1;
	/ while (left <= right)
		/ {
		int mid = (left + right) / 2;
		/ if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			/ right = mid - 1;
			/
		}
		/ else
		{
			printf("找到下标：%d", mid);
			/ break;
		}
	}
	if (left > right)
		/ {
		printf("找不到");
	}
	/ return 0;
	/ }
/ #include<stdio.h>
/ #include<string.h>
/ #include<windows.h>
/ #include<stdlib.h>
int main()
{
	char arr1[] = "welcome to China!!!";
	char arr2[] = "###################";
	int left = 0;
	/ int right = strlen(arr1) - 1;

	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(1000);//睡眠一秒
		system("cla");//请屏幕
		left++;
		right--;
	}
	printf("%s\n", arr2);
	return 0;
}
/ #include<stdio.h>
#include<string.h>
/ int main()
{
	int i = 0;
	/ char password[20] = { 0 };//123456
	/ for (i = 0; i < 3; i++)
		/ {
		/ printf("请输入密码")；
			/ scanf_s("%s", password);
		/ if (strcmp(password, "123456") == 0)
			/ {
			/ printf("登陆成功");
			/ break;
			/ }
		/ else
		{
			/ printf("密码错误");
			/
		}
		/ }
	////	//三次全错
	/ if (i == 3)
	{
		printf("三次密码均错误，退出程序")；
			/
	}
}
/ #include<stdio.h>
/ #include<string.h>
/
/int main()
/ {
	int i = 0;
	/ char password[20] = { 0 };
	/ for (i = 0; i < 3; i++)
	{
		/ printf("请输入密码：");
		/ scanf("%s", password);
		/ if (strcmp(password, "123456") == 0)//两个字符串比较不能使用==，使用字符串函数strcmp（。）
		{
			/ printf("输入成功\n");
			break;
		}
		/ else
			/ {
			/ printf("输入失败，请重新输入");
			/ }
		if (i == 3)
		{
			printf("三次输入均失败，推出程序");
		}
		return 0;
	}
}

