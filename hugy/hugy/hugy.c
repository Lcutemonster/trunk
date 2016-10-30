#include<stdio.h>
#define SIZE 10
#define PAR 72
int main(void)
{
	int index,score[SIZE];
	float average;
	int sum=0;
	printf("enter %d goldf scores:\n",SIZE);
	for(index=0;index<SIZE;index++)
	    scanf("%d",score[index]);
	printf("the scores read in are as follows:\n");
	for(index=0;index<SIZE;index++)
		scanf("%5d",score[index]);
	printf("\n");
	for(index=0;index<SIZE;index++)
		sum+=score[index];
	average=(float)sum/10;
	printf("sum of score=%d and average=%.2f.\n",sum,average);
	printf("handicap is %.2f",average-PAR);
	return 0;

	

}



