//author:孟德昊
//时间：
//求两个正整数的最大公约数和最小公倍数 
#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1
int division(int m, int n);
int least_common_multiple(int m, int n,int p);

int main()
{
	int m,n,r,p,s,multiple;
	scanf("%d,%d",&m,&n);
	s = m;
	p = n;
	if (p>s) {
		 s = n;
		 p = m;
	}
	r = division(s,p);
	while(r != 0){		//辗转相除法求最大公约数 
	s = p;
	p = r;
	r = division(s,p);	
	}
	multiple = least_common_multiple( m, n, p);
	printf("%d\n%d",p,multiple);
//	printf("%d",p);
	return 0;
}

int division(int m, int n)		//求最大公约数 
{
	int s;
	s = m % n;
	return s;
}

int least_common_multiple(int m, int n, int p)			//求最小公倍数 
{
	int q;
	q = m * n / p;
	return q; 
}
