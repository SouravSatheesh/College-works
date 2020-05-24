#include<stdio.h>

void main()
{
	int upper[26],lower[26],digit[10];
	char c;
	FILE *ptrF;
	ptrF = fopen("file.txt","r");
	for (int i = 0; i < 26; i++)
	{
		upper[i] = 0;
		lower[i] = 0;
	}
	for (int i = 0; i < 10; i++)
		digit[i] = 0;
	while (1)
	{
		c = getc(ptrF);
		if(feof(ptrF))
			break;
		if(c>='a' && c<='z')
			lower[c-'a']++;
		else if (c>='A' && c<='Z')
			upper[c-'A']++;
		else if (c>='0' && c<='9')
			digit[c-'0']++;
	}
	fclose(ptrF);
	
	printf("Frequency of characters in the file\n");
	for (int i = 0; i < 26; i++)
	{
		if(i%7 == 6)
			printf("%c = %d\n",'a'+i,lower[i]);
		else
			printf("%c = %d\t",'a'+i,lower[i]);
	}
	printf("\n\n");
	for (int i = 0; i < 26; i++)
	{
		if(i%7 == 6)
			printf("%c = %d\n",'A'+i,upper[i]);
		else
			printf("%c = %d\t",'A'+i,upper[i]);
	}
	printf("\n\n");
	for (int i = 0; i < 10; i++)
	{
		if(i%5 == 4)
			printf("%c = %d\n",'0'+i,digit[i]);
		else
			printf("%c = %d\t",'0'+i,digit[i]);
	}
	printf("\n");
}