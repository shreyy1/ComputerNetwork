
#include<stdio.h>
#include<conio.h>
#define DLE 16
#define STX 2
#define ETX 3
int main()
{   

	char ch;
	char array[100]={DLE,STX};
	int i=2,j;
	
	printf("entr the data stream(ctrl+B->STX,ctrl+C->ETX,ctrl+P->DLE):\n");
	while((ch=getch())!='\r')
	{
		if(ch==DLE)
		{
			array[i++]=DLE;
			printf("DLE");
			
		}
		else if(ch==STX)
		printf("STX");
		else if(ch==ETX)
		printf("ETX");
		else 
		printf("%c",ch);
		array[i++]=ch;
		
	}
	array[i++]=DLE;
	array[i++]=ETX;
	printf("\n the stuffed stream is \n");
	for (j=0;j<i;j++)
	{
		if(array[j]==DLE)
		printf("DLE");
		else if (array[j]==STX)
		printf("STX");
		else if (array[j]==ETX)
		printf("ETX");
		else
		printf("%c",array[j]);
   }
		printf("\n the destuffed data stream is :\n");
		for(j=2;j<i-2;j++)
		{
			if(array[j]==DLE)
			{
				printf("DLE");
				j++;
			}
			else if(array[j]==STX)
			printf("STX");
			else if(array[j]==ETX)
			printf("ETX");
			else                                                                                                                                                                  
			printf("%c",array[j]);
			
		}
		getch();
		
	}   

