#include<stdio.h>

void main()
{
	int a,b,temp,x,y,t,lcm,gcd,flag=0;
	printf("Enter two numbers whose LCM and GCD is to be found : ");
	scanf("%d%d",&a,&b);
	if(b>a)
	{
		temp = a;
		a = b;
		b = temp;
	}
	x = a;
	y = b;
	while (y!=0)
	{
		t = y;
		y = x % y;
		x = t;	
	}
	gcd = t;
	lcm = a;
	while(flag==0)
	{
		if((lcm%a == 0) && (lcm%b == 0))
			flag=1;
		else
			lcm++;
	}
	printf("The GCD of %d and %d is %d\n",a,b,gcd);
	printf("The LCM of %d and %d is %d\n",a,b,lcm);
}