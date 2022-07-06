//author: ê»ê»·´Ë¼
//time£º
/*

*/
#include<stdio.h>
#define N 3
#define _CRT_SECURE_NO_WARNINGS 1
void change(int (*s)[3])
{
	int x,y;
 	
	for(x=0;x<3;x++)
	{
		for(y=0;y<3;y++)
		{
			printf("%d ",*(*(s+y)+x));
		}
		printf("\n");
	}
}

int main()
{
	int a[N][N],*pa=a;
	int *i;
	for(i=pa;i<pa+N*N;i++)
	{
		scanf("%d",i);
	}
	change(pa);
	return 0;
}

