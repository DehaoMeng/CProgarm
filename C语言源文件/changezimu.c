//author:孟德昊
//时间：10/10/21 18:56
//大小写转换 Ascii码 
#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1
main()
{
    char c1,c2;
    c1=97;
    printf("%c %c\n",c1,c1+1); 
    c2='a';
    c2=c2-32;
    printf("%c %c\n",c2,c2+1);
}

