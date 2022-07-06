//author: ê»ê»·´Ë¼
//time£º
/*

*/
#include<stdio.h>
#define N 100
#include<string.h>
#define _CRT_SECURE_NO_WARNINGS 1
int main()
{
	char *p;
	int total;
	char a[N];
	int other=0,dight=0,lowwer=0,upper=0,space=0;
	p = a;
	gets(p);
	total = strlen(a);
//	printf("%d",total);
	for(;*p!='\0';p++)
	{
//		printf("%c\n",*p);
		if(*p<='Z'&&*p>='A')
		{
			upper++;
		}
		else if (*p<='z'&&*p>='a')
		{
			lowwer++;
		}
		else if(*p>='0'&&*p<='9')
		{
			dight++;
		}
		else if(*p == ' ')
		{
			space++;
		}
		else
		{
			other++;
		}
	}
	printf("total:%d  upper:%d  lower:%d  space:%d  digit:%d  other:%d",total,upper,lowwer,space,dight,other);
	return 0;
}

