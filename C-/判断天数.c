//author: 昊昊反思
//time：
/*
给出年、月、日，计算该日是该年的第几天。在主函数中输入的年、月、日，然后以这三个数据为参数，调用自定义的函数，计算该日是该年的第几天。

提示：可以定义两个子函数，分别时计算天数的子函数和判断是否为闰年的子函数。
*/
#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1
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

void panduantianshu(int month,int day,int days)
{
	int a[7] = {1,3,5,7,8,10,12};
	int i,s=0,j;
	for(j = 1; j < month;j++)
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
	s += day;
	printf("%d",s);
}


int main()
{
	int year,month,day,days;
	scanf("%d,%d,%d",&year,&month,&day);
	if(panduan_if_run(year))		
	{
		days = 366;
		panduantianshu(month,day,days);
			 
	}
	else
	{
		days = 365;	
		panduantianshu(month,day,days);
	}
	return 0;
}

