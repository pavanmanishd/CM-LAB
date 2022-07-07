#include<stdio.h>
#include<math.h>
#include<stdlib.h>
float fun(float);
float dif(float);
int main(void)
{
	float h,x0,x1,allerr,j;
	int maxitr=10,n,i;
	allerr=0.0001;
	int itr=1;
	int a,b;
	for(j=0;j<100;j++)
	{
		if(fun(j)*fun(j+1)<0)
		{	
			a=j;
			b=j+1;
			break;
		}		
	}
	x0=(a+b)/2;
	printf("iteration\t approximation\n");
	for(itr=1;itr<=maxitr;i++)
	{
		printf("%d\t\t%f\n",itr,x0);
		h=fun(x0)/dif(x0);
		x1=x0-h;
		if(fabs(x1-x0)<allerr)
		{
			printf("Root value = %f\n",x1);
			return 0;
		}
		else
		{
			x0=x1;
			itr=itr+1;
		}
	}
	if(itr>maxitr)
	{
		printf("iterations are not sufficient");
	}
	return 0;
}
float fun(float z)
{
	float temp;
	temp = (z*sin(z)-1);
	return temp;
}
float dif(float z)
{
	float temp;
	temp = (sin(z)+z*cos(z));
	return temp;
}
