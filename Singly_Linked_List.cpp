#include<stdio.h>
#include<stdlib.h>
struct node{
int info;
struct node *next;}*start;
void create();
void ins_beg();
void ins_intermediate();
void ins_rear();
void del_beg();
void del_intermediate();
void del_rear();
void disp();
int main()
{
	int n,i,ch;
	printf("Choices: 1. CREATE \n 2. INSERTION AT BEGINING \n 3. INSERTION AT INTERMEDIATE POSITION \n 4.INSERTION AT END POSITION \n 5.DELETE AT BEGINING \n 6. DELETE AT INTERMEDIATE POSITION \n 7. DELETE AT END POSITION \n 8. DISPLAY \n 9. EXIT");
	while(1){
		printf("ENTER YOUR CHOICES");
		scanf("%d",&ch);
		switch(ch)
	{
		case 1 : printf("Enter The Number of Nodes To Be Created");
				 scanf("%d",&n);
				 for(i=0;i<n;i++)
				 create();
				 break;
		case 2 : ins_beg(); break;
		case 3 : ins_intermediate(); break;
		case 4 : ins_rear(); break;
		case 5 : del_beg(); break;
		case 6 : del_intermediate(); break;
		case 7 : del_rear(); break;
		case 8 : disp(); break;
		case 9 : return ;
		default : printf("Please Enter A Valid choice");		 
	         }
    }
}
void create()
{
	struct node *temp,*p;
	temp=(struct node *)malloc(sizeof(node));
	printf("Enter What To Insert");
	scanf("%d",&temp->info);
	temp->next=NULL;
	if(start==NULL)
	     start=temp;
	else{
		p=start;
		while(p->next!=NULL)
		p=p->next;
		p->next=temp;
	}
}
void disp()
{
	struct node *p;
	if(start==NULL)
	printf("The List Is Empty");
	else
	{
		p=start;
		printf("\nThe Elements In TEh Lists Are : \n");
		while(p->next!=NULL)
		{
			printf("%d\t",p->info);
			p=p->next;
		}
		printf("%d",p->info);
	}
	
}
void ins_beg()
{
	
}
void ins_intermediate()
{
	
}
void ins_rear()
{
	
}
void del_beg()
{
	
}
void del_intermediate()
{
	
}
void del_rear()
{
	
}
