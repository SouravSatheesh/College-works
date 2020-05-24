#include<stdio.h>

void merge(int a[], int len1, int b[], int len2)
{
	int c[100],i=0,j=0,k=0;
	while (i < len1 && j < len2)
	{
		if(a[i] < b[j])
			c[k++] = a[i++];
		else
			c[k++] = b[j++];	
	}
	while (i < len1)
	{
		c[k++] = a[i++];
	}
	while (j < len2)
	{
		c[k++] = b[j++];
	}
	printf("The merged list is :\n");
	for (int i = 0; i < k; i++)
		printf("%d ",c[i]);
	printf("\n");	
}

void main()
{
	int a[100],b[100],n_a,n_b;
	printf("Enter the number of elements in the first list : ");
	scanf("%d",&n_a);
	printf("Enter the elements of the list (in ascending order) :\n");	
	for (int i = 0; i < n_a; i++)
		scanf("%d",&a[i]);
	printf("Enter the number of elements in the second list : ");
	scanf("%d",&n_b);
	printf("Enter the elements of the list (in ascending order) :\n");	
	for (int i = 0; i < n_b; i++)
		scanf("%d",&b[i]);
	merge(a,n_a,b,n_b);
}