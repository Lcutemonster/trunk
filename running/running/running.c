#include<stdio.h>
const int S_PER_M=60;//每分钟的秒数
const int S_PER_H=3600;//每小时的秒数
const double M_PER_K=0.62137;//每公里的秒数
int main(void)
{
	double distk,distm;//分别以公里和英里计算泡过的距离
	double rate;//以英里/小时为单位的平均数
	int min,sec;//跑步用时分钟数和秒数
	int time;//用秒表示跑步时间
	double mtime;//跑完一英里所用时间数，以秒计
	int mmin,msec;//跑完一英里所用的时间，用分钟和秒计
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
