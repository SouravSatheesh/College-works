#include<stdio.h>

typedef struct {
	int reg_no;
	char name[50];
	float m1,m2,m3,m4,total;
}Details;

void readDetails(Details *s)
{
	printf("Registration number : ");
	scanf("%d",&s->reg_no);
	getchar();
	printf("Name : ");
	fgets(s->name,50,stdin);
	printf("Marks of four subjects : ");
	scanf("%g%g%g%g",&(s->m1),&(s->m2),&(s->m3),&(s->m4));
	s->total = s->m1 + s->m2 + s->m3 + s->m4;
}

void sortDetails(Details s[], int len)
{
	int max_index;
	Details temp;
	for (int i = 0; i < len; i++)
	{
		max_index = i;
		for (int j = i+1; j < len; j++)
		{
			if(s[j].total > s[max_index].total)
				max_index = j;
		}
		temp = s[i];
		s[i] = s[max_index];
		s[max_index] = temp;
	}
}

void displayDetails (Details *s)
{
	printf("Registration number : %d\n",s->reg_no);
	printf("Name : %s",s->name);
	printf("Marks of four subjects : %g %g %g %g \n",s->m1,s->m2,s->m3,s->m4);
	printf("Total marks : %g\n",s->total);
}

void main()
{
	int n,max_index;
	Details S[10],temp;
	printf("Enter the number of students : ");
	scanf("%d",&n);	
	for (int i = 0; i < n; i++)
	{
		printf("Enter Details of student %d\n",i+1);
		readDetails(&S[i]);	
	}
	sortDetails(S,n);
	printf("\nStudent details in descending order of marks :\n");
	for (int i = 0; i < n; i++)
	{
		displayDetails(&S[i]);
	}	
}