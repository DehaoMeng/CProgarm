//author:孟德昊
//时间：
/*
杨辉三角 
*/
#include<stdio.h>
#define N 11
#define _CRT_SECURE_NO_WARNINGS 1
int main()
{
    int i, j, a[N][N];  
    for(i=1;i<=10;i++)
        a[i][1] = a[i][i] = 1; 
    for(i=3;i<=10;i++)
        for(j=2;j<=i-1;j++)
            a[i][j]=a[i-1][j-1]+a[i-1][j]; 
    for(i=1;i<=10;i++){
        for(j=1;j<=i;j++)  
    	{
    		if(i==1)	printf("%d\n",a[i][j]);
	        else  printf("%4d ",a[i][j]);
    	}
        printf("\n"); 
    }
    printf("\n");
	return 0;
}

