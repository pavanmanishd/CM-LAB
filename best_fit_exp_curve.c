//c program to find best fit exponential curve
#include<stdio.h>
#include<math.h>
int main()
{
	int i,n;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	float x[n],y[n];
	printf("Enter x[i] values : ");
	for(i=1;i<=n;i++)
	{
		scanf("%f",&x[i]);
	}
	printf("Enter y[i] values : ");
	for(i=1;i<=n;i++)
	{
		scanf("%f",&y[i]);
	}
	for(i=1;i<=n;i++)
	{
		y[i]=log(y[i]);
	}
	float sum1,sum2,sum3,sum4;
	for(i=1;i<=n;i++)
	{
		sum1 = sum1 + x[i];
		sum2 = sum2 + y[i];
		sum3 = sum3 + (x[i]*y[i]);
		sum4 = sum4 + (x[i]*x[i]);
	}
	float A,a,b;
	a = (( sum4 * sum2 - sum1 * sum3)/( n * sum4 - sum1 * sum1));
	b = (( n * sum3 - sum1 * sum2)/( n * sum4 - sum1 * sum1));
	A = exp(a);
	printf("Best fit line is y = %f(e^(%fx))",A,b);
	return 0;
}
