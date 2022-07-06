//author: ê»ê»·´Ë¼
//time£º
/*

*/
#include<stdio.h>
#include<stdlib.h>
#define N 100
#define _CRT_SECURE_NO_WARNINGS 1
struct Student
{
	char num[N];
	char name[N];
	float score[3];
	float ave;
	char level[1];
};
void write(struct Student p1[3])
{
	int i;
	FILE *file;
	file = fopen("file2.txt","wb");
	for(i=0;i<3;i++)
	{
		fprintf(file,"%s %s %.1f %.1f %.1f %.1f %c\n\n",p1[i].num,p1[i].name,p1[i].score[0],p1[i].score[1],p1[i].score[2],p1[i].ave,p1[i].level[0]);
	}
	printf("write done file2.txt");
	fclose(file);
}
struct Student read(struct Student p1[3],FILE *file)
{
	int i;
	for(i=0;i<3;i++)
	{
	fscanf(file,"%s %s %f %f %f",p1[i].num,p1[i].name,&p1[i].score[0],&p1[i].score[1],&p1[i].score[2]);
	}
	return p1[3];
}
struct Student average(struct Student p1[3])
{
	int aver;
	int i;
	for(i=0;i<3;i++)
	{
		p1[i].ave = (p1[i].score[0]+p1[i].score[1]+p1[i].score[2])/3;
		aver = p1[i].ave/10;
		switch(aver)
		{
			case 9 || 10:
				p1[i].level[0] = 'A';break;
			case 8:
				p1[i].level[0] = 'B';break;
			case 7:
				p1[i].level[0] = 'C';break;
			case 6:
				p1[i].level[0] = 'D';break;
			default:
				p1[i].level[0] = 'E';break;
		}
	}
}
int main(void)
{
	struct Student p1[3];
	FILE *file;
	char fileout[N]="file1.txt";
	if((file=fopen(fileout,"rb"))==NULL)
	{
		printf("txt is not exist!\n");
		exit(0);
	}
	p1[3] = read(p1,file);
	p1[3] = average(p1);
	write(p1);
	fclose(file);
	return 0;
}

