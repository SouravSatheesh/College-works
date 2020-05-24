#include<stdio.h>

typedef struct student
{
	int reg_no,m1,m2,m3,m4,m5,m6;
	char name[26];
	float percentage;
}student;

int main()
{
	int flag=0,r_no;
	char c;
	student s;
	FILE *ptrF;
	ptrF = fopen("STUDENT.DAT","r");
	printf("Enter the register number :\n");
	scanf("%6d",&r_no);
	while(!feof(ptrF))
	{
		s.name[25] = '\0';
		fscanf(ptrF,"%6d%25c%3d%3d%3d%3d%3d%3d",&s.reg_no,s.name,&s.m1,&s.m2,&s.m3,&s.m4,&s.m5,&s.m6);
		s.percentage = (s.m1 + s.m2 + s.m3 + s.m4 + s.m5 + s.m6)*100/600.0;
		if(s.reg_no == r_no)
		{
			flag = 1;
			break;
		}
	}
	if(flag == 0)
		printf("Entered register number not found!\n");
	else
	{
		printf("\nStudent Marksheet\n");
		printf("Register Number : %d\n",s.reg_no);
		printf("Name : %s\n",s.name);
		printf("Marks in 6 subjects : %d %d %d %d %d %d\n",s.m1,s.m2,s.m3,s.m4,s.m5,s.m6);
		printf("Percentage : %g \n",s.percentage);
		if(s.percentage < 45)
			printf("Result : FAIL\n");
		else if (s.percentage < 60)
			printf("Result : PASS\n");
		else if(s.percentage < 75)
			printf("Result : FIRST CLASS\n");
		else
			printf("Result : DISTINCTION\n");
	}	
	return 0;
}