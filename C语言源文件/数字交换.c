#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
int main(){
	int a,b,c,d,e;
	scanf("%d",&a);
	b=a/100;
	d=a/10;
	e=d%10;
	c=a%10;
	printf("%d%d%d",c,e,b);
	system("pause");
	return 0;
}
