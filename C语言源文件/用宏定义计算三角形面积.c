#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define S(a,b,c) (a+b+c)/2
#define AREA(s,a,b,c) sqrt(s*(s-a)*(s-b)*(s-c))   //º£Â×¹«Ê½
int main() {
	double a, b, c;
	double s, area;
	scanf("%lf,%lf,%lf", &a, &b, &c);
	if (a == 0 || b == 0 || c == 0)
		printf("Each side of a triangle should be greater than 0");
	else if ((a + b) >c && (a + c) > b && (b + c) > a) {
		s = S(a, b, c);
		area = AREA(s, a, b, c);
		printf("The area of this triangle is %.2lf", area);
	}
	 else
	printf("The sum of the two sides of a triangle should be greater than the third");
	system("pause");
	return 0;
}