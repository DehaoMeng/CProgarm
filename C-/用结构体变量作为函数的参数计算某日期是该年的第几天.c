//author: ê»ê»·´Ë¼
//time£º
/*

*/
#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1
struct today
{
	int year;
	int month;
	int day;
};

int panduan_if_run(int year)
{
	if(year%400==0)
        return -1;
    else
    {
        if(year%4==0&&year%100!=0)
            return -1;
        else
            return 0;
    }
}

int sum(struct today st,int days)
{
	int a[7] = {1,3,5,7,8,10,12};
	int i,s=0,j;
	for(j = 1; j < st.month;j++)
	{
		if(2 == j && 366 == days)
		{
			s += 29;
			continue;
		}
		else if(2 == j && 365 == days)
		{
			s += 28;
			continue;
		}
		for(i = 0;i < 7;i++)
		{
			if(j == a[i])
				{
					s += 31;
					break;
				}
		}
		if(7 == i)
		{
			s += 30;
		}
	}
	s += st.day;
	return s;
}

int main(void)
{
	struct today st;
	int day,days;
	scanf("%d,%d,%d",&st.year,&st.month,&st.day);
	if(panduan_if_run(st.year))		
	{
		days = 366;
		day = sum(st,days);
			 
	}
	else
	{
		days = 365;	
		day = sum(st,days);
	}
	printf("It is the %dth day in %d",day,st.year);
	return 0;
}

