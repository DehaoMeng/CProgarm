//author: �껷�˼
//time��
/*
�����ꡢ�¡��գ���������Ǹ���ĵڼ��졣����������������ꡢ�¡��գ�Ȼ��������������Ϊ�����������Զ���ĺ�������������Ǹ���ĵڼ��졣

��ʾ�����Զ��������Ӻ������ֱ�ʱ�����������Ӻ������ж��Ƿ�Ϊ������Ӻ�����
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

