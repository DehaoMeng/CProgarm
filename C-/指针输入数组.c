//author: ê»ê»·´Ë¼
//time£º
/*

*/
#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1
int main()
{
	int a[5];
	int * p;
	p = &a[0];
	int i;
	int n=0;
	for(i=0;i<5;i++)
	{
		scanf("%d",(p+i));
//		printf("%d\n",*p+i);
	}
	n = *p;
	for(i=0;i<5;i++)
	{
		printf("%4d",*(p+i));
		if(n>*(p+i)){
			n = *(p+i);
		}
	}
	printf("\nThe min is %d",n);
	return 0;
}

