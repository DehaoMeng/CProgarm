//author:孟德昊
//时间：
//求两个正整数的最大公约数
#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1
int division(int m, int n);
int main()
{
	int m,n,r,temp;
	scanf("%d,%d",&m,&n);
	if (n>m) {
		temp = m;
		 m = n;
		 n = temp;
	}
	r = division(m,n);
	while(r != 0){
	m = n;
	n = r;
	r = division(m,n);	
	}
	printf("%d",r);
	return 0;
}

int division(int m, int n)
{
	int s;
	s = m % n;
	return s;
}
