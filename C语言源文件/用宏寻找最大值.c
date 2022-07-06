#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define MAX2(a,b) a>b?a:b
#define MAX3(a,b,c) a>b?(a>c?a:c):(b>c?b:c)  //先判读a和b的大小，比出大的再和c去比较
int main() {
	int a, b, c,max1,max2;
	scanf("%d,%d,%d", &a, &b, &c);
	if (a > b)
		max1 = MAX2(a, c);
	else
		max1 = MAX2(b, c);
	printf("The result of MAX2 is %d\n", max1);
	  max2 = MAX3(a,b,c);
	  printf("The result of MAX3 is %d", max2);
	  system("pause");
	  return 0;
}


