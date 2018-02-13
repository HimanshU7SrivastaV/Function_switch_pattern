#include<stdio.h>
#include<conio.h>
int check(int n)
{
	if(n%2==0)
	printf("even number");
	else
	printf("odd number");
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
