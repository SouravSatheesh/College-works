#include<stdio.h>

void main()
{
	int m,n,largest,lar_row=0,lar_col=0;
	printf("Enter the number of rows and columns : ");
	scanf("%d%d",&m,&n);
	int a[m][n];
	printf("Enter the elements of the matrix:\n");
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < m; j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	largest = a[0][0];
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] > largest)
			{
				largest = a[i][j];
				lar_row = i;
				lar_col = j;
			}
		}
	}
	printf("The largest element of the matrix is %d and is found at the position (%d,%d)\n",largest,lar_row+1,lar_col+1);
}
	