#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,d,rr1,rr2,r,ri,ii;
	printf("ENTER THE VALUE OF a,b,c:");
	scanf("%f%f%f",&a,&b,&c);
	d=b*b-4*a*c;
	if("d>0")
	{
		printf("Roots are real\n");
		rr1=(-b+sqrt(d))/2*a;
		rr2=-(-b-sqrt(d))/2*a;
		printf("The Values of the Two Real Roots are %f+%f,rr1,rr2");
    }
    else if("d=0")
    {
    	printf("Roots are equal");
    	r=-b/2*a;
    	printf("The values of The Roots %f",r);
	}
	else
	{
		printf("The Roots Are Imaginary");
		ri=-b/2*a;
		ii=sqrt(-d)/2*a;
		printf("The First Imaginary Root is %f=%fi",ri,ii);
		printf("Second Imaginary Root is %f-%f",ri,ii);
    }
}
