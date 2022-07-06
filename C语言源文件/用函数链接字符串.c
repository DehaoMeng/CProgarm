#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
char str(char a[], char b[])
{
    int n1, n2;
     n1 = strlen(a);
     n2 = strlen(b);
     int i, j=0;
     for (i = n1; i < n1 + n2; i++) {
         a[i] = b[j];
         j++;
     }
     a[i] = '\0';
}
int main()
{
    char s1[20], s2[10];    
    gets(s1);
    gets(s2);
    str(s1, s2);
    puts(s1);
    system("pause");
    return 0;
}
