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
    for (int i = 0; i < len; i++) {   // ѭ��5�Σ���Ϊ��5��
        for (int j = len - 1; j > i; j--) {   // ��ʾ�ո�  ��һ�� 4��  �ڶ��� 3��  ���εݼ�
            printf(" ");
        }
        for (int n = 0; n <= i; n++) {   // ��ʾ1  ��һ����ʾ1��   �ڶ�����ʾ2��  ��������
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
//�����������
int main()
{
    char a;//����һ���ַ���
    scanf("%c", &a);
    for (int i = 1; i <= 5; i++)//��һ��forѭ�����ɼ�ѭ��5�Σ��������������5��
    {
        for (int j = 5 - i; j > 0; j--)//�ڶ����ӡ�ַ�ǰ�Ŀո񣬵�һ��4���գ��ڶ���3�����еݼ���
            printf(" ");
        for (int m = 1; m <= i; m++)//��ӡ�ַ�����һ��1�����ڶ���2�������е�����
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
    for (int i = 0; i < len; i++) {   // ѭ��5�Σ���Ϊ��5��
        for (int j = len - 1; j > i; j--) {   // ��ʾ�ո�  ��һ�� 4��  �ڶ��� 3��  ���εݼ�
            printf(" ");
        }
        for (int n = 0; n <= i; n++) {   // ��ʾ1  ��һ����ʾ1��   �ڶ�����ʾ2��  ��������
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
