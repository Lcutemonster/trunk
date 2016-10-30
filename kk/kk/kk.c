#include <stdio.h>
#include<limits.h>
#include<float.h>
int main()
{
	printf("Somme number limits for this system;\n");
	printf("biggest int£º%d\n",INT_MAX);
    printf("Smallest unsigned long:%LLd\n",LLONG_MIN);
	printf("One byte=%d bit on this system.\n",CHAR_BIT);
	printf("Lagerest double:%e\n",DBL_MAX);
	printf("Smallest normal float:%e\n",FLT_MIN);
	printf("float precision= %d digits\n",FLT_DIG);
	printf("float epsilon=%e\n",FLT_EPSILON);
	return 0;






}