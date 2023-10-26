#include<conio.h>
#include<stdio.h>
int main()
{
	int w,i,f,frame[50];
	printf("enter the window size");
	scanf("%d",&w);
	printf("\n Enter the number of frames to transmit");
	scanf("%d",&f);
	printf("\nEnter the %dframes",f);
	for (i=1;i<=f;i++)
	scanf("%d",&frame[i]);
	printf("\nwith the sliding window protocol the frame will be sent in the following manner (assuming no coruption of frames)\n)");
	printf("\n Ater sending %d frames at each sender,wait for acknowledgement sent by there reciver\n\n",w);
	for(i=1;i<=f;i++)
	{
		if(i%w==0)
		{
			printf("%d\n",frame[i]);
			printf("Acknowledgement of above sent is  received by sender\n\n");
			
		}
		else
		printf("%d\t",frame[i]);
		
	}
	if(f%w!=0)
	printf("\n acknowledgment of aove frames sent by sender\n\n");1``
	getch();
return 0;
	
}
