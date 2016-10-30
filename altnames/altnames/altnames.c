#include<stdio.h>
int main(void)
{
	int  me16;
	me16=4593;
	printf("frist assume int16-t is short:");
	printf("me16=%hd\n",me16);
	printf("next,let's not make any assumeptions.\n");
		;
	printf("instead,use a \"macro\"from intypes.h:");
	printf("me16=%"prid16"\n",me16);
	return 0;



	 

}