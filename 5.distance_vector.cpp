
#include<stdio.h>//DISTANCE VECTOR
struct code
{
	unsigned dist[100];
	unsigned from[100];	
}rt[50];

int main()
{
	int castmat[100][100];
	int nodes, i,j,k,count=0;
	printf("\n-------------------------------\n");
	printf("\n enter the number of nodes:");
	scanf("%d",&nodes);
	printf("\n--------------------------------\n");
	printf("\n enter the cast matrix:\n");
	for(i=0;i<nodes;i++)
	{
		for(j=0;j<nodes;j++)
		{
			scanf("%d",&castmat[i][j]);
			castmat[i][i]=0;
			rt[i].dist[j]=castmat[i][j];
			rt[i].from[j]=j;
		}
	}
	for(i=0;i<nodes;i++)
	{
		for(j=0;j<nodes;j++)
		{
			printf("%d\t",castmat[i][j]);
		}
		printf("\n");
	}                                         

	do
	{
		count = 0;
		for(i=0;i<nodes;i++)
		for(j=0;j<nodes;j++)
		for(k=0;k<nodes;k++)
		if(rt[i].dist[j]>castmat[i][k]+rt[k].dist[j])
		{
			rt[i].dist[j] = rt[i].dist[k]+rt[k].dist[j];
			rt[i].from[j]=k;
			count++;
		}
	}
	while(count!=0);
	for(i=0;i<nodes;i++)
	{
		printf("\n\n for routers %d \n",i+1);
		for(j=0;j<nodes;j++)
		{
			printf("\t\n nodes %d via %d distance %d",j+1,rt[i].from[j]+1,rt[i].dist[j]);
		}
	}
	printf("\n\n");
	return 0;
}

