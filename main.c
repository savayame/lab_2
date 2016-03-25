#include<stdio.h>
#include< math.h>
int main()
{
	int x, y, a, b, c, d;
	printf("x=");
	scanf("%d",&x);
	printf("a=");
	scanf("%d",&a);
	printf("b=");
    scanf("%d",&b);
	printf("c=");
    scanf("%d",&c);
    y=a*x^2+b*x+c;
	d=b^2-4*a*c;
	if (d==0)
		printf("x=%d",-b/(2*a));
	if (d>0)
	{
		 printf("x1=%d\n",(-b+sqrt(d))/2*a);
         printf("x2=%d",(-b+sqrt(d))/2*a);
    }
	else
		printf("d<0");
	return 0;
}