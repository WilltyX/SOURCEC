#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    char a = 0;
    scanf("%c", &a);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%c", a);
        }
        printf("\n");
    }
    return 0;
}