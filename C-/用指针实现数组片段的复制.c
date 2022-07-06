//author: ê»ê»·´Ë¼
//time£º
/*

*/
#include <stdio.h>
#include<string.h>

void copy_m(char *p1, int m)
{
	char *temp=p1+m-2;
	printf("%s",temp++);
}

int main(void)
{
	char str1[10], *p1=str1;
	int m;
	scanf("%s",p1++);
	scanf("%d", &m); 
	copy_m(p1, m);
	return 0;
 } 


