//author: ê»ê»·´Ë¼
//time£º
/*

*/
#include<stdio.h>
#define N 100
#define _CRT_SECURE_NO_WARNINGS 1
int main()
{
	char n[12][N] = {"January","February","March","April","May","June","July","August","September","October","November","December"},(*p)[N];
	int a;
	scanf("%d",&a);
	p=n;
	if(a<=12)
	{
		printf("%s",*(p+a-1));	
	}
	else
	{
		printf("illegal month");
	}

	return 0;
}

