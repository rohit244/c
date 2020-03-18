#include<stdio.h>
void fibo(int)
void main()
{
	int a;
	printf("Enter The Range :");
	scanf("%d",&a);
	fibo(a);
}
void fibo(int x)
{
	int c=0;i=0;j=1;
	printf("%d\t %d\t",&i,&j);\
	while(c<x)
	{
		c=i+j;
		if(c<x)
		{
			printf("%d\t",c);
			i=j;
			j=c;
		}
	}
}
