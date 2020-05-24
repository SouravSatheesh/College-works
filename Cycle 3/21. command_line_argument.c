#include<stdio.h>
#include<stdlib.h>

void main(int argc,char *argv[])
{
	int i;
	float avg,sum=0;
	for(i=1;i<argc;i++)
	{
		sum+=atof(argv[i]);
	}
	avg = sum / (argc-1);
	printf("Average = %g  \n",avg); 
}