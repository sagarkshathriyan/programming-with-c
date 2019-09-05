/* Objective:To perform sorting in a given list of numbers either in ascending order using Quick sort
  Sagar.N
  18BBTCS107
  Function used:void quicksort(),void main()
  Date:05/09/2019
Output: Enter the size of the array:6
	Enter 6 elements:-1 0 -9 88 105 107
	The sorted elements:
	-9	-1	0	88	105	107	
*/
#include<stdio.h>
void quicksort(int [10],int,int);
int main()
{
	int x[20],size,i;
	printf("Enter the size of the array:");
	scanf("%d",&size);
	printf("Enter %d elements:",size);
		for(i=0;i<size;i++)
		scanf("%d",&x[i]);
		quicksort(x,0,size-1);
		printf("The Sorted elements:\n");
		for(i=0;i<size;i++)
		printf("%d \t",x[i]);
		return 0;
}
void quicksort(int x[10],int first,int last)
{
	int pivot,j,temp,i;
	if(first<last)
	{
		pivot=first;
		i=first;
		j=last;
	while(i<j)
	{
		while(x[i]<=x[pivot] && i<last)
		i++;
		while(x[j]>x[pivot])
		j--;
	if(i<j)
	{
		temp=x[i];
		x[i]=x[j];
		x[j]=temp;
	}
	}
	temp=x[pivot];
	x[pivot]=x[j];
	x[j]=temp;
	quicksort(x,first,j-1);
	quicksort(x,j+1,last);
}
}		
