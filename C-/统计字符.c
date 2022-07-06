//author: 昊昊反思
//time：14/11/21 15:42
/*
使用数组统计不同类型字符个数
*/
#include<string.h>
#include<stdio.h>
#define N 100
#define _CRT_SECURE_NO_WARNINGS 1
int main()
{
	char a[N],b[N],c[N];
	int upper = 0, low = 0, digit = 0, space = 0, other = 0,i;
	gets(a);
	gets(b);
	gets(c); 
	for(i = 0;i < strlen(a);i++)
	{
		if(a[i] >= 'A' && a[i] <= 'Z')
		{
			upper++;			//1	1	1	1
		 } 
		else if(a[i] >= 'a' && a[i] <= 'z')
		{
			low++;				//2 3	10	10
		}
		else if(a[i] >= '0' && a[i] <= '9')
		{
			digit++;			//0	0	0	6
		}
		else if(a[i] == 32)
		{
			space++;			//1  3	3	
		}
		else other++;			//0	0	1
	} 
	
	for(i = 0;i < strlen(b);i++)
	{
		if(b[i] >= 'A' && b[i] <= 'Z')
		{
			upper++;			//1	1	1	1
		 } 
		else if(b[i] >= 'a' && b[i] <= 'z')
		{
			low++;				//2 3	10	10
		}
		else if(b[i] >= '0' && b[i] <= '9')
		{
			digit++;			//0	0	0	6
		}
		else if(b[i] == 32)
		{
			space++;			//1  3	3	
		}
		else other++;			//0	0	1
	} 
	
	for(i = 0;i < strlen(c);i++)
	{
		if(c[i] >= 'A' && c[i] <= 'Z')
		{
			upper++;			//1	1	1	1
		 } 
		else if(c[i] >= 'a' &&c[i] <= 'z')
		{
			low++;				//2 3	10	10
		}
		else if(c[i] >= '0' &&c[i] <= '9')
		{
			digit++;			//0	0	0	6
		}
		else if(c[i] == 32)
		{
			space++;			//1  3	3	
		}
		else other++;			//0	0	1
	} 
	
	printf("upper low   digit space other\n");
	printf("%d     %d    %d     %d     %d",upper,low,digit,space,other);
	return 0;
}

