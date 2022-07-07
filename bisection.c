#include<stdio.h>
#include<math.h>
float fun(float);
int main(void)
{
	int i=1;
	int itr,maxitr=20;
	float aller=0.0001,a,b,x,x1;
	printf("Enter intervals where root lies");
	scanf("%f%f",&a,&b);
	printf("sno\ta\t\tb\t\tx\n");
	for(itr=0;itr<maxitr;itr++)
	{
		printf("%d\t%f\t%f\t%f\n",i,a,b,(a+b)/2);
		x=(a+b)/2;
		if((fun(x)*fun(a))<0)
		{
			b=x;
		}
		else
		{
			a=x;
		}
		x1=(a+b)/2;
		i++;
	  if((x-x1)<=aller && (x-x1)>=-aller)
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
	return (z*sin(z)-1);
}
