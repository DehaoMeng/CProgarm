//author: ê»ê»·´Ë¼
//time£º
/*

*/
#include<stdio.h>
#define MAX2(x,y) (((x)>(y))?(x):(y))
#define MAX3(x,y,z) (MAX2((x),(y))>(z))?MAX2((x),(y)):z
#define _CRT_SECURE_NO_WARNINGS 1
int main(void)
{
	int x,y,z;
	scanf("%d,%d,%d",&x,&y,&z);
//	printf("%d%d%d",x,y,z);
	printf("By MAX2, the max number is %d\n",MAX2(x,y)>MAX2(y,z)?MAX2(x,y):MAX2(y,z));
	printf("By MAX3, the max number is %d",MAX3(x,y,z));
	return 0;
}

