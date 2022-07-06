//author:ÃÏµÂê»
//Ê±¼ä£º20/10/21 10:47
//
#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1
main()
{
	int x;
	scanf("%d",&x); 
	if (x < 1)	printf("x=%d, y=x=%d",x,x);
	else if (x >= 1 && x < 10)	printf("x=%d, y=2*x-1=%d",x,2*x-1);
	else if (x >= 10)	printf("x=%d, y=3*x-11=%d",x,3*x-11);
	return 0;
}

