// C program to do Newtons Backward interpolation method
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int n,i,j;
	float k;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	float x[n],y[n];
	printf("x= ");
	scanf("%f",&k);
	printf("Enter the values of x[n] : ");
	for(i=1;i<=n;i++)
	{
		scanf("%f",&x[i]);
	}
	printf("Enter the values of y[n] : ");
	for(j=1;j<=n;j++)
	{
		scanf("%f",&y[j]);
	}
	float h=x[2]-x[1];
	float p=((k-x[n])/h);
	float product = 1;
	float sum = y[n];
	for(i=n;i>=2;i--)
	{
		for(j=n;j>=n-i+2;j--)
		{
			y[j]=y[j]-y[j-1];
			printf("%f\t",y[j]);
		}
		printf("\n");
		product = product * ((p+n-i)/(n-i+1));
		sum = sum + product * y[n];
	}
	printf(" y = %.4f\n",sum);
	return 0;
}
