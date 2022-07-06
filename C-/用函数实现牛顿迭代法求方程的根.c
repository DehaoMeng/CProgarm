//author: 昊昊反思
//time：
/*

*/
#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1
#include <math.h>

double funY(double x) {
    double y;
    y = 2 * x*x*x - 4 * x*x + 3 * x - 6;
    return y;
}
//y的一阶导数
double funY1(double x) {
    double y1;
    y1 = 6 * x*x - 8 * x + 3;
    return y1;
}


int main(void) 
{
    double x1, x2;
    x1 = 1.5;//求1.5附近的根
    x2 = x1 - funY(x1) / funY1(x1);
    while (fabs(x2 - x1) > 1e-6) 
	{
        x1 = x2;
        x2 = x1 - funY(x1) / funY1(x1);
    }
    printf("%.3f",x2);
    return 0;
}

