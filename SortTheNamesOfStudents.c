#include<stdio.h>
#include<string.h>
int main()
{
	char names[5][10],temp[10];
	int i,n,j;
	printf("\nEnter The Number Of Students : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter The Name Of Student %d",i+1);
		gets(names[i]);		
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
	{
		if(strcmp(names[j],names[j+1])>0)
		{
			strcpy(temp,names[j]);
			strcpy(names[j],names[j+1]);
			strcpy(names[j+1],temp);
		}
	}
	}
	printf("\nThe Names Of The Students In Alphabetical Order Are : ");
	for(i=0;i<n;i++)
	puts(names[i]);
	return 0;
}
