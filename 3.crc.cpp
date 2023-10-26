#include<stdio.h>
#include<string.h>
#define N strlen(g)
char t[128],cs[128],g[]="11011";
int  a,e,c;

void xor1()
{
	for(c=1;c<N;c++)
	    cs[c]=((cs[c]== g[c]) ? '0' :'1');

}

void crc()
{ 
    for(e=0;e<N;e++)
	     cs[e]=t[e];
	do
	{
		if(cs[0]=='1')
		    xor1();
		for(c=0;c<N-1;c++)
		{
			    cs[c]=cs[c+1];
				
		}
		
		cs[c]=t[e++];
		
	}
	while(e<=a+N-1);
}
 
int  main()
{
	printf("\n Enter the message");
	scanf("%s",t);
	printf("\n Generator polynomial is : %s",g);
	a=strlen(t);
	for(e=a;e<a+N-1;e++)
	    t[e]='0';
	printf("\n Modified t[u] is :%s",t);
	crc();
	printf("\n Checksum is : %s",cs);
	for(e=a;e<a+N-1;e++)
		t[e]=cs[e-a];
	printf("\n final codeword is: %s",t);
	printf("\n test error detection 0(yes) 1(no)?: ");
	scanf("%d",&e);
	if(e==0)
{
	printf("\n Enter the position where the error is to be inserted : ");
	scanf("%d",&e);
	e=e-1;
	t[e]=(t[e]=='0')?'1':'0';
	printf("\n Errorneous data :%s",t);
	
}
crc();
for(e=0;(e<N-1)&&(cs[e]!='1');e++);
if(e<N-1==1)
   printf("Error detected \n");
else
   printf("No error detected \n");
}
