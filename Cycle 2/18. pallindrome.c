#include<stdio.h>
#include<string.h>

int isPallindrome(char word[], int len)
{
	int j,flag =1;
	j = len - 1;
	for (int i = 0; i < j; i++)
	{
		if (word[i] != word[j--])
		{
			flag =0;
			break;	
		}
	}
	return flag;
}

void main()
{
	int n=0,j=0,k=0;
	char words[15][20],string[200];
	printf("Enter a string :\n");
	fgets(string,200,stdin);
	for (int i = 0; i < strlen(string); i++)
	{
		if (string[i] == ' ')
		{
			words[n][j++] = '\0';
			n++;
			j = 0;
		}
		else if (string[i] == '\n')
		{
			words[n][j++] = '\0';
			n++;
			break;
		}
		else
			words[n][j++] = string[i];
	}

	printf("The pallindrome words in the string are :\n");
	for (int i = 0; i < n; i++)
	{
		if(isPallindrome(words[i],strlen(words[i])))
		{		
			printf("%s\n",words[i]);
			k++;
		}
	}
}