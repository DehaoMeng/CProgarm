//author:ÃÏµÂê»
//Ê±¼ä£º
//
#include<stdio.h>
#include<math.h>
#define N 10

#define _CRT_SECURE_NO_WARNINGS 1
int main()
{
	int n,a,sum,i,s;
	a = 2;
	sum = 0;
	scanf("%d",&n);
	for(i=0;i<n;i++){			//n = 1 i = 0 => s = 2 => sum = 2   
		s = 2 * pow(N,i);		//n = 2 i = 1 => s = 20 => a = a + s = 22 => sum =2 + 22 = 24
		if(s != 2)				//n = 3 i = 2 => s = 200 => a = a + s = 222 => sum = 2 + 22 + 222 = 246
			a += s;				//n = 4 i = 3 => s = 2000 => a = a + s = 2222 => sum = 2 + 22 + 222 + 2222 = 2468
 		sum += a;				//n = 5 i = 4 => s = 20000 => a = a + s = 22222 => sum = 2 + 22 + 222 + 2222 + 22222 = 24690 
	} 							//n = 6 i = 5 => s = 200000 => a = a + s = 222222 => sum = 2 + 22 + 222 + 2222 + 22222 + 222222 = 246912
	printf("sum=%d",sum);
	return 0;
}

