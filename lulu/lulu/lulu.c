#include<stdio.h>
int main(void)
{
	char ch='C';
	int i;
	float f1;
	f1=i=ch='C';
	printf("ch=%c i=%d f1=%2.2f\n",ch,i,f1);
	ch=ch+1;
	i=f1+2*ch;
	f1=2.0*ch+i;
	printf("ch=%c i=%d f1=%2.2f\n",ch,i,f1);
	ch=45454664313.00;
	printf("now ch=%c\n",ch);
	return 0;


}