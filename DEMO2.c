#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	//	//n�Ľ׳�
	int i = 0;
	int n = 0;
	int ret = 1;
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
	{
		ret *= i;
	}
	printf("%d", ret);
	//����
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
	/ int az = sizeof(arr) / sizeof(arr[0]);//�����Ԫ�ظ���
	/ int k = 7;//Ҫ���ҵ�����
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
			printf("�ҵ��±꣺%d", mid);
			/ break;
		}
	}
	if (left > right)
		/ {
		printf("�Ҳ���");
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
		Sleep(1000);//˯��һ��
		system("cla");//����Ļ
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
		/ printf("����������")��
			/ scanf_s("%s", password);
		/ if (strcmp(password, "123456") == 0)
			/ {
			/ printf("��½�ɹ�");
			/ break;
			/ }
		/ else
		{
			/ printf("�������");
			/
		}
		/ }
	////	//����ȫ��
	/ if (i == 3)
	{
		printf("��������������˳�����")��
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
		/ printf("���������룺");
		/ scanf("%s", password);
		/ if (strcmp(password, "123456") == 0)//�����ַ����Ƚϲ���ʹ��==��ʹ���ַ�������strcmp������
		{
			/ printf("����ɹ�\n");
			break;
		}
		/ else
			/ {
			/ printf("����ʧ�ܣ�����������");
			/ }
		if (i == 3)
		{
			printf("���������ʧ�ܣ��Ƴ�����");
		}
		return 0;
	}
}

