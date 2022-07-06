//author: ê»ê»·´Ë¼
//time£º
/*

*/
#include<stdio.h>
#include <stdlib.h>
#define N 100
#define _CRT_SECURE_NO_WARNINGS 1
struct student
{
	char name[N];
	float score[4];
	int number;
};

void sorted(struct student arr[])
{
	struct student temp;
	int i,j;
	for(i = 0;i < 3; i++)
	{
		for( j = 0; j <3; j++)
		{
			if (arr[j].score[3]>arr[j+1].score[3])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}

int main(void)
{
	struct student a[4];
	int i,j;
	char temp[30];
	for(i=0;i<4;i++)
	{
		scanf("%s",&a[i].name);
		scanf("%d",&a[i].number);
		for(j=0;j<3;j++)
			scanf("%f",&a[i].score[j]);
	}
//	for (i=0;i<4;i++)
//	{
//		printf("|%10s|%8d|%7.2f|%7.2f|%7.2f|%7.2f|\n",a[i].name,a[i].number,a[i].score[0],a[i].score[1],a[i].score[2],a[i].score[3]);
////		printf("----------------------------------------------------\n");
//	}
	for(i=0;i<4;i++)
	{
		a[i].score[3] = (a[i].score[0]+a[i].score[1]+a[i].score[2])/3;
	}
	sorted(a);
	printf("*******************TABLE*******************\n");
	printf("----------------------------------------------------\n");
	printf("|      Name |  Number | English  | Mathema | physics  | average  |\n\n");
	printf("----------------------------------------------------\n");
	for (i=0;i<4;i++)
	{
		printf("|%10s|%8d|%7.2f|%7.2f|%7.2f|%7.2f|\n",a[i].name,a[i].number,a[i].score[0],a[i].score[1],a[i].score[2],a[i].score[3]);
		printf("----------------------------------------------------\n");
	}
	float row[4]={0,0,0,0};
	for( i = 0; i < 4; i++)
	{
		for( j = 0; j < 4; j++)
		{
			row[i] = row[i] + a[j].score[i];
		}
		row[i] = row[i]/4;
	}
	printf(" |%17c",' ');
	for(i=0;i<4;i++)
	{
		printf( "|%7.2f|" , row[i] ) ;
	}
	
	return 0;
}

