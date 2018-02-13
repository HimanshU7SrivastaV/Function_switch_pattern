#include<stdio.h>
#include<conio.h>
void fab(int n)
{
	int a=0,b=1,c,i;
	if(n==1)
	printf("%d",a);
	if(n==2)
	printf("%d%d",a,b);
	if(n>2)
	{
		printf("%d%d",a,b);
		for(i=0;i<n-2;i++)
		{
			c=a+b;
			a=b;
			b=c;
			printf("%d%d",a,b);
		}
	}
}
int main()
{
	int n;
	printf("enter the number for fab:\t");                      \\not get correct result
	scanf("%d",&n);
	fab(n);
	getch();
	return(0);
}
