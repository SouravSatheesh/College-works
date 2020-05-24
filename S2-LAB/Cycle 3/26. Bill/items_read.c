#include<stdio.h>

typedef struct items
{
	char code[4];
	float price;
	char name[20];
}items;

void readDetails(items *p)
{
	printf("Item code : ");
	scanf("%s",p->code);
	printf("Item name : ");
	scanf("%s",p->name);
	printf("Price : ");
	scanf("%g",&p->price);
}

void main()
{
	items a[10];
	int n;
	FILE *ptrF;
	ptrF = fopen("ITEMS.DAT","w");
	printf("Enter the number of items : ");
	scanf("%d",&n);
	for (int i = 0; i < n; i++)
		readDetails(&a[i]);
	fwrite(a,sizeof(items),n,ptrF);
	fclose(ptrF);	
}