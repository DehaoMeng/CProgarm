//author: ê»ê»·´Ë¼
//time£º
/*

*/
#include<stdio.h>
#define N 25
#define _CRT_SECURE_NO_WARNINGS 1
void sorted(int a[])
{
	int *j,*temp;
	temp = a;
	for(j=a;j<a+N;j++)
	{
		if(*temp < *j)
		{
			temp = j;
		}
	}
	int i;
	i = *(a+12);
	*(a+12) = *temp;
	*temp = i;
		
}


int main(void)
{
	int a[N];
	int *i;
	for(i = a;i < a+N;i++)
	{
		scanf("%d",i);
	}
	sorted(a);
	int j;
//	printf("The handaled matrix is:\n");
	for(i=a,j=0;i<a+N;i++,j++)
	{
		if(j%5==0)
		{
			printf("\n");
		}
		printf("%d ",*i);
	}
	return 0;
}

