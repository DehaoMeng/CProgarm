//author:ÃÏµÂê»
//Ê±¼ä£º24/10/21 17:58
//
#include<stdio.h>
#define N 10000
#define _CRT_SECURE_NO_WARNINGS 1
float bonus(float I,int x);
main()
{
	float I,prince;
	scanf("%f",&I); 
	if(I <= 10 * N){
		prince = bonus(I,0);
		printf("%.2f",prince);}
	else if (I > 10 * N && I <= 20 * N){
		prince = bonus(I,10) + bonus(10 * N,0);
		printf("%.2f",prince);
	}
	else if (I > 20 * N && I <= 40 * N){
		prince = bonus(I,20) + bonus(20 * N,10) + bonus(10 * N,0);
		printf("%.2f",prince);
	}
	else if (I > 40 * N && I <= 60 * N) {
		prince = bonus(40 * N,20) + bonus(20 * N,10) + bonus(10 * N,0) + bonus(I,40);
		printf("%.2f",prince);
	}
	else if (I > 60 * N && I <=100*N){
		prince = bonus(40 * N,20) + bonus(20 * N,10) + bonus(10 * N,0) + bonus(60 * N,40) + bonus(I,100);
		printf("%.2f",prince);
	}
	else if(I > 100*N){
		prince = bonus(40 * N,20) + bonus(20 * N,10) + bonus(10 * N,0) + bonus(60 * N,40) + bonus(100 * N,60) + bonus(I,100);
		printf("%.2f",prince);
	}
}
float bonus(float I, int x)
{
	float prince1;
	switch(x){
		case 100: prince1 = (I-100*N)*0.01;break;
		case 60 : prince1 = (I-60*N)*0.015;break;
		case 40 : prince1 = (I-40*N)*0.03;break;
		case 20 : prince1 = (I-20*N)*0.05;break;
		case 10 : prince1 = (I-10*N)*0.075;break;
		default : prince1 = I*0.1;break;
	}
	return prince1;
}
