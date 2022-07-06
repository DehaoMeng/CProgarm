//author:ÃÏµÂê»
//Ê±¼ä£º24/10/21 19:29
//
#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1
int sum(int n);
main()
{
	int n,result;
	scanf("%d",&n);
	result = sum(n);
	printf("sum=%d",result);
}
int sum(int n)
{
	int result1,i;
	for(i = 0; i <= n;i++){
		result1 += i;
	}
	return result1;
}
