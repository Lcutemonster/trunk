#include<stdio.h>
#define YEAR 365
int main(void)
{
	int D_age;//用天表示年龄
	int age;
	int n;
	printf("enter your D_age(q to quit):");
	n=scanf("%d",&age);
	while(n==1)
	{
		D_age=age*YEAR;
	    printf("%d age to D_age is %d.\n ",age,D_age);
		printf("please enter  next age(q to quit)：");
	    n=scanf("%d",&age);
	}
	return 0;
}