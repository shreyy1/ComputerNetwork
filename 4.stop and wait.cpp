#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define RTT 2
#define TIMEOUT 1
#define TOT_frame 6
#define sleep
enum {no,yes} ack;
int main()
{
	int wait_time,i=1;
	ack=yes;
	for(;i<=TOT_frame;)
	{
		if(ack==yes && i!=1)
		{
			printf("\n sender:ack for frame %d received \n ",i-1);
		}
		printf("\n sender:frame %d sent,waiting for ack....\n",i);
		ack=no;
		wait_time=rand()%4+1;
		if(wait_time==TIMEOUT)
		{
			printf("sender: ack not received for frame %d TIMEOUT from .....\n",i);
			
		}
		else
		{
			sleep(RTT);
			printf("\n receiver : frame %d received ack sent \n ",i);
			printf("........");
			ack=yes;
			i++;
		}
		
	}
	getch();
	return 0;
}

