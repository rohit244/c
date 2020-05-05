#include<stdio.h>

int p[10];  
int max(int,int);
void print(int[],int); 
int knapsack(int,int[],int[],int); 
void word(int); 
int knapsack(int n, int w[],int v[],int x){
   int i, j;
   int k[n+1][x+1];
   for (i = 0; i <= n; i++){
       for (j = 0; j <= x; j++){
           if (i==0 || j==0)
               k[i][j] = 0;
           else if (w[i-1] <= j)
                 k[i][j] = max(v[i-1] + k[i-1][j-w[i-1]],  k[i-1][j]);
           else
                 k[i][j] = k[i-1][j];}}
	i=n; j=x;
   	while(i>0&&j>0){
   		if(k[i][j]==k[i-1][j])
   			p[i-1]=0;
   		else{
   			p[i-1]=1; j-=w[i-1];
   		}
   	i--;
   }
   return k[n][x];
}
int max(int a, int b) { return (a > b)? a : b; }
void print(int p[],int n){
	int i,j,x=0;
	for(i=0;i<n;i++){ if(p[i]==1) x++; }
	if(x>1){
		for(i=0;i<n;i++){
			if(p[i]==1 && x>2){
				word(i+1);
				printf(","); 
				x--;
			}
			else if(p[i]==1){
				if(x==2){
					word(i+1);
					printf("and");
					x--;
				}
				else{
					word(i+1); 
					x--;
					break;
				}
			}
		}
	}
	else{
		for(i=0;i<n;i++){
			if(p[i]==1)
				word(i+1);
		}
	}
}
void word(int i){
	switch(i){
		case 1: printf("first"); break;
		case 2: printf("second"); break;
		case 3: printf("third"); break;
		case 4: printf("fourth"); break;
		case 5: printf("fifth"); break;
		case 6: printf("sixth"); break;
		case 7: printf("seventh"); break;
		default:break;
	}
}
int main(){	
	int w[10],v[10],x,n,i;
	printf(" Enter the Number of Items, n=");
	scanf("%d",&n);
	
	printf("\n Enter the Weight of Items, w[]="); 
	for(i=0;i<n;i++){
		scanf("%d",&w[i]);	
	}
	
	printf("Enter The Value of Items, v[]=");
	for(i=0;i<n;i++){
		scanf("%d",&v[i]);	
	}
	
	printf("\nCapacity of knapsack, M=");
	scanf("%d",&x);
	
	printf("\nMaximum attainable value of items=%d\n",knapsack(n,w,v,x));
	printf("by collecting "); print(p,n); printf(" item in the knapsack\n");
}

