#include<stdio.h>
int fibo();
main()
{
	int a,i;
	printf("Enter The Range :");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	printf("&d\t",fibo(i));
}
int fibo(int x)
{
if(x==1)
return(0);
else if(x==2)
return(1);
else
return(fibo(x-1)+fibo(x-2));
}
