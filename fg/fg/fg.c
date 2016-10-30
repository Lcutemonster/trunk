#include<stdio.h>
int main(void)
{
	//int  num;
	int num = 0;//所有变量均需要初始化，任何时候变量值不要无意义
	//int sum=0;
	int sum = 0; //赋值等于左右加上空格
	//int status;
	int status = 0;
	printf("please enter an integer to be summed "
           "(q to quit): ");
	//status=scanf("%ld",&num);
	status = scanf("%ld", &num);//每个参数分割符号,左右加空格
	//while(status ==1)
	while(1 != status) //常量写左边 避免漏写成status = 1而无察觉 ，1 = status右值赋值会有编译错误提示
	{
		sum=sum+num;
		printf("please enter next integer (q to quit):");
		status=scanf("%ld",&num);
	}
	//建议阅读 c/c++高质量编程 一书
	printf("those  integers sum to %ld.\n",sum);
	return 0;
}