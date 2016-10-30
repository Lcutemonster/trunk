#include<stdio.h>
void one_three();
void two();
int main()
{
	printf("starting now!\n");
	one_three();
	printf("done!");

	getchar();
	return 0;
}

void two()
{
	printf("two!\n");
}


void one_three(void)
{
	printf("one!\n");
	two();
	printf("three!\n");
}

