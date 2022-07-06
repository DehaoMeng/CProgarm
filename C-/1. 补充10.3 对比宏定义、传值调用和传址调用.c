//author: ê»ê»·´Ë¼
//time£º
/*

*/
#include<stdio.h>
#define SWAP(x) x
#define _CRT_SECURE_NO_WARNINGS 1
void swapValue(int m,int n)
{
	int temp;
	temp = m;
	m = n;
	n = temp;
	
}

void swapPointer(int **p,int **q)
{
	int *temp;
//	printf("%d	%d\n",p,q);
//	printf("%d	%d\n",*p,*q);
	temp = *p;
//	printf("%d  %d\n",temp,*temp);
	*p = *q;
	*q = temp;
//	printf("%d,%d",p,q);
//	printf("\n%d,%d",*p,*q);
}

int main(void)
{
	int *p, *q;
	int m, n;
	p = &m;
	q = &n;
	scanf("%d,%d",&m,&n);
	printf("Using Macro definition: a=%d,b=%d\n",SWAP(n),SWAP(m));
	swapValue(m,n);
	printf("Call by Value: a=%d,b=%d\n",m,n);
	swapPointer(&p,&q);
	printf("Call by Address: a=%d,b=%d",*p,*q);
	return 0;
}

