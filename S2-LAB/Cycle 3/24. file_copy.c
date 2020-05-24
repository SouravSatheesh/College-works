#include<stdio.h>

void main(int argc, char *argv[])
{
	char c;
	FILE *ptrF1,*ptrF2;
	ptrF1 = fopen(argv[1],"r");
	ptrF2 = fopen(argv[2],"w");
	while(!feof(ptrF1))
	{
		c = getc(ptrF1);
		if(c>='a' && c<='z')
			c -= 32;
		putc(c,ptrF2);
	}
	fclose(ptrF1);
	fclose(ptrF2);
	printf("File successfully copied!\n");
}