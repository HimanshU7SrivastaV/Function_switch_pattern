# include<stdio.h>
# include<conio.h>
void add(int a,int b)
{
	printf("Addition is %d",(a+b));
}
void subtract(int a, int b)
{
	printf("Subtract is %d",(a-b));
}
void multiply(int a, int b)
{
	printf("Multiply is %d",(a*b));
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
