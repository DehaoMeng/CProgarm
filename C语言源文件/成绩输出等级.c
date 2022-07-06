//author:ÃÏµÂê»
//Ê±¼ä£º20/10/21 11:14
//
#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1
main()
{
	float score;
	int scored;
	scanf("%f",&score);
	scored = score/10;
	switch(scored) 
	{
		case 10: printf("score=%.1f, grade=A",score);break;
		case 9:	printf("score=%.1f, grade=A",score);break;
		case 8: printf("score=%.1f, grade=B",score);break;
		case 7: printf("score=%.1f, grade=C",score);break;
		case 6: printf("score=%.1f, grade=D",score);break;
		default: printf("score=%.1f, grade=E",score);	break;
	}
	return 0;
}

