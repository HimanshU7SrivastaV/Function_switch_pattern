#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int i,j,k,n,t;
	//int *p,*q;
	
	printf("enter the value of n:\t");
	scanf("%d",&n);
//	p=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		for(j=0;j<2*i+1;j++)
		{
			printf("x");
		}
		printf("\n");
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<=n;j++)
		{
			printf("x");
		}
		printf("\n");
	}
//	q=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			printf(" ");
		}
		printf("x");
		printf("\n");
	}
	//t=strcat(p,q);
//	printf("%d",t);
	getch();
	return(0);
}
