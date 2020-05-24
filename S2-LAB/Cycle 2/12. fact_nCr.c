#include<stdio.h>

unsigned long int fact(int num)
{
	unsigned long int f;
	if(num <= 1)
		f = 1;
	else
		f = num * fact(num-1);
	return f;
}

void main()
{
	int n,r;
	unsigned long int nCr;
	printf("Enter the values of n and r for nCr : ");
	scanf("%d%d",&n,&r);
	nCr = fact(n) / (fact(r) * fact(n-r));
	printf("%dC%d = %ld\n",n,r,nCr);
}