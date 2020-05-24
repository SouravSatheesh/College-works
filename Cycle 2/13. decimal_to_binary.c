#include<stdio.h>

unsigned long Binary(int decimal)
{
	unsigned long bin;
	if(decimal == 0)
		bin = 0;
	else 
		bin = (decimal % 2) + (10 * Binary(decimal/2)); 
	return bin;
}

void main()
{
	int dec;
	unsigned long binary;
	printf("Enter number whose binary equivalent is to be found: ");
	scanf("%d",&dec);
	binary = Binary(dec);
	printf("The binary equivalent of %d is %ld\n",dec,binary);
}