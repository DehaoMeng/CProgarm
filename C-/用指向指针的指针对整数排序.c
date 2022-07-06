//author: ê»ê»·´Ë¼
//time£º
/*

*/
#include<stdio.h>
#define N 1000
#define _CRT_SECURE_NO_WARNINGS 1
void sorted(int **j,int n)
{
	int *q,temp,*p;
	 for (p = *j; p < *j + n; ++p){  

        for (q = p + 1; q < *j + n; ++q){  

            if (*p > *q){  

				temp = *p;
				*p = *q;
				*q = temp;
//                swap(p, q);  

            }  
        }
        
	}
}

int main(void)
{
	int n;
	int a[N],*i,**j;
	scanf("%d",&n);
	for(i=a;i<a+n;i++)
	{
		scanf("%d",i);	
	}
	i=a;
	j = &i;
//	printf("%d",*(i-1));
	sorted(j,n);
	for(i=a;i<a+n;i++)
	{
		printf("%d ",*i);
	}
	return 0;
}

