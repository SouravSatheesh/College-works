#include<stdio.h>
#include<ctype.h>
#include<string.h>

void main()
{
	char s[100];
	int count_lower=0,count_upper=0,count_digit=0;
	printf("Enter a string:\n");
	scanf(" %[^\n]",s);
	for (int i = 0; i <  strlen(s); i++)
	{
		if(s[i]>=65 && s[i]<=90)
			count_upper++;
		else if(s[i]>=97 && s[i]<122)
			count_lower++;
		else if(s[i]>=48 && s[i]<=57)
			count_digit++;
	}
	printf("The number of lower case characters = %d\n",count_lower);
	printf("The number of upper case characters = %d\n",count_upper);
	printf("The number of digits = %d\n",count_digit);
}