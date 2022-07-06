#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int count(char* p) {
	int num;
	num = strlen(p);
	printf("The length of string1 is %d\n", num);
}
void co(char* q, int n) {
	int i = 0,x;
	char b[100], * p = b;     //建立一个新的指针来存放字符串
	if (n >= strlen(q))
		printf("the value of m must less than the length of string1");
	else {
		while (*(q + n - 1) != '\0') {
			*(p + i) = *(q + n - 1);        //将原字符串第N个字符赋值给新的字符
			i++;
			n++;              //按顺序依次赋值
		}
		*(p + i) = '\0';           //在最后加上\0
		x = strlen(p);
		printf("string2 is: ");
		printf("%s", p++);
		printf("\n");
		printf("The length of string2 is %d", x);
	}
}
int main() {
	char a[200], * p;
	int n;
	p = a;
	gets(a);
	scanf("%d", &n);
	count(p);
	co(p,n);
	system("pause");
	return 0;
}
