#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
    printf("%15d", 0xABCDEF);
}
# include <stdio.h>
int main()
{
    int a = printf("Hello world!");
    printf("\n%d", a);
    return 0;
}
#include<stdio.h>
int main()
{
    int ret = printf("Hello word!\n");
    printf("%d", ret);
    return 0;
}
#include<stdio.h>
int main()
{
    int ret = printf("Hello word!");
    printf("\n");
    printf("%d", ret);
    return 0;
}
#include<stdio.h>
int main()
{
    char arr[] = { 'a', 'b', 'c', '\0' };
    printf("%d\n", strlen(arr));
    return 0;
}
#include<stdio.h>
int main()
{
    int a = 0, b = 0, c = 0;
    scanf("%d %d %d", &a, &b, &c);
    printf("score1=%d,score2=%d,score3=%d", a, b, c);
    return 0;
}
#include<stdio.h>

int main()
{
    int num;
    float x, y, z;
    scanf("%d;%f,%f,%f", &num, &x, &y, &z);
    printf("The each subject score of  No. %d is %.2f, %.2f, %.2f.", num, x, y, z);

    return 0;
}
#include <stdio.h>
int main() {
    const int len = 5;
    char num;
    scanf("%c", &num);
    for (int i = 0; i < len; i++) {   // 循环5次，因为有5行
        for (int j = len - 1; j > i; j--) {   // 显示空格  第一行 4个  第二行 3个  依次递减
            printf(" ");
        }
        for (int n = 0; n <= i; n++) {   // 显示1  第一行显示1个   第二行显示2个  依次增加
            printf("%c ", num);
        }
        printf("\n");
    }
    return 0;
}
#include<stdio.h>
int main() {
    char a = 0;
    scanf("%c", &a);
    printf("    %c\n   %c %c\n  %c %c %c\n %c %c %c %c\n%c %c %c %c %c", a, a, a, a, a, a, a, a, a, a, a, a, a, a, a);
    return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
//金字塔型输出
int main()
{
    char a;//定义一个字符串
    scanf("%c", &a);
    for (int i = 1; i <= 5; i++)//第一层for循环，可见循环5次，即这个金字塔有5层
    {
        for (int j = 5 - i; j > 0; j--)//第二层打印字符前的空格，第一行4个空，第二行3个逐行递减。
            printf(" ");
        for (int m = 1; m <= i; m++)//打印字符，第一行1个，第二行2个，逐行递增。
            printf("%c ", a);
        printf("\n");
    }
    return 0;
}
#include <stdio.h>
int main() {
    const int len = 5;
    char num;
    scanf("%c", &num);
    for (int i = 0; i < len; i++) {   // 循环5次，因为有5行
        for (int j = len - 1; j > i; j--) {   // 显示空格  第一行 4个  第二行 3个  依次递减
            printf(" ");
        }
        for (int n = 0; n <= i; n++) {   // 显示1  第一行显示1个   第二行显示2个  依次增加
            printf("%c ", num);
        }
        printf("\n");
    }
    return 0;
}
#include <stdio.h>
int main() {
    char strings[] = { 73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116 , 33, '\0' };
    printf("%s\n", strings);
    return 0;
}
#include<stdio.h>
int main()
{
    int y, m, d;
    scanf("%4d%2d%2d", &y, &m, &d);
    printf("year=%d\nmonth=%02d\ndate=%02d", y, m, d);
    return 0;
}
#include<stdio.h>
int main()
{
    int a, b, c = 0;
    scanf_s("a=%d,b=%d", &a, &b);
    c = a;
    a = b;
    b = c;
    printf("a=%d,b=%d", a, b);
    return 0;
}
