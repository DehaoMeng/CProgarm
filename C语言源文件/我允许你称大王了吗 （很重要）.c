#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
int main()
{
    int p[100],i,j,t,m;
    scanf("%d", &m);
    for (i = 0; i < m; i++)
        p[i] = 1;   //把原始的猴子都定义为1
    t = -1;         
    for (i = 1; i <= m; i++)
    {
        j = 1;    
        while (j <= 3) 
        {
            t = (t + 1) % m;    //t=0,1,2,  3,4,5,  6,0,1  2,3,4
            if (p[t] == 1) 
                j++;            //j=1,2,3,4  ,1,2,3,4  1,2,3,4  1,2,3,4
        }
        p[t] = 0;                //t=2,5,1,4

    }
    printf("king:%d", t + 1); 
    system("pause");
    return 0;
}

