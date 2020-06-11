#include<stdio.h>
#define INF 999
int d[20];
int Que[20],f=-1,r=-1;
void Queinsert(int x)
{if(f==-1 || f<r)
	{r=0; f=-1;}
	Que[++f]=x;
}

void Quedelete(int x)
{int i,j;
 for(i=r;i<=f;i++)
 {if(Que[i]==x)
  break;
 }
 for(j=i;j<=f;j++)
 {Que[j]=Que[j+1];
 }
 f--;
}

int Queempty(void)
{if(f==-1 || f<r)
	return 1;
	return 0;	
}

int PresentinQue(int x)
{int i;
 for(i=r;i<=f;i++)
	{
		if(Que[i]==x)
		return 1;
	}
	return 0;
}

int* Dijkstra(int s,int v,int G[][20])
{int i,j,k,min;
 d[s]=0;
 for(i=0;i<v;i++)
 {if(i!=s)
  d[i]=999;
  Queinsert(i);
 }
 while(!Queempty())
 {min=INF;
  for(i=0;i<v;i++)
  {if(min>d[i] && PresentinQue(i))
  {min=d[i];
   k=i;}
  }
 Quedelete(k);
 for(i=0;i<v;i++)
 {if(G[k][i]!=0)
 {if(d[k]+G[k][i] < d[i])
 {d[i] = d[k]+G[k][i];}
 }
 }
 }
 return d;
}

int main()
{int i,j,v,e,m,n,c,s,G[20][20];
 int *d;
 printf("Enter the total number of vertices and edges : "); 
 scanf("%d%d",&v,&e);
 for(i=0;i<v;i++)
 {for(j=0;j<v;j++)
 {G[i][j]=0;}
 }
 for(i=0;i<e;i++)
 {printf("For edge: %d, Enter the Starting Vertex, Ending Vertex and the Cost of the edge : ",i+1);
  scanf("%d%d%d",&m,&n,&c); G[m-1][n-1]=c;}
 printf("Starting vertex : "); 
 scanf("%d",&s);
 d = Dijkstra(s-1,v,G);
 for(i=0;i<v;i++)
 {if(i+1!=s && d[i]!=INF)
 {printf("\nMin. cost from vertex %d to %d is %d.\n",s,i+1,d[i]);}
 }
 printf("\n");
}
