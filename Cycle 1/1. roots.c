#include<stdio.h>
#include<math.h>

void main()
{
	float a,b,c,det,r1,r2,r,x,y;
	printf("Enter the coefficients of the quadratic equation ax2+bx+c=0 : ");
	scanf("%g%g%g",&a,&b,&c);
	det = b*b - 4*a*c;
	if (det>0)
	{
		r1 = (-b + sqrt(det))/(2*a);
		r2 = (-b - sqrt(det))/(2*a);
		printf("The given quadratic equation has real and distinct roots and the roots are %g & %g.\n",r1,r2);
	}
	else if (det == 0)
	{
		r = -b/(2*a);
		printf("The given quadratic equation has real and equal roots and root is %g.\n",r);
	}
	else
	{
		x = -b/(2*a);
		y = sqrt(-det)/(2*a);
		printf("The equation has imaginary roots and the roots are %g + %gi and %g - %gi\n",x,y,x,y);
	}
	
}