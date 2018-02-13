#include<stdio.h>
#include<conio.h>
int check(int n)
{
	int i,c=0;
	for(i=2;i<=n;i++)
	{
		if(n%i==0)
        c++;
	}
	if(c==1)
	printf("prime number");
	else
	printf("not prime number");
}
int main()
{
	int n; 
	printf("enter the value of n:\t");
	scanf("%d",&n);
	check(n);
	getch();
	return(0);
}
