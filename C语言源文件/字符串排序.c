#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
char swap(char* p, char* q,char *n) {
	char m[100];
	if (strcmp(p, q) > 0) {
		strcpy(m, p);
		strcpy(p, q);
		strcpy(q, m);
	}
	if (strcmp(p, n) > 0) {
		strcpy(m, p);
		strcpy(p, n);
		strcpy(n, m);
	}
	if (strcmp(q, n) > 0) {
		strcpy(m, q);
		strcpy(q, n);
		strcpy(n, m);
	}
	
}
int main() {
	char str1[10], str2[10], str3[10];
	char * p, * q, * m;
	p = str1;
	q = str2;
	m = str3;
	gets(str1);
	gets(str2);
	gets(str3);
	swap(p, q,m);
	printf("%s\n%s\n%s", p, q,m);
	system("pause");
	return 0;
}