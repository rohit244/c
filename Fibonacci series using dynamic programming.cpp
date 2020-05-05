#include<stdio.h>
main()
{
	int f[50];
	 int i;
	int n;
	f[0]=0;
	f[1]=1;
	printf("Enter The Number of Steps in the Fibonacci series");
	scanf("%d",&n);
	if(n<=1)
	printf("%d",n);
	else
	{
		for(i=2;i<=n;i++)
		{
			f[i]= f[i-2]+f[i-1];
			
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d",f[i]);
	}
}
