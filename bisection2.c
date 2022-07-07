#include<stdio.h>
#include<math.h>
float fun(float,int,int,int,int);
int main(void)
{
	int p,q,r,s;
	float aller=0.000001,a,b,x,x1;
	printf("Eqn is ax^3+bx^2+cx+d=0\n");
	printf("\nEnter coeffiecients : ");
	scanf("%d%d%d%d",&p,&q,&r,&s);
	int w;
	for(w=0;w<100;w++)
	{
		if((fun(w,p,q,r,s)*fun(w+1,p,q,r,s))<=0)
		{
			a=w;
			b=w+1;
			break;
		}
	}
	int i=1;
	int itr,maxitr=20;
	
	printf("sno\ta\t\tb\t\tx\n");
	for(itr=0;itr<maxitr;itr++)
	{
		printf("%d\t%f\t%f\t%f\n",i,a,b,(a+b)/2);
		x=(a+b)/2;
		if((fun(x,p,q,r,s)*fun(a,p,q,r,s))<0)
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
float fun(float z,int p,int q,int r,int s)
{
	return ((p*z*z*z)+(q*z*z)+(r*z)+s);
}
