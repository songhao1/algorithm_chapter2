#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<math.h>

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


//int main()
//{
//	int a = 123, b = 1234567;
//	printf("%5d\n", a);
//	printf("%5d\n", b);
//	return 0;
//}


//int main()
//{
//	int a = 123, b = 1234567;
//	printf("%05d\n", a);
//	printf("%05d\n", b);
//	return 0;
//}


//int main()
//{
//	double d1 = 12.3456;
//	printf("%.0f\n", d1);
//	printf("%.1f\n", d1);
//	printf("%.2f\n", d1);
//	printf("%.3f\n", d1);
//	printf("%.4f\n", d1);
//	return 0;
//}


//int main()
//{
//	char c1, c2, c3;
//	c1 = getchar();
//	getchar();
//	c2 = getchar();
//	c3 = getchar();
//	putchar(c1);
//	putchar(c2);
//	putchar(c3);
//	return 0;
//}


//int main()
//{
//	double db = -12.56;
//	printf("%.2f\n", fabs(db));
//	return 0;
//}


//int main()
//{
//	double db1 = -5.2, db2 = 5.2;
//	printf("%.0f %.0f\n", floor(db1), ceil(db1));
//	printf("%.0f %.0f\n", floor(db2), ceil(db2));
//	return 0;
//}


//int main()
//{
//	double db = pow(2.0, 3.0);
//	printf("%f\n", db);
//	return 0;
//}


//int main()
//{
//	double db = sqrt(2.0);
//	printf("%f\n", db);
//	return 0;
//}


//int main()
//{
//	double db = log(1.0);
//	printf("%f\n", db);
//	return 0;
//}


//int main()
//{
//	double db1 = round(3.40);
//	double db2 = round(3.45);
//	double db3 = round(3.50);
//	double db4 = round(3.55);
//	double db5 = round(3.60);
//	printf("%d,%d,%d,%d,%d\n", (int)db1, (int)db2, (int)db3, (int)db4, (int)db5);
//	return 0;
//}


//P28
//int main() {
//	int n = 5;
//	if (n > 3) {
//		n = 9;
//		printf("%d\n", n);
//	}
//	return 0;
//}


//P29
//int main() {
//	int n = 2;
//	if (n > 3) {
//		n = 9;
//		printf("%d\n", n);
//	}
//	else {
//		printf("%d\n", n);
//	}
//	return 0;
//}


//P29
//int main() {
//	int n = 2;
//	if (n > 3) {
//		n = 9;
//		printf("%d\n", n);
//	}
//	else if (n > 2) {
//		printf("%d\n", n+1);
//	}
//	else {
//		printf("%d\n", n);
//	}
//	return 0;
//}


//P30
//int main() {
//	int n = 0, m = 5;
//	if (n) {
//		printf("n is not zero!\n");
//	}
//	else {
//		printf("n is zero!\n");
//	}
//	if (m) {
//		printf("m is not zero!\n");
//	}
//	else {
//		printf("m is zero!\n");
//	}
//	return 0;
//}


//P30
//int main() {
//	int n = 0, m = 5;
//	if (!n) {
//		printf("n is zero!\n");
//	}
//	else {
//		printf("n is not zero!\n");
//	}
//	if (!m) {
//		printf("m is zero!\n");
//	}
//	else {
//		printf("m is not zero!\n");
//	}
//	return 0;
//}


//P31
//int main()
//{
//	int n = 3, m = 5;
//	if (n < 5) {
//		if (m < 5) {
//			printf("%d\n", m + n);
//		}
//		else {
//			printf("%d\n", m - n);
//		}
//	}
//	else {
//		printf("haha\n");
//	}
//	return 0;
//}


//P32
//int main() {
//	int a = 1, b = 2;
//	switch (a + b) {
//	case 2:
//		printf("%d\n", a);
//		break;
//	case 3:
//		printf("%d\n", b);
//		break;
//	case 4:
//		printf("%d\n", a + b);
//		break;
//	default:
//		printf("sad story\n");
//	}
//	return 0;
//}


//P34
//int main() {
//	int n = 1, sum = 0;
//	while (n <= 100) {
//		sum = sum + n;
//		n++;
//	}
//	printf("sum=%d\n", sum);
//	return 0;
//}


//P34
//int main() {
//	int n = 12345, count = 0;
//	while (n) {
//		count = count + n % 10;
//		n = n / 10;
//	}
//	printf("%d\n", count);
//	return 0;
//}


//P36
//int main() {
//	int i, sum = 0;
//	for (i = 1; i <= 100; i++) {
//		sum = sum + i;
//	}
//	printf("sum=%d\n", sum);
//	return 0;
//}


//P38
//int main() {
//	int n, sum = 0;
//	for (int i = 1; i <= 100; i++) {
//		sum = sum + i;
//		if (sum >= 2000) break;
//	}
//	printf("sum=%d\n", sum);
//	return 0;
//}


//P38
//int main() {
//	int sum = 0;
//	for (int i = 1; i <= 5; i++) {
//		if (i % 2 == 1) continue;
//		sum = sum + i;
//	}
//	printf("sum=%d\n", sum);
//	return 0;
//}


//P40
//int main() {
//	int a[10] = { 5,3,2,6,8,4 };
//	for (int i = 0; i < 10; i++) {
//		printf("a[%d]=%d\n", i, a[i]);
//	}
//	return 0;
//}


//P40
//int main() {
//	int a[10];
//	scanf("%d", &a[0]);
//
//	for (int i = 1; i < 10; i++) {
//		a[i] = a[i - 1] * 2;
//	}
//
//	for (int i = 0; i < 10; i++) {
//		printf("a[%d]=%d\n", i, a[i]);
//	}
//	return 0;
//}


//P42
//int main() {
//	int a = 1, b = 2;
//	printf("a=%d,b=%d\n", a, b);
//	int temp = a;
//	a = b;
//	b = temp;
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}


//P43
//int main() {
//	int a[5] = { 3,1,4,5,2 };
//	for (int i = 1; i <= 4; i++) {
//		for (int j = 0; j < 5 - i; j++) {
//			if (a[j] > a[j + 1]) {
//				int temp = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = temp;
//			}
//		}
//	}
//
//	for (int i = 0; i < 5; i++) {
//		printf("%d ", a[i]);
//	}
//	return 0;
//}


//P44
//int main() {
//	int a[5][6] = { {3,1,2},{8,4},{},{1,2,3,4,5} };
//	for (int i = 0; i < 5; i++) {
//		for (int j = 0; j < 6; j++) {
//			printf("%d ", a[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//P44
//int main() {
//	int a[3][3], b[3][3];
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			scanf("%d", &a[i][j]);
//		}
//	}
//
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			scanf("%d", &b[i][j]);
//		}
//	}
//
//	int c[3][3];
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			c[i][j] = a[i][j] + b[i][j];
//		}
//	}
//
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			printf("%d ", c[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//P45
//int a[1000000];
//int main() {
//	for (int i = 0; i < 1000000; i++) {
//		a[i] = i;
//		printf("a[%d]=%d\n", i, a[i]);
//	}
//	return 0;
//}


//P46
//int main() {
//	int a[3][3][3];
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			for (int k = 0; k < 3; k++) {
//				scanf("%d", &a[i][j][k]);
//				a[i][j][k]++;
//			}
//		}
//	}
//
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			for (int k = 0; k < 3; k++) {
//				printf("%d\n", a[i][j][k]);
//			}
//		}
//	}
//	return 0;
//}