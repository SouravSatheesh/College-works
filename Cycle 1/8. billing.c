#include<stdio.h>
#include<string.h>

typedef struct items
{
	char code[4];
	float price;
	char name[20];
}items;

void readQty(items *item,int *qty)
{
	int num,q;
	char icode[4];
	printf("Enter the number of different items : ");
	scanf("%d",&num);
	printf("Enter the item code and quantity\n");
	for (int i = 0; i < num; i++)
	{
		printf("%d.  ",i+1);
		scanf("%s %d",icode,&q);
		for (int j = 0; j < 10; j++)
		{
			if(strcmp(item[j].code,icode) == 0)
				qty[j] = q;
		}		
	}
}

float billCalc(items item[], int qty[])
{
	float total=0;
	for (int i = 0; i < 10; i++)
	{
		total += item[i].price * qty[i];
	}
		
}

void main()
{
	items a[10];
	int qty[10],num,q;
	float amount;
	char icode[4];
	FILE *ptrF;
	ptrF = fopen("ITEMS.DAT","r");
	fread(a,sizeof(items),10,ptrF);
	fclose(ptrF);
	for(int i = 0; i < 10; i++)
		qty[i] = 0;
	printf("BILING PROGRAM\n");
	readQty(a,qty);
	amount = billCalc(a,qty);
	printf("\n######################## BILL ########################\n\n");
	printf("ITEM CODE\tITEM NAME\tPRICE\tQUANTITY\n");
	for (int i = 0; i < 10; i++)
	{
		if(qty[i] != 0)
			printf("%6s%18s%13g%9d\n",a[i].code,a[i].name,a[i].price,qty[i]);
	}
	printf("\nBILL AMOUNT : %g\n",amount);
}
