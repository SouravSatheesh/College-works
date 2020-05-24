#include<stdio.h>

void main()
{
	int a[100],i,n,ele,flag=0;
	printf("Enter the number of elements : ");
	scanf("%d",&n);
	printf("Enter the elements :\n");
	for (i = 0; i < n; i++)
		scanf("%d",&a[i]);
	printf("Enter the element which is to be searched : ");
	scanf("%d",&ele);
	for (i = 0; i < n; i++)
	{
		if (a[i] == ele)
		{
			printf("The element %d is found at the position %d.\n",ele,i+1);
			flag = 1;
		}
	}
	if(flag == 0)
		printf("The element %d is not found.\n",ele);	
}