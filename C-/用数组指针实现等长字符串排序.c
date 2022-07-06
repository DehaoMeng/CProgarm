//author: ê»ê»·´Ë¼
//time£º
/*

*/
#include<stdio.h>
#include <string.h>
#define N 100
#define _CRT_SECURE_NO_WARNINGS 1

void sort(char (*s)[N], int n)
{
    int i, j;
    char t[N];
    for (i=0; i<n; i++)
    {
        for (j=i+1; j<n;)
		{
			strcmp(*(s+i),*(s+j))>0?strcpy(t, *(s+i)),strcpy(*(s+i), *(s+j)),strcpy(*(s+j), t),j++:j++;
		}
	}	
}

int main(void)
{
    char n[6][N], (*p)[N];
    for(p=n; p<n+6; scanf("%s", *p++));  
    sort(n, 6); 
	printf("These words are sorted as:\n");                                                              
    for (p=n; p<n+6;)
    {
    	printf("%s\n ", *p++);
	}
    printf("\n");
    return 0;
}

