/* Objective:To create multiple stack and perform PUSH and POP operations on each Stack.
  Sagar.N
  18BBTCS107
  Function used:void push(),void pop,void display(),void main()
  Date:12/09/2019
OUTPUT:
1:push
2:pop
3:display
4:exit
1
enter a number: 
23
 enter 1 to push to stack 1 or enter 2 for stack 2:
1
1:push
2:pop
3:display
4:exit
1
enter a number: 
78
 enter 1 to push to stack 1 or enter 2 for stack 2:
2
1:push
2:pop
3:display
4:exit
3
elements of stack 1 are 23
elements of stack 2 are 78
1:push
2:pop
3:display
4:exit
2 
press 1 to pop from stack 1 or 2 for stack
1
1:push
2:pop
3:display
4:exit
4
exiting from program
*/
#include<stdio.h>
#define max 10 //defining maximum stack range
int top1,top2,arr[max],b1,b2,n;
void push(); //push function
void pop(); //pop function
void display(); //display function
void main()
{
	int  ch;
	top1=b1=-1,top2=b2=max-1/2,n;
	do
	{
		printf("\n 1:push\n 2:pop\n 3:display\n 4:exit\n");
		scanf("%d", &ch);
		switch(ch)
		{
			case 1:push();
			break;
			case 2:pop();         //giving choice to end user either to push,pop,display or exit
			break;
			case 3:display();
			break;
			case 4:printf("exiting from program\n");
			break;
			default:printf("wrong choice\n");
			break;
		}
	}while(ch!=4);
}
void push()
{
	int x,ch;
	printf("enter a number\n");
	scanf("%d", &x);
	printf("\n press 1 to push in strack1 or press 2 for stack 2:\n");
	scanf("%d", &ch);
	if(ch==1)
	{
		if(top1==b2) //checking whether stack is full
		{
			printf("stack overflow\n");
			return;
		}
		else
		arr[++top1]=x; //incrementing stack 1
	}
	if(ch==2)
	{
		if(top2==n==1) //checking whether stack is full
		{
			printf("stack overflow\n");
			return;
		}
		else
		arr[++top1]=x; //incrementing stack 2
	}
}
void pop()
{
	int y,ch;
	printf("\n press 1 to pop from stack 1 or press 2 for stack2");
	scanf("%d",&ch);
	if(ch==1)
	{
		if(top1==-1)
		{
			printf("stack underflow\n");  //checking whether stack is empty
			return; 
		}
		y=arr[top1];
		arr[top1--]=0; //decrementing stack 1
		}
	else
	{
		if(top2==b2)
		{
			printf("stack underflow\n");  //checking whether stack is empty
			return;
		}
		y=arr[top2];
		arr[top2--];  //decrementing stack 2
	}
	printf("\n %d element is successfully poped from stack\n",y);
	return;
}
void display()
{
	int i;
	if(top1==-1) //checking whether stack is empty
	{
		printf("stack 1 is empty\n");
	}
	else
	{
		printf("elements of stack 1 are: \n");
		for(i=0;i<=top1;i++)
		{
			printf("%d\n",arr[i]);
		}
	}
	if(top2==b2) //checking whether stack is empty
	{
		printf("stack 2 is empty\n");
	}
	else
	{
		printf("elements of stack 2 are : \n");
	}
	return;
}

		

