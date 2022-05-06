#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int x;
//	scanf("%d", &x);
//	if (x > 0)
//		printf("1");
//	if (x == 0)
//		printf("0");
//	if (x < 0)
//		printf("-1");
//	return 0;
//}
#include<stdio.h>
int main()
{
	int a, b, c;
	long long An = 0, Bn = 0;
	float Cn = 0, Sn;
	scanf("%d %d %d", &a, &b, &c);
	int i, m, n;
	for (i = 1; i <= a; i++)
	{
		An += i;
	}
	for(m = 1; m <= b; m++)
	{
		Bn += m * m;
	}
	for (n = 1; n <= c; n++)
	{
		Cn += 1.0 / c;
	}
	Sn = An + Bn + Cn;
	printf("%.2f", Sn);
	return 0;
}