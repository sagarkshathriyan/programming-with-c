/* Objective:To Write aprogram that will be evaluate postfix expression using stack
  Sagar.N
  18BBTCS107
  Function used:void push(),void pop,void main()
  Date:19/09/2019
  OUTPut:
	enter the postfix expression:45+
	given postfix expression: 45*
	result after evaluation: 9
*/
#define size 50 //declaring maximum stack size
#include<ctype.h>
#include<stdio.h>
int s[size]; //declaring stack
int top=-1;
int push(int elem) //push operation
{
	s[++top]=elem;
}
int pop()  //pop operation
{
	return(s[top--]);
}
void main()
{
	char pofx[50],ch;
	int i=0,op1,op2;
	printf("\n enter the postfix expression:");
	scanf("%s",pofx);
	while((ch=pofx[i++])!='\0') //incrementing postfix array
	{
		if(isdigit(ch)) push(ch-'0');
		else
	{
		op2=pop(); //poping option2
		op1=pop(); //poping option1
		switch(ch) //switch case
		{
			case '+' : push(op1+op2); break; //for addition
			case '-' : push(op1-op2); break; //for subtraction
			case '*' : push(op1*op2); break; //for multiplication
			case '/' : push(op1/op2); break; //for division
		}
	}
	}
printf("\n given post fix  expression: %s \n",pofx);
printf("\n result after evaluation: %d \n",s[top]);
}

