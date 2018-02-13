# include<stdio.h>
# include<conio.h>
void add(int x,int y)
{
	printf("Addition is %d",(x+y));
}
void subtract(int x, int y)
{
	printf("Subtract is %d",(x-y));
}
void multiply(int x, int y)
{
	printf("Multiply is %d",(x*y));
}
int main()
{
	int a,b,ch;
	printf("Enter Two Values");
	scanf("%d%d",&a,&b);
	printf("Enter The Choice");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: add(a,b);
		break;
		case 2: subtract(a,b);
		break;
		case 3: multiply(a,b);
		break;
		default: printf("Wrong Choice");
		}
		getch();
	}
