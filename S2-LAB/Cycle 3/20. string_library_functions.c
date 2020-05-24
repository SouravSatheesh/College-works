#include<stdio.h>

unsigned int stringLength(char *p)
{
	int count=0;
	while (*p !='\n')
	{
		count++;
		p++;
	}
	return count;
}

void stringCopy(char *p1, char *p2)
{
	int len1,len2;
	len1 = stringLength(p1);
	len2 = stringLength(p2);
	for (int i = 0; i <= len2; i++)
	{
		*(p1+i) = *(p2+i);
		if(i == len2)
			*(p1+i) = '\0';
	}
}

int stringCompare(char *p1, char *p2)
{
	int comp=0,flag=0,i=0,len1,len2;
	len1 = stringLength(p1);
	len2 = stringLength(p2);
	while(flag == 0 && i != len2)
	{
		if(*(p1+i) != *(p2+i))
		{
			if(*(p1+i) == '\n')
				comp = - *(p2+i);
			else
			{
				comp = *(p1+i) - *(p2+i);
				flag = 1;
			}
		}
		i++;
	}
	if(flag == 0 && len1 > len2)
		comp = *(p1+i);
	return comp;
}

void stringConcat(char *p1, char *p2)
{
	int len1,len2;
	len1 = stringLength(p1);
	len2 = stringLength(p2);
	for (int i = len1; i < (len1 + len2); i++)
		*(p1+i) = *(p2+i-len1);	
}

void main()
{
	char str1[100],str2[100],*pt1,*pt2;
	unsigned int length1,length2;
	int comp;
	pt1 = str1;
	pt2 = str2;
	printf("Enter two strings\n");
	printf("String 1 : ");
	fgets(str1,100,stdin);
	printf("String 2 : ");
	fgets(str2,100,stdin);

	length1 = stringLength(pt1);
	length2 = stringLength(pt2);
	printf("\nLength of string 1 : %d\n",length1);
	printf("Length of string 2 : %d\n\n",length2);
	
	printf("String comparison\n");
	comp = stringCompare(pt1,pt2);
	if(comp == 0)
		printf("Both the strings are equal!\n");
	else if (comp > 0)
		printf("String 1 is greater than String 2!\n");
	else
		printf("String 2 is greater than String 1!\n");

	printf("\nString concatenation\n");
	stringConcat(pt1,pt2);
	printf("String 1 : %s\n",str1);
	printf("String 2 : %s",str2);

	printf("\nString Copy\n");
	stringCopy(pt1,pt2);
	printf("String 1 : %s\n",str1);
	printf("String 2 : %s",str2);
}