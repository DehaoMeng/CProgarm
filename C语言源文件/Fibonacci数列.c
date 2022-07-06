//author:ÃÏµÂê»
//Ê±¼ä£º
//
#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
    int i, n, t1 = 1 , t2 = 1, nextTerm;
    n = 20;
    for (i = 1; i <= n; ++i)
    {
        printf("%10d", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        if(i%4==0) printf("\n");
    }
    return 0;
}
