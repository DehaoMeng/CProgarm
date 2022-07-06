//author: 昊昊反思
//time：20/11/21 12:44
/*
写一个判断素数的子函数，在主函数输入一个整数，然后调用该子函数判断输入的是否为素数，并在主函数中输出是否为素数的消息。
*/
#include<stdio.h>
#include<math.h>
#define _CRT_SECURE_NO_WARNINGS 1
void judge(int m){
	int i;
	for(i = 2;i < sqrt(m);i++){
		if(m % i == 0){
			printf("%d is not a prime.",m);
			break;
		}
		else continue;
	}
	if(i >= sqrt(m)){
		printf("%d is a prime.",m);
	}
}

int main(){
	int m;
	scanf("%d",&m);
	
	judge(m);
	
	return 0;
}

