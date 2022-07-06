//author: ê»ê»·´Ë¼
//time£º
/*

*/
#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1
int yanzheng(int m, int n)
{
	if(m>n && m > 100 && n < 1000 )
		return 0;
	else
		return -1;
}

int huiwen(int m)
{
	if((m%10)==(m/100))
		return 0;	
	else
		return -1;
}

int main()
{
	int m,n;
	int s = 0;
	scanf("%d,%d",&m,&n);
	if(yanzheng(m,n))
	{
		for(;m<n;m++)
		{
			if(huiwen(m) == 0)
			{
				printf("%d\n",m);
				s++;
			}
		}
		
		if(s == 0)
		{
			printf("can not find!");
		}
	}
	
	else printf("invalid input!");
	return 0;
}

