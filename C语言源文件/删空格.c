#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main() {
	char string[100],c;
	int i, k;
	gets(string);
	printf("\n");
	printf("new string is:");
	k = strlen(string);
	for (i = 0; i < k; i++) {
		if ((c = string[i]) == ' ');
		else 
			printf("%c", string[i]);
			
	}
	system("pause");
	return 0;
}