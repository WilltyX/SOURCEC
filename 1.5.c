#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//    int a = 0;
//    scanf_s("%c", &a);
//    for (int i = 3; i >= 1; i--)
//    {
//        for (int j = 1; j <= 3; j++)
//        {
//            printf("%c", a);
//        }
//        printf("\n");
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	printf("%d", a + b);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a, b, t;
//	scanf("%d", &t);
//	while (t--)
//	{
//		scnaf("%d %d", &a, &b);
//		printf("%d", a + b);
//	}
//}
//#include<stdio.h>
//int main()
//{
//	int a, b;
//	while (scanf("%d %d") != EOF)
//	{
//		printf("%d", a + b);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a, b;
//	while (scnaf("%d %d", &a, &b) != EOF)
//	{
//		if (a == 0 && b == 0)
//			break;
//		printf("%d", a + b);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a, b;
//	while (scanf("%d %d", &a, &b) && (a || b))
//	{
//		printf("%d", a + b);
//	}
//	return 0;
//}
#include<stdio.h>
int main()
{
	int a, b;
	while (scanf("%d %d", &a, &b))
	{
		printf("%d", a + b);
	}
	return 0;
}