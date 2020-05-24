#include<stdio.h>
void main() 
{
	int a[100],n,round,temp=0;
	printf("Enter number of elements : ");
	scanf("%d",&n);
	printf("Enter the elements :\n");
	for (int i = 0; i < n; i++)
		scanf("%d",&a[i]);
	for (round = 1; round < n; round++)
	{
		for (int i = 0; i < (n-round); i++)
		{
			if(a[i]>a[i+1])
			{
				temp = a[i];
				a[i] = a[i+1];
				a[i+1] = temp;
			}
		}
	}
	printf("The sorted array is : \n");
	for(int i = 0; i < n; i++)
		printf("%d ",a[i]);
	printf("\n");
}