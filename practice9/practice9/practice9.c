//#include<stdio.h>
//int main(void)
//{
	//const double K_PER_CM=2.54;//ÿӢ�ߵ�������
	//float f_height;
	//double c_height;
	//printf("������������:");
	//scanf("%f",&f_height);
	//c_height=(double)f_height*2.54;
	//printf("%ffoot is %fcm.\n",c_height,f_height);
	//getchar();
	//return 0;
//}
#include<stdio.h>
int main(void)
{
	const double K_PER_CM=2.54;//ÿӢ�ߵ�������
	float f_height;
	double c_height;
	printf("������������:");
	scanf("%f",&f_height);
	c_height=f_height*2.54;
	printf("%.2ffoot is %.2fcm.\n",c_height,f_height);
	getchar();
	getchar();
	return 0;
} 