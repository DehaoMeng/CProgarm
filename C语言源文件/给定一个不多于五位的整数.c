//author:ÃÏµÂê»
//Ê±¼ä£º24/10/21 17:03
//
#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1
main()
{
	int num,a,b,c,d,e,f,i,place,place1;
	f = 10000;
	scanf("%d",&num);
	for (i=1;i<=5;i++){
		if(num/f==0)
			f/=10;
		else {
			place = 6-i;
			printf("place = %d\n",6-i);
			break;}
	}
	f = 10000;
	place1 = place;
	for(;place1>0;place1--){
		if(place1==5){
			a=num/f;
			printf("%d,",a);
	}
		if(place1==4){
			b=num/(f/10)%10;
			printf("%d,",b);
		}
		if(place1==3){
			c=num/(f/100)%10;
			printf("%d,",c);
		}
		if(place1==2){
			d=num/(f/1000)%10;
			printf("%d,",d);
		}
		if(place1==1){
			e=num/(f/10000)%10;
			printf("%d\n",e);
		}
	}
	printf("Inverted = ");
	for(i=1;i<=place;i++){
		if(i==1) printf("%d",e);
		else if(i==2) printf("%d",d); 
		else if(i==3) printf("%d",c);
		else if(i==4) printf("%d",b);
		else if(i==5) printf("%d",a);
	}
}

