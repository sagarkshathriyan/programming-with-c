/*To write a program to perform insertion into a binary search tree and search a key from BST
Name : Sagar.N
USN no: 18BBBTCS107
Function used:void insert(),void inorder(),void preorder(),void postorder(),node *search(),void main()
Date:14/11/2019
Output: Program for binary search tree

1.  Create

2.  Search

3.  Display inorder

4.  Exit

Enter the element 56

Want to enter more elements? (Y/N)

1.  Create

2.  Search

3.  Display inorder

4.  Exit

Enter your choice:  1

Enter the element 34

Want to enter more elements?(Y/N)

1.  Create

2.  Search

3.  Display inorder

4.  Exit

Enter your choice:  1

Enter the element 22

Want to enter more elements?(Y/N)

1.  Create

2.  Search

3.  Display inorder

4.  Exit

Enter your choice:  3

The preorder display:  22   34   56

1.  Create

2.  Search

3.  Display inorder

4.  Exit

Enter your choice:  4

Exit from the program
*/
# include <stdio.h>
# include <stdlib.h>
typedef struct BST {
int data;
struct BST *lchild, *rchild;
} node;

void insert(node *, node *);
void inorder(node *);
void preorder(node *);
void postorder(node *);
node *search(node *, int, node **);

void main() {
int choice;
   char ans = 'N';
int key;
   node *new_node, *root, *tmp, *parent;
   node *get_node();
   root = NULL;
printf("\nProgram For Binary Search Tree ");
   


do {
printf("\n1.Create");
printf("\n2.Search");
printf("\n3. Display Preorder");
printf("\n4.Exit");
printf("\nEnter your choice :");
scanf("%d", &choice);

      switch (choice) {
      case 1:
         do {
new_node = get_node();
printf("\nEnter The Element ");
scanf("%d", &new_node->data);

            if (root == NULL) /* Tree is not Created */
               root = new_node;
            else
               insert(root, new_node);

printf("\nWant To enter More Elements?(y/n)");
scanf("%c",&ans);
         } while (ans == 'y');
         break;

      case 2:

printf("\nEnter Element to be searched :");

scanf("%d", &key);
tmp = search(root, key, &parent);
printf("\nParent of node %d is %d", tmp->data, parent->data);
         break;

      case 3:
         if (root == NULL)
printf("Tree Is Not Created");
         else {

printf("\nThePreorder display : ");
inorder(root);
              }
         break;
      }
   } while (choice != 4);
}
/*
 Get new Node
 */
node *get_node() {
   node *temp;
   temp = (node *) malloc(sizeof(node));
   
temp->lchild = NULL;
   temp->rchild = NULL;
  
 return temp;

}
/*
 This function is for creating a binary search tree
 */
void insert(node *root, node *new_node) {
   if (new_node->data < root->data) {
      if (root->lchild == NULL)
         root->lchild = new_node;
      else
         insert(root->lchild, new_node);
   }

   if (new_node->data > root->data) {
      if (root->rchild == NULL)
         root->rchild = new_node;
      else
         insert(root->rchild, new_node);
   }
}
/*
 This function is for searching the node from
 binary Search Tree
 */
node *search(node *root, int key, node **parent) {
   node *temp;
   
temp = root;
   while (temp != NULL) {
    
  if (temp->data == key) {
printf("\nThe %d Element is Present", temp->data);
         return temp;
      }
      *parent = temp;

      if (temp->data > key)
         temp = temp->lchild;
      else
         temp = temp->rchild;
   }
   
}

/*
 This function displays the tree in inorder fashion
 */
void inorder(node *temp) {
   if (temp != NULL) {
inorder(temp->lchild);
printf("%d", temp->data);
inorder(temp->rchild);
   }
}
