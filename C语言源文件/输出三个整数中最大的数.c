//author:ÃÏµÂê»
//Ê±¼ä£º20/10/21 10:38
//
#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1
int main()
{
	int a,b,c,d;
	scanf("%d,%d,%d",&a,&b,&c);
	d = compare(a,b);
	d = compare(d,c);
	printf("The biggest one is %d",d);
}
int compare(a,b)
{
	int biggest;
	if (a>b)
		biggest = a;
	else biggest =b;
	return biggest;
}
