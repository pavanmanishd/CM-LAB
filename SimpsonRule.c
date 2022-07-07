//c program for simpson's 1/3 rule
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
		if((i%2)==0)
			sum =sum + 2*fun(x);
		else
			sum = sum + 4*fun(x);
	}
	sum = sum + fun(a) + fun(b);
	sum = (h*sum)/3;
	printf("The value of integral = %f\n",sum);
	return 0;
}
float fun(float a)
{
	return (exp(1/a));
}
