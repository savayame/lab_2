#include<stdio.h>
#include<math.h>

int main()
{
	double x, y, a, b, c, d;
	printf("x=");
	scanf("%lf",&x);
	printf("a=");
	scanf("%lf",&a);
	printf("b=");
	scanf("%lf",&b);
	printf("c=");
	scanf("%lf",&c);
	y=a*x^2+b*x+c;
	d=b^2-4*a*c;
	if (d==0)
		printf("x=%lf",-b/(2*a));
	if (d>0)
	{
		 printf("x1=%lf\n",(-b-sqrt(d))/2*a);
		 printf("x2=%lf"\n,(-b+sqrt(d))/2*a);
	}
	else
		printf("d<0");
	return 0;
}
