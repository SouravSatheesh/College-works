#include<stdio.h>

void main()
{
	int a[100],n,lar,sm;
	printf("Enter the number of numbers : ");
	scanf("%d",&n);
	printf("Enter the numbers :\n");
	for (int i = 0; i < n; i++)
		scanf("%d",&a[i]);
	for (int i = 0; i < n; i++)
	{
		if(i==0)
		{
			lar = a[i];
			sm = a[i];
		}
		else
		{
			if(a[i]>lar)
				lar=a[i];
			if(a[i]<sm)
				sm=a[i];
		}
	}
	printf("The largest is %d and the smallest is %d.\n",lar,sm);		
}