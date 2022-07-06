//author:ÃÏµÂê»
//Ê±¼ä£º24/10/21 19:57
//
#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1
int factorial1(int n);
int main()
{
	int n,result;
	scanf("%d",&n);
	for(;n>0;n--){
		result += factorial1(n);
	}
	printf("sum=%d",result);
}

int factorial1(int n){
	int result1;
	result1=1;
	for(;n>0;n--){
		result1 *= n; 
	}
	return result1;
}
