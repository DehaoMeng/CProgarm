//author: ê»ê»·´Ë¼
//time£º
/*

*/
#include<stdio.h>
#define N 100
#define _CRT_SECURE_NO_WARNINGS 1
void sort(int *p,int m)
{
	int i;
	int temp,*p1,*p2;
	for(i=0;i<m/2;i++)
	{
		p1=p+i;
		p2=p+(m-1-i);
		temp=*p1;
		*p1=*p2;
		*p2=temp;
		
	}
}


int main()
{
	int i,n;
	int*p,num[N];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
	}
	p=&num[0];
	sort(p,n);
	for(i=0;i<n;i++)
	{	
		printf("%d ",num[i]);
	}
	return 0;
	
}



