#include<stdio.h>

void main()
{
	unsigned long int bin,temp;
	int dec=0,i=1,dig;
	printf("Enter a binary number : ");
	scanf("%ld",&bin);
	temp = bin;
	while(temp!=0)
	{
		dig = temp % 10;
		dec += dig * i;
		temp /= 10;
		i *= 2;
	}
	printf("The decimal equivalent of the binary number %ld is %d\n",bin,dec);
}