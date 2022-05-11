#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int n[4], i, j, t;
	printf("Please enter 4 numbers: ");
	for (i = 0; i < 4; scanf("%d", &n[i]), i++);
	for (i = 0; i < 4; i++)
		for (j = i + 1; j < 4; j++)
			n[i] > n[j] ?( t = n[i], n[i] = n[j], n[j] = t ):( n[i] = n[i], n[j] = n[j]);
	for (i = 0; i < 4; printf("%d ", n[i]), i++);
	printf("\n");
	return 0;
}
//#include <stdio.h>
//
//int main()
//{
//    int a[4], i, j, t;
//    printf("请输入4个数： ");
//    for (i = 0; i < 4; i++)
//    {
//        scanf("%1d", &a[i]);
//    }
//    for (i = 0; i < 4; i++)  //冒泡排序
//    {
//        for (j = 0; j < (4 - i); j++) {
//            if (a[j] > a[j + 1])
//            {
//                t = a[j];
//                a[j] = a[j + 1];
//                a[j + 1] = t;
//            }
//        }
//    }
//    printf("这4个数由小到大的排列顺序如下：");
//    for (i = 0; i < 4; i++)
//    {
//        printf("%d ", a[i]);
//    }
//    printf("\n");
//    return 0;
//}
