# include <stdio.h>
# include<conio.h>
void pattrn1()
{ int i,j;
for(i=5;i>=1;i--)
{
for(j=1;j<=i;j++)
printf("%d",j);
printf("\n");
}}
void pattrn2()
{ int i,j;
for(i=5;i>=1;i--)
{
for(j=1;j<=i;j++)
printf("%d",i);
printf("\n");
}
}
int main()
{
	int ch;
	printf("Enter The Choice\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: pattrn1();
		break;
		case 2: pattrn2();
		break;
		default:printf("wrong choice");
}
	getch();
}
