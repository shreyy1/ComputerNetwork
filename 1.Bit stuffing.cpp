#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
	char str1[50]={"111111111"},str2[50];
	char  input[40];
	int a,i=8,j,counter=0,k;
	printf("enter the data:");
	scanf("%s",input);
	for(a=0;a<strlen(input); a++)
	{
		if(input[a]=='1')
		counter++;
		else
		counter=0;
		str1[i++]=input[a];
		if(counter==5){
			str1[i++]='0';
			counter=0;
			
		}
	
	}
	strcat(str1,"01111110");
	printf("bit stuffed data");
	for(j=0;j<i+8;j++){
		printf("%c",str1[j]);
	}
	counter=0;
	for(j=8,k=0;j<i+8;j++){
		if(str1[j]=='1')
		counter++;
		else
		counter=0;
		str2[k++]=str1[j];
		if (counter==6)
		break;
		else if((counter==5)&&str1[j+1]=='0')
		{
			j++;
			counter=0;
		}
		
	}
	printf("\n\nBit de-stuffed data:");
	for(j=0;j<k-strlen("01111110")+1;j++)
	printf("%c",str2[j]);
	return 0;
	
	}
	



