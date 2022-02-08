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
		printf("注意你的电脑将会在60s后关机，如果输入：“我喜欢你。”将会取消关机。\n");
		scanf("%s", input);
		if (strcmp(input, "我喜欢你") == 0)
		{
			printf("请注意细节\n");
		}
		if (strcmp(input, "我喜欢你。") == 0)
		{
			Sleep(2000);
			printf("恭喜你已经停止关机\n");
			break;
		}
		if ((strcmp(input, "我喜欢你") != 0) || (strcmp(input, "我喜欢你。") != 0))
		{
			printf("输入错误，请重新输入\n");
		}
	}
	Sleep(3000);
	printf("不要着急滑，还没结束\n");
	char in[20] = { 0 };
	int i = 0;
	Sleep(3000);
	printf("恭喜你争取了20s之后的关机时间，如果想取消请输入：“你喜欢我吗。Tips：注意细节”\n");
	while (1)
	{
		scanf("%s", in);
		if (strcmp(in, "你喜欢我吗。") == 0)
		{
			printf("坑你没商量，只有出现系统以关闭，关机才结束\n");
		}
		if (strcmp(in, "你喜欢我吗") == 0)
		{
			Sleep(5000);
			printf("累了吧？休息会儿，心疼你的眼睛，闭一会儿，你不可能走出我的套路的\n");
			for (i = 1; i <= 5; i++)
			{
				switch (i)
				{
				case 1:
					Sleep(5000);
					printf("对不起\n");
					break;
				case 2:
					Sleep(3000);
					printf("对不起\n");
					break;
				case 3:
					Sleep(3000);
					printf("对不起\n");
					break;
				case 4:
					Sleep(3000);
					printf("三连道歉以表诚恳，望你眼睛休息会\n");
					Sleep(3000);
					printf("我也喜欢你\n");
					Sleep(3000);
					printf("再等5s，相信我，系统会停止\n");
					break;
				}
			}
			if (strcmp(in, "我好像喜欢你") == 0)
			{
				system("shutdown -a");
				break;
			}
			if ((strcmp(in, "我好像喜欢你") != 0) || (strcmp(in, "你喜欢我吗") != 0) || (strcmp(in, "你喜欢我吗。") != 0))
			{
				printf("输入错误，请重新输入\n");
			}
		}
	}
	return 0;
}
