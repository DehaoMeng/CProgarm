#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int f(int x) {
	int  j,count;
	count = 1;
	for (j = 2; j <= x; j++) {
		if (x % j == 0 && x != j)
			count = 0;
	}
		return(count);
}
int main() {
	int x,y;
	scanf("%d", &x);
	while (x <= 0)
		scanf("%d", &x);
	y = f(x);
	if (y == 0)
		printf("%d is not a sushu", x);
	else
		printf("%d is a sushu", x);
	system("pause");
	return 0;
}
	
	