//c program for trapezoid rule
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
float fun(float,int);
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
	float sum = 0;
	h = (b-a)/n;
	for(i=1;i<=n-1;i++)
	{
		x = a + (i*h);
		sum = sum + 2*fun(x,n);
	}
	sum = sum + (fun(a,n) + fun(b,n));
	sum = (h*sum)/2;
	printf("The value of integral = %f\n",sum);
	return 0;
}
float fun(float a,int n)
{
	return sin(a);
}
