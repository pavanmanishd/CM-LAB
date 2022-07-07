//c program for trapezoid rule
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
float fun(float,int,float ,float );
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
	float k[n],y[n];
	printf("Enter data points x :");
	for(i=0;i<n;i++)
	{
		scanf("%f",&k[i]);
	}
	printf("Enter data points y :");
	for(i=0;i<n;i++)
	{
		scanf("%f",&y[i]);
	}
	float sum = 0;
	h = (b-a)/n;
	for(i=1;i<=n-1;i++)
	{
		x = a + (i*h);
		sum = sum + 2*fun(x,n,k[n],y[n]);
	}
	sum = sum + (fun(a,n,k[n],y[n]) + fun(b,n,k[n],y[n]));
	sum = (h*sum)/2;
	printf("The value of integral = %f\n",sum);
	return 0;
}
float fun(float a,int n,float k[n],float y[n])
{
	int i;
	for(i=0;i<n;i++)
	{
		if(a==k[i])
		{
			return y[i];
		}
	}
}
