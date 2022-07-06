//author: ê»ê»·´Ë¼
//time£º
/*

*/
#include<stdio.h>
#include<math.h>
#define _CRT_SECURE_NO_WARNINGS 1

double diedai(double a,double x1)
{
	double x2; 
	x2 = (x1 + a / x1) / 2.0;
	return x2;
}

int main()
{
	double a,x2= 1.0,x1;
	scanf("%lf",&a);
	for(;;)
	{	
		x1 = x2;
		x2 = diedai(a,x1);
		if(fabs(x1-x2)<=0.00001)
		{
			printf("%.3f",x2);
			break;
		}
	}
	
	return 0;
}

