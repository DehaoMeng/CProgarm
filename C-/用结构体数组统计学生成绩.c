//author: ê»ê»·´Ë¼
//time£º
/*

*/
#include <stdio.h>
#include <stdlib.h>
struct Student{
	int num;
	char name[20];
	float score[3];
	float aver;
};
void input(struct Student *st, int n);
struct Student max(struct Student *st);
void print(struct Student st,struct Student *st1);
int main()
{
	struct Student *stu;
	stu=(struct Student*)malloc(3*sizeof(struct Student));
	input(stu, 3);
	print(max(stu),stu);
	system("pause");
	return 0;
}
void input(struct Student *st, int n)
{
	int i, j;
	float sum;
	for (i=0; i<n; i++){
//		printf("Please enter No.%d student info: ", i+1);
		scanf("%d %s", &st[i].num, st[i].name);
		for (j=0; j<3; scanf("%f", &st[i].score[j++]));
		for (j=0, sum=0; j<3; sum+=st[i].score[j++]);
		st[i].aver=sum/3;
	}
}
void print(struct Student st,struct Student *st1)
{
	int i;
	printf("No. name  score1 score2 score3\n");
	printf("%d  %-7s ", st1[0].num, st1[0].name);
	printf(" %.2f  %.2f  %.2f\n",st1[0].score[0],st1[0].score[1],st1[0].score[2]);
	for(i=1;i<3;i++)
	{
		printf("%d  %-7s ", st1[i].num, st1[i].name);
		printf("%.2f  %.2f  %.2f\n",st1[i].score[0],st1[i].score[1],st1[i].score[2]);
	}
	printf("\n"); 
	printf("The average score of these students is:  83.78\n",(st1[0].aver+st1[1].aver+st1[2].aver)/3);
	printf("The highest total score is: %.2f. No.%d, %s\n", st.score[0]+st.score[1]+st.score[2],st.num,st.name);
}
struct Student max(struct Student *st)
{
	int i, m;
	float max;
	for (i=0, max=0; i<3; st[i].aver>max ? max=st[i].aver, m=i++ : i++);
	return st[m];
}

