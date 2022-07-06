#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define VertexMax 20 
#define MaxInt 32767 

typedef char VertexType; 

typedef struct
{
	VertexType Vertex[VertexMax]; 
	int AdjMatrix[VertexMax][VertexMax];
	int vexnum,arcnum;
}MGraph;

int LocateVex(MGraph *G,VertexType v)
{
	int i;
	
	for(i=0;i<G->vexnum;i++)
	{
		if(v==G->Vertex[i])
		{
			return i; 
		} 
	 } 
	 
	 printf("No Such Vertex!\n");
	 return -1;
}

void CreateDN(MGraph *G) 
{
	int i,j;
	printf("���붥������ͱ�����\n");
	printf("������ n="); 
	scanf("%d",&G->vexnum);
	printf("��  �� e="); 
	scanf("%d",&G->arcnum);
 
	printf("���붥��Ԫ��(����ո����)��");
	scanf("%s",G->Vertex);
	printf("\n");

	for(i=0;i<G->vexnum;i++) 
	 for(j=0;j<G->vexnum;j++)
	    {
	    	G->AdjMatrix[i][j]=MaxInt;
		}
	 int n,m;
	 VertexType v1,v2;
	 int w; 
	 
	 printf("����·����·�����ȣ�\n");
	 for(i=0;i<G->arcnum;i++)
	 {
	 	printf("�����%d��·����Ϣ��",i+1);
	 	scanf(" %c%c,%d",&v1,&v2,&w);
	 	n=LocateVex(G,v1);
	 	m=LocateVex(G,v2); 
	 	
	 	if(n==-1||m==-1)
		 {
		 	printf("NO This Vertex!\n");
		 	return;
		  } 
	
	   G->AdjMatrix[n][m]=w;
	 }
}

void print(MGraph G)
{
	int i,j;
	printf("\n-----------------------------------------------");
	printf("\n �ڽӾ���\n\n"); 
		
		printf("\t ");
		for(i=0;i<G.vexnum;i++)
		printf("\t%c",G.Vertex[i]);
		printf("\n");
		 
		for(i=0;i<G.vexnum;i++)
	   {
	   	  printf("\t%c",G.Vertex[i]);
	   	  
		  for(j=0;j<G.vexnum;j++)
	    {
	    	
	    	if(G.AdjMatrix[i][j]==MaxInt)
	 	    printf("\t��");
	 	    else printf("\t%d",G.AdjMatrix[i][j]);
	    }
	      printf("\n");
	   }
	printf("\n-----------------------------------------------\n"); 
}

int dist[VertexMax][VertexMax];
VertexType path[VertexMax][VertexMax][VertexMax];  

char *NewPath(char temp1[VertexMax],char temp2[VertexMax])
{
	int i=0;
	static char ch1[VertexMax],ch2[VertexMax];
	
	for(i=0;i<VertexMax;i++)
	{
		ch1[i]=temp1[i];
		ch2[i]=temp2[i]; 
	}
	i=0;
	
    while(ch1[i]!='\0')
    {
    	i++;
	}
	
	if(ch1[i-1]!=ch2[0])
	{
		strcpy(&ch1[i],&ch2[0]);
	}
	else if(ch1[i-1]==ch2[0])
	{
		strcpy(&ch1[i-1],&ch2[0]);
	}
	
   return ch1;
}

void ShortestPath_Floyd(MGraph G)
{
	int i,j,k;
	char temp1[2]="0",temp2[2]="0";
	
	for(i=0;i<G.vexnum;i++)
	{
		for(j=0;j<G.vexnum;j++)
		{
			dist[i][j]=G.AdjMatrix[i][j];
			
			if(dist[i][j]!=MaxInt)
		            {
		              	temp1[0]=G.Vertex[i];
		              	temp2[0]=G.Vertex[j];
		              	strcpy(path[i][j],NewPath(temp1,temp2));
					}
			else strcpy(path[i][j],"0");
		}
	}
	
	for(k=0;k<G.vexnum;k++)
	 for(i=0;i<G.vexnum;i++)
	  for(j=0;j<G.vexnum;j++)
	   {
	   	    if(dist[i][j]>dist[i][k]+dist[k][j])
	   	    {
	   	    	dist[i][j]=dist[i][k]+dist[k][j];
	   	    	strcpy(path[i][j],NewPath(path[i][k],path[k][j]));
			} 
       }
}	  


void DisplayPath(MGraph G)
{
	
	int i,j,k;
	
	printf("Dist:\n");
	for(i=0;i<G.vexnum;i++)
	{
		for(j=0;j<G.vexnum;j++)
		{
			if(dist[i][j]==MaxInt)
			{
				printf("\t��");
			}
			else printf("\t%d",dist[i][j]);
		}
		printf("\n");
	}
	
	printf("Path:\n");
	for(i=0;i<G.vexnum;i++)
	{
		for(j=0;j<G.vexnum;j++)
		{
			printf("\t%s",path[i][j]); 
		}
		printf("\n");
	}
	printf("\n"); 
	
	for(i=0;i<G.vexnum;i++)
	{
		for(j=0;j<G.vexnum;j++)
		{
			printf("%c��%c�����·��:",G.Vertex[i],G.Vertex[j]);
			if(path[i][j][0]=='0')
			{
				printf("���ɴ�\n\n"); 
			}
			else
			{
				printf("%s",path[i][j]);
				printf(" (%d)\n\n",dist[i][j]);
			} 
			
		}
	}
}

int main() 
{
	MGraph G;
	VertexType start;

	CreateDN(&G);
	print(G);
	ShortestPath_Floyd(G);
    DisplayPath(G);
	return 0;
}


