//author:ÃÏµÂê»
//Ê±¼ä£º24/10/21 19:41
//
#include<stdio.h>
#include<math.h>
#define _CRT_SECURE_NO_WARNINGS 1
float sum(); 
main()
{
	float pi,result;
	result = sum();
	pi = 4*result;
	printf("pi = %.6f",pi);
}
float sum()
{
	float i;
	float n;
	int judgment=1;
	n = 1;
	while(fabs(n)<1e06){
		if(judgment % 2 != 0){
			i += 1/n;
			n++;
			n++;
			judgment++;
		}
		else {
			i -= 1/n;
			n++;
			n++;
			judgment++;
		}
	}
	return i;
}
