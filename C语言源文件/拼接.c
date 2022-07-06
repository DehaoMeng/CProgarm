#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main() {
	char str1[100],str2[100];
	gets(str1);
	gets(str2);
	printf("%s", strcat(str1, str2));
	system("pause");
	return 0;
}