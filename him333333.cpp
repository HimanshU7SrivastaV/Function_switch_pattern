#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,j;
	printf("enter the value of n to print a pattern:\t");
	scanf("%d",&n);
	for(j=1;j<5;j++)
	{
		printf("#");
	}
	printf("\n");
	for(i=2;i<=n;i++)
	{
		if(i%4!=0)
		{
			for(j=1;j<5;j++)
			{
				printf(" ");
			}
			printf("#");
			printf("\n");
	    }
		else
		    for(j=1;j<5;j++)
	        {
	        	printf("#");
        	}
		printf("\n");
	}
	getch();
	return(0);
}
