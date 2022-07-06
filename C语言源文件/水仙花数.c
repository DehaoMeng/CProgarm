//author:ÃÏµÂê»
//Ê±¼ä£º24/10/21 20:02
//
#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1
main()
{
	int i,a,b,c;
	i=100;
	for(;i<1000;i++){
		a = i % 10;
		b = i / 10 % 10;
		c = i / 100;
		if (i == a * a * a + b * b * b + c * c * c){
			printf("%d\n",i);
		}
	}
}

