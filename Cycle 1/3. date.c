#include<stdio.h>

void main()
{
	int dd,mm,yy,flag=0;
	printf("Enter a date in the format dd-mm-yyyy : ");
	scanf("%d-%d-%d",&dd,&mm,&yy);
	if ((yy>=1000 && yy<=9999) && (mm>=1 && mm<=12))
	{
		if((mm==1 || mm==3 || mm==5 || mm==7 || mm==8 || mm==10 || mm==12) && (dd>=1 && dd<=31))
			flag=1;
		else if((mm==4 || mm==6 || mm==9 || mm==11) && (dd>=1 && dd<=30))
			flag=1;
		else if((mm==2) && ((yy%4==0 && (dd>=1 && dd<=29)) || (yy%4!=0 && (dd>=1 && dd<=28))))
			flag=1;
	}
	if(flag==1)
	{
		if(yy>=1950 && yy<=2018)
		{
			if(yy == 1950)
			{
				if(mm==7 && dd>=20)
					flag=2;
				else if(mm>7)
					flag=2;
			}
			else if (yy == 2018)
			{
				if(mm==9 && dd<=4)
					flag=2;
				else if(mm<9)
					flag=2;
			}
			else if (yy>1950 && yy<2018)
				flag=2;
		}
		if(flag==1)
			printf("The date is valid but not in the range 20-07-1950 to 04-09-2018\n");
		else if(flag==2)
			printf("The date is valid and is in the range 20-07-1950 to 04-09-2018\n");
	}
	else if (flag==0)
		printf("The date is not valid\n");
}