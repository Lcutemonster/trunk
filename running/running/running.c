#include<stdio.h>
const int S_PER_M=60;//ÿ���ӵ�����
const int S_PER_H=3600;//ÿСʱ������
const double M_PER_K=0.62137;//ÿ���������
int main(void)
{
	double distk,distm;//�ֱ��Թ����Ӣ������ݹ��ľ���
	double rate;//��Ӣ��/СʱΪ��λ��ƽ����
	int min,sec;//�ܲ���ʱ������������
	int time;//�����ʾ�ܲ�ʱ��
	double mtime;//����һӢ������ʱ�����������
	int mmin,msec;//����һӢ�����õ�ʱ�䣬�÷��Ӻ����
	printf("this program converts your time for a metric race\n");
	printf("to a time for running a mile and to your average\n");
	printf("speed in miles per hour.\n");
	printf("please enter,in kilometers,the distance run.\n");
	scanf("%lf",&distk);
	printf("next enter the time in minutes and seconds.\n");
	printf("Begin by enter the minutes .\n");
	scanf("%d",&min);
	printf("Now enter the seconds.\n");
	scanf("%d",&sec);
	time=S_PER_M*min+sec;
	distm=M_PER_K*distk;
	rate=distm/time*S_PER_H;
	mtime=(double)time/distm;
	mmin=(int)mtime/S_PER_M;
	msec=(int)mtime%S_PER_M;
	printf("you ran %1.2f km(%1.2f miles) in %d min ,%d seec.\n",distk,distm,min,sec);
	printf("%d sec.\n your average speed was %1.2f mph.\n",msec,rate);
	return 0;
}
