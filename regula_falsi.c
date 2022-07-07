#include<stdio.h>
#include<math.h>
#include<stdlib.h>
float fun(float);
int main(void)
{
	int j,i=1;
	int itr,maxitr=100;
	float aller=0.000001,a,b,x,x1;
	for(j=0;j<100;j++)
	{
		if(fun(j)*fun(j+1)<0)
		{	
			a=j;
			b=j+1;
		}		
	}
	printf("sno\ta\t\tb\t\tx\n");
	for(itr=0;itr<maxitr;itr++)
	{
		
		x=(a*fun(b)-b*fun(a))/(fun(b)-fun(a));
		printf("%d\t%f\t%f\t%f\n",i,a,b,x);
		if((fun(x)*fun(a))<0)
		{
			b=x;
		}
		else
		{
			a=x;
		}
		x1=(a*fun(b)-b*fun(a))/(fun(b)-fun(a));
		i++;
		
		if(fabs(x-x1)<=aller)
		{
			break;
		}
  }
	if((x-x1)<=aller && (x-x1)>=-aller)
	{
		printf("\nthe final iteration is %f\n",x1);
	}
	return 0;
}
float fun(float z)
{
	int i;
	float temp=1;
	float e=2.718282;
	temp =((z*exp(z))-cos(z));
	return temp;
}
