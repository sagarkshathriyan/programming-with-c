/*To write a program that perform insertion,deletion into from singly linked list
Name : Sagar.N
USN no: 18BBBTCS107
Function used:
Date:14/11/2019
Output:
*/
#include<stdio.h>
#include<stdlib.h>
typedef struct BST
{
	int data;
	struct BST *lchild, *rchild;
}
node;
void insertion(node*,node*);
void inorder(node*);
void preorder(node*);
void postorder(node*);
void *search(node*,int,node**);
void main()
{
	int choice;
	char ans='N';
	int key;
	node *new_node,*root,*tmp,*parent;
	node *get_node();
	root=NULL;
	printf("\n PROGRAM FOR BINARY SEARCH TREE \n");
	do
	{
		printf("\n 1.CREATE \n");
		printf("\n 2.SEARCH \n");
		printf("\n 3.DISPLAY PRE_ORDER \n");
		printf("\n 4.EXIT(.|.) \n");
		printf("\n ENTER YOUR CHOICE : ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:do
				{
					new_node=get_node();
					printf("\n ENTER THE ELEMENT : ");
					scanf("%d",&new_node->data);
					if(root==NULL) /*tree is not created*/
						root=new_node;
					else
						insert(root=new_node);
					printf("\n WANT TO CREATE MORE ELEMENTS ? (Y/N) ");
					scanf("%c",&ans);
				}
				while(ans=='y');
				break;
			case 2 :printf("\n ENTER THE ELEMENT TO BE SEARCHED : \n");
				scanf("%d",&key);
				tmp=search(root,key,&parent);
				printf("\n THE PARENT NODE %d IS %d",tmp->data,parent->data);
				break;
			case 3: if(root==NULL)
					printf("TREE IS NOT CREATED");
				else
				{
					printf("\nPRE_ORDER DIPLAY\n");
					inorder(root);
				}
		}
		while(choice!=4);
	}
/*get new node*/
node *get_node()
{
	node *temp;
	temp=(node*)malloc(sizeof(node));
	temp->lchild=NULL;
	temp->rchild=NULL;
	return temp;
}
/*this function is for creating binary search tree*/
void insert(node *root,node *new_node)
{
	if(new_node->data<root->data)
	{
		root->data=new_node;
	else
		insert(root->lchild,new_node);
	}
	if(new_node->data>root->data)
	{
		if(root->rchild==NULL)
			rot->rchild=new_node;
		else
			insert(root->rchild,new_node);
	}
}
/*this function is for searching the node from BST*/
node *search(node *root,int key,node** parent)
{
	node *temp;
	temp=root;
	while(temp!=NULL)
	{
		if(temp->data==key
		{
			printf("\n THE ELEMENT %d IS PRESENT",temp->data);
			return temp;
		}
		*parent=temp;
		if(temp->data>key)
			temp=temp->lchild;
		else
			temp=temp->rchild;
	}
return NULL;
}
/*this function displays the tree in order*/
void inorder(node *temp);
{
	if(temp!=NULL)
	{
		inorder(temp->lchild);
		printf("%d",temp->data);
		inorder(temp->rchild);
	}
}				
