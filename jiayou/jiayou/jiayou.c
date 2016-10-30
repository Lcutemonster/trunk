#include<stdio.h>
 
int main(void)
{
	const int MIN_PER_HOUR=60;
	int minutes,hours,left;
	printf("Convert minutes to hours an minutes!\n");
	printf("enter the number of minutes (<=0 to quit):\n");
	scanf("%d",&minutes);
	while(minutes>0)
	{
		hours=minutes/MIN_PER_HOUR;
		left=minutes%MIN_PER_HOUR;
		printf("%d minutes is %d hours,%d minutes.\n ",minutes,hours,left);
		printf("please enter next value(<=0 to quit):\n");
		scanf("%d",&minutes);
	}
	printf("DONE!\n");
	return 0;		
}