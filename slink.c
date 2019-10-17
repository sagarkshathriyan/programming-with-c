/*To write a program that perform insertion,deletion into from singly linked list
Name : Sagar.N
USN no: 18BBBTCS108
Function used:void create();void display();void insert_begin();void insert_end();void insert_pos();void delete_begin();void delete_end();void delete_pos();
Date:17/10/2019
Output:
*/
#include<stdio.h>
#include<stdlib.h>
void create();
void display();
void insert_begin();
void insert_end();
void insert_pos();
void delete_begin();
void delete_end();
void delete_pos();
struct node
{
	int data;
	struct node *next;
};
struct node *first=NULL;
int main()
{
	int choice;
	while(1)
	{
		printf("\n *** SINGLE LINKED LIST OPERATIONS ***\n");
		printf("\n    MENU   \n");
		printf("\n _____________________________________ \n");
		printf("\n 1.create \n");
		printf("\n 2.display \n");
		printf("\n 3.insert at begining \n");
		printf("\n 4.insert at the end \n");
		printf("\n 5.insert at specified position \n");
		printf("\n 6.delete from begining \n");
		printf("\n 7.delete from end  \n");
		printf("\n 8.delete from specified position  \n");
		printf("\n 9.exit \n");
		printf("\n ______________________________________ \n");
		printf("\n enter your choice: \n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: create();
				break;
			case 2: display();
				break;
			case 3: insert_begin();
				break;
			case 4: insert_end();
				break;
			case 5: insert_pos();
				break;
			case 6: delete_begin();
				break;
			case 7: delete_end();
				break;
			case 8: delete_pos();
				break;
			case 9: exit(0);
				break;
			default:printf("please enter a valid choice\n");
				break; 
				return 0 ;
		}
	}
}
void create()
{
	struct node *temp,*ptr;
	temp=(struct node*) malloc(sizeof(struct node));
	if(temp==NULL)
	{
		printf("\n Out OF memoryspace \n");
		exit(0);
	}
	printf("\n enter the data value for the node \n");
	scanf("%d",&temp->data);
	temp->next=NULL;
	if(first==NULL)
	{
		first=temp;
	}
	else
	{
		ptr=first;
		while(ptr->next!=NULL)
		{
			ptr=ptr->next;
		}
		ptr->next=temp;
	}
}
void display()
{
	struct node *ptr;
	if(first==NULL)
	{
		printf("\n  list is empty \n");
		return;
	}
	else
	{
		ptr=first;
		printf("\n the list elements are \n");
		while(ptr!=NULL)
		{
			printf("%d \t",ptr->data);
			ptr=ptr->next;
		}
	}
}
void insert_begin()
{
	struct node *temp;
	temp=(struct node*) malloc(sizeof(struct node));
	if(temp==NULL)
	{
		printf("\n Out OF memoryspace \n");
		return ;
	}
	printf("\n enter the data value for the node : \n");
	scanf("%d",&temp->data);
	temp->next=NULL;
	if(first==NULL)
	{
		first=temp;
	}
	else
	{
		temp->next=first;
		first=temp;
	}
}
void insert_end()
{
	struct node *temp,*ptr;
	temp=(struct node*) malloc(sizeof(struct node));
	if(temp==NULL)
	{
		printf("\n Out OF memoryspace \n");
		return ;
	}
	printf("\n enter the data value for the node : \n");
	scanf("%d",&temp->data);
	temp->next=NULL;
	if(first==NULL)
	{
		first=temp;
	}
	else
	{
		ptr=first;
		while(ptr->next!=NULL)
		{
			ptr=ptr->next;
		}
		ptr->next=temp;
	}
}
void insert_pos()
{
	struct node *ptr,*temp;
	int i,pos;
	temp=(struct node*) malloc(sizeof(struct node));
	if(temp==NULL)
	{
		printf("\n Out OF memoryspace \n");
		return ;
	}
	printf("\n enter theposition for new node to be inserted : \n");
	scanf("%d",&temp->data);
	temp->next=NULL;
	if(pos==0)
	{
		temp->next=first;
		first=temp;
	}
	else
	{
		for(i=0,ptr=first;i<pos-1;i++)
		{
			ptr=ptr->next;
			if(ptr=NULL)
			{
				printf("\n position not found:[handle with care ] \n");
				return;
			}
		}
	temp->next=ptr->next;
	ptr->next=temp;
	}
}
void delete_begin()
{
	struct node *ptr;
	if(ptr==NULL)
	{
		printf("\n  list is empty \n");
		return;
	}
	else
	{
		ptr=first;
		first=first->next;
		printf("\n the deleted element is: %d\t",ptr->data);
	}
}
void delete_end()
{
	struct node *temp,*ptr;
	if(first==NULL)
	{
		printf("\n  list is empty \n");
		exit(0);
	}
	else if(first->next==NULL)
	{
		ptr=first;
		first=NULL;
		printf("\n the deleted element is : %d \t",ptr->data);
		free(ptr);
	}
	else
	{
		ptr=first;
		while(ptr->next!=NULL)
		{
			temp=ptr;
			ptr=ptr->next;
		}
		temp->next=NULL;
		printf("\n the deleted element is : %d \t",ptr->data);
		free(ptr);
	}
}
void delete_pos()
{
	int i,pos;
	struct node *temp,*ptr;
	if(ptr==NULL)
	{
		printf("\n  list is empty \n");
		return;
	}
	else
	{
		printf("\n enter the position of node to be deleted:\t");
		scanf("%d",&pos);
		if(pos==0)
		{
			ptr=first;
			first=first->next;
			printf("\n the deleted element is : %d \t",ptr->data);
			free(ptr);
		}
		else
		{
			ptr=first;
			for(i=0;i<pos;i++)
			{
				temp=ptr;
				ptr=ptr->next;
				if(ptr=NULL)
				{
					printf("\n position not found:[handle with care ] \n");
					return;
				}
			}
			temp->next=ptr->next;
			printf("\n the deleted element is : %d \t",ptr->data);
			free(ptr);
		}
	}
}
			
		
		
		
	
