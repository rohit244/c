#include<stdio.h>
#define MAX 7
int cq[MAX];
int front=-1,rear=-1;
void ins();
void del();
void disp();
main()
{
	printf("Choices Are : 1.Insert \n 2.Delete \n 3.Display \n");
	while(1)
	{
		int ch;
		printf("Enter Your Choice : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1 : ins();break;
			case 2 : del();break;
			case 3 : disp();break;
			default : printf("Enter right Choice Please");
		}
	}
}
void ins()
{
	int item;
	if((front==0 && rear==MAX-1)||(front==rear+1))
	{
	printf("Queue Is Full");
    }
	else
	{
		printf("Enter The Element :");
		scanf("%d",&item);
		if(front==-1)
		{
			front=0;
			rear=0;
		}
		else if(rear==MAX-1)
		{
			rear=0;
		}
		else
		{
			rear=rear+1;
		}
		cq[rear]=item;
	}
}
void del()
{
	if(front==-1)
	{
		printf("Queue Is Empty");
	}
		else
		{
			if(front==rear)
			{
			front=-1;
			rear=-1;
		    }
		    else if(front==MAX-1)
		    { printf("The Deleted Item is %d",cq[front]);
		      front=0;
			}
			else
			{
				printf("the Deleted Element Is %d",cq[front]);
				front=front+1;
		    }
		
	}
}
void disp()
{ int i;
	if(front==-1)
	{
		printf("The Queue is Empty");
	}
		else
		{
			if(front<=rear)
			{
				for(i=0;i<front;i++)
				{
					printf("_\t");
				}
				for(i=front;i<=rear;i++)
				{
				printf("%d\t",cq[i]);
			    }
			    for(i=rear+1;i<MAX;i++)
			    {
			    	printf("_\t");
				}
			}
			else
			{
				for(i=front;i<MAX;i++)
				{
					printf("%d\t",&cq[i]);
				}
				for(i=0;i<rear;i++)
				{
					printf("%d\t",cq[i]);
				}
				for(i=rear+1;i<front;i++)
				{
				printf("_\t");
			    }
			}
		}
	}

