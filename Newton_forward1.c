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
	float p=((k-x[1])/h);
	float product = 1;
	float sum = y[1];
	for(j=1;j<=n-i;j++)
	{
		for(i=1;i<=n;i++)
		{
			y[j]=y[j+1]-y[j];
			printf("%f\t",y[j]);
		}
		printf("\n");
		product = product * ((p-i+1)/i);
		sum = sum + product * y[1];
	}
	printf(" y = %.3f\n",sum);
	return 0;
}
