#include<stdio.h>
double power(int n,int p);
int main(void)
{
	double x,xpow;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     
	int exp;
	printf("enter a number and the integer power ");
	printf("to which\nthe number will be raiseed.enter q to quit\n");
	while(scanf("%d%d",&x,&exp)==2)
	{
		xpow=power(x,exp);
		printf("%.3g to the power %d is %.5g\n",x,exp,xpow);
		printf("enter next  pair of number or q to quit.\n ");
	}
	printf("hope you enjoyed the trip!\n");
	return 0;
}

double power(double n,int p)
{
    double pow;
	int i;
	for(i=0;i<p;i++)
		pow *=n;
	return pow;
}