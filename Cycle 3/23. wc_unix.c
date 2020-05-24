#include<stdio.h>

void main(int argc,char *argv[])
{
	int line_count=1,word_count=1,char_count=0;
	char c,cprev='\0';
	FILE *ptrF;
	ptrF = fopen(argv[1],"r");
	while (1)
	{
		c = getc(ptrF);
		if(feof(ptrF))
			break;
		if(c == '\n')
			line_count++;
		if((cprev == ' '  || cprev == '\n') && c !=' ')
			word_count++;
		if(c != '\n')	
			char_count++;
		cprev = c;
	}
	printf("Number of lines : %d\n",line_count);
	printf("Number of words : %d\n",word_count);
	printf("Number of characters : %d\n",char_count);
}