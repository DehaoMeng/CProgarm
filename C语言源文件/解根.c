//author:孟德昊
//时间：24/10/21 20:20
//
#include<stdio.h>
#include<math.h>
#define _CRT_SECURE_NO_WARNINGS 1
main()
{
	float a,b,c,x,dic;
	scanf("%f,%f,%f",&a,&b,&c);
	if(a == 0){
		if (b != 0){
			x = -c/b;
		}
		else {
			if(c == 0) printf("x无定根");
			else  printf("x无解");
		}
	}
	else {
		dic = b * b - 4* a * c;
		if (dic > 0) printf("%.3f\n%.3f",(-b+sqrt(dic))/(2*a),(-b-sqrt(dic))/(2*a));
		else if(dic == 0) printf("%.3f",-b / (2 * a));
		else printf("%.3f+%.3fi\n%.3f+%.3fi",-b/(a*2),sqrt(-dic)/(2*a),-b/(a*2),sqrt(-dic)/(2*a));
	}
}

