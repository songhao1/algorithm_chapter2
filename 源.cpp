#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	printf("%d", a + b);
//	return 0;
//}


//int main()
//{
//	char c1 = 'z', c2 = 'j', c3 = 117;
//	printf("%c%c%c", c1, c2, c3);
//	return 0;
//}


//int main()
//{
//	int num1 = 1, num2 = 2;
//	printf("%d\n\n%d", num1, num2);
//	printf("%c", 7);
//	return 0;
//}


//int main()
//{
//	char str1[25] = "wo ai de ren bu ai wo";
//	char str2[25] = "so sad a story it is.";
//	printf("%s,%s", str1, str2);
//	return 0;
//}


//int main()
//{
//	bool flag1 = 0, flag2 = true;
//	int a = 1, b = 1;
//	printf("%d %d %d\n", flag1, flag2, a == b);
//	return 0;
//}


//int main()
//{
//	double r = 12.56;
//	int a = 3, b = 5;
//	printf("%d\n", (int)r);
//	printf("%d\n", a / b);
//	printf("%.1f", (double)a / (double)b);
//	return 0;
//}


//#define pi 3.14
//int main()
//{
//	double r = 3;
//	printf("%.2f\n", pi * r * r);
//	return 0;
//}


//const double pi = 3.14;
//int main()
//{
//	double r = 3;
//	printf("%.2f\n", 2 * pi * r);
//	return 0;
//}


//#define ADD(a,b) ((a)+(b))
//int main()
//{
//	int num1 = 3, num2 = 5;
//	printf("%d", ADD(num1, num2));
//	return 0;
//}


//int main()
//{
//	int a = 3, b = 4;
//	double c = 1.23, d = 0.24;
//	printf("%d %d\n", a + b, a - b);
//	printf("%f\n", c * d);
//	return 0;
//}


//int main()
//{
//	int a = 5, b = 4, c = 5, d = 6;
//	printf("%d %d %d\n", a / b, a / c, a / d);
//	return 0;
//}


//int main()
//{
//	int a = 5, b = 3, c = 5;
//	printf("%d %d\n", a % b, a % c);
//	return 0;
//}


//int main()
//{
//	int a = 1, b = 1, n1, n2;
//	n1 = a++;
//	n2 = ++b;
//	printf("%d %d\n", n1, a);
//	printf("%d %d\n", n2, b);
//	return 0;
//}


//int main()
//{
//	int a = 3, b = 5;
//	int c = a > b ? 7 : 11;
//	printf("%d\n", c);
//	return 0;
//}


//int main()
//{
//	int n = 3 * 2 + 1;
//	int m = (n > 6) && (n < 8);
//	n = n + 2;
//	printf("%d %d\n", n, m);
//	return 0;
//}


//int main()
//{
//	char str[10];
//	scanf("%s", str);
//	printf("%s", str);
//	return 0;
//}


int main()
{
	int a = 123, b = 1234567;
	printf("%5d\n", a);
	printf("%5d\n", b);
	return 0;
}