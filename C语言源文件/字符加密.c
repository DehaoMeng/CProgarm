#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
 int main(){
	 char c1,c2,c3,c4,c5;
	 scanf("%c%c%c%c%c",&c1,&c2,&c3,&c4,&c5);
	 if ((c1>=65&&c1<=86)||(c1>=97&&c1<=118))
		 c1=c1+4;
	 else if ((c1>86&&c1<=90)||(c1>118&&c1<=122))
		 c1=c1+4-26;
	 if ((c2>=65&&c2<=86)||(c2>=97&&c2<=118))
		 c2=c2+4;
	 else  if ((c2>86&&c2<=90)||(c2>118&&c2<=122))
		 c2=c2+4-26;
	 if ((c3>=65&&c3<=86)||(c3>=97&&c3<=118))
		 c3=c3+4;
	 else  if((c3>86&&c3<=90)||(c3>118&&c3<=122))
		 c3=c3+4-26;
	 if ((c4>=65&&c4<=86)||(c4>=97&&c4<=118))
		 c4=c4+4;
	 else  if ((c4>86&&c4<=90)||(c4>118&&c4<=122))
		 c4=c4+4-26;
	  if (c4>90)
		  c4=c4;
	 if (c5>=65&&c5<=86||c5>=97&&c5<=118)
		 c5=c5+4;
	 else if ((c5>86&&c5<=90)||(c5>118&&c5<=122))
		 c5=c5+4-26;
	 printf("%c%c%c%c%c",c1,c2,c3,c4,c5);
	 system("pause");
	 return 0;
 }
