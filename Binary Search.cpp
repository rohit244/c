#include<stdio.h>
main()
{
	int i,n,item,start,end,mid,a[20];
	printf("Enter The Number Of Elements :");
	scanf("%d",&n);
	printf("Enter The Elements :");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Enter The Value You Want To Search");
	scanf("%d",&item);
	start=0;
	end=n-1;
	mid=(start+end)/2;
	while(start<=end)
	{
		if(a[mid]=item)
		{
		printf("The Element Found In : %d th Position",mid);
		break;
	    }
	    else if(item<a[mid])
	    {
	    	end=mid-1;
		}
		else
		{
			start=mid+1;
		}
	}
	if(start>end)
	printf("The elemet Is Not Present In The array");
}
