#include<stdio.h>
#include<string.h>
#define MAX 50
int top=-1;
char stack[MAX];
void push(char);
char pop();
main()
{
	char str[20];int i;
	printf("Enter The String \n");
	gets(str);
	for(i=0;i<strlen(str);i++)
	push(str[i]);
	for(i=0;i<strlen(str);i++)
	str[i]=pop();
	printf("Reversed string \n");
	puts(str);
}
void push(char item)
{
if(top==(MAX-1))
printf("Stack OVERFLOWING");
else
stack[++top]=item;
}
char pop()
{
if(top==-1)
printf("Stack Underflow");
else
return stack[top--];
}
