#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int i, j;
//	char c = '#';
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			printf("%c", c);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	float a;
//	scanf("%f", &a);
//	printf("%.0f", a);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int a;
//    scanf("%d", &a);
//    a /= 10;
//    printf("%d", a % 10);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int X, N;
//	scanf("%d %d", &X, &N);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int seconds, points, hour;
//    scanf("%d", &seconds);
//    hour = seconds / 3600;
//    points = seconds % 3600 / 60;
//    seconds = seconds % 3600 % 60;
//    printf("%d %d %d", hour, points, seconds);
//}
//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        printf("%d\n", 1 << n);
//    }
//    return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    long long age;
//    scanf("%d", &age);
//    printf("%ld", age * 3.156 * pow(10, 7));
//    return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int main() {
//    int age;
//    scanf("%d", &age);
//    printf("%ld", (long)(age * 3.156 * pow(10, 7)));
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int n, i;
//	scanf("%d", &n);
//	double avg, max, min, sum, a[100];
//	sum = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%lf", &a[i]);
//	}
//	max = min = a[0];
//	for (i = 0; i < n; i++)
//	{
//		if (a[i] > max)
//		{
//			max = a[i];
//		}
//		if (a[i] < min)
//		{
//			min = a[i];
//		}
//		sum += a[i];
//	}
//	avg = sum / n;
//	printf("%.2f %.2f %.2f", max, min, avg);
//	return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    double a, b, c, p;
//    scanf("%lf %lf %lf", &a, &b, &c);
//    p = (a + b + c) / 2;
//    printf("circumference=%.2f area=%.2f", a + b + c, sqrt(p * (p - a) * (p - b) * (p - c)));
//        return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int n, m, h;
//	scanf("%d %d %d", &n, &h, &m);
//	if (m % h)
//		n = n - m / h - 1;
//	else
//		n = n - m / h;
//	printf("%d", n);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//    float f = 0;
//    scanf("%f", &f);
//    printf("%.3f", 5.0 / 9 * (f - 32));
//    return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    int r = 0;
//    scanf("%d", &r);
//    printf("%.2f", 3.14 * pow(r, 2));
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int r1, r2;
//    scanf("%d %d", &r1, &r2);
//    printf("%f", 1.0 / (r1 + r2));
//    return 0;
//}
#include<stdio.h>
#include<math.h>
int main()
{
	int h, r;
	scanf("%d %d", &h, &r);
	float v = h * pow(r, 3) * 3.14;
	printf("%d")
	return 0;
}