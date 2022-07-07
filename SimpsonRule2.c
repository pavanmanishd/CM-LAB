//c program for simpson's 3/8 rule
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
float fun(float);
int main()
{
	float a,x,b,h;
	int n,i;
	printf("Enter the lower limit : ");
	scanf("%f",&a);
	printf("Enter the upper limit : ");
	scanf("%f",&b);
	printf("Enter the no of sub intervals : ");
	scanf("%d",&n);
	h = (b-a)/n;
	float sum=0;
	for(i=1;i<n;i++)
	{
		x=a+(i*h);
		if((i%3)==0)
			sum =sum + 2*fun(x);
		else
			sum = sum + 3*fun(x);
	}
	sum = sum + fun(a) + fun(b);
	sum = (3*h*sum)/8;
	printf("The value of integral = %f\n",sum);
	return 0;
}
float fun(float a)
{
	return (exp(1/a));
}
