#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int all(char* p) {
	int i,a=0,b=0,c=0,d=0,e=0;
	for (i = 0; i <= strlen(p); i++) {
		if (*(p + i) >= 'A' && *(p + i) <= 'Z') {
			a++;
		}
		else  if (*(p + i) >= 'a' && *(p + i) <= 'z') {
			b++;
		}
		else  if (*(p + i) >= '0' && *(p + i) <= '9') {
			c++;
		}
		else  if (*(p + i) == ' ') {
			d++;
		}
		else
			e++;
	}
	printf("upper:%d  lower:%d  space:%d  digit:%d  other:%d", a, b, d, c, e-1);
}
int main() {
	int a[100], * p;
	p = a;
	gets(a);
	all(p);
	system("pause");
	return 0;
}