#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 90");
	while (1)
	{
		printf("ע����ĵ��Խ�����60s��ػ���������룺����ϲ���㡣������ȡ���ػ���\n");
		scanf("%s", input);
		if (strcmp(input, "��ϲ����") == 0)
		{
			printf("��ע��ϸ��\n");
		}
		if (strcmp(input, "��ϲ���㡣") == 0)
		{
			Sleep(2000);
			printf("��ϲ���Ѿ�ֹͣ�ػ�\n");
			break;
		}
		if ((strcmp(input, "��ϲ����") != 0) || (strcmp(input, "��ϲ���㡣") != 0))
		{
			printf("�����������������\n");
		}
	}
	Sleep(3000);
	printf("��Ҫ�ż�������û����\n");
	char in[20] = { 0 };
	int i = 0;
	Sleep(3000);
	printf("��ϲ����ȡ��20s֮��Ĺػ�ʱ�䣬�����ȡ�������룺����ϲ������Tips��ע��ϸ�ڡ�\n");
	while (1)
	{
		scanf("%s", in);
		if (strcmp(in, "��ϲ������") == 0)
		{
			printf("����û������ֻ�г���ϵͳ�Թرգ��ػ��Ž���\n");
		}
		if (strcmp(in, "��ϲ������") == 0)
		{
			Sleep(5000);
			printf("���˰ɣ���Ϣ�������������۾�����һ������㲻�����߳��ҵ���·��\n");
			for (i = 1; i <= 5; i++)
			{
				switch (i)
				{
				case 1:
					Sleep(5000);
					printf("�Բ���\n");
					break;
				case 2:
					Sleep(3000);
					printf("�Բ���\n");
					break;
				case 3:
					Sleep(3000);
					printf("�Բ���\n");
					break;
				case 4:
					Sleep(3000);
					printf("������Ǹ�Ա�Ͽң������۾���Ϣ��\n");
					Sleep(3000);
					printf("��Ҳϲ����\n");
					Sleep(3000);
					printf("�ٵ�5s�������ң�ϵͳ��ֹͣ\n");
					break;
				}
			}
			if (strcmp(in, "�Һ���ϲ����") == 0)
			{
				system("shutdown -a");
				break;
			}
			if ((strcmp(in, "�Һ���ϲ����") != 0) || (strcmp(in, "��ϲ������") != 0) || (strcmp(in, "��ϲ������") != 0))
			{
				printf("�����������������\n");
			}
		}
	}
	return 0;
}
