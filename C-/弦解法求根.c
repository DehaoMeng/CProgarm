//author: 昊昊反思
//time：
/*
用弦截法求方程 f(x)=x3-5x2+16x-80=0 的根。
*/
#include<stdio.h>
#include <math.h>
#define _CRT_SECURE_NO_WARNINGS 1
//double f(double x)
//{
//	double y;
//	y = x * x * x - 5 * x * x + 16 * x - 80;
//	return y;
//}  
// 
//double root(double x1,double x2)
//{
//	double x;
//	do
//    {
//        double k,b;
//        k=(f(x1)-f(x2))/(x1-x2);
//        b=f(x1)-k*x1;
//        x=-b/k;
//        if(f(x)*f(x1)>=0)
//            x1=x;
//        if(f(x)*f(x2)>=0)
//            x2=x;
//    }while(f(x)<-0.00001||f(x)>0.00001);
//    return x;
//}
//
//int main(void)
//{
//	float x1,x2,x;
//	while(f(x1)*f(x2)>=0)
//	{
//		scanf("%lf,%lf",&x1,&x2);
//		printf(""f(x1))
//	}
////	root(x1,x2);
//	printf("%.3f",root(x1,x2));
//	return 0;
//}


double x,x1,x2;
double f(double x)
{
    double c;
    c=x*x*x-5*x*x+16*x-80;
    return(c);
}
 
double root(double x1,double x2)
{
    do
    {
        double k,b;
        k=(f(x1)-f(x2))/(x1-x2);
        b=f(x1)-k*x1;
        x=-b/k;
        if(f(x)*f(x1)>=0)
            x1=x;
        if(f(x)*f(x2)>=0)
            x2=x;
    }while(f(x)<-0.00001||f(x)>0.00001);
    return f(x);
}
 
int main()
{
    while(f(x1)*f(x2)>=0)
    {
        scanf("%lf,%lf",&x1,&x2);
    }
    root(x1,x2);
    printf("%.3f\n",x);
    return 0;
}
