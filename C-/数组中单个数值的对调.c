//author: �껷�˼
//time��
/*

*/
#include <stdio.h>
void input(int *s, int n);   //�������뺯��
void sort(int *s, int n);    //����������
void print(int *s, int n);   //�����������
int main()
{
    int n[10], *p=n;
    input(p, 10);            //�������뺯��
    sort(p, 10);             //����������
    print(p, 10);            //�����������
    return 0;
}
//���뺯��
void input(int *s, int n)
{
    int *m;
    for (m=s; m<s+n;m++)
	{
		scanf("%d", m);
	}
}
//������
void sort(int *s, int n)
{
    int *i, *j, *min, *max, t;
    for (i=s, min=i; i<s+n; i++)
    {
        for (j=i+1; j<s+n;j++)
		{
			*min>*j ? min=j : j;
		}
	}
    t=*min, *min=*s, *s=t;
    for (i=s+1, max=i; i<s+n; i++)
        {
			for (j=i+1; j<s+n; j++)
			{
			*max<*j ? max=j : j;
			}
		}
	t=*max, *max=*(s+n-1), *(s+n-1)=t;
}
//�������
void print(int *s, int n)
{
    int *i;
    for (i=s; i<s+n; i++)
    {
    	printf("%d ", *i);
	}
    printf("\n");
}
