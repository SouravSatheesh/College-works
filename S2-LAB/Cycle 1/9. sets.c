#include<stdio.h>

int search(int a[], int len, int ele)
{
	int flag=0;
	for(int i = 0; i < len; i++)
	{
		if(a[i] == ele)
			flag = 1;
	}
	return flag;
}

int Union(int a[], int len1, int b[], int len2)
{
	int c[100],j,num;
	j = len1;
	for (int i = 0; i < len1; i++)
		c[i] = a[i];
	for (int i = len1; i < (len1 + len2); i++)
	{
		num = b[i-len1];
		if (search(c,j,num) == 0)
		{	
			c[j] = num;
			j++;
		}
	}
	printf("The union of the sets A & B is :\n");
	for(int i = 0; i < j; i++)
		printf("%d ",c[i]);
	printf("\n");		
}

int Intersection(int a[], int len1, int b[], int len2)
{
	int c[100],j=0;
	for (int i = 0; i < len1; i++)
	{
		if(search(b, len2, a[i]))
		{
			c[j] = a[i];
			j++;
		}
	}
	printf("The intersection of the sets A & B is :\n");
	for (int i = 0; i < j; i++)
		printf("%d ",c[i]);	
	printf("\n");
}

int Difference(int a[], int len1, int b[], int len2, char a1, char b1)
{
	int c[100],j=0;
	for (int i = 0; i < len1; i++)
	{
		if(search(b, len2, a[i]) == 0)
		{
			c[j] = a[i];
			j++;
		}
	}
	if(j == 0)
		printf("The Difference set(%c)-set(%c) is a empty set!!\n",a1,b1);
	else
	{
		printf("The Difference set(%c)-set(%c) is :\n",a1,b1);
		for (int i = 0; i < j; i++)
			printf("%d ",c[i]);			
		printf("\n");
	}
}

void main() 
{
	int a[100],b[100],n_a,n_b;
	printf("Enter the number of elements in set A : ");
	scanf("%d",&n_a);
	printf("Enter the elements of set A : ");
	for(int i = 0; i < n_a; i++)
		scanf("%d",&a[i]);
	printf("Enter the number of elements in set B : ");
	scanf("%d",&n_b);
	printf("Enter the elements of set B : ");
	for(int i = 0; i < n_b; i++)
		scanf("%d",&b[i]);
	Union(a,n_a,b,n_b);
	Intersection(a,n_a,b,n_b);
	Difference(a,n_a,b,n_b,'A','B');
	Difference(b,n_b,a,n_a,'B','A');
}