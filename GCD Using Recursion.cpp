#include<stdio.h>
int gcd(int,int);
int main()
{
	int a,b;
	printf("Enter The Two Digits :");
	scanf("%d%d",&a,&b);
	if(a>b)
	printf("GCD Of %d and %d is &d",a,b,gcd(a,b));
	else
	printf("GCD Of % and %d is %d",a,b,gcd(b,a));
}
int gcd(int x,int y)
{
	int r;
	r=x%y;
	y=r;
	r=x%y;
    return(y);
}
