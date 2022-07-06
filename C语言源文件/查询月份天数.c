//author:ÃÏµÂê»
//Ê±¼ä£º24/10/21 16:11
//
#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1
int day(int year, int month);
int main()
{
	int year,month,days;
	scanf("%d%d",&year,&month);
	days = day(year,month);
	printf("%d.%d has %d days",year,month,days);
}

int day(year,month)
{
	int i,days,n;
	days=0; 
	int a[7] = {1, 3, 5, 7, 8, 10, 12};
	if(year%400==0)
        {
		n=1;}
    else
    {
        if(year%4==0&&year%100!=0)
        	{
			n=1;}
        else
            {
			n=0;}
    }
    if(n==1&&month==2) 
		{
		days =29;}
    else if (n==0&&month==2) 
		{
		days =28;}
    else if (month!=2){
        for(i=0;i<7;i++){
			if (month==a[i])
			    days=31;
	}
	if(days==0)
		days = 30;
	}
       return days;
}

