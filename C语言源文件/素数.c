//author:孟德昊
//时间：
//求100到200之间的全部素数
#include<stdio.h>
#include<math.h>
#define _CRT_SECURE_NO_WARNINGS 1
int main(){
    int a,i; 
    int num=200;
    int k;
    for(i=100;i<=num;i++)
    {
    	k=(int)sqrt((double)i);
    	for (a=2;a<=k;a++){
    		if(i%a==0)
    			break;}
    	if (a>k)
	    	printf("%d is a prime number\n",i);
	}
}
