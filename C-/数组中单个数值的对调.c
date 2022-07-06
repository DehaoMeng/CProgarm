//author: 昊昊反思
//time：
/*

*/
#include <stdio.h>
void input(int *s, int n);   //定义输入函数
void sort(int *s, int n);    //定义排序函数
void print(int *s, int n);   //定义输出函数
int main()
{
    int n[10], *p=n;
    input(p, 10);            //调用输入函数
    sort(p, 10);             //调用排序函数
    print(p, 10);            //调用输出函数
    return 0;
}
//输入函数
void input(int *s, int n)
{
    int *m;
    for (m=s; m<s+n;m++)
	{
		scanf("%d", m);
	}
}
//排序函数
void sort(int *s, int n)
{
    int *i, *j, *min, *max, t;
    for (i=s, min=i; i<s+n; i++)
    {
        for (j=i+1; j<s+n;j++)
		{
			*min>*j ? min=j : j;
		}
	}
    t=*min, *min=*s, *s=t;
    for (i=s+1, max=i; i<s+n; i++)
        {
			for (j=i+1; j<s+n; j++)
			{
			*max<*j ? max=j : j;
			}
		}
	t=*max, *max=*(s+n-1), *(s+n-1)=t;
}
//输出函数
void print(int *s, int n)
{
    int *i;
    for (i=s; i<s+n; i++)
    {
    	printf("%d ", *i);
	}
    printf("\n");
}
