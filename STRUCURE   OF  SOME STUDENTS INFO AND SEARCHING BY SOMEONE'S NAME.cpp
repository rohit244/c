#include<stdio.h>
#include<string.h>
struct{
int r,m;char n[30];
}
s[100];
main()
{
	int i,a;char n[20];
	printf("Enter The Number Of students");
	scanf("%d",&a);
	for(i=0;i<a;i++)
	{
		printf("Enter The Roll Number Of The Student :%d",i+1);
		scanf("%d",&s[i].r);
	 _ _fpurge(stdin);
		printf("Enter The NAme Of the Student");
		gets(s[i].n);
		printf("Enter The Marks OF The student");
		scanf("%d",&s[i].m);
	}
	printf("Enter The Name to be Searched :");
	__fpurge(stdin);
	gets(t);
	for(i=0;i<a;i++)
	{
		if(!strcmp(s[i].n,t))
		{
			printf("Roll Of the studednt : %d\n",s[i].r);
			printf("Enter THE Name OF The student ,%s\n",s[i].n);
			printf("Enter The Marks Of The Student : ,%d\n",s[i].m);
		}
	}
}
