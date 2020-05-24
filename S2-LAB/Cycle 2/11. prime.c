#include<stdio.h>

int isPrime(int a)
{
	int flag=1;
	for (int i = 2; i <= a/2; i++)
	{
		if(a % i == 0)
		{
			flag = 0;
			break;
		}
	}
	return flag;
}

void main()
{
	int n;
	printf("Enter the value of n : ");
	scanf("%d",&n);
	printf("The prime numbers in the range 1 to n are:\n1");
	for (int i = 2; i <= n; i++)
	{
		if(isPrime(i))
			printf(", %d",i);
	}
	printf("\n");
}