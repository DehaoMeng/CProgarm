#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main() {
	int x, y, z;
	scanf("%d %d %d", &x, &y, &z);
	if (x * x + y * y == z * z || x * x + z * z == y * y || y * y + z * z == x * x)
		printf("right angle");
	else if (x == y && y == z)
		printf("equilateral");
	else if ((x == y || y == z || z == x) && (x + y > z && x + z > y &&z + y > x))
		printf("isosceles");
	else if (x == 0 || y == 0 || z == 0)
		printf("invalid input");
	else if ((x + y <= z || x + z <= y || y + z <= x) && (x != 0 && y != 0 && z != 0))
		printf("not a triangle");
	else
		printf("normal");
	system("pause");
	return 0;

	
}