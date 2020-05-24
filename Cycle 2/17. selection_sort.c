#include<stdio.h>
#include<string.h>

void main()
{
	int n,min_index;
	char names[10][100], sortednames[10][100],temp[100];
	
	printf("How many names do you want to enter : ");
	scanf("%d",&n);
	
	printf("Enter the names one by one :\n");
	for (int i = 0; i <= n; i++)
	{
		fgets(names[i],100,stdin);
	}
	
	for (int i = 1; i <= n; i++)
	{
			min_index = i;
		for (int j = i+1; j <= n; j++)
		{
			if(strcmp(names[min_index],names[j]) > 0)
				min_index = j;
		}
		
		strcpy(temp,names[i]);
		strcpy(names[i],names[min_index]);
		strcpy(names[min_index],temp);
	}
	
	printf("\nNames after sorting:\n");
	for (int i = 1; i <= n; i++)
		printf("%s",names[i]);
			
}