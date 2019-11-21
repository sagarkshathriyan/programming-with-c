/*To write a program that performs hash operation using array
USN no: 18BBBTCS107
Function used:void main()
Date:21/11/2019
Output:Enter the number of buckets:
4
1.insert 2. search 3. exit
Enter your choice:1
Enter your number to insert:4
1.insert 2. search 3. exit
Enter your choice:1
Enter your number to insert:8
1.insert 2. search 3. exit
Enter your choice:1
Enter your number to insert:20
1.insert 2. search 3. exit
Enter your choice:1
Enter your number to insert:24
overflow in bucket0
1.insert 2. search 3. exit
Enter your choice:2
Enter your number to search:20
FOUND AT BUCKET NO: 0
1.insert 2. search 3. exit
Enter your choice:2
Enter your number to search:4
FOUND AT BUCKET NO: 0
1.insert 2. search 3. exit
Enter your choice:2
Enter your number to search:24
THE ELEMENT NOT FOUND
1.insert 2. search 3. exit
Enter your choice:2
Enter your number to search:8
FOUND AT BUCKET NO: 0
1.insert 2. search 3. exit
Enter your choice:2
Enter your number to search:6
THE ELEMENT NOT FOUND
1.insert 2. search 3. exit
Enter your choice:3
*/
#include<stdio.h>
void main()
{
	int n,a[5][3],p[5]={0,0,0,0,0},i=0,b,index,k,c,m,flag;
	printf("enter the number of buckets:\n");
	scanf("%d",&n);
	do
	{
		printf("\n1.INSERT 2.SEARCH 3.EXIT");
		printf("\nEnter YOUR CHOICE");
		scanf("%d",&c);
		switch(c)
		{
			case 1:printf("\nEnter your number to insert");
				scanf("%d",&m);
				index=m%n;
				if(p[index]>=3)
				{
					printf("\nOVERFLOW in Bucket %d",index);
				}
				else
				{
					a[index][p[index]]=m;
					p[index]=p[index]+1;
				}
				break;
			case 2: flag=0;
				printf("\nEnter your number to search:");
				scanf("%d",&k);
				b=k%n;
				for(i=0;i<p[b];i++)
				{
					if(a[b][i]=k)
					{
						printf("\nFound AT BUcket no: %d",b);
						flag=1;
					}
				}
				if(flag==0)
				{
					printf("\nThe ELEMENT NOT FOUND");
				}
				break;
			case 3:printf("exited from menu");break;
			default:printf("\nINVALID CHOICE");
		}
	}while(c!=3);
}
