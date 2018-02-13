#include<stdio.h>                   \\problem after return i & j
#include<conio.h>

	 int check1(int n)
{
	int i;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		printf("factor is:\t%d\n",i);
	}
       		return(i);
}
int check2(int m)
{
	int j;
	for(j=1;j<=m;j++)
	{
		if(m%j==0)
		printf("factor is:\t%d\n",j);
	}
	return(j);
}

int main()
{
	int n,m,i,j;
	printf("enter the value of n & m:\t");
	scanf("%d%d",&n,&m);
	check1(n);
	check2(m);
	if (n==m)
	printf("%d",n);
	getch();
	return(0);

}
