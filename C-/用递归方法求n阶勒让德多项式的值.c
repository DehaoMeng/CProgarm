//author: ê»ê»·´Ë¼
//time£º
/*

*/
#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1
float legendre(float n,float x)
{
	float y = 0;
	if( n == 0){
		y = 1;
//		printf("%f\n",y);
//		return y;
	}
	else if( n == 1){
		y = x;
//		printf("%f\n",y);
//		return y;
	}
	else if(n > 1)
	{
		y = ((2 * n - 1) * x * legendre(n-1,x) - (n - 1) * legendre(n-2,x)) / n;
//		printf("%f\n",y) ;
//		return y;
	}
	return y;
	
}


int main()
{
	float n,x,q;
	scanf("%f,%f",&n,&x);
//	printf("%f,%f",n,x);
	q = legendre(n,x);
	printf("%.2f\n",q);
	return 0;
}

