//author:ÃÏµÂê»
//Ê±¼ä£º24/10/21 15:28
//
#include<stdio.h>
#include<math.h>
#define _CRT_SECURE_NO_WARNINGS 1
float max(float a,float b);
int main()
{
	float a,b,c,d,big;
	scanf("%f,%f,%f",&a,&b,&c);
	d = max(a,b);
	big = max(d,c);
	printf("%.2f",big);
}
float max(float a,float b)
{
	float biggest;
	biggest = fabs(a)>fabs(b)?a:b;
	return biggest;
}
