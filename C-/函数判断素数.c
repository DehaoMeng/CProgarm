//author: �껷�˼
//time��20/11/21 12:44
/*
дһ���ж��������Ӻ�����������������һ��������Ȼ����ø��Ӻ����ж�������Ƿ�Ϊ����������������������Ƿ�Ϊ��������Ϣ��
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

