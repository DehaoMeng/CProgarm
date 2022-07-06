#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main() {
	int a,count=0;
	scanf("%d", &a);
	for(;a<=100000000;count++)
		a = a * 2;
		printf("%d Years", count);
	system("pause");
	return 0;
}